#include "haskell2c.h"
#include "HsFFI.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primIntegerToWord64","Prelude.Word64"};
#endif

HsWord64 primIntegerToWord64 (NodePtr integer)
{
  Int tag,size;
  HsWord64 result;
  tag = *integer;
  size = CONINFO_LARGESIZEU(tag);
  if(!size) {
    result = 0;
  } else if (size==1) {
    result = (HsWord64)integer[1+EXTRA];
  } else if (size==2) {
    result = (HsWord64)integer[1+EXTRA]+((HsWord64)integer[2+EXTRA]<<32);
  } else {
     fprintf(stderr,"Warning: fromInteger truncates value to fit Word64\n");
  }
  return (result);
}
