#include "mk.h"

NodePtr nhc_mkTuple6(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6)
{
  NodePtr n = C_ALLOC(1+EXTRA+6);
  n[0] = CONSTRP(6,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = (Node)a1;
  n[EXTRA+2] = (Node)a2;
  n[EXTRA+3] = (Node)a3;
  n[EXTRA+4] = (Node)a4;
  n[EXTRA+5] = (Node)a5;
  n[EXTRA+6] = (Node)a6;
  return n;
}
