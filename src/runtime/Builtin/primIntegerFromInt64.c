#include "haskell2c.h"
#include "HsFFI.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primIntegerFromInt64","Prelude.Integer"};
#endif

NodePtr primIntegerFromInt64 (HsInt64 i)
{
  NodePtr result;
  C_CHECK(SIZE_INT64);
  if(i==0) {
    result = C_ALLOC(SIZE_ENUM);
    *result = CONSTRW(0,0);
    INIT_PROFINFO(result,&nodeProfInfo)
  } else if ((HS_INT32_MIN<=i) && (i<=HS_INT32_MAX)) {
    result = C_ALLOC(SIZE_INT);
    if (i<0) {
      result[0] = CONSTRW(1,1);
      INIT_PROFINFO(result,&nodeProfInfo)
      result[1+EXTRA] = (int)(-i);
    } else {
      result[0] = CONSTRW(1,0);
      INIT_PROFINFO(result,&nodeProfInfo)
      result[1+EXTRA] = (int)i;
    }
  } else {
    result = C_ALLOC(SIZE_INT64);
    if (i<0) {
      result[0] = CONSTRW(2,1);
      INIT_PROFINFO(result,&nodeProfInfo)
      result[1+EXTRA] = (int)((-i)&0x00000000ffffffffLL);
      result[2+EXTRA] = (int)(((-i)&0xffffffff00000000LL)>>32);
    } else {
      result[0] = CONSTRW(2,0);
      INIT_PROFINFO(result,&nodeProfInfo)
      result[1+EXTRA] = (int)(i&0x00000000ffffffffLL);
      result[2+EXTRA] = (int)((i&0xffffffff00000000LL)>>32);
    }
  }
  return (result);
}


