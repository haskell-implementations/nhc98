#include <haskell2c.h>
#include "cLowBinary.h"

int hs_sameBH (BinHandle sbh,BinHandle dbh)
{ int b;
  
   b = (sbh==dbh) ||
       ((sbh->file == dbh->file) && (sbh->loc.fd==dbh->loc.fd));
  return b;
}
