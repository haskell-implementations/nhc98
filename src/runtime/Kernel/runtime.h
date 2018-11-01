
#ifndef _RUNTIME_H
#define _RUNTIME_H

#define PARANOID  0 
#define INSCOUNT  0
#ifndef TRACE
#define TRACE     0
#endif

#define WHEN_SCC(x) 

#include <stdio.h>

/* include file for global definitions */

typedef long Int;
typedef unsigned long UInt;

#ifdef __alpha
typedef unsigned int UHalf;
typedef   signed int Half;
#else
typedef unsigned short UHalf;
typedef   signed short Half;
#endif
typedef   signed long HeapOffset;
#define HEAPOFFSET(x)  ((HeapOffset)(x))
typedef unsigned short JumpItem;
typedef struct {
  JumpItem constr;
  JumpItem offset;
} JumpTable;

#ifdef __arm
#define HZ 100
#else
#include <sys/param.h>
#endif

#ifndef HZ
#ifdef __mips
#define HZ 50
#else
#define HZ 100
#endif
#endif

/* timeRO.s timeUnix.c */

typedef struct {
    unsigned int l;
    unsigned int h;
   } timer;

extern void timerClear(timer *);
extern void timerRead(timer *);
extern void timerStart(timer *);
extern void timerStop(timer *);

/* misc typedefs */

typedef unsigned char UChar;

typedef UInt   Node;
typedef Node  *NodePtr;
typedef UChar  Code;
typedef Code  *CodePtr;

typedef UInt  *Cinfo;
typedef UInt  Coninfo;
typedef UInt  *Finfo;


extern NodePtr  Hp;
extern NodePtr *Sp;
extern NodePtr *Fp;
extern CodePtr  Ip;

extern char **Argv;
extern int Argc;

#define DUMP_ADDR 1
#define DUMP_IND  2
#define DUMP_TOP  4
#define TRACE_EVAL 8
#define TRACE_RETURN 16

#ifdef TRACE
extern int traceIp,traceSp,traceHp,traceDepth,traceFlag;
#endif

extern int xlib_debug;

#ifdef PROFILE

#define DYNAMIC

#define WHO_CODE              1
#define WHO_STACK             2

#define PROFILE_MODULE        1
#define PROFILE_PRODUCER      2
#define PROFILE_CONSTRUCTOR   4
#define PROFILE_RETAINER      8
#define PROFILE_LIFETIME     16
#define PROFILE_KIND         32
#define PROFILE_BIOGRAPHY   128
#define PROFILE_FIRST       256
#define PROFILE_SCC         512

typedef struct {
  char *module;
  char *producer;
  char *constructor;
} SInfo;

typedef struct RETAINER {
  struct RETAINER *next;
  int    size;
  short  hashv;
  char   keep;
  char   no;
  char *member[1];
}  Retainer;

typedef union {
  struct {
    unsigned int created:9;
    unsigned int first:9;
    unsigned int last:9;
    unsigned int used:5;
  } parts;
  UInt all;
} BInfo;

#define MAX_USED 31

typedef struct {
  SInfo    *sinfo;
  BInfo     binfo;
  Retainer *rinfo;
  Int       unique;
} Info;

extern char filename[];
extern char inputname[];
extern char lastname[];
extern int useUnique;
extern int unique;
extern int record;
extern int replay;
extern int post_mortem;
extern int second_run;

extern FILE *lastFILE;
extern FILE *inputFILE;

typedef struct {
  char lastused;
  char dead;
  char used;
} pm_data;

extern pm_data *lastAREA;
extern int   lastSIZE;

extern int FilterBiography;
extern int PrintUse;
extern int argcounts;


extern FILE *proFILE;
extern int countAp;

extern SInfo dummyProfInfo;

extern int   unique;

extern timer runTime;
extern int oldVapSize;

#if 0	/*PH*/
extern volatile NodePtr profileHpLimit;
extern volatile int timeSample;
extern double profileInterval;
extern int pactive;
#endif
extern int profile;
extern int old_profile;
extern int filter;
extern int year;

#define EXTRA ((Int)sizeof(Info)/(Int)sizeof(Node))
#define GET_INFO(p) ((Info *)(1 + (NodePtr)(p)))

#define WHEN_PROFILE(x) x
#define WHEN_DYNAMIC(x) x
#define INIT_PROFINFO(nodeptr,info)  \
     {   Info *infop = GET_INFO(nodeptr); \
         infop->sinfo = info; \
	 infop->binfo.all = 0; \
	 infop->binfo.parts.created = year; \
	 infop->rinfo = 0; \
	 infop->unique = 0; \
	 WHEN_SCC(infop->retainer = (Retainer *)sccptr;) \
     }
#define UPDATE_PROFINFO(nodeptr)  \
       { Info *info = GET_INFO(nodeptr); \
	 if(!info->binfo.parts.used) { info->binfo.parts.used=1; info->binfo.parts.first = year;} \
	 else { if(info->binfo.parts.used<MAX_USED) info->binfo.parts.used++; } \
	 info->binfo.parts.last = year; \
       }

#define SAVE_PROFINFO(nodeptr) \
  if(profile) {   \
   /* timerStop(&runTime); */ \
   if(post_mortem && INSIDE(nodeptr)) { \
     UPDATE_PROFINFO(nodeptr) \
     addElement(GET_INFO(nodeptr),sizeofNode(*nodeptr)*NS); \
     } \
   /* timerStart(&runTime); */ \
  }

#define FILL_AT(size,dst) \
	oldVapSize = sizeofNode(dst[0])+EXTRA;\
	if(oldVapSize > size) { \
	  dst[size] = (Node)-(Int)(dst+oldVapSize); \
	}

#else
#define EXTRA 0
#define WHEN_PROFILE(x)
#define WHEN_DYNAMIC(x)
#define INIT_PROFINFO(nodeptr,info) 
#define UPDATE_PROFINFO(nodeptr) 
#define SAVE_PROFINFO(nodeptr) 
#define FILL_AT(newsize,nodeptr)
#endif

/* functions */

void nhc_abort(char *errorMsg); 

extern Node FN_Prelude_46blackhole[];
extern Node CF__95Builtin_46hputc_95ok[];
extern Node CF__95Driver_46_95toplevel[];
extern Node FN__95Driver_46_95toplevel[];
extern Node FN__95Driver_46_95driver[];
extern Node FN_Prelude_46primLeave[];
extern Node FN_Builtin_46primUnpackCString[];
extern Node FN_Builtin_46hgets[];
extern Node FN_Prelude_46_36[];
extern Node C0_Prelude_46_91_93[];
extern Node C0_Builtin_46PrimToken[];
extern Node C0_Prelude_46True[];
extern Node C0_Prelude_46False[];
extern Node Start_World[];
extern Node FN_Builtin_46primLeave[];
extern Node CF_Prelude_46_95zap_95arg[];
extern Node CF_Prelude_46_95zap_95stack[];
extern Node FN_Prelude_46Monad_46Prelude_46IO_46return[];
extern Node FN_Prelude_46_95ioReturn[];
extern Node FN_IOExtras_46unsafePerformIO[];

#define BLACKHOLE ((Node)FN_Prelude_46blackhole)
#define HPUTC_OK ((NodePtr)CF__95Builtin_46hputc_95ok)
#define TOPLEVEL ((NodePtr)CF__95Driver_46_95toplevel)
#define TOPLEVEL_code ((NodePtr)FN__95Driver_46_95toplevel)
#define LEAVE ((Node)FN_Prelude_46primLeave)
#define GET_WORLD ((Node)Start_World)
#define MAIN ((Node)FN__95Driver_46_95driver)
#define TOKEN ((Node)C0_Builtin_46PrimToken)
#define PRIM_STRING ((Node)FN_Builtin_46primUnpackCString)
#define PRIM_HGETS ((Node)FN_Builtin_46hgets)
#define PRIM_APPLY ((Node)FN_Prelude_46_36)
#define CON_TRUE ((Node)C0_Prelude_46True)
#define CON_FALSE ((Node)C0_Prelude_46False)
#define CON_NIL ((Node)C0_Prelude_46_91_93)
#define ZAP_ARG_NODE ((NodePtr) CF_Prelude_46_95zap_95arg)
#define ZAP_STACK_NODE ((NodePtr) CF_Prelude_46_95zap_95stack)
#define IORETURN ((Node)FN_Prelude_46Monad_46Prelude_46IO_46return)
/*#define IORETURN ((Node)FN_Prelude_46_95ioReturn)  -- removed again*/
#define PERFORMIO ((Node)FN_IOExtras_46unsafePerformIO)

#define C_CODE ((Code)FN_Prelude_46primLeave)


/* collector */


typedef struct GCCONST {
  int sizeArity;
  struct GCCONST *next;
  NodePtr ptr[1];   /* size is in sizeArity + (1+EXTRA) extra if arity == 0 */
} *GcConst;

#define GcEnd ((GcConst)-1)
extern GcConst oldCaf;
extern GcConst newCaf;

extern NodePtr hpLimit;
extern NodePtr hpStart,hpEnd;
extern NodePtr *spStart, *spEnd;
extern int hpSize;
extern int spSize;

extern void initGc(Int hpSize,NodePtr *ihp,Int spSize,NodePtr **isp);
extern void finishGc(NodePtr hp,int verbose);
extern NodePtr callGc(Int size,NodePtr hp, NodePtr *sp, NodePtr *fp);
#ifdef PROFILE
extern void do_comment(char *);
#endif


/* ForeignObjs */ 

struct FOREIGNOBJ;

typedef void (*gcFO)(struct FOREIGNOBJ *);
typedef void (*gcCval)(void *);

typedef struct {
  int bm,size;
  FILE *fp;
  int fdesc;
  char *path;
} FileDesc;

typedef struct FOREIGNOBJ {
  int    used;
  void*  cval;
  gcCval gc;	/* Second-stage garbage collector */
  gcFO   gcf;	/* First-stage garbage collector */
} ForeignObj;


void initForeignObjs(void);
ForeignObj *allocForeignObj(void*a,gcCval gc,gcFO gcf);
void freeForeignObj(ForeignObj *cd);
void *derefForeignObj(ForeignObj *cd);
void clearForeignObjs(void);
void markForeignObj(ForeignObj *cd);
void gcForeignObjs(void);

void gcNow(ForeignObj *cd);
void gcLater(ForeignObj *cd);
void gcNone(ForeignObj *cd);

void gcFile(void *a);
void gcSocket(void *a);

void runDeferredGCs (void);

extern ForeignObj fo_stdin;
extern ForeignObj fo_stdout;
extern ForeignObj fo_stderr;

typedef void (*markfun)();
typedef void (*flipfun)();

typedef struct USER_GC {
    markfun mark;
    flipfun flip;
    struct USER_GC *next; 
} UserGC;

extern void add_user_gc(markfun, flipfun);

#ifdef TPROF
extern CodePtr *ipref;
extern int tprof;
extern int gcData;
/* Needed by main.c or haskellInit */
extern void tprofTMInit(void);
extern void tprofInclude(char *);
extern void tprofStart(void);
extern void tprofStop(int, char **);
extern void gcDataStart(int, char **);
extern void gcDataStop(NodePtr);
/* Needed by collector.c and/or timer.c */
extern FILE *gdFILE;
extern void tprofRecordTick(void);
extern void tprofRecordGC(void);
/* tprof.c <-> tprofprel?.o or tprofusr.o */
extern void tprofTMInit(void);
extern void tprofInitTree(CodePtr, char *, int *);
extern void tprofTMIncludeUsr(char *, int);
extern void tprofTMIncludeUsrSubfn(void);
extern void tprofTMIncludePrel(char *, int);
extern void tprofTMIncludePrelSubfn(void);
extern int  tprofTMInitTreeUsr(void);
extern int  tprofTMInitTreePrel1(void);
extern int  tprofTMInitTreePrel2(void);
extern int  tprofTMInitTreePrel3(void);
/* Needed by mutator.c */
extern void tprofRecordEnter(char*, int **);
extern void tprofEnterGreencard(CodePtr,char *);
extern void tprofExitGreencard(void);
extern int *last_tick;
extern int cancel_enter;
extern int **enterPtr;
#define TPROF_SETUP \
  int canceling_enters = 0;
#define TPROF_RUN \
  ipref = &ip;
#define TPROF_CANCEL_ENTERS(num) \
  if (canceling_enters)  /* Check that we _really_ wanted to */ \
    if (cancel_enter==1) cancel_enter++;  /* count an enter */ \
    else { \
      cancel_enter=0; \
      canceling_enters=0; \
      last_tick = NULL; \
    }
#define TPROF_NEEDSTACK_I16 TPROF_CANCEL_ENTERS(1)
#define TPROF_SELECTOR_EVAL TPROF_CANCEL_ENTERS(2)
#define TPROF_SELECT        TPROF_CANCEL_ENTERS(3)
#define TPROF_RETURN_EVAL   TPROF_CANCEL_ENTERS(4)
#define TPROF_GREENCARD_ENTER \
  if(tprof) \
    tprofEnterGreencard((CodePtr)FINFO_CODE(GET_FINFO(vapptr)), \
                        (char *)constptr[-1]);
#define TPROF_GREENCARD_EXIT \
  ipref = &ip; \
  tprofExitGreencard();
#define TPROF_EVAL \
  enterPtr = (int**) FINFO_ENTERPTR(GET_FINFO(vapptr)); \
  if (**enterPtr==-1) { /* First enter for this function  */ \
    tprofRecordEnter((char*)constptr[-1], enterPtr); \
  } \
  else                  /* no need to search the tree :-) */ \
    (**enterPtr)++; \
  cancel_enter=1; \
  canceling_enters=1; \
  last_tick = NULL;
#define TPROF_EVAL_END \
  if (canceling_enters) { \
    if (cancel_enter==5) { \
      (**enterPtr)--; \
      if (last_tick != NULL)  \
        (*last_tick)--; \
      cancel_enter=0; \
      canceling_enters=0; \
    } \
  }
#else
#define TPROF_SETUP 
#define TPROF_RUN 
#define TPROF_NEEDSTACK_I16 
#define TPROF_SELECTOR_EVAL 
#define TPROF_SELECT 
#define TPROF_RETURN_EVAL 
#define TPROF_GREENCARD_ENTER 
#define TPROF_GREENCARD_EXIT 
#define TPROF_EVAL 
#define TPROF_EVAL_END 
#endif

#if defined(PROFILE) || defined(TPROF)
/* timer.c */
extern volatile NodePtr profileHpLimit;
extern volatile int timeSample;
extern double profileInterval;
extern int pactive;
extern timer runTime;
extern void setuptimer (void);
extern void stoptimer (void);

#define RATE 20000   /* exception rate in us */

#define ACTIVE_TIME  1
#define FREEZE_TIME  2
#endif


/* mutator.c */

void run(NodePtr);


#define DOUBLE_H 1     /* High part of double */ 
#define DOUBLE_L 0


#if TRACE
/* dump.h */
extern void prByteIns(CodePtr ip);
extern void prGraph(NodePtr nodeptr,Int flags,Int d);
extern void prStack(NodePtr *sp,NodePtr *fp,NodePtr vapptr,NodePtr *constptr,int flags,int depth);
extern void prStackGc(NodePtr *sp,NodePtr *fp,int flags,int depth);
#endif

#if INSCOUNT
/* inscount.c */
extern int insCount;
extern void countIns(CodePtr ip);
extern void printIns(void);
#endif


/* tables.c */

#define SIZE_FLOAT (EXTRA+2)
#define SIZE_DOUBLE (EXTRA+3)
#define SIZE_INT   (EXTRA+2)
#define SIZE_INT64 (EXTRA+3)
#define SIZE_APPLY (EXTRA+3)
#define SIZE_VAP1  (EXTRA+2)
#define SIZE_VAP2  (EXTRA+3)
#define SIZE_CONS  (EXTRA+3)
#define SIZE_TUPLE(n)  (EXTRA+1+n)
#define SIZE_HOLE  (EXTRA+1)
#define SIZE_TAG   (EXTRA+1)
#define SIZE_IND   (1)
#define SIZE_ENUM  (EXTRA+1)

#define RSIZE_FLOAT 2
#define RSIZE_DOUBLE 3
#define RSIZE_INT   2
#define RSIZE_INT64 3
#define RSIZE_APPLY 3
#define RSIZE_VAP1  2
#define RSIZE_CONS  3
#define RSIZE_HOLE  1
#define RSIZE_TAG   1
#define RSIZE_IND   1
#define RSIZE_ENUM  1

#define TABLE_SIZE_INT  (SIZE_INT)

/* useful C-macros */

#define IND_REMOVE(p) \
    while((!((int)p & ZAP_BIT)) && (0==(*p & MASK_WTAG))) p = (NodePtr)*p
/*  while(0==(*p & MASK_WTAG)) p = (NodePtr)*p  ---- NR */

#define IND_REMOVE_T(p,t) \
    while(0==(t=(*p & MASK_WTAG))) p = (NodePtr)*p

#define IND_REMOVE_T_EXTRA(p,t,e) \
    while(0==(t=(*p & MASK_WTAG))) {p = (NodePtr)*p; e}

#define IND_REMOVE_T_U(p,t,u)                 \
    if(0==(t = (*p & MASK_WTAG))) {              \
       do { p = (NodePtr)*p;                  \
          } while (0==(t = (*p & MASK_WTAG)));   \
       *u = p;                                \
     } else


/* integer functions */

typedef struct
{
  Int sizeTag;                  /* abs(SIZE) is the number of limbs
                                   the last field points to.  If SIZE
                                   is negative this is a negative
                                   number.  */
  WHEN_PROFILE(Info info;)
  UInt d[1];                    /* First limb.  */
} __MP_INT;

#define MP_INT __MP_INT

typedef unsigned long int	mp_limb;
typedef long int		mp_limb_signed;
typedef mp_limb *		mp_ptr;
typedef mp_limb *		mp_srcptr;
typedef long int		mp_size;

NodePtr mpz_add(MP_INT *,MP_INT *,MP_INT *);  /* first free = fun(dst,src1,src2) */
Int     mpz_add_need(MP_INT *,MP_INT *);
NodePtr mpz_sub(MP_INT *,MP_INT *,MP_INT *);
Int     mpz_sub_need(MP_INT *,MP_INT *);
NodePtr mpz_div(MP_INT *,MP_INT *,MP_INT *);
Int     mpz_div_need(MP_INT *,MP_INT *);
NodePtr mpz_mul(MP_INT *,MP_INT *,MP_INT *);
Int     mpz_mul_need(MP_INT *,MP_INT *);
NodePtr mpz_mod(MP_INT *,MP_INT *,MP_INT *);
Int     mpz_mod_need(MP_INT *,MP_INT *);
NodePtr mpz_and(MP_INT *,MP_INT *,MP_INT *);
Int     mpz_and_need(MP_INT *,MP_INT *);
NodePtr mpz_or(MP_INT *,MP_INT *,MP_INT *);
Int     mpz_or_need(MP_INT *,MP_INT *);

NodePtr mpz_abs(MP_INT *,MP_INT *);
Int     mpz_abs_need(MP_INT *);
NodePtr mpz_sgn(MP_INT *,MP_INT *);
Int     mpz_sgn_need(MP_INT *);
NodePtr mpz_neg(MP_INT *,MP_INT *);
Int     mpz_neg_need(MP_INT *);

int mpz_le(MP_INT *,MP_INT *);  /* bool = fun(src1,src2) */
int mpz_eq(MP_INT *,MP_INT *);

/* help functions */
mp_size _mpn_add(mp_ptr sum_ptr
                ,mp_srcptr add1_ptr, mp_size add1_size
                ,mp_srcptr add2_ptr, mp_size add2_size);

mp_size _mpn_sub (mp_ptr dif_ptr
                 ,mp_srcptr min_ptr, mp_size min_size
                ,mp_srcptr sub_ptr, mp_size sub_size);

mp_size _mpn_mul (mp_ptr prodp
                 ,mp_srcptr up, mp_size usize
                 ,mp_srcptr vp, mp_size vsize);

mp_size _mpn_div (mp_ptr quot_ptr
                 ,mp_ptr num_ptr, mp_size num_size
                 ,mp_srcptr den_ptr, mp_size den_size);

int _mpn_cmp (mp_srcptr op1_ptr, mp_size op1_size
             ,mp_srcptr op2_ptr, mp_size op2_size);

mp_limb _mpn_lshift (mp_ptr wp
                    ,mp_srcptr up, mp_size usize
                    ,unsigned long int cnt);

mp_size _mpn_rshift (mp_ptr wp
                    ,mp_srcptr up, mp_size usize
                    ,unsigned long int cnt);

#ifdef PROFILE
extern Retainer *findRetainer(Retainer *rinfo,int keep,char *function);
int member(char *function,Retainer *rinfo);
NodePtr remark(NodePtr *inode, int keep, char *newMember,int who);
void pushRemarkStack(int keep, char *function,NodePtr node,int who);
void remarkRest(void);
void remarkInit(void);
#endif

#endif

