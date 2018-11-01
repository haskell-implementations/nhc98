#include <haskell2c.h>
#include "cLowBinary.h"

void hs_skipBits (BinHandle bh,int width)
{ 
   while (width > 0) {
     int avail = (CACHESIZE*8) - bh->cptr;
     if (width >= avail) {
       width    -= avail;
       nextcache(bh);
     } else {
       bh->cptr += width;
       width     = 0;
     }
   }
  return;
}
