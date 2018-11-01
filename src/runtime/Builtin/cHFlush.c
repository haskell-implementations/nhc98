#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "haskell2c.h"


/* foreign import hFlushC :: Handle -> Int */
int hFlushC (FileDesc* a)
{
  return fflush(a->fp);
}
