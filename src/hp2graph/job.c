#include "hp2graph.h"

int timebyallocation = 0;	/* is x-axis marked in allocs (no=seconds) */

Date datedata;
char *jobstring;

int argvsize = 0;
Argv *argvdata = 0;

static int argvmax = 32;

char *argv2str(void)
{
  int i,len=1;
  char *cmdline;
  for(i=0; i<argvsize; i++)
    len += strlen(argvdata[i])+1; /* space between argvs */
  cmdline = (char *)xmalloc(len); /* use last space as 0 */
  cmdline[0] = 0;
  for(i=0; i<argvsize; i++) {
    strcat(cmdline,argvdata[i]);
    strcat(cmdline," ");
  }
  return cmdline;
}
  
void addArgv(Argv s)
{
  if(!argvdata || argvsize == argvmax) {
    argvmax *= 2;
    if(!(argvdata = (Argv *)extend(argvdata, argvmax*sizeof(Argv)))) {
      fprintf(stderr,"Out of memory when allocating memory for argument %d at %d\n",argvsize,lexline);
      abort();
    }
  }
  argvdata[argvsize++]=s;
}

static int isProfile(char *s)
{
  if(*s++ == '-') {
    switch(*s) {
    case 'm': return 1;
    case 'p': return 1; 
    case 'c': return 1; 
    case 'r': return 1; 
    case 'b': return 1; 
    case 'l': return 1;  
    }
  }
  return 0;
}

void checkForMinusI(char *s)
{
  while (s) {
    if(*s++ == '-') {
      if(s && (*s++ == 'i')) {
        timebyallocation=atoi(s);
        return;
      }
    }
  }
}

int str2bio(char *s)
{
  int restriction=0;
  
  while(s && *s) {
    char *end;
    int len;
    if(0 != (end = strchr(s,',')))
      len = end-s;
    else
      len = strlen(s);
    
    if(len == 4) {
      if(!strncmp(s,"drag",4))
	restriction |= BIO_DRAG;
      else if(!strncmp(s,"void",4))
	restriction |= BIO_VOID;
    } else if(len==3) {
      if(!strncmp(s,"lag",3))
	restriction |= BIO_LAG;
      else if(!strncmp(s,"use",3))
	restriction |= BIO_USE;
    } else {
      fprintf(stderr,"-b can only be followed by drag, lag, use or void");
      exit(-1);
    }
    s = end + (end?1:0);
  }
  return restriction;
}


static int firstFilter(void)
{
  int i;
  for(i=0; i<argvsize; i++)
    if(isProfile(argvdata[i]))
      return i+1;
  return i;
}

int decodeBioRestriction(void)
{
  int i = firstFilter();
  int bio = 0;
  for(; i<argvsize; i++) {
    if(!strncmp(argvdata[i],"-b",2))
      bio |= str2bio(&argvdata[i][2]);
  }
  return bio;
}

/* Remove old -b flags and add new */
void updateBioRestriction(int bio)
{
  int i,j=firstFilter();
  for(i=j; i<argvsize; j++) {
    if(!strncmp(argvdata[i],"-b",2)) {
      argvsize--;
    } else {
      argvdata[i++] = argvdata[j];
    }
  }
  if(bio & BIO_LAG) addArgv((Argv)"-blag");
  if(bio & BIO_USE) addArgv((Argv)"-buse");
  if(bio & BIO_DRAG) addArgv((Argv)"-bdrag");
  if(bio & BIO_VOID) addArgv((Argv)"-bvoid");
}

void changeProfile(int profile)
{
  int i;
  for(i=1; i<argvsize; i++) {
    if(argvdata[i][0] == '-') {
      switch(argvdata[i][1]) {
      case 'm': argvdata[i][1] =  profile2char(profile); return; 
      case 'p': argvdata[i][1] =  profile2char(profile); return; 
      case 'c': argvdata[i][1] =  profile2char(profile); return; 
      case 'r': argvdata[i][1] =  profile2char(profile); return; 
      case 'b': argvdata[i][1] =  profile2char(profile); return; 
      case 'l': argvdata[i][1] =  profile2char(profile); return; 
      }
    }
  }
}

char profile2char(int profile)
{
  switch (profile) {
  case PROFILE_MODULE:     return 'm';
  case PROFILE_PRODUCER:   return 'p';
  case PROFILE_CONSTRUCTOR:return 'c';
  case PROFILE_RETAINER:   return 'r';
  case PROFILE_BIOGRAPHY:  return 'b';
  case PROFILE_LIFETIME:   return 'l';
  default:
    fprintf(stderr,"Unknown profile %d\n",profile);
    abort();
  }
  return '*';
}     

static char *number(char *s,int *i)
{
  int n = 0;
  while(isdigit(*s))
    n = n*10 + *s++ - '0';
  *i = n;
  return s;
}

void str2life(char *s,int *low, int *high)
{
  if(isdigit(*s))
    s = number(s,low);
  if(*s == '-') {
    s ++;
    if(isdigit(*s)) {
      s = number(s,high);
      if(!*s)
	return;
    } else
      return;
  }
  fprintf(stderr,"-lmin- -l-max or -lmin-max are the only allowed -l restrictions!\n");
  exit(-1);
}


void decodeLifeRestriction(int *low, int *high)
{
  int i=firstFilter();
  int bio = 0;
  for(; i<argvsize; i++) {
    if(!strncmp(argvdata[i],"-l",2))
      str2life(&argvdata[i][2],low,high);
  }
}

/* Remove old -l flags and add new */
void updateLifeRestriction(int low,int high)
{
  char buffer[10];

  int i,j=firstFilter();
  for(i=j; i<argvsize; j++) {
    if(!strncmp(argvdata[i],"-l",2)) {
      argvsize--;
    } else {
      argvdata[i++] = argvdata[j];
    }
  }

  if(low==-1) {
    if(high==-1)
      return;
    else
      sprintf(buffer,"-%d",high);
  } else if (high == -1) {
    sprintf(buffer,"%d-",low);
  } else 
    sprintf(buffer,"%d-%d",low,high);
    
  addArgv((Argv)clone(buffer));
}
