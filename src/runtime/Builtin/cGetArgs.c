#include <string.h>
#include "haskell2c.h"


char *
cGetArg (void)
{
  static int i=1;
  if (i<Argc) return Argv[i++];
  else return (char*)0;
}
