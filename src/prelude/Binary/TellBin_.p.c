#include <haskell2c.h>
#include "cLowBinary.h"

int hs_tellBin (BinHandle bh)
{ unsigned int p;
  p = (bh->file ? vtell(bh) : mtell(bh));
  return p;
}
