#include <haskell2c.h>

int hs_getPID ()
{ int i;
  i = (int)getpid();
  return i;
}
