#include <haskell2c.h>
#include "cLowBinary.h"

void hs_seekBin (BinHandle bh,unsigned int p)
{ 
   /* fprintf(stderr,"seekBinFile %d: ",p); */
   bh->cptr = p - forceCacheTo(bh,p)*8;
   /* fprintf(stderr,"bh->cptr=%d\n",bh->cptr); */
  return;
}
