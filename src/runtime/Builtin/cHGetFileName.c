#include "haskell2c.h"

/* foreign import hGetFileNameC :: Handle -> CString */
char* hGetFileNameC (FileDesc* f)
{
  return f->path;
}
