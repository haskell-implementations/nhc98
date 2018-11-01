#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#include <errno.h>

#include "haskell2c.h"


int primEqHandlePosnC (fpos_t* n1, fpos_t* n2)
{
  int err;
  err = memcmp(n1,n2,sizeof(fpos_t));
  return !err;
}

int primEqHandleC (FileDesc* n1, FileDesc* n2)
{
  int err;
  err = strcmp(n1->path,n2->path);
  return !err;
}
