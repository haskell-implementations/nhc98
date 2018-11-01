
#include "haskell2c.h"

/* unpackPS :: Prelude.PackedString -> [Prelude.Char] */

C_HEADER(unpackPS)
{
  int length;
  NodePtr nodeptr,prevptr;
  Coninfo cinfo;
  char *srcptr;

  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  cinfo =  GET_CONINFO(nodeptr);
  length = CONINFO_LARGESIZES(cinfo) * sizeof(Node) - CONINFO_LARGEEXTRA(cinfo);

  C_CHECK(length * nhc_sizeCons);

  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  srcptr = (char*)&nodeptr[1+EXTRA];

  prevptr = (NodePtr)&nodeptr;
  while(length--) {
    int c = *srcptr++;
    *prevptr = (Node)nhc_mkCons(nhc_mkChar(c),0);
    prevptr = &((NodePtr)(*prevptr))[EXTRA+2];
  }
  *prevptr = (Node)nhc_mkNil();

  C_RETURN(nodeptr);
}	

/* unpackPSC ::  E PackedString -> [Char] */
NodePtr unpackPSC (NodePtr e)
{
  int length;
  NodePtr nodeptr,prevptr;
  Coninfo cinfo;
  char *srcptr;

  /* outer constructor is required only to fool FFI not to take string apart. */
  nodeptr = GET_POINTER_ARG1(e,1);
  IND_REMOVE(nodeptr);
  cinfo =  GET_CONINFO(nodeptr);
  length = CONINFO_LARGESIZES(cinfo) * sizeof(Node) - CONINFO_LARGEEXTRA(cinfo);

  C_CHECK(length * nhc_sizeCons);

  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  srcptr = (char*)&nodeptr[1+EXTRA];

  prevptr = (NodePtr)&nodeptr;
  while(length--) {
    int c = *srcptr++;
    *prevptr = (Node)nhc_mkCons(nhc_mkChar(c),0);
    prevptr = &((NodePtr)(*prevptr))[EXTRA+2];
  }
  *prevptr = (Node)nhc_mkNil();

  return (nodeptr);
}
