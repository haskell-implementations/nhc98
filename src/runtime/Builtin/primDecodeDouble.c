
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primDecodeDouble","Prelude.Integer"};
#endif

C_HEADER(primDecodeDouble)
{
  int exp;
  double d;
  NodePtr nodeptr,manptr;

  C_CHECK(1+SIZE_DOUBLE+nhc_sizeInt+SIZE_TUPLE(2));
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  d = get_double_value(nodeptr);

  manptr = C_HP;
  exp = ddecode(d,(MP_INT *)manptr);
  INIT_PROFINFO(manptr,&nodeProfInfo)
  C_ADDHP(1+EXTRA+CONINFO_LARGESIZES(GET_CONINFO(manptr)));

  C_RETURN(nhc_mkTuple2(manptr,nhc_mkInt(exp)));
}

NodePtr primDecodeDoubleMantissa (double d)
{
  int exp;
  NodePtr manptr;

  C_CHECK(1+SIZE_DOUBLE);

  manptr = C_HP;
  exp = ddecode(d,(MP_INT *)manptr);
  INIT_PROFINFO(manptr,&nodeProfInfo)
  C_ADDHP(1+EXTRA+CONINFO_LARGESIZES(GET_CONINFO(manptr)));

  return manptr;
}

int primDecodeDoubleExponent (double d)
{
  int exp;
  NodePtr manptr;

  manptr = C_HP;
  exp = ddecode(d,(MP_INT *)manptr);

  return exp;
}
