#include <haskell2c.h>
#include "cLowBinary.h"
#include <stdlib.h>
#define LT 0
#define EQ 1
#define GT 2

int hs_compareBin (int sizex,int sizey,BinHandle bhx,unsigned int x,BinHandle bhy,unsigned int y)
{ int retval;
  
   /* size of x and y are not necessarily byte-aligned */
   /* but bits of x and y are guaranteed byte-aligned at both ends */
   int bytex = (sizex%8 ? (sizex/8)+1 : sizex/8);
   int bytey = (sizey%8 ? (sizey/8)+1 : sizey/8);
   int xptr, yptr;
   if ((bhx->mode != RO) || (bhy->mode != RO)) {
     fprintf(stderr,"Binary.compareBin: BinHandle is not Read-Only.");
     exit(1);
   }
   xptr = (x - forceCacheTo(bhx,x)) / 8;
   yptr = (y - forceCacheTo(bhy,y)) / 8;
   /* fprintf(stderr,"compareBin: sizex=%d sizey=%d xoffset=%d yoffset=%d\n",
                   sizex,sizey,x,y); */
   retval = EQ;
   while (bytex-- && bytey--) {
     if (bhx->cache[xptr] != bhy->cache[yptr]) {
       if (bhx->cache[xptr] < bhy->cache[yptr]) {
         retval = LT;
       } else {
         retval = GT;
       }
       break;
     }
     xptr++; yptr++;
     if (xptr==CACHESIZE) nextcache(bhx);
     if (yptr==CACHESIZE) nextcache(bhy);
   }
  return retval;
}
