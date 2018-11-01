#include <stdio.h>
#include <errno.h>
#include "haskell2c.h"

/* cFileTell :: Handle -> Int       */
C_HEADER(cFileTell) {
  int n;
  FileDesc *a;
  NodePtr nodeptr;

  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  UPDATE_PROFINFO(nodeptr)
  a = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));

  n = (int) ftell(a->fp);
  C_RETURN(nhc_mkInt(n));
}


/* cFileSeek :: Handle -> Int -> Int */
C_HEADER(cFileSeek) {
  int n, err;
  FileDesc *a;
  NodePtr nodeptr;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  UPDATE_PROFINFO(nodeptr)
  a = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));

  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  n = GET_INT_VALUE(nodeptr);

  err = fseek(a->fp, (long)n, 0);
  C_RETURN(nhc_mkInt(err));
}
