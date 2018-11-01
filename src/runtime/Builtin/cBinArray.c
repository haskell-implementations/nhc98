#include "haskell2c.h"
#include <stdio.h>

typedef struct {
  int free;
  int write;
  unsigned *block;
} unboxedarray;

#define MAXARRAYS 10
unboxedarray table[MAXARRAYS];
static int tablenext = 0;

/* primAllocBA :: Int -> UnboxedArray */
C_HEADER(primAllocBA) {
  NodePtr nsize; int size;
  unboxedarray *ba;

  if (tablenext>=MAXARRAYS) { fprintf(stderr,"exceeded allowed binarrays\n"); }

  /* now collect argument */
  nsize = C_GETARG1(1);
  IND_REMOVE(nsize);
  size = GET_INT_VALUE(nsize);

/*ba = (unboxedarray*)malloc(sizeof(unboxedarray));*/
  ba = &table[tablenext];
  ba->block = (unsigned*)malloc(size*sizeof(unsigned));
  ba->write = 0;
  ba->free  = size;

  C_RETURN(nhc_mkInt((int)tablenext++));
}


/* primPutBA :: UnboxedArray -> Bin a -> Int */
C_HEADER(primPutBA) {
  NodePtr n; unsigned bin; short i;
  unboxedarray *ba;

  n = C_GETARG1(1);
  IND_REMOVE(n);
/*ba = (unboxedarray*)GET_INT_VALUE(n);*/
  i = (short)GET_INT_VALUE(n);
  ba = &table[i];

  n = C_GETARG1(2);
  IND_REMOVE(n);
  bin = (unsigned)GET_INT_VALUE(n);

  ba->block[ba->write] = bin;
  ba->free--;

  C_RETURN(nhc_mkInt(ba->write++));
}


/* primGetBA :: UnboxedArray -> Int -> Bin a */
C_HEADER(primGetBA) {
  NodePtr nptr; int n; short i;
  unboxedarray *ba;

  nptr = C_GETARG1(1);
  IND_REMOVE(nptr);
  i = (short)GET_INT_VALUE(nptr);
/*ba = (unboxedarray*)GET_INT_VALUE(nptr);*/
  ba = &table[i];

  nptr = C_GETARG1(2);
  IND_REMOVE(nptr);
  n = GET_INT_VALUE(nptr);

  C_RETURN(nhc_mkInt((int)ba->block[n]));
}


/* primGetBAFree :: UnboxedArray -> Int */
C_HEADER(primGetBAFree) {
  NodePtr nptr; short i;
  unboxedarray *ba;

  nptr = C_GETARG1(1);
  IND_REMOVE(nptr);
  i = (short)GET_INT_VALUE(nptr);
/*ba = (unboxedarray*)GET_INT_VALUE(nptr);*/
  ba = &table[i];

  C_RETURN(nhc_mkInt(ba->free));
}

/* primGetUnboxedArray :: Handle -> Int -> Int -> UnboxedArray */
C_HEADER(primGetUnboxedArray) {
  NodePtr nodeptr;
  FileDesc *h; int size; int wptr;
  unboxedarray *ba;

  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  UPDATE_PROFINFO(nodeptr)
  h = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));

  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  size = GET_INT_VALUE(nodeptr);

  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  wptr = GET_INT_VALUE(nodeptr);

  if (tablenext>=MAXARRAYS) { fprintf(stderr,"out of binarrays\n"); }

  ba = &table[tablenext];
  ba->block = (unsigned*)malloc(size*sizeof(unsigned));
  ba->write = wptr;
  ba->free  = size-wptr;

  fread((char*)(ba->block), sizeof(unsigned), wptr, h->fp);
  
  C_RETURN(nhc_mkInt((int)tablenext++));
}
