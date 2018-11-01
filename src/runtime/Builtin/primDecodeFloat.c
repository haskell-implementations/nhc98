
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primDecodeFloat","Prelude.Integer"};
#endif

C_HEADER(primDecodeFloat)
{
  int exp;
  float f;
  NodePtr nodeptr,manptr;
  C_CHECK(1+SIZE_FLOAT+nhc_sizeInt+SIZE_TUPLE(2));
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  f = get_float_value(nodeptr);
  manptr = C_HP;
  exp = sdecode(f,(MP_INT *)manptr);
  INIT_PROFINFO(manptr,&nodeProfInfo)
  C_ADDHP(1+EXTRA+CONINFO_LARGESIZES(GET_CONINFO(manptr)));

  C_RETURN(nhc_mkTuple2(manptr,nhc_mkInt(exp)));
}

NodePtr primDecodeFloatMantissa (float f)
{
  int exp;
  NodePtr manptr;

  C_CHECK(1+SIZE_FLOAT);

  manptr = C_HP;
  exp = sdecode(f,(MP_INT *)manptr);
  INIT_PROFINFO(manptr,&nodeProfInfo)
  C_ADDHP(1+EXTRA+CONINFO_LARGESIZES(GET_CONINFO(manptr)));

  return manptr;
}

int primDecodeFloatExponent (float f)
{
  int exp;
  NodePtr manptr;

  manptr = C_HP;
  exp = sdecode(f,(MP_INT *)manptr);

  return exp;
}
