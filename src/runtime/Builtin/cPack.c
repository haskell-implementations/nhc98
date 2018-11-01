#include "haskell2c.h"
#ifdef PROFILE
static SInfo mkpackProfInfo = {"Pack","Pack.mkPacked","Prelude.Packed a"};
static SInfo rdpackProfInfo = {"Pack","Pack.rdPacked","Prelude.Int"};
static SInfo szpackProfInfo = {"Pack","Pack.sizePacked","Prelude.Int"};
static SInfo jnpackProfInfo = {"Pack","Pack.joinPacked","Prelude.Packed a"};
static SInfo offsetProfInfo = {"Pack","Pack.offset","Prelude.Packed a"};
#endif

/*#define WORDSIZE  32 /*(sizeof(unsigned)*8)*/
#define mask(x)   (unsigned)((unsigned)(0xffffffff)>>(WORDSIZE-x))

/* -------------------------------------------------------------------
   ------------------------------------------------------------------- */

/* mkPacked :: Int -> Int -> Packed a */
C_HEADER(mkPacked) {
  unsigned size, tmp, value;
  NodePtr nodeptr, nretVal;

  /* collect arguments */
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  size = (unsigned)GET_INT_VALUE(nodeptr);
 
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  value = (unsigned)GET_INT_VALUE(nodeptr);
 
  size  &= mask(16);                 /* truncate size to fit storage field */
  value &= mask((size>32?32:size));  /* truncate value to required size */

  /* construct return value */
  if (size<=8) {
      value     |= (size << 8);
      nretVal    = C_ALLOC(1+EXTRA);
      nretVal[0] = CONSTR(value,0,0);
  } else {
      tmp = (size+31)/32;
      nretVal          = C_ALLOC(1+EXTRA+2);
      nretVal[0]       = CONSTR(0,2,1);
      nretVal[1+EXTRA] = C_ALLOC(1+EXTRA+tmp);
      nretVal[1+EXTRA][0] = CONSTRW(tmp,0)
      for (int i=0; i<tmp; i++)
          nretVal[1+EXTRA][1+i+EXTRA] = 0;
      nretVal[1+EXTRA][tmp+EXTRA] |= value;
      nretVal[2+EXTRA] = ((32-(size%32)) << 16) | size;
  }
  INIT_PROFINFO(nretVal,&mkpackProfInfo);
  C_RETURN(nretVal);
}
 

/* rdPacked :: Int -> Packed a -> Int */
C_HEADER(rdPacked) {
  unsigned start, size, tmp, tmpsize, tmpval, wordpos, bitpos;
  unsigned value=0;
  NodePtr nodeptr, nretVal;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  size = (unsigned)GET_INT_VALUE(nodeptr);

  if (size==0) { /*fprintf (stderr,"rdPacked 0\n");*/
    value = 0;
  } else {
    nodeptr = C_GETARG1(2);
    IND_REMOVE(nodeptr);

    if (CONINFO_SIZE(GET_CONINFO(nodeptr)) == 1+EXTRA) {
      tmp = GET_CONSTR(nodeptr);
      tmpsize = tmp >> 8;
      tmpval  = tmp & mask(8);
      if (size>tmpsize) size=tmpsize;
      value = tmpval >> (tmpsize-size);
    } else {
      NodePtr ptr = GET_POINTER_ARG1(nodeptr,1);
      tmp   = GET_VALUE_ARG1(nodeptr,2);
      tmpsize = tmp & mask(16);
      if (size>tmpsize) size=tmpsize;
      start = tmp >> 16;
      value = getval(ptr,start,size);
    }
  }
  nretVal = nhc_mkInt(value);
  INIT_PROFINFO(nretVal,&rdpackProfInfo);
  C_RETURN(nretVal);
}


unsigned getval (ptr, start, size)
NodePtr ptr;
unsigned start, size; {
  unsigned wordpos, bitpos, value;

  wordpos = (start+31)/32;
  bitpos  = start % 32;
  if (bitpos + size > 32) {
    value  = (ptr[1+EXTRA+wordpos] & mask(32-bitpos))
             << (bitpos+size-32);
    value |= (ptr[1+EXTRA+wordpos+1] >> (64-size-bitpos))
             & mask(bitpos+size-32);
  } else {
    value = (ptr[1+EXTRA+wordpos] >> (32-bitpos-size)) & mask(size);
  }
  return value;
}


/* joinPacked :: Packed a -> Packed b -> Packed c */
C_HEADER(joinPacked) {
  NodePtr nodeptr1, nodeptr2, nretVal;
  unsigned tmp, size, value;
  unsigned start1, start2, size1, size2, value1, value2;

  nodeptr1 = C_GETARG1(1);
  IND_REMOVE(nodeptr1);
  if (CONINFO_SIZE(GET_CONINFO(nodeptr1)) == 1+EXTRA) {
    tmp = GET_CONSTR(nodeptr1);
    size1  = tmp>>8;
    value1 = tmp&mask(size1);
  } else {
    tmp = GET_VALUE_ARG1(nodeptr1,2);
    size1 = tmp&mask(16);
    start1 = tmp>>16;
    if (size1 <= 32) {
      value1 = getval(GET_POINTER_ARG1(nodeptr1,1),start1,size1);
    }
  }

  nodeptr2 = C_GETARG1(2);
  IND_REMOVE(nodeptr2);
  if (CONINFO_SIZE(GET_CONINFO(nodeptr2)) == 1+EXTRA) {
    tmp = GET_CONSTR(nodeptr2);
    size2 = tmp>>8;
    value2 = tmp&mask(size2);
  } else {
    tmp = GET_VALUE_ARG1(nodeptr2,2);
    size2 = tmp&mask(16);
    start2 = tmp>>16;
    if (size2 <= 32) {
      value2 = getval(GET_POINTER_ARG1(nodeptr2,1),start2,size2);
    }
  }

  size = size1+size2;

  if (size <= 8) {
    value      = value2 | (value1 << size2);
    value     |= (size << 8);
    nretVal    = C_ALLOC(1+EXTRA);
    nretVal[0] = CONSTR(value,0,0);
  } else if (size <= 32) {
    value      = value2 | (value1 << size2);
    nretVal    = C_ALLOC(1+EXTRA+2);
    nretVal[0]       = CONSTR(0,2,1);
    nretVal[1+EXTRA] = C_ALLOC(1+EXTRA+1);
    nretVal[1+EXTRA][0] = CONSTRW(1,0)
    nretVal[1+EXTRA][1+EXTRA] = value;
    nretVal[2+EXTRA] = ((32-size) << 16) | size;
  } else {
    tmp        = (size+31)/32;
    nretVal    = C_ALLOC(1+EXTRA+2);
    nretVal[0]       = CONSTR(0,2,1);
    nretVal[1+EXTRA] = C_ALLOC(1+EXTRA+tmp);
    nretVal[1+EXTRA][0] = CONSTRW(tmp,0)
    for (int i=0; i<tmp; i++)
      nretVal[1+EXTRA][1+i+EXTRA] = 0;
    nretVal[1+EXTRA][tmp+EXTRA] |= value;

    nretVal[2+EXTRA] = ((32-(size%32)) << 16) | size;
  }

  INIT_PROFINFO(nretVal,&jnpackProfInfo);
  C_RETURN(nretVal);
}


/* sizePacked :: Packed a -> Int */
C_HEADER(sizePacked) {
  unsigned tmp;
  NodePtr nodeptr, nretVal;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  if (CONINFO_SIZE(GET_CONINFO(nodeptr)) == 1+EXTRA) {
      tmp = GET_CONSTR(nodeptr);
      nretVal = nhc_mkInt(tmp>>8);
  } else {
      tmp = GET_VALUE_ARG1(nodeptr,2);
      nretVal = nhc_mkInt(tmp&mask(16));
  }
  INIT_PROFINFO(nretVal,&szpackProfInfo);
  C_RETURN(nretVal);
}
 

/* offset :: Int -> Packed a -> Packed b */
C_HEADER(offset) {
  NodePtr nodeptr, nretVal;
  unsigned tmp, add, size;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  add = (unsigned)GET_INT_VALUE(nodeptr);

  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  if (CONINFO_SIZE(GET_CONINFO(nodeptr)) == 1+EXTRA) {
      unsigned value;
      tmp   = GET_CONSTR(nodeptr);
      size  = (tmp>>8);
      size  = (add>=size ? 0 : size-add);
      value = (tmp & mask(size)) | (size<<8);
      nretVal = C_ALLOC(1+EXTRA)
      nretVal[0] = CONSTR(value,0,0);
  } else {
      tmp   = GET_VALUE_ARG1(nodeptr,2);
      size  = (tmp & mask(16));
      if (add>=size) {
          nretVal = C_ALLOC(1+EXTRA)
          nretVal[0] = CONSTR(0,0,0);
      } else {
          unsigned start;
          start = (tmp & ~(mask(16))) + (add<<16);
          size -= add;
          nretVal = C_ALLOC(1+EXTRA+2)
          nretVal[0] = CONSTR(0,2,1);
          nretVal[1+EXTRA] = GET_POINTER_ARG1(nodeptr,1);
          nretVal[2+EXTRA] = (start | size);
      }
  }

  INIT_PROFINFO(nretVal,&offsetProfInfo);
  C_RETURN(nretVal);
}
 
 
/* primAlignPackedLo :: Packed a -> Packed a */
/* primAlignPackedHi :: Packed a -> Packed a */
C_HEADER(primAlignPackedLo) {
  unsigned tmp;
  NodePtr nodeptr, nretVal;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  if (CONINFO_SIZE(GET_CONINFO(nodeptr)) == 1+EXTRA) {
      tmp  = GET_CONSTR(nodeptr);
      tmp &= mask(8);
      tmp |= 8<<8;
      nretVal = C_ALLOC(1+EXTRA);
      nretVal[0] = CONSTR(tmp,0,0);
      INIT_PROFINFO(nretVal,&packProfInfo);
  } else {
      tmp = GET_VALUE_ARG1(nodeptr,2);
      nretVal    = C_ALLOC(1+EXTRA+2);
      nretVal[0] = CONSTR(0,2,1);
      nretVal[1+EXTRA] = GET_POINTER_ARG1(nodeptr,1);
      nretVal[2+EXTRA] = (tmp...) | (tmp & mask(16));
  }
  C_RETURN(nretVal);
}

 
 
/* primPutPacked :: Handle -> Packed a -> Int */
/*                      -- Assumes that Packed a is aligned. */
C_HEADER(primPutPacked) {
  int n, err; unsigned ptr; short offset=0;
  FileDesc *a;
  NodePtr nodeptr;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  UPDATE_PROFINFO(nodeptr)
  a = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));
 
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  ptr = (unsigned)GET_INT_VALUE(nodeptr);
 
  offset = (ptr & IdxMask) >>3;    /* alignment=> idx `elem` [0,8,16,24] */
  ptr = ptr >> PtrShift;
 
  err = fwrite((char*)(&binSpace[ptr])+offset, 1, n, a->fp);
 
  C_RETURN(nhc_mkInt(err));
}

 
/* primGetPacked :: Handle -> Packed a */
C_HEADER(primGetNBytes) {
  unsigned r;
  FileDesc *a;
  NodePtr nodeptr, nretVal;
 
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  UPDATE_PROFINFO(nodeptr)
  a = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));
 
  err = fread((char*)&r, sizeof(int), 1, a->fp);

 
  err = fread((char*)(&binSpace[binPtr])+offset, 1, n, a->fp);
  ptr = (binPtr << PtrShift) | ((unsigned)bitIdx & IdxMask);
 
  /* calculate new internal position in binspace */
  binPtr += (offset+err) /4;
  bitIdx  = ((offset+err)%4) <<3;
 
  C_RETURN(nhc_mkInt(ptr));
}


