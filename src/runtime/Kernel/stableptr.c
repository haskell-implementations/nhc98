#ifdef BIG_ENDIAN
#undef BIG_ENDIAN
#endif

#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
/*#include "haskell2c.h"*/
#include "runtime.h"
#include "mark.h"
#include "stableptr.h"

extern void mark(NodePtr*);
extern void flip(NodePtr*);

/* Whenever we get a stable ptr, it is given a reference number and placed in 
 * a table, the StableTable, using makeStablePtr(NodePtr np).  (For
 * convenience of testing, we never use the zero index in the table.)
 *
 * Nodes are looked up in the table using derefStablePtr(StablePtr ref).
 * If it returns zero, the node is not in the table.
 */

static long STABLE_ALLOCSIZE = 1024;

static NodePtr *StableTable;

static long StableFree;
static long StableRefNr;

NodePtr derefStablePtr(StablePtr ref)
{
    return StableTable[(long)ref];
}

void mapStablePtrs(void (*f)(NodePtr*))
{
  long i;
  for(i=0; i < STABLE_ALLOCSIZE; i++) {
    if (StableTable[i]) {
      f(&StableTable[i]);
    }
  }    
}

StablePtr makeStablePtr(NodePtr np) 
{
    if (--StableFree == 0) {
        long i = STABLE_ALLOCSIZE;
        StableFree += STABLE_ALLOCSIZE;
        STABLE_ALLOCSIZE *= 2;
        if (!(StableTable = (NodePtr*)realloc((void*)StableTable,STABLE_ALLOCSIZE*sizeof(NodePtr*)))) {
	    fprintf(stderr, "Couldn't increase size of stable pointer table.\n");
	    exit(1);
        }
        for (; i<STABLE_ALLOCSIZE; i++)		/* initialise new portion */
            StableTable[i] = (NodePtr)0;
    }
    while (StableTable[StableRefNr]) {
        if (++StableRefNr == STABLE_ALLOCSIZE)
            StableRefNr = 1;
    }
    StableTable[StableRefNr] = np;
    return (StablePtr)StableRefNr;
}

void freeStablePtr(StablePtr i)
{
    StableTable[(long)i] = (NodePtr)0;
    StableFree++;
}

/* Called by the garbage collector */
void stableMark()
{
  mapStablePtrs(mark);
}

void stableFlip()
{
  mapStablePtrs(flip);
}

void stableInit() {
    long i;

    if (!(StableTable = (NodePtr*)malloc(STABLE_ALLOCSIZE*sizeof(NodePtr*)))) {
	fprintf(stderr, "Couldn't allocate stable pointer table.\n");
	exit(1);
    }
    for (i=0; i<STABLE_ALLOCSIZE; i++)
        StableTable[i] = (NodePtr)0;
    StableFree = STABLE_ALLOCSIZE-1;
    StableRefNr = 1;
    add_user_gc(stableMark,stableFlip);
}

void copyStablePtr(StablePtr i, StablePtr v) {
    StableTable[(long)i] = StableTable[(long)v];
}
