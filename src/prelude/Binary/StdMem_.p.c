#include <haskell2c.h>
#include "cLowBinary.h"
#include <stdlib.h>

void * hs_stdmem ()
{ BinHandle bh;
  
   NodePtr n;
   bh = (BinHandle)malloc(sizeof(BinState));       /* assume unfailing */
   bh->mode = RW; 
   bh->file = 0;
   n    = C_ALLOC(1+EXTRA);
   n[0] = CONSTRW(0,EXTRA);
   bh->loc.sp = stableInsert(n);
   bh->attrib.size = 0;
   bh->adjust.here = 0;
   opencache(bh);
  return nhc_mkCInt((int)allocForeignObj((void*)bh,(gcCval)finaliseBH,gcNow));
}
