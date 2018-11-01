#include <haskell2c.h>
#include <time.h>

int hs_getClockTime ()
{ time_t c;
  c = time(0);
  return c;
}
