/* cLowBinary.h  - Useful definitions for the new Binary functions.
 */

#include <sys/types.h>
#include <unistd.h>
 
#define RO 0
#define WO 1
#define RW 2

#define CACHESIZE 1024

#define rhs(size,byte) (byte & ~((unsigned char)0xff<<(size)))
#define lhs(size,byte) (byte & ((unsigned char)0xff<<(8-(size))))

#include "stableptr.h"
/*typedef int HaskellRef;*/

typedef struct {
  int mode;      	/* values: RO, WO, RW */
  int file; 		/* values: False==Memory, True==File */
  union {
    HaskellRef sp;	/* StablePtr to start of node */
    int fd;		/* unbuffered file descriptor */
  } loc;
  union {
    int here;		/* offset to first cached *byte* within node */
    int vptr;		/* virtual file position (relative to actual) */
  } adjust;
  union {
    int size;		/* amount of space allocated in node (in bytes) */
    int eof;		/* #bytes missing from end of cache when eof encountered */
  } attrib;
  unsigned char cache[CACHESIZE];
  int w;         /* cache written into?  (max byteno from start of cache) */
  int cptr;      /* bit offset in cache */
  int highwater; /* first unused bit beyond end of BinHandle */
} BinState, *BinHandle;


#define vtell(bh) ((8 * (lseek(bh->loc.fd,0,SEEK_CUR) + bh->adjust.vptr)) \
			+ bh->cptr)
#define vsync(bh)   if (bh->adjust.vptr) { \
				/* relative seek */ \
                      lseek(bh->loc.fd,bh->adjust.vptr,SEEK_CUR); \
                      bh->adjust.vptr = 0; \
                    }
#define mtell(bh) ((8 * bh->adjust.here) + bh->cptr)

extern void clearcache   (BinHandle);
extern void vread        (BinHandle);
extern void vwrite       (BinHandle);
extern void mread        (BinHandle);
extern void mwrite       (BinHandle);
extern void nextcache    (BinHandle);
extern void opencache    (BinHandle);
extern void closecache   (BinHandle);
extern int  forceCacheTo (BinHandle,int);
extern void memcheck     (BinHandle,int);
extern void finaliseBH   (BinHandle);
extern void preFinaliseBH(BinHandle);

#define BUFFER 100
#include "cinterface.h"

#ifndef BUFSIZ
#define BUFSIZ 1024
#endif
