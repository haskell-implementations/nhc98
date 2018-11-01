#include <haskell2c.h>
#include "cLowBinary.h"

int hs_isEOFBin (BinHandle bh)
{ int b;
  
   if (bh->file)
     b = bh->cptr >= 8*(CACHESIZE-bh->attrib.eof);
   else
     b = bh->adjust.here + (bh->cptr/8) >= bh->attrib.size;
  return b;
}
