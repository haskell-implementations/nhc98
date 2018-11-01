#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "haskell2c.h"


/* foreign import primHFileSizeC :: Handle -> IO Integer */
NodePtr primHFileSizeC (FileDesc* f)
{
  struct stat buf;
  int err;
  err = fstat(fileno(f->fp),&buf);
  if (err)
    return nhc_mkSmallIntegerU(-1);
  else
    return nhc_mkSmallIntegerU(buf.st_size);
}
