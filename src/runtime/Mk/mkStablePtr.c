
#include "mk.h"

NodePtr nhc_mkStablePtr(NodePtr a1)
{
  NodePtr n = C_ALLOC(1+EXTRA+1);
  n[0] = CONSTR(0,1,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = (Node)a1;
  return n;
}

NodePtr nhc_getStablePtr(NodePtr n)
{
  return (NodePtr) n[1+EXTRA];
}
