#include "haskell2c.h"


/* foreign import hCloseC :: Addr -> IO () */
void hCloseC (FileDesc *f)
{
  if (f->fp)
    fclose(f->fp);
  f->fp = 0;
  f->bm = -1;
}
