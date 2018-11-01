#include "mk.h"
#include "mutlib.h"

NodePtr nhc_mkFloat(float f)
{
  NodePtr n;
  n = C_ALLOC(SIZE_FLOAT);
  INIT_PROFINFO(n,&dummyProfInfo)
  mk_float(n,f);
  return n;
}
