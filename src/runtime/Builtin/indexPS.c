#include <stdlib.h>
#include "haskell2c.h"

/* indexPS :: Prelude.PackedString -> Prelude.Int -> Prelude.Char */

C_HEADER(indexPS)
{
  int length;
  int index;
  NodePtr nodeptr;
  Coninfo cinfo;
  char *srcptr;

  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  index = GET_INT_VALUE(nodeptr);

  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  cinfo =  GET_CONINFO(nodeptr);
  length = CONINFO_LARGESIZES(cinfo) * sizeof(Node) - CONINFO_LARGEEXTRA(cinfo);

  if(index < 0 || index >= length) {
    fprintf(stderr,"PackedString.indexPS: Trying to extract the %d character from a string with length %d.\n",index,length);
    exit(-1);
  }

  srcptr = (char*)&nodeptr[1+EXTRA];

  C_RETURN(GET_CHAR(srcptr[index]));
}	
