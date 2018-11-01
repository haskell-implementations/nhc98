#include <string.h>
#include <stdlib.h>
#include "haskell2c.h"
#include <errno.h>

char *
primGetEnv (char* sym)
{
  char* val;
  val = getenv(sym);
  if (!val) errno=ENOENT;
  return val;
}
