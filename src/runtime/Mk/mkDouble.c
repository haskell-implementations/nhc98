#include "mk.h"
#include "mutlib.h"

NodePtr nhc_mkDouble(double d)
{
  NodePtr n;
  n = C_ALLOC(SIZE_DOUBLE);
  INIT_PROFINFO(n,&dummyProfInfo)
  mk_double(n,d);
  return n;
}
