#include <string.h>
#include "haskell2c.h"


char *
primGetProgName (void)
{
  return Argv[0];
}
