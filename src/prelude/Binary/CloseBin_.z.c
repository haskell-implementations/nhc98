#include <haskell2c.h>
#include "cLowBinary.h"

void hs_closeBin (BinHandle bh)
{ preFinaliseBH(bh);
  return;
}
