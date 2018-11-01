#include "haskell2c.h"
#include "HsFFI.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primIntegerToInt64","Prelude.Int64"};
#endif

HsInt64 primIntegerToInt64 (NodePtr integer)
{
  Int tag,size;
  HsInt64 result;
  tag = *integer;
  size = CONINFO_LARGESIZES(tag);
  if(!size) {
    result = 0;
  } else if (size==1) {
    result = (HsInt64)GET_INT_VALUE(integer);
    if(CONINFO_LARGEEXTRA(tag))
      result = -result;
  } else if (size==2) {
    result = (HsInt64)integer[1+EXTRA]+((HsInt64)integer[2+EXTRA]<<32);
    if(CONINFO_LARGEEXTRA(tag))
      result = -result;
  } else {
     fprintf(stderr,"Warning: fromInteger truncates value to fit Int64\n");
  }
  return (result);
}
