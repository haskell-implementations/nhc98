
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primIntegerFromInt","Prelude.Integer"};
#endif

C_HEADER(primIntegerFromInt)
{
  Int i;
  NodePtr nodeptr;
  C_CHECK(SIZE_INT);
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  i = GET_INT_VALUE(nodeptr);
  if(i==0) {
    nodeptr = C_ALLOC(SIZE_ENUM);
    *nodeptr = CONSTRW(0,0);
    INIT_PROFINFO(nodeptr,&nodeProfInfo)
  } else {
    nodeptr = C_ALLOC(SIZE_INT);
    if (i<0) {
      nodeptr[0] = CONSTRW(1,1);
      INIT_PROFINFO(nodeptr,&nodeProfInfo)
      nodeptr[1+EXTRA] = -i;
    } else {
      nodeptr[0] = CONSTRW(1,0);
      INIT_PROFINFO(nodeptr,&nodeProfInfo)
      nodeptr[1+EXTRA] = i;
    }
  }
  C_RETURN(nodeptr);
}

NodePtr primIntegerFromIntC (int i)
{
  NodePtr result;
  C_CHECK(SIZE_INT);
  if(i==0) {
    result = C_ALLOC(SIZE_ENUM);
    *result = CONSTRW(0,0);
    INIT_PROFINFO(result,&nodeProfInfo)
  } else {
    result = C_ALLOC(SIZE_INT);
    if (i<0) {
      result[0] = CONSTRW(1,1);
      INIT_PROFINFO(result,&nodeProfInfo)
      result[1+EXTRA] = -i;
    } else {
      result[0] = CONSTRW(1,0);
      INIT_PROFINFO(result,&nodeProfInfo)
      result[1+EXTRA] = i;
    }
  }
  return (result);
}


