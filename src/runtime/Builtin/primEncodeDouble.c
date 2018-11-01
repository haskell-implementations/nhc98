
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primEncodeDouble","Prelude.Double"};
#endif

C_HEADER(primEncodeDouble)
{
  int exp;
  double d;
  NodePtr nodeptr;
  C_CHECK(SIZE_DOUBLE);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  exp = GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  d = dencode((MP_INT *)nodeptr,exp);
  nodeptr = C_ALLOC(SIZE_DOUBLE);
  mk_double(nodeptr,d);
  INIT_PROFINFO(nodeptr,&nodeProfInfo)
  C_RETURN(nodeptr);
}

double primEncodeDoubleC (NodePtr mantissa, int exp)
{
  return dencode((MP_INT *)mantissa,exp);
}
