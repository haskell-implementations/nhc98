#include <haskell2c.h>
#include "cLowBinary.h"

int hs_getBits (BinHandle bh,int width)
{ unsigned value;
  
   value = 0;
   while (width > 0) {
     int byte  = bh->cptr / 8;
     int avail = 8 - (bh->cptr % 8);
     if (width >= avail) {
       value = (value<<avail)
             | rhs(avail,bh->cache[byte]);
       bh->cptr += avail;
       width    -= avail;
       if ((byte+1) == CACHESIZE) nextcache(bh);
     } else {
       value = (value<<width)
             | (rhs(avail,bh->cache[byte]) >> (avail-width));
       bh->cptr += width;
       width     = 0;
     }
   }
  return value;
}
