#include <haskell2c.h>
#include <time.h>


int hs_clock ()
{ clock_t i;
  
   i = clock();
  return i;
}
