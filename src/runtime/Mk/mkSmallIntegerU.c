#include "mk.h"

NodePtr nhc_mkSmallIntegerU(Int i)
{
  NodePtr n;

  if(i) {
      n = C_ALLOC(1+EXTRA+1);
      n[0] = CONSTRW(1,0);
      INIT_PROFINFO(n,&dummyProfInfo)
      n[EXTRA+1] = i;
    } else  {
      n = C_ALLOC(1+EXTRA);
      n[0] = CONSTRW(0,0);
      INIT_PROFINFO(n,&dummyProfInfo)
    }
  return n;
}
