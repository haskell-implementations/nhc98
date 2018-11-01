
#ifndef _MARK_H

#if defined(__sun__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(_AIX)
#    include <inttypes.h>
#else
#    include <stdint.h>
#endif

#ifndef INT64_MIN
#define int64_t	long int
#endif			/* default down to 32 bits if 64 not available */

/* #define QADDR 1 */
#define GCEXTRA 2+EXTRA

extern NodePtr hpLimit;
extern NodePtr hpLowLimit;
extern NodePtr hpBase;
extern NodePtr bitTable;

typedef struct CAFINFO {
   NodePtr  nodeptr;
WHEN_PROFILE(Info info;)
   struct CAFINFO *next;
   } CafInfo, *CafPtr;

extern CafPtr cafptr;

#ifdef QADDR
extern UInt qAddr;

#define Q(v,str)   if(qAddr && (qAddr == (UInt)(v))) fprintf(stderr,"[Q %8x %s]\n",qAddr,str);
#define SQ(str)   if(debug && qAddr) fprintf(stderr,"[SQ %8x:%8x %s]\n",qAddr,*(UInt*)qAddr,str);
#define EDB(x)  x
#else
#define Q(v,s)  /* Q */
#define SQ(s)   /* SQ */
#define EDB(x)  /* EDB */
#endif

extern int bellGc;
extern timer gcTime;
extern timer totalTime;
extern int64_t hpTotal;
extern int64_t hpMoved;
extern Int hpMaxSurvive;
extern int nogc;

/*    hpStart                                                                 hpEnd */
/*          hpBase                                                                  */
/*    hpLowLimit                          hpLimit    bitTable                       */
/*                    hp                                                            */

#ifdef PROFILE
extern FILE *proFILE;
extern int profile;
extern double profileInterval;
extern int profileOutermost;
extern volatile NodePtr profileHpLimit;
extern NodePtr saveHpLimit;
#endif

#define OUTSIDE(n) ((n <  hpLowLimit) || (n >= bitTable))
#define INSIDE(n)  ((n >= hpLowLimit) && (n <  bitTable))
#define ONSTACK(n)  ((n >= (NodePtr)spEnd) && (n <  (NodePtr)spStart))

UInt marked(NodePtr node);
UInt ifmarked(NodePtr node);
void markClear(void);
void markCaf(void);
void markStack(NodePtr *sp);
#endif
