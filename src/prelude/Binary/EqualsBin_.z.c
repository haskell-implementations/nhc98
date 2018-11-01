#include <haskell2c.h>
#include "cLowBinary.h"

int hs_equalsBin (int size,BinHandle bhx,unsigned int x,BinHandle bhy,unsigned int y)
{ int retval;
  
   /* size of x and y are not necessarily byte-aligned */
   /* but bits of x and y are guaranteed byte-aligned at both ends */
   unsigned int bytes = (size%8 ? size/8+1 : size/8);
   int xptr, yptr;
   xptr = (x - forceCacheTo(bhx,x)) / 8;
   yptr = (y - forceCacheTo(bhy,y)) / 8;
   retval = 1;
   while (bytes--) {
     if (bhx->cache[xptr] != bhy->cache[yptr]) {
       retval = 0;
       break;
     }
     xptr++; yptr++;
     if (xptr==CACHESIZE) nextcache(bhx);
     if (yptr==CACHESIZE) nextcache(bhy);
   }
  return retval;
}
