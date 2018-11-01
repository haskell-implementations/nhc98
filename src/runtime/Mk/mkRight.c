#include "mk.h"

NodePtr nhc_mkRight(NodePtr a1)
{
  NodePtr n = C_ALLOC(1+EXTRA+1);
  n[0] = CONSTR(1,1,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = (Node)a1;
  return n;
}

