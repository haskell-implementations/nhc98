
#include <errno.h>

#include "haskell2c.h"

/* cProfile primitive 1 :: CString -> () */

C_HEADER(cProfile)
{
#ifdef PROFILE
  NodePtr msgptr;
  char *msg;
  msgptr = C_GETARG1(1);
  IND_REMOVE(msgptr);
  msg = nhc_getPackedString(msgptr);
  do_comment(msg);
#endif
  C_RETURN(nhc_mkUnit());
}
