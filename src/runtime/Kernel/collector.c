#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "node.h"
/*#include "newmacros.h"  -- already included in node.h */
/*#include "runtime.h"    -- already included in node.h */
#include "mark.h"

/*#define HEAPSIZE 100000  -- defined in top-level Makefile at config-time */
#define GCSTACKSIZE 20000
#if __APPLE__
# define SBRK 0
#else
# define SBRK 1	/* Use sbrk(2) instead of malloc(3) to allocate the heap */
#endif

WHEN_DYNAMIC(int ractive = 0;)

NodePtr hpLimit;
NodePtr hpLowLimit;
NodePtr hpBase;
NodePtr bitTable;

/* int hpSize = HEAPSIZE;  -- defined at compile-time, and linked in */
extern int hpSize;
int spSize = GCSTACKSIZE;
NodePtr hpStart,hpEnd;
NodePtr *spStart,*spEnd;
UserGC *user_gc = NULL;

CafPtr cafptr;

extern int bellGc;
extern int dumpStack;
extern timer gcTime;
extern timer totalTime;
extern timer runTime;
int64_t hpTotal;
int64_t hpMoved;
Int hpMaxSurvive;
int nogc;

/*    hpStart                                                          hpEnd */
/*          hpBase                                                           */
/*    hpLowLimit                   hpLimit    bitTable                       */
/*                    hp                                                     */

void initGc(Int hpSize,NodePtr *ihp,Int spSize,NodePtr **isp)
{
  Int totalSize = hpSize+spSize;
  Int tableSize = (totalSize+WORDSIZE)/(WORDSIZE+1)+1; /* Last one for end of marked */

  if (
#if SBRK
      ((NodePtr)-1)== (hpStart = (NodePtr)sbrk((int)totalSize * sizeof(Node)))
#else
      NULL == (hpStart = malloc ((int)totalSize * sizeof(Node)))
#endif
     ) {
    fprintf(stderr,"Not enough memory for heap and stack.\n");
    exit(-1);
  }

  hpEnd = hpStart + totalSize;

  bitTable = hpEnd - tableSize;

  *isp = spStart = (NodePtr *) bitTable;
  spEnd = spStart - spSize;

  if ((long)hpEnd>0x80000000) {
    fprintf(stderr,"OS allocated a heap in high memory (>0x80000000)\n");
    fprintf(stderr,"    which breaks this program's run-time system.\n");
    fprintf(stderr,"  hpStart=0x%x, hpEnd=0x%x\n",hpStart,hpEnd);
    exit(-1);
  }
  if(spEnd <= (NodePtr*)hpStart) {
    fprintf(stderr,"No space left for the heap!\n");
    exit(-1);
  }

  hpLimit = (NodePtr)spEnd  - 128;     /* "False" security! */


  hpBase = hpLowLimit = hpStart;

  cafptr = 0;
  hpMoved = hpTotal = (int64_t)0;
  hpMaxSurvive = nogc = 0;


  if(IND_TAG) {
    fprintf(stderr,"This garbage collector only works if IND_TAG == 0\n");
    exit(-1);
  }

#if defined(PROFILE) || defined(TPROF)
#if TPROF
  if((tprof||gcData) && !timeSample) {
#else
  if(profile && !timeSample) {
#endif
    profileHpLimit = hpStart + (Int)profileInterval;
  } else {
    profileHpLimit = hpEnd;  /* always greater than sp */
  }
#endif
  hpLowLimit[0] = (Node)CONSTR(0,1,0); /* used for gc ! */
  hpLowLimit[1+EXTRA] = (Node)&hpLowLimit[0];
#if TPROF
  /*hpBase = &hpLowLimit[GCEXTRA];*/
  if(gcData) {
    fprintf(gdFILE,"HPSP %8ld\n",totalSize-tableSize);
  }
#endif
  *ihp = &hpLowLimit[GCEXTRA];

}

void finishGc(NodePtr hp,int verbose)
{
  if(verbose) {
    fprintf(stderr,"\n\nUsed  %lld words of heap.\n",(int64_t)(hp-hpBase)+hpTotal);
    fprintf(stderr,"Moved %lld words of heap in %d gcs.\n",hpMoved,nogc);
    fprintf(stderr,"%d words to next gc.\n",hpLimit-hp);
    fprintf(stderr,"Max live after gc: %ld words.\n",hpMaxSurvive);
  }
}

NodePtr prevLow,prevHigh;

void printCaf(GcConst caf, Int flags, Int depth)
{
  fprintf(stderr,"printCaf\n");
  while(caf != GcEnd) {
    GcConst cptr = caf;
    NodePtr *inptr = &cptr->ptr[0];
    switch(GET_TAG(inptr)) {
    case VAP_TAG0: case VAP_TAG1:
      fprintf(stderr,"%p * ",inptr);
      fprintf(stderr," %p",*inptr);
      fprintf(stderr,"\n");
      break;     /* Not updated yet */
    case CON_TAG:
      fprintf(stderr,"CON_TAG in markCaf\n");
      exit(-1);
    case IND_TAG:
      fprintf(stderr,"%p   ",inptr);
      fprintf(stderr," %p",*inptr);
      fprintf(stderr,"\n");
      break;
    }
    caf = cptr->next;
    /*    cptr->next = 0; */
  }
  fprintf(stderr,"\n");
}


/* Update treats IND nodes as pointers */
Node nhc_update(NodePtr old,NodePtr new)
{
  NodePtr c;
  if(MASK_WTAG & (UInt)(c = (NodePtr)*old)) {   /* Not a pointer */
    return (Node) c;
  }
  do {
    NodePtr n = (NodePtr)*c;
    *c = (Node)new;
    c = n;
  } while(!((UInt)c & MASK_WTAG)); /* Next is a pointer */
  return (Node)c;
}

void flip(NodePtr *p)
{
  NodePtr tmp = *p;
  if(INSIDE(tmp)) {
    *p = (NodePtr)*tmp;
    *tmp = (Node)p;
  }
}

void clearCaf(void)
{
  while(oldCaf != GcEnd) {
    GcConst cptr = oldCaf;
    oldCaf = cptr->next;
    cptr->next = 0;
  }
}

void flipCaf(void)
{
  GcConst caf = oldCaf;
  while(caf != GcEnd) {
    GcConst cptr = caf;
    Int size = cptr->sizeArity;
    int i;
    size = FSTHW(size);

    {
      NodePtr *nptr = &cptr->ptr[0];
      if(GET_TAG(nptr) == IND_TAG)
	flip(nptr);
      i = (Int)EXTRA+1;
      size += (Int)EXTRA+1;
    }

    for(; i<size; i++) {
      NodePtr nptr = cptr->ptr[i];
      switch(EXT_TAG(nptr)) {
      case VAP_TAG0: case VAP_TAG1:
	{ Cinfo cinfo = EXT_CINFO(nptr);
	  extern void addCaf(Finfo);
	  addCaf(CINFO_FINFO(cinfo));
	} break;
      case CON_TAG:
	fprintf(stderr,"CON_TAG in markCaf(1)\n");
	exit(-1);
      case IND_TAG:
	flip(&cptr->ptr[i]);
	break;
      }
    }
    caf = cptr->next;
/*    cptr->next = 0; */
  }
}

/*******************/
void flipStack(NodePtr *sp)
{
  NodePtr *sptr;
  for(sptr = sp; sptr < spStart; ) {
    NodePtr *fp;
#if phCh
    sptr++;
#endif
    sptr++;
    fp = (NodePtr *)*sptr++; /* Fetch fp */

    while(sptr != fp) {
      flip(sptr++);
    }
  }
}



/*********************/
void flipHeap(NodePtr hp)
{
  NodePtr scanptr,newpos;
  scanptr = newpos = &hpLowLimit[GCEXTRA];
  while(scanptr<hp) {

    if(!marked(scanptr)) {
      Int off = scanptr - hpLowLimit+1;
      UInt mask = 1l << (off & WORDMASK);
      UInt cache;
      NodePtr hole = scanptr;
      scanptr++;
      off >>= WORDSHIFT;
      if(0 != (cache = (bitTable[off] & ~(mask-1)))) { /* There are bits left in this word ! */
        while(!(mask&cache)) {
          mask<<=1;
          scanptr++;
        };
        goto foundNode;
      } else {                                                         /* Must find a non-zero mark word */
        Int i = 0;
        while(0==(cache=bitTable[++off]))                                 /* Must have nonzero Word last */
          ;

        mask = 1;                           /* cache word !=0 */

        while(!(mask&cache)) {
          mask<<=1;
          i++;
        }
        scanptr = hpLowLimit + (off << WORDSHIFT) + i;
      }
    foundNode:
      hole[0] = (Node)-(Int)scanptr;
    }
    if(scanptr <hp) {
      Node tag = nhc_update(scanptr,newpos);
      *scanptr = tag;
      switch(EXT_LARGETAG(tag)) {
      case CON_DATA|VAP_TAG0: case CON_PTRS|VAP_TAG0: case CON_CDATA|VAP_TAG0: case CON_WORDS|VAP_TAG0:
      case CON_DATA|VAP_TAG1: case CON_PTRS|VAP_TAG1: case CON_CDATA|VAP_TAG1: case CON_WORDS|VAP_TAG1:
        { Cinfo cinfo = EXT_CINFO(tag);
          Int size   = CINFO_SIZE(cinfo)+EXTRA;
          Int i  = EXTRA;
          scanptr += 1+i;
          while(i++<size)
            flip((NodePtr *)scanptr++);
          newpos += 1+size;
        } break;
      case CON_DATA|CON_TAG:       case CON_CDATA|CON_TAG:
        { Coninfo cinfo = EXT_CONINFO(tag);
          Int psize   = CONINFO_PSIZE(cinfo);
          Int t       = CONINFO_SIZE(cinfo);

	  newpos += 1+t+EXTRA;
	  t -= psize;
	  scanptr += 1+EXTRA;
	  while(psize--)
	    flip((NodePtr *)scanptr++);
	  scanptr += t;
        } break;
      case CON_PTRS|CON_TAG:
        { Coninfo cinfo = EXT_CONINFO(tag);
          Int size   = CONINFO_LARGESIZEU(cinfo);
	  newpos += 1+size+EXTRA;
	  scanptr += 1+EXTRA;
	  while(size--)
	    flip((NodePtr *)scanptr++);
        } break;
      case CON_WORDS|CON_TAG:
        { Coninfo cinfo = EXT_CONINFO(tag);
          Int size   = CONINFO_LARGESIZEU(cinfo);
	  newpos += 1+size+EXTRA;
	  scanptr += 1+size+EXTRA;
        } break;
      default:
        fprintf(stderr,"IND found in flip heap!\n");
        exit(-1);
      }
    }
  }
}

#if PROFILE

#define LOG(x)

void do_profile(NodePtr hp)
{
  double t = (double)runTime.l/(double)HZ;
  NodePtr scanptr;
  int m;
  int live;
  int dead = post_mortem;

  if(pactive && proFILE)
    fprintf(proFILE,"SAMPLE %d %8.2f\n",year,t);

  scanptr = &hpLowLimit[GCEXTRA];
  while(scanptr<hp) {
    Node tag;
    Int s = (Int)scanptr[0];
    LOG(fprintf(stderr,"scanptr = %08x",scanptr);)
    while(s < 0 && !(3 & s)) {                       /* A Hack to distinguish zapped thunks */
      if((scanptr = (NodePtr)((UInt)-s)) >= hp)
        goto end;
      LOG(fprintf(stderr," -> %08x",scanptr);)
      s = (Int)scanptr[0];
    }
    live = ifmarked(scanptr);
    if(dead) m = !live;
    else m = live;
    tag = scanptr[0];
    switch(EXT_LARGETAG(tag)) {
    case CON_DATA|VAP_TAG0: case CON_PTRS|VAP_TAG0: case CON_CDATA|VAP_TAG0: case CON_WORDS|VAP_TAG0:
    case CON_DATA|VAP_TAG1: case CON_PTRS|VAP_TAG1: case CON_CDATA|VAP_TAG1: case CON_WORDS|VAP_TAG1:
      LOG(fprintf(stderr," = %cVAP",m?'*':' ');)
      { Cinfo cinfo = EXT_CINFO(tag);
	Int size   = CINFO_SIZE(cinfo);
	LOG(fprintf(stderr," + %3d\n",1+ size);)
	if(m) addElement(GET_INFO(scanptr),(1+size)*NS);
	scanptr += 1+size+EXTRA;
      } break;
    case CON_DATA|CON_TAG:     case CON_CDATA|CON_TAG:
      LOG(fprintf(stderr," = %cCON",m?'*':' ');)
      { Coninfo cinfo = EXT_CONINFO(tag);
	Int size   = CONINFO_SIZE(cinfo);
	LOG(fprintf(stderr," + %3d\n",1+size);)
	if(m) addElement(GET_INFO(scanptr),(1+size)*NS);
	scanptr += 1+size+EXTRA;
      } break;
    case CON_PTRS|CON_TAG:     case CON_WORDS|CON_TAG:
      LOG(fprintf(stderr," = %cCON(L)",m?'*':' ');)
      { Coninfo cinfo = EXT_CONINFO(tag);
	Int size   = CONINFO_LARGESIZEU(cinfo);
	LOG(fprintf(stderr," + %3d\n",1+size);)
	if(m) addElement(GET_INFO(scanptr),(1+size)*NS);
	scanptr += 1+size+EXTRA;
      } break;
    default:
      LOG(fprintf(stderr," = %cIND +   1\n",m?'*':' ');)
      scanptr += 1; /* No profiling information in indirection nodes */
    }  
  }
 end:


  if(pactive) {
    if(proFILE) {  /* Might be here only to save biographical data */
      printTable(proFILE);
      fprintf(proFILE,";\n");
    }

    emptyTables();

    year = 1+year;
  }
}

#endif

NodePtr moveHeap(NodePtr hp)
{
  NodePtr scanptr,newpos;
  scanptr = newpos = &hpLowLimit[GCEXTRA];
  while(scanptr<hp) {
    Node tag;
    Int s = (Int)scanptr[0];
    if(s < 0 && !(3 & s)) {          /* A Hack to distinguish zapped thunks */ 
      if((scanptr = (NodePtr)((UInt)-s)) >= hp)
        break;
    }

    tag = nhc_update(scanptr,newpos);
    switch(EXT_LARGETAG(tag)) {

    case CON_DATA|VAP_TAG0: case CON_PTRS|VAP_TAG0: case CON_CDATA|VAP_TAG0: case CON_WORDS|VAP_TAG0:
    case CON_DATA|VAP_TAG1: case CON_PTRS|VAP_TAG1: case CON_CDATA|VAP_TAG1: case CON_WORDS|VAP_TAG1:
      { Cinfo cinfo = EXT_CINFO(tag);
        Int size   = CINFO_SIZE(cinfo)+EXTRA;
        *newpos++ = tag;
        scanptr += 1;
        while(size--)
          *newpos++ = *scanptr++;
      } break;
    case CON_DATA|CON_TAG:     case CON_CDATA|CON_TAG:
      { Coninfo cinfo = EXT_CONINFO(tag);
        Int size   = CONINFO_SIZE(cinfo)+EXTRA;
        *newpos++ = tag;
        scanptr += 1;
        while(size--)
          *newpos++ = *scanptr++;
      } break;
    case CON_PTRS|CON_TAG:     case CON_WORDS|CON_TAG:
      { Coninfo cinfo = EXT_CONINFO(tag);
	Int size   = CONINFO_LARGESIZEU(cinfo)+EXTRA;
        *newpos++ = tag;
        scanptr += 1;
        while(size--)
          *newpos++ = *scanptr++;
      } break;
    default:
      fprintf(stderr,"IND found in move heap!\n");
      exit(-1);
    }
  }
  return newpos;
}

#if PROFILE

void do_comment(char *string)
{
  double t;
  timerStop(&runTime);
  t = (double)runTime.l/(double)HZ;
  if(proFILE)
    fprintf(proFILE,"COMMENT %f \"%s\"\n",t,string);
  timerStart(&runTime);
}

#endif


NodePtr callGc(Int size,NodePtr hp, NodePtr *sp, NodePtr *fp)
{

#ifdef TPROF
  double thisGcStart;
#endif
#if defined(PROFILE) || defined(TPROF)
  NodePtr hpsave = hp;
  int collectinfo =  size<= 0 || (NodePtr)sp >= profileHpLimit; /* called Gc because of profiler */
  pactive = collectinfo;
#ifdef TPROF
  if (timeSample) tprofRecordGC();	        /*PH*/
  if(!tprof && collectinfo && timeSample)	/*PH*/
    timeSample = FREEZE_TIME;
#else
  collectinfo = collectinfo || post_mortem;
  if(collectinfo && timeSample)
    timeSample = FREEZE_TIME;
#endif
#endif

#ifdef TPROF
  if(!tprof && size) timerStop(&runTime);     /*PH*/
#else
  if(size) timerStop(&runTime);
#endif

#if PROFILE
  if (proFILE) { /* Add mark to hp-file */
    double t = (double)runTime.l/(double)HZ;
    fprintf(proFILE,"MARK %8.2f\n",t);
  }
#endif

#ifdef TPROF
  if(gcData) thisGcStart = (double)gcTime.l/(double)HZ; /* PH */
#endif

  if(size) timerStart(&gcTime);

  nogc++;

  if(hp>(NodePtr)sp) {
    fprintf(stderr,"Fatal   %3d: hp = %8lx > sp %8lx\n",nogc,(UInt)hp,(UInt)sp);
    exit(-1);
  }

#if 0
  if(showGcStack && (nogc >= showGcStackStart)) {
    fflush(stdout);
    fprintf(stderr,"============= callGc %d\n",nogc);
    printStack(sp,fp,0,0,showGcStack,2);
  }
#endif
  if(bellGc) {
    fflush(stdout);
    fprintf(stderr,"<GC %3d:Start>",nogc);
    fflush(stderr);
  }


/*    hpStart                                                          hpEnd */
/*          hpBase                                                           */
/*    hpLowLimit                                                     hpLimit */
/*                    hp                                                     */

  prevLow = hpLowLimit;
  prevHigh = hpLimit;

  hpTotal += (int64_t)(hp - hpBase);

  clearForeignObjs();

  if(bellGc>3) { fprintf(stderr," markClear"); fflush(stderr); }

WHEN_DYNAMIC(if(pactive && ((profile|filter) & PROFILE_RETAINER)) remarkInit();)

  markClear();

  if(size) { /* Last call to count cells at program termination */

    if(bellGc>3) { fprintf(stderr," markStack"); fflush(stderr); }
    
    markStack(sp);
    
    if (user_gc) {
	UserGC *ugc = user_gc;

	if(bellGc>3) { fprintf(stderr," markUserGC"); fflush(stderr); }
	while (ugc != NULL) {
	    ugc->mark();
	    ugc = ugc->next;
	}
    }

    if(bellGc>3) { fprintf(stderr," markCaf"); fflush(stderr); }
    
    markCaf();

    if(dumpStack && dumpStack <= nogc) {
      fprintf(stderr,"CAF before GC %d\n",nogc+1);
    }

WHEN_DYNAMIC(if(pactive && ((profile|filter) & PROFILE_RETAINER)) remarkRest();)
  }


#if PROFILE
#ifdef TPROF
  if(!tprof && collectinfo) do_profile(hp);   /*PH*/
#else 
  if(collectinfo) do_profile(hp);     
#endif
#endif


  if(bellGc>3) { fprintf(stderr," flipCaf"); fflush(stderr); }

  flipCaf();

  if (user_gc) {
      UserGC *ugc = user_gc;
      
      if(bellGc>3) { fprintf(stderr," flipUserGC"); fflush(stderr); }
      while (ugc != NULL) {
	  ugc->flip();
	  ugc = ugc->next;
      }
  }

  if(bellGc>3) { fprintf(stderr," flipStack"); fflush(stderr); }

  flipStack(sp);

  if(bellGc>3) { fprintf(stderr," flipHeap"); fflush(stderr); }

  flipHeap(hp);

  if(bellGc>3) { fprintf(stderr," moveHeap"); fflush(stderr); }

  hp = moveHeap(hp);

  hpMoved += (int64_t)(hp - &hpLowLimit[GCEXTRA]);

  if(hpMaxSurvive < hp-&hpLowLimit[GCEXTRA])
    hpMaxSurvive =  hp-&hpLowLimit[GCEXTRA];

  hpBase = hp;

  if(hp+size >= (NodePtr)sp) { /* !!! hpLimit */
    fprintf(stderr,"The program ran out of heap memory.");
    fprintf(stderr,"  (Current heapsize is %d bytes.)\n",hpSize*sizeof(int));
    fprintf(stderr,"You can set a bigger size with e.g. +RTS -H4M -RTS");
    fprintf(stderr," (4M = four megabytes).\n");
    fprintf(stderr,"GC stats:\n  ");
    fprintf(stderr,"  Only %d words after gc, need %ld words.\n"
                                                         ,(NodePtr)sp-hp,size);
    fprintf(stderr,"  Used  %lld words of heap.",(int64_t)(hp-hpBase)+hpTotal);
    fprintf(stderr,"  Moved %lld words of heap in %d gcs.\n",hpMoved,nogc);
    fprintf(stderr,"  %d words to next gc.",(NodePtr)sp-hp);
    fprintf(stderr,"  Max live after gc: %ld words.\n",hpMaxSurvive);
    nhc_abort("Insufficient heap memory.");
  }

  if(bellGc) {
    fflush(stdout);
    fprintf(stderr,"<GC %3d:%8d>\n",nogc,hp-&hpLowLimit[GCEXTRA]);
  }
  gcForeignObjs();


  if(size) timerStop(&gcTime);

#ifdef TPROF
  if(gcData)
    fprintf(gdFILE,"POINT %8d %8d %8d %7.3f\n",hpTotal,hp-&hpLowLimit[GCEXTRA],spStart-sp,(double)gcTime.l/(double)HZ-thisGcStart);
#endif

#if defined(PROFILE) || defined(TPROF)

#ifdef PROFILE
#ifdef TPROF
  if(profile || tprof) { 
#else
  if(profile) { 
#endif
#else
  if(tprof||gcData) { 
#endif
    if(pactive) { /* This stop was due to profiling */
      pactive = 0;
      if(timeSample) { /* If we don't use timer then set limit */
#ifdef TPROF
        if (!tprof) {                 /*PH*/
          timeSample = ACTIVE_TIME;
          profileHpLimit = hpEnd;
        }
#else
	timeSample = ACTIVE_TIME;
	profileHpLimit = hpEnd;
#endif
      } else {
	profileHpLimit = hp + (Int)profileInterval;
#ifdef TPROF
        if (tprof) tprofRecordTick();	/*PH*/
#endif
      }
    } else {
#ifdef TPROF
      if(gcData<2 && !(timeSample)) profileHpLimit -= hpsave-hp;
#else
      profileHpLimit -= hpsave-hp; /* Adjust limit because of changed hp */
#endif
    }
  }
#endif


  clearCaf();

#ifdef TPROF
  if(timeSample) tprofRecordGC();	        /*PH*/
  if(!tprof && size) timerStart(&runTime);	/*PH*/
#else
  if(size) timerStart(&runTime);
#endif
 
  return hp;
}

void add_user_gc(markfun mark, flipfun flip)
{
    UserGC *ugc = (UserGC *)malloc(sizeof(UserGC));
    if (ugc == NULL) {
	fprintf(stderr,"Not enough memory for allocating user GC structure.\n");
	exit(-1);
    }
    ugc->mark = mark;
    ugc->flip = flip;
    ugc->next = user_gc;
    user_gc = ugc;
}

