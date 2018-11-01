#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "haskell2c.h"


/* foreign import hGetPosnC :: Handle -> IO Addr */
void* hGetPosnC(FileDesc* f)
{
  fpos_t *p;
  int err;
  p = (fpos_t*)malloc(sizeof(fpos_t));
  err = fgetpos(f->fp,p);
  if (err) {
    free(p);
    return (void*)0;
  } else {
    return p;
  }
}
