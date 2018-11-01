#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "haskell2c.h"


/* foreign import hSeekC :: Handle -> Int -> Integer -> IO Int */
int hSeekC (FileDesc* f, int seekmode, NodePtr i)
{
  int sm;
  long offset;
  switch (seekmode) {
    case AbsoluteSeek: sm = SEEK_SET; break;
    case RelativeSeek: sm = SEEK_CUR; break;
    case SeekFromEnd:  sm = SEEK_END; break;
  }
  offset = GET_INT_VALUE(i);	/* naughty! */
  return fseek(f->fp,offset,sm);
}
