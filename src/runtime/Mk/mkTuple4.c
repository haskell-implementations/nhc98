#include "mk.h"

NodePtr nhc_mkTuple4(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4)
{
  NodePtr n = C_ALLOC(1+EXTRA+4);
  n[0] = CONSTRP(4,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = (Node)a1;
  n[EXTRA+2] = (Node)a2;
  n[EXTRA+3] = (Node)a3;
  n[EXTRA+4] = (Node)a4;
  return n;
}
