
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primFloatFromInteger","Prelude.Float"};
#endif

C_HEADER(primFloatFromInteger)
{
  NodePtr nodeptr,ret;
  C_CHECK(SIZE_FLOAT);
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  ret = C_ALLOC(SIZE_FLOAT);
  mk_float(ret,sencode((MP_INT*) nodeptr, 0));
  INIT_PROFINFO(ret,&nodeProfInfo)
  C_RETURN(ret);
}

float primFloatFromIntegerC (NodePtr mantissa)
{
  return sencode((MP_INT*)mantissa, 0);
}
