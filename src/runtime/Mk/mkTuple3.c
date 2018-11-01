#include "mk.h"

NodePtr nhc_mkTuple3(NodePtr a1,NodePtr a2,NodePtr a3)
{
  NodePtr n = C_ALLOC(1+EXTRA+3);
  n[0] = CONSTRP(3,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = (Node)a1;
  n[EXTRA+2] = (Node)a2;
  n[EXTRA+3] = (Node)a3;
  return n;
}
