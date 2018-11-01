#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "haskell2c.h"


/* foreign import hGetBufferingC :: Handle -> IO BufferMode */
NodePtr hGetBufferingC (FileDesc *f)
{
  switch(f->bm) {
    case _IONBF: return nhc_mkNoBuffering(); break;
    case _IOLBF: return nhc_mkLineBuffering(); break;
    case _IOFBF:
        if(f->size>=0) return nhc_mkBlockBuffering(nhc_mkJust(nhc_mkInt(f->size)));
        else           return nhc_mkBlockBuffering(nhc_mkNothing());
        break;
    default: break;
  }
}
