#include "mk.h"

/* This implementation is believed incorrect.  On some occasions after
 * a garbage collection, the first byte pointed to by the C-ptr is
 * mysteriously incremented.  I distrust the CONSTRC(0,1,1) thing:
 * it is used only here.  In fact, I deprecate the use of mkCInt()
 * altogether - it seems that mkInt() is perfectly good for storing
 * a C-ptr in Haskell-land such that it can be recovered intact.
 */

NodePtr nhc_mkCInt(Int i)
{
  NodePtr n;
  n = C_ALLOC(1+EXTRA+1);
  n[0] = CONSTRC(0,1,1);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = i;
  return n;
}
