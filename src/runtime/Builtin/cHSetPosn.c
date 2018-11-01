#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "haskell2c.h"


/* foreign import hSetPosnC :: Handle -> HandlePosn -> IO Int */
int hSetPosnC (FileDesc *f, fpos_t *p)
{
  return fsetpos(f->fp,p);
}
