
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primEncodeFloat","Prelude.Float"};
#endif

C_HEADER(primEncodeFloat)
{
  int exp;
  float f;
  NodePtr nodeptr;
  C_CHECK(SIZE_FLOAT);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  exp = GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  f = sencode((MP_INT *)nodeptr,exp);
  nodeptr = C_ALLOC(SIZE_FLOAT);
  mk_float(nodeptr,f);
  INIT_PROFINFO(nodeptr,&nodeProfInfo)
  C_RETURN(nodeptr);
}

float primEncodeFloatC (NodePtr mantissa, int exp)
{
  return sencode((MP_INT *)mantissa,exp);
}
