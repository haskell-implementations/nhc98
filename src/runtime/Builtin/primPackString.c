#include <string.h>
#include "haskell2c.h"

/* primPackString :: Int -> [Char] -> PackedString */

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primPackString","PackedString.PackedString"};
#endif

C_HEADER(primPackString)
{
  int size,extra,length;
  NodePtr res,src;
  char *dstptr;

  res = C_GETARG1(1);
  IND_REMOVE(res);
  length = GET_INT_VALUE(res);

  size = (length + sizeof(Node) -1) / sizeof(Node);
  extra = size * sizeof(Node) - length;

  res = C_ALLOC(1+EXTRA+size);
  res[0] = CONSTRW(size,extra);
  INIT_PROFINFO(res,&nodeProfInfo)
  dstptr = (char*)&res[1+EXTRA];

  src = C_GETARG1(2);
  while(length--) {
    NodePtr chr;
    IND_REMOVE(src);
    chr = GET_POINTER_ARG1(src,1);
    IND_REMOVE(chr);
    *dstptr++ = GET_CHAR_VALUE(chr);
    src = GET_POINTER_ARG1(src,2);
  }
  C_RETURN(res);
}	





