#include <haskell2c.h>
#include "cLowBinary.h"

int hs_endBin (BinHandle bh)
{ 
  return bh->highwater;
}
