#include "mk.h"

NodePtr nhc_mkTuple9(NodePtr a1,NodePtr a2,NodePtr a3,NodePtr a4,NodePtr a5,NodePtr a6,NodePtr a7,NodePtr a8,NodePtr a9)
{
  NodePtr n = C_ALLOC(1+EXTRA+9);
  n[0] = CONSTRP(9,0);
  INIT_PROFINFO(n,&dummyProfInfo)
  n[EXTRA+1] = (Node)a1;
  n[EXTRA+2] = (Node)a2;
  n[EXTRA+3] = (Node)a3;
  n[EXTRA+4] = (Node)a4;
  n[EXTRA+5] = (Node)a5;
  n[EXTRA+6] = (Node)a6;
  n[EXTRA+7] = (Node)a7;
  n[EXTRA+8] = (Node)a8;
  n[EXTRA+9] = (Node)a9;
  return n;
}
