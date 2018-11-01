#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <setjmp.h>
#include "comp.h"

#include "node.h"
#include "mutlib.h"
#include "initend.h"
#include "stableptr.h"
#include "profile.h"
/* #include "runtime.h" -- already included in node.h */

#define ARGSIZE 200	/* Obsolete?  Used to limit number of cmdline args. */

/* flags */

#if INSCOUNT
int insCount;
#endif

int bellGc;
int gcStatics;
int dumpStack;
timer gcTime,totalTime,runTime;
extern int hpSize, spSize;

/****/

#define NO_UNIT 0
#define SIZE_UNIT 1
#define TIME_UNIT 2

#define assign(var,exp) (var>exp ? var : (var=exp))

double numArg(int unit, char *s)
{
  double prefix = 1;
  double i = 0;
  while(isdigit(*s)) {
    /* i = i*10 + *s++ - '0'; */
    assign(i,i*10 + *s - '0');
    s++;
  }
  if(*s=='.') {
    double pos = 0.1;
    while(isdigit(*++s)) {
      i = i + (double)(*s - '0')*pos;
      pos /= 10.0;
    }
  }

  switch(*s) {
  case 'k': 
  case 'K': prefix *= 1000;     s++; break;
  case 'm': prefix *= -1000000; s++; break;  /* ugly hack to distinguis milli from Mega if followed by s */
  case 'M': prefix *=  1000000; s++; break;
  }

  if(TIME_UNIT & unit && *s == 's') { 
    s++;
    if(prefix < 0 ) prefix = 0.001;
    i = -i*prefix;
  } else if (SIZE_UNIT & unit) {
    if(prefix<0) prefix = -prefix;
    switch(*s) {
    case 'b': case 'B': s++; assign(i,i*prefix)/sizeof(Node); break;
    case 'w': case 'W': s++; assign(i,i*prefix); break;
    default: assign(i,i*prefix)/sizeof(Node); break;
    }
  }
      
  if(*s) 
    fprintf(stderr,"Ignoring extra character(s) '%s' at end of number\n",s);
  
  return i;
}

#ifdef PROFILE
void getMaxSet(char *maxs)
{
  extern int maxSet;
  if(*maxs)
    maxSet = atoi(maxs);
  else
    maxSet = 1;
}
#endif

int exit_code=0;

#if defined(__CYGWIN32__) || defined(__MINGW32__)
jmp_buf exit_mutator;
#else
sigjmp_buf exit_mutator;
#endif



char **Argv;
int Argc;

void haskellInit (int argc, char **argv)
{
  int i;

#if 0
  if(argc>=ARGSIZE) {
    fprintf(stderr,"Sorry temporary limit of max %d arguments\n",ARGSIZE);
    exit(-1);
  }
#endif
  
/*Argv = (char **)malloc(ARGSIZE*sizeof(char *));*/
  Argv = (char **)malloc((argc+1)*sizeof(char *));
  if(!Argv) {
    fprintf(stderr,"Out of memory when reserving space for %d arguments\n",argc);
    exit(-1);
  }

  Argv[0] = argv[0];
  for(Argc = i = 1; i < argc; i++) {
    if (!strcmp(argv[i],"+RTS")) {
      i++;
      for(; i < argc; i++) {
	if(!strcmp(argv[i],"-RTS")) {
	  break;
	} else if(argv[i][0] != '-') {
	  fprintf(stderr,"Warning: unknown runtime argument %s ignored.\n",argv[i]);
	} else {
	  switch(argv[i][1]) {
	  case 's':
	    gcStatics ++; break;
	  case 'B':
	    bellGc ++; break;
	  case 'H':
	    if(argv[i][2]) hpSize = (Int)numArg(SIZE_UNIT,&argv[i][2]); break;
	  case 'V':
	  case 'K':
	    if(argv[i][2]) spSize = (Int)numArg(SIZE_UNIT,&argv[i][2]); break;

#if defined(PROFILE) || defined(TPROF)
	  case 'i':
	    if(argv[i][2]) profileInterval = numArg(SIZE_UNIT|TIME_UNIT,&argv[i][2]);
	    else { fprintf(stderr,
			   "-i must be followed by number of words or time in seconds between profile sample!\n");
		   exit(-1);
		 }
	    if(profileInterval < 0) {
	      profileInterval = -profileInterval;
	      timeSample = 1;
	    } else
	      timeSample = 0;
	    break;
#endif
#if PROFILE
	  case 'p':
	    if(!profile)  {profile = PROFILE_PRODUCER; WHEN_DYNAMIC(getMaxSet(&argv[i][2]);)}
	    else if(argv[i][2]) addRestrictions(&argv[i][2],PROFILE_PRODUCER);
	    break;
	  case 'c':
	    if(!profile)  {profile = PROFILE_CONSTRUCTOR; WHEN_DYNAMIC(getMaxSet(&argv[i][2]);)}
	    else if(argv[i][2]) addRestrictions(&argv[i][2],PROFILE_CONSTRUCTOR);
	    break;
	  case 'm':
	    if(!profile)   {profile = PROFILE_MODULE; WHEN_DYNAMIC(getMaxSet(&argv[i][2]);)}
	    else if(argv[i][2]) addRestrictions(&argv[i][2],PROFILE_MODULE);
	    break;
	  case 'r':
	    if(!profile) {profile = PROFILE_RETAINER; getMaxSet(&argv[i][2]);}
	    else if(argv[i][2]) addRestrictions(&argv[i][2],PROFILE_RETAINER);
	    break;
	  case 'b':
	    if(!profile){profile = PROFILE_BIOGRAPHY; getMaxSet(&argv[i][2]);}
	    else addRestrictions(&argv[i][2],PROFILE_BIOGRAPHY);
	    break;
	  case 'l':
	    if(!profile){profile = PROFILE_LIFETIME; getMaxSet(&argv[i][2]);}
	    else addRestrictions(&argv[i][2],PROFILE_LIFETIME);
	    break;
	  case '1':
	    if(!profile) {
	      fprintf(stderr,"First run\n");
	      profile = PROFILE_FIRST;
	    } else {
	      fprintf(stderr,"The '-f' can only be used on it's own\n");
	    }
	  case '2':
	    second_run = 1;
	    break;
	    
	    
	  case '@':
	    countAp = 1; break;
	    
	  case 'u':
	    if(!profile){
	      fprintf(stderr,"It only possible to use -u as modifier of other profile.");
	      exit(-1);
	    } else {
	      PrintUse = 1;
	    }
	    break;
#endif
          case 't':
          case 'z':
#ifdef TPROF
#ifdef PROFILE
            if (!profile) { /* -tmt order by module then ticks <default>    */
              tprof = 1;    /* -tmc order by module then calls (then ticks) */
            }               /* -tc  order by calls then ticks               */
#else                       /* -tt  order by time  then calls         etc.  */
            tprof = 1;
#endif                                 /* Args following -t in quotes give   */
	    tprofTMInit();             /* Module names that the user wishes  */
            if (argv[i][2]) {          /* to collapse/expand eg. -t"-Ph +IO" */
              tprofInclude(argv[i]+2); /* will collapse Ph and expand IO     */
            }                          /* "+all" & "-all" are valid, default */
            break;                     /* is to expand only user modules     */

          case 'G':
            gcData = 1;
#else
            fprintf(stderr, "Program has not been compiled for time profiling - ignoring -%c[option]\n",argv[i][1]);
#endif
            break;

#if INSCOUNT
	  case 'I':
	    insCount++;
            break;
#endif

	  case 'X':   /* Only useful if linked with -X */
	    xlib_debug ++;
	    break;

	  default:
	    fprintf(stderr,"Warning unrecognized run-time flag %s ignored.\n",argv[i]);
	  }
	}
      }
    } else {
      Argv[Argc] = argv[i];
      Argc++;
    } 
  }


#ifdef TPROF
  if(gcData) gcDataStart(argc,argv);  /*PH*/
  if(tprof) tprofStart();
#endif

  initForeignObjs();
  initGc(hpSize,&Hp,spSize,&Sp);
  stableInit();  /*MW*/

  timerClear(&totalTime);
  timerClear(&runTime);
  timerClear(&gcTime);
  timerStart(&totalTime);


#ifdef PROFILE
  if(profile) profile_start(argc,argv);
#endif

  timerStart(&runTime);

  Fp = Sp;	/* initialise the Frame pointer */
} /* end of haskellInit */





int haskellEnd (int argc, char **argv) {
  timerStop(&runTime);
#ifdef TPROF
  if(tprof) tprofStop(argc,argv);	/*PH*/
  if(gcData) gcDataStop(Hp);
#endif
#ifdef PROFILE
  if(profile) profile_stop(Hp);
#endif

//if (pendingIdx) runDeferredGCs();	/* run finalisers before quitting */

  timerStop(&totalTime);
  fflush(stdout);
  fflush(stderr);
  finishGc(Hp,bellGc > 2);
  if(bellGc > 2) {
    double tt = (double)totalTime.l/(double)HZ;
    if(totalTime.h)
      fprintf(stderr,"32 bit timer not enough! Total time wrapped around %d times.\n",totalTime.h);
    fprintf(stderr,"Total time = %7.2f\n",tt);
    if(gcTime.h)
      fprintf(stderr,"32 bit timer not enough! Gc time wrapped around %d times.\n",gcTime.h);
    fprintf(stderr,"Gc time    = %7.2f\n",(double)gcTime.l/(double)HZ);
    if(runTime.h)
      fprintf(stderr,"32 bit timer not enough! Run time wrapped around %d times.\n",runTime.h);
    fprintf(stderr,"Run time   = %7.2f\n",(double)runTime.l/(double)HZ);
  }

#ifdef PROFILE
  if(profile) profile_again(argc,argv);
#endif

#if INSCOUNT
  if(insCount) {
    printIns();
  }
#endif

  if(gcStatics) {
    finishGc(Hp,1);
  }

  exit(exit_code);
}

