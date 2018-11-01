#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "haskell2c.h"


/* foreign import hSetBufferingC :: Handle -> BufferMode -> IO Int */
int hSetBufferingC (FileDesc*f, NodePtr bufm)
{
  int bm,size = BUFSIZ;
  int err;

  switch(GET_CONSTR(bufm)) {
    case NoBuffering:    bm = _IONBF; break;
    case LineBuffering:  bm = _IOLBF; break;
    case BlockBuffering:
      { NodePtr maybe = GET_POINTER_ARG1(bufm,1);
        bm = _IOFBF;
        IND_REMOVE(maybe);
        switch(GET_CONSTR(maybe)) {
          case Just: maybe = GET_POINTER_ARG1(maybe,1);
                     IND_REMOVE(maybe);
                     size = GET_INT_VALUE(maybe);
        }
      } break;
  }
  err = setvbuf(f->fp,0,bm,size);
  if (err) {
    return err;
  } else {
    f->bm = bm;
    f->size = size;
    return 0;
  }
}
