#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include "comp.h"

#include "runtime.h"
#include "xmem.h"
#include "profile.h"
#include "newmacros.h"

FILE *proFILE;
double profileInterval;
int useUnique;
int countAp;

#define MAX_FILE_NAME 80
char filename[MAX_FILE_NAME];
char inputname[MAX_FILE_NAME];
char lastname[MAX_FILE_NAME];


SInfo dummyProfInfo = { "Runtime","Runtime","Runtime"};

FILE *inputFILE;
FILE *lastFILE;
pm_data *lastAREA;
int   lastSIZE;
int   unique;

int oldVapSize;

volatile NodePtr profileHpLimit;
volatile int timeSample;
int record;
int replay;
int post_mortem;
int second_run;
int profile;
int profile_old;
int filter;
int pactive;
int year;

#if 0	/*PH: Now in timer.c */

#if !defined(__arm)
static int milliseconds = 0;
static int nextsampletime = 0;

/*
 * Called every RATE us...
 */

void timertick(int i)
{

  int sampleflag;

  if (timeSample == ACTIVE_TIME) { /* clock is frozen during sampling */
    WHEN_SCC(sccptr->time ++;)
    milliseconds += RATE/1000;          /* another tick (ms) */
    sampleflag = (milliseconds >= nextsampletime);
    if (sampleflag) {
/*    fprintf(stderr,"timertick %6d %6d\n",milliseconds,nextsampletime); */
      profileHpLimit = 0;
      nextsampletime += 1000*profileInterval;
    }
  }
#if defined(__CYGWIN32__) || defined(__MINGW32__)
  /* Cannot use virtual timers on win32, have to use real */
  signal(SIGALRM, timertick);
#else
  signal(SIGVTALRM, timertick);
#endif
  return;
}

void setuptimer(void)
{
    struct itimerval inttimer;

    inttimer.it_value.tv_sec = 0;
    inttimer.it_value.tv_usec = RATE;
    inttimer.it_interval = inttimer.it_value;
#if defined(__CYGWIN32__) || defined(__MINGW32__)
    /* Cannot use virtual timers on win32, have to use real */
    signal(SIGALRM, timertick);
    setitimer(ITIMER_REAL, &inttimer, (struct itimerval *)0);
#else
    signal(SIGVTALRM, timertick);
    setitimer(ITIMER_VIRTUAL, &inttimer, (struct itimerval *)0);
#endif
    milliseconds = 0;
    nextsampletime = 1000*profileInterval;
}
#endif



#ifdef __arm
char *strdup(char *str)
{
  char *strc;
  int i = strlen(str)+1;
  if(0==(strc = (char *)malloc(i))) {
    fprintf(stderr,"No space to duplicate \"%s\"\n",str);
    exit(-1);
  }
  strcpy(strc,str);
  return strc;
}
#endif
#endif

Element     *ElementTable[TABLESIZE];
int          TotalSize;


/****************************************************/

Restriction *restriction[9]; /* Only 1 2 4 and 8 is used */
int    RestrictionKind;
int    PrintUse = 0;
int    TotalUse = 0;
int    TotalLive = 0;

int RestrictionBiography;
Retainer     *RetainerTable[TABLESIZE];
int    lifetimeLow = -1;
int    lifetimeHigh = -1;


char *number(char *s,int *i)
{
  int n = 0;
  while(isdigit(*s))
    n = n*10 + *s++ - '0';
  *i = n;
  return s;
}

void addRestrictions(char *restrictions,int kind)
{
  char *end;
  Restriction *f;
  filter |= kind;


  if(kind == PROFILE_KIND) {
    if(!strcmp(restrictions,"Stack"))
      RestrictionKind = WHO_STACK;
    else if(!strcmp(restrictions,"Code"))
      RestrictionKind = WHO_CODE;
    else {
      fprintf(stderr,"-kStack or -kCode is the only allowed -k restrictions!\n");
      exit(-1);
    }
    return;
  }
  if(kind == PROFILE_BIOGRAPHY) {
    if(!strcmp(restrictions,"drag"))
      RestrictionBiography |= BIO_DRAG;
    else if(!strcmp(restrictions,"lag"))
      RestrictionBiography |= BIO_LAG;
    else if(!strcmp(restrictions,"use"))
      RestrictionBiography |= BIO_USE;
    else if(!strcmp(restrictions,"void"))
      RestrictionBiography |= BIO_VOID;
    else {
      fprintf(stderr,"-bdrag, -blag, -buse or -bvoid are the only allowed -b restrictions!\n");
      exit(-1);
    }
    return;
  }
  if(kind == PROFILE_LIFETIME) {
    if(isdigit(*restrictions))
      restrictions = number(restrictions,&lifetimeLow);
    if(*restrictions == '-') {
      restrictions ++;
      if(isdigit(*restrictions)) {
	restrictions = number(restrictions,&lifetimeLow);
	if(!*restrictions)
	  return;
      } else
	return;
    }
    fprintf(stderr,"-lmin- -l-max or -lmin-max are the only allowed -l restrictions!\n");
    exit(-1);

  }



  restrictions = (char *)strdup(restrictions); /* Do not destroy the flags ! */
  while(restrictions&&*restrictions) {
    if(0 != (end = strchr(restrictions,',')))
      *end = 0;
    if(0 == (f = malloc(sizeof(Restriction)))) {
      fprintf(stderr,"Out of memory when adding restriction.\n");
      exit(-1);
    }
    f->next = restriction[kind];
    f->address = 0;
    f->str = restrictions;
    restriction[kind] = f;
    restrictions = end?end+1:end;
  }
}

static int helpRestriction(Restriction *f,char *str)
{
  if(f) {
    while(f) {
      if(f->address) {
        if(f->str==str) return 1;
      } else {
        if(!strcmp(str,f->str)) {
          f->address = 1;
          f->str = str;
          return 1;
	}
      }
      f = f->next;
    }
  } else
    return 1;
  return 0;
}

int staticRestrictions(SInfo *sinfo)
{
  return helpRestriction(restriction[PROFILE_MODULE],sinfo->module)
    &&  helpRestriction(restriction[PROFILE_PRODUCER],sinfo->producer)
      &&  helpRestriction(restriction[PROFILE_CONSTRUCTOR],sinfo->constructor);
}

/**********************************************************/

void emptyTables(void)
{
  int i;

  for(i = 0; i<TABLESIZE; i++) {
    ElementTable[i] = 0;
    WHEN_DYNAMIC(RetainerTable[i] = 0;)
  }
  xfree();
  TotalSize = 0;
}


Element *newElement(Key key, Element *next)
{
  Element *ep = xmalloc(sizeof(Element));

  ep->next = next;
  ep->key = key;
  ep->count = 0;
  return ep;
}

Count *newCount(int key_i, int size, Count *next)
{
  Count *ap = xmalloc(sizeof(Count));

  ap->next = next;
  ap->key_i = key_i;
  ap->size = size;
  return ap;
}


void addSize(Count **count,int key_i,int size)
{
  while(*count) {
    if((*count)->key_i == key_i) {
      (*count)->size += size;
      return;
    }
    count = &(*count)->next;
  }
  *count = newCount(key_i,size,0);
}

/*******************************************/

int hashInt(Int i)
{
  return (int)((i ^ (i>>TABLELOG))&(TABLESIZE-1));
}

int hashStr(char *str)
{
  Int i=0;
  while(*str) {
    i = ((i<<2) ^ *str++)^(i>>30);
  }
  return (int)((i ^ (i>>TABLELOG))&(TABLESIZE-1));
}

void addElement(Info *info,int size)
{
  int i;
  Element *es;
  Key key;
  int key2 = 0;

  key2 = RestrictionBiography?info->binfo.all:0;
  
  if(profile==PROFILE_FIRST) {
    saveLastUse(info);
    return;
  }


  if(!staticRestrictions(info->sinfo))
    return;


  if(!dynamicRestrictions(info))
    return;


  TotalSize += size;

  switch(profile) {

  case PROFILE_RETAINER: /* Count in retainer set, don't use element table */
    info->rinfo->size += size; /* Ignore updates */
    return;
  case PROFILE_LIFETIME:
  case PROFILE_BIOGRAPHY:
    { BInfo binfo;
      binfo.all = info->binfo.all;
    
      if(useUnique && lastAREA) {                   /* Need to store with correct last usage */
	long offset = info->unique;                 /* Need to look into the future */
	pm_data pm = lastAREA[offset];                /* must work, we did it in dynamicRestrictions! */
	binfo.parts.last = pm.lastused;         /* .. so update last and use */
	binfo.parts.used = pm.used;             /* (at least one future use) */
      }
      i = hashInt(key.i = binfo.all);
    } break;
  case PROFILE_MODULE:      i = hashStr(key.s = info->sinfo->module); break;
  case PROFILE_PRODUCER:    i = hashStr(key.s = info->sinfo->producer); break;
  case PROFILE_CONSTRUCTOR: i = hashStr(key.s = info->sinfo->constructor); break;
  default:
    fprintf(stderr,"Profile kind %d not implemented yet!\n",profile);
    break;
  }

  es = ElementTable[i];

  switch(profile) {

  case PROFILE_LIFETIME:
  case PROFILE_BIOGRAPHY:
    while(es) {
      if(es->key.i == key.i) {
	addSize(&es->count,key2,size);
        return;
      }
      es = es->next;
    } break;

  case PROFILE_MODULE:
  case PROFILE_PRODUCER:
  case PROFILE_CONSTRUCTOR:
    while(es) {
      if(!strcmp(es->key.s,key.s)) {
	addSize(&es->count,key2,size);
        return;
      }
      es = es->next;
    } break;
  }

  ElementTable[i] = es = newElement(key,ElementTable[i]);
  addSize(&es->count,key2,size);
}

/**************************************/


void printTableStatic(FILE *fp)
{
  int i;
  for(i = 0; i<TABLESIZE; i++) {
    Element *es;
    for(es = ElementTable[i]; es; es = es->next) {
      Count *ap = es->count;
      fprintf(fp,"  %s\t",es->key.s);
      if((filter&(PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) && !useUnique) {
	while(ap) {
	  fprintf(fp,"%d %d ",ap->key_i,ap->size);
	  ap = ap->next;
	}
	fprintf(fp,";\n");
      } else {
	fprintf(fp,"%d\n",ap->size);
      }
    }
  }
}



void printTableKind(FILE *fp)
{
  int i;
  for(i = 0; i<TABLESIZE; i++) {
    Element *es;
    for(es = ElementTable[i]; es; es = es->next) {
      Count *ap = es->count;
      switch(es->key.i) {
      case WHO_CODE:  fprintf(fp,"  Code"); break;
      case WHO_STACK:   fprintf(fp,"  Stack"); break;
      default:
        fprintf(stderr,"Ignoring type in printTableKind %ld\n",es->key.i);
        fprintf(fp,"  Unknown %ld",es->key.i);
      }
      while(ap) {
	fprintf(fp,"\t%d %d",ap->key_i,ap->size);
	ap = ap->next;
      }
      putc('\n',fp);
    }
  }
}


void printTableBio(FILE *fp)
{
  int i;
  for(i = 0; i<TABLESIZE; i++) {
    Element *es;
    for(es = ElementTable[i]; es; es = es->next) {
      BInfo d;
      Count *ap = es->count;
      d.all = es->key.i;
      if(useUnique || d.parts.created<year) { /* if useUnique then filtering is done in addElement */
	fprintf(fp,"  %ld\t",d.all);
	fprintf(fp,"%d\n",ap->size);
      }
    }
  }
}


void printTable(FILE *fp)
{

  switch(profile) {
  case PROFILE_MODULE:
  case PROFILE_PRODUCER:
  case PROFILE_CONSTRUCTOR:
    printTableStatic(fp);
    break;

  case PROFILE_RETAINER:
    printTableRetainer(fp);
    break;
  case PROFILE_BIOGRAPHY:
  case PROFILE_LIFETIME:
    printTableBio(fp);
    break;
  case PROFILE_KIND:
    printTableKind(fp);
    break;

  default:
    fprintf(stderr,"printTable don't know about %d\n",profile);
    exit(-1);
  }
  fflush(fp);
}

void profile_start(int argc,char **argv)
{
  int i;
#ifdef __arm
  strcpy(filename,argv[0]);
  strcat(filename,"_hp");
  strcpy(lastname,argv[0]);
  strcat(lastname,"_last");
  strcpy(inputname,argv[0]);
  strcat(inputname,"_in");
#else
  char *str;
  emptyTables();
  if(0 == (str = strrchr(argv[0],DIR_DEL))) {
    strcpy(filename,argv[0]);
    strcpy(inputname,argv[0]);
    strcpy(lastname,argv[0]);
  } else {
    strcpy(filename,str+1);
    strcpy(inputname,str+1);
    strcpy(lastname,str+1);
  }
  strcat(filename,".hp");
  strcat(inputname,".in");
  strcat(lastname,".last");
#endif

  profile_old = 0;
  if(  ( (profile & (PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) && (filter & PROFILE_RETAINER) )
     ||( (profile & PROFILE_RETAINER)                     && (filter & (PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) )
     ||( (filter & PROFILE_RETAINER)                      && (filter & (PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) ) ) {
    useUnique = 1;
    if(profile != PROFILE_FIRST && !second_run) {
      profile_old = profile;
      profile = PROFILE_FIRST;
    } else
      replay = 1;
  }
  
  if(timeSample && useUnique) {
    fprintf(stderr,"Sorry, not possible to use timed censuses and two-pass profiling.");
    fprintf(stderr,"(And two-pass profiling is needed in this case.)");
    exit(-1);
  }
  
  if(profile & PROFILE_FIRST) {
    record = 1;      /* record everything */
    useUnique = 1;   /* enumerate cells */
    proFILE = 0;     /* Don't create logfile */
  } else {
    if(0 == (proFILE = fopen(filename,"w"))) {
      fprintf(stderr,"%s can't open \"%s\" for profile data.\n",argv[0],filename);
      exit(-1);
    }
    fprintf(proFILE,"JOB ");
    for(i=0; i<argc; ) {
      fputs(argv[i],proFILE);
      i++;
      fputc(' ',proFILE);
    }
    fprintf(proFILE,";\n");
    { time_t t;
      time(&t);
      fprintf(proFILE,"DATE \"%s\"\n",asctime(localtime(&t)));
    }
    
    switch(profile) {
    case PROFILE_MODULE:      
      fprintf(proFILE,"PROFILE_MODULE\n");
      if((filter & (PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) && ! useUnique)
	fprintf(proFILE,"RESTRICTION_BIOGRAPHY\n");
      break;
    case PROFILE_PRODUCER:
      fprintf(proFILE,"PROFILE_PRODUCER\n");
      if((filter & (PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) && ! useUnique)
	fprintf(proFILE,"RESTRICTION_BIOGRAPHY\n");
      break;
    case PROFILE_CONSTRUCTOR:
      fprintf(proFILE,"PROFILE_CONSTRUCTOR\n");
      if((filter & (PROFILE_BIOGRAPHY|PROFILE_LIFETIME)) && ! useUnique)
	fprintf(proFILE,"RESTRICTION_BIOGRAPHY\n");
      break;
    case PROFILE_RETAINER:
      fprintf(proFILE,"PROFILE_RETAINER\n");
      break;
    case PROFILE_BIOGRAPHY:
      fprintf(proFILE,"PROFILE_BIOGRAPHY\n");
      if(filter & PROFILE_RETAINER) 
	fprintf(proFILE,"RESTRICTION_RETAINER\n");
      break;
    case PROFILE_LIFETIME:
      fprintf(proFILE,"PROFILE_LIFETIME\n");
      if(filter & PROFILE_RETAINER) 
	fprintf(proFILE,"RESTRICTION_RETAINER\n");
	break;
    }
  }
  
  if(PrintUse) fprintf(proFILE,"USE_INFO\n");
  
  lastAREA = 0;

  if(useUnique) {
    if(record)
      if(0 == (lastFILE = fopen(lastname,"w"))) {
	fprintf(stderr,"%s can't open \"%s\" to save post-mortem data.\n",argv[0],lastname);
	exit(-1);
      }
    if(replay) {
      struct stat buf;
      if(stat(lastname,&buf)) {
	perror("Second run but stat on post-mortem data failed.");
	exit(-1);
      }
      lastSIZE = buf.st_size;
      fprintf(stderr,"Second run allocating %d bytes for last\n",lastSIZE);
      if(0==(lastAREA = (pm_data *)malloc(lastSIZE))) {
	fprintf(stderr,"Not enough memory for last.");
	exit(-1);
      }
      if(0 == (lastFILE = fopen(lastname,"r"))) {
	fprintf(stderr,"%s can't open \"%s\" to read post-mortem data.\n",argv[0],lastname);
	exit(-1);
      }
      if(lastSIZE != fread(lastAREA,1,lastSIZE,lastFILE)) {
	perror("Failed when trying to read post-mortem data");
	exit(-1);
      }
      fclose(lastFILE);
      lastSIZE /= sizeof(pm_data);
    } 
  }

  if(record)
    if(0 == (inputFILE = fopen(inputname,"w"))) {
      fprintf(stderr,"%s can't open \"%s\" to store input.\n",argv[0],inputname);
      exit(-1);
    }
  if(replay)
    if(0 == (inputFILE = fopen(inputname,"r"))) {
      fprintf(stderr,"%s can't open \"%s\" to read input.\n",argv[0],inputname);
      exit(-1);
    }
  
  if(timeSample) {
#if defined(__arm)
    fprintf(stderr,"No timed profiling availible on this machine.\n");
    exit(-1);
#else
    setuptimer();
#endif
  } else
    if(!profileInterval)
      profileInterval = (double)hpSize;


  post_mortem = (profile&PROFILE_FIRST)
                 || ( ((profile|filter)&(PROFILE_LIFETIME|PROFILE_BIOGRAPHY)) && !useUnique);
}



void profile_stop(NodePtr hp)
{
  timeSample++; /* No more timer exceptions */
  callGc(0, hp , spStart, spStart);

  if(profile == PROFILE_FIRST)
    fclose(lastFILE);
  else 
    fclose(proFILE);

  if(record || replay)
    fclose(inputFILE);
}


void profile_again(int argc,char **argv)
{
  if(profile_old) {  /* run a second time */
    char **newargv = malloc((argc+3)*sizeof(char *));
    int i;
    if(!newargv) {
      fprintf(stderr,"Not enough memory to set-up argument for second run\n");
      exit(-1);
    }
    newargv[0] = argv[0];
    newargv[1] = "+RTS";
    newargv[2] = "-22";
    newargv[3] = "-RTS";
    for(i=1; i<=argc; i++)
      newargv[i+3] = argv[i];
    
    execvp(newargv[0],newargv);
    perror("Couldn't re-run program");
    exit(-1);
  }
}



