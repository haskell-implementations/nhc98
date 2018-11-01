#include <haskell2c.h>
#include "cLowBinary.h"

void hs_alignBin (BinHandle bh)
{ if (bh->cptr / 8 > CACHESIZE-1) {
        nextcache(bh);
      } else {
        int m = bh->cptr % 8;
        if (m) bh->cptr += 8 - m;
      }
  return;
}
