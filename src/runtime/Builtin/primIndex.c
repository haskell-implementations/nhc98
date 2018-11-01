#include <string.h>
#include "haskell2c.h"

/* primIndex :: Vector a -> Int -> a */
/* The index must be evaluated before calling cPrimVector */
/* Index must be in range */

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primIndex","Builtin.Vector"};
#endif

C_HEADER(primIndex)
{
  int i;
  NodePtr res;
  NodePtr dstptr;

  res = C_GETARG1(2);
  IND_REMOVE(res);
  UPDATE_PROFINFO(res)
  i = GET_INT_VALUE(res);

  res = C_GETARG1(1);
  IND_REMOVE(res);
  UPDATE_PROFINFO(res)
  dstptr = (NodePtr)&res[1+EXTRA];

  C_RETURN((NodePtr)dstptr[i]);
}	


/* foreign import primVectorIndexC :: Vector a -> Int -> a */
NodePtr primVectorIndexC (NodePtr vec, int i)
{
  /* fprintf(stderr,"vectorIndex: idx=%d\n",i); */
  return (NodePtr)vec[1+EXTRA+i];
}


