#include "mk.h"

NodePtr nhc_mkInt(Int i)
{
  NodePtr n;
  n = C_ALLOC(1+EXTRA+1);
  n[0] = CONSTRW(1,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = i;
  return n;
}

NodePtr nhc_mkInt64(long long i)
{
  NodePtr n;
  union { long long wide;
          int       norm[2];
        } x;
  x.wide = i;
  n = C_ALLOC(1+EXTRA+2);
  n[0] = CONSTRW(2,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = x.norm[0];
  n[EXTRA+2] = x.norm[1];
  return n;
}

long long nhc_get_64bit_value (NodePtr n)
{
  union { long long wide;
          int       norm[2];
        } x;
  x.norm[0] = n[EXTRA+1];
  x.norm[1] = n[EXTRA+2];
  return x.wide;
}
