#include <errno.h>
#include "haskell2c.h"


/* foreign import hIsEOF :: Handle -> IO Bool */
int hIsEOF (FileDesc* f)
{
  int err, c;
  c = fgetc(f->fp);	/* Horrible but true: feof does not truly test for */
  err = feof(f->fp);	/* end of file!  The EOF flag must be set by a     */
  ungetc(c,f->fp);	/* read operation, hence the getc -> ungetc pair.  */
  return err;
}
