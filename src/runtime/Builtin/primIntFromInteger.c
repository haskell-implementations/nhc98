
#include "haskell2c.h"

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primIntFromInteger","Prelude.Int"};
#endif

C_HEADER(primIntFromInteger)
{
  Int tag,size;
  NodePtr nodeptr,res;
  C_CHECK(SIZE_INT);
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  tag = *nodeptr;
  size = CONINFO_LARGESIZES(tag);
  if(!size) {
    res = GET_INT(0);
  } else {
    Int value = GET_INT_VALUE(nodeptr);
    res = C_ALLOC(SIZE_INT);
    if(CONINFO_LARGEEXTRA(tag))
      value = -value;
    MK_INT(res,value);
    INIT_PROFINFO(res,&nodeProfInfo)
  }
  C_RETURN(res);
}

int primIntFromIntegerC (NodePtr integer)
{
  Int tag,size,result;
  tag = *integer;
  size = CONINFO_LARGESIZES(tag);
  if(!size) {
    result = 0;
  } else {
    result = GET_INT_VALUE(integer);
    if(CONINFO_LARGEEXTRA(tag))
      result = -result;
  }
  return (result);
}
