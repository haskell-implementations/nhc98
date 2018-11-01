#include <string.h>
#include "haskell2c.h"


extern Node CF_Array_46_95arrayUndefined[];
extern Node CF_Array_46_95arrayMultiple[];

#define UNDEFINED ((Node)CF_Array_46_95arrayUndefined)
#define MULTIPLE ((Node)CF_Array_46_95arrayMultiple)

#ifdef PROFILE
static SInfo nodeProfInfo = { "Builtin","Builtin.primNewVector","Vector.Vector"};
static SInfo nodeProfInfoCopy = { "Builtin","Builtin.primCopyVector","Vector.Vector"};
#endif

/* primVector :: Int -> [(Int,a)] -> Vector a */
/* The list and all index must be evaluated before calling cPrimVector */
/* Index out of range is ignored */
C_HEADER(primVector)
{
  int size,i;
  NodePtr res,list;
  NodePtr dstptr;

  res = C_GETARG1(1);
  IND_REMOVE(res);
  size = GET_INT_VALUE(res);

  res = C_ALLOC(1+EXTRA+size);
  res[0] = CONSTRP(size,0);
  INIT_PROFINFO(res,&nodeProfInfo)
  
  dstptr = (NodePtr)&res[1+EXTRA];
  for(i=0; i<size; i++)
    dstptr[i] = UNDEFINED;

  list = C_GETARG1(2);
  IND_REMOVE(list);
  UPDATE_PROFINFO(list)
  while(Cons == GET_CONSTR(list)) {
    NodePtr pair,index;
    Node oldelement;
    pair = GET_POINTER_ARG1(list,1);
    IND_REMOVE(pair);
    UPDATE_PROFINFO(pair)

    index = GET_POINTER_ARG1(pair,1);
    IND_REMOVE(index);
    UPDATE_PROFINFO(index)
    i = GET_INT_VALUE(index);

    if(i >= 0 && i < size) {
      oldelement = dstptr[i];

      if(oldelement == UNDEFINED) {
	NodePtr element = GET_POINTER_ARG1(pair,2);
	IND_REMOVE(element);
	dstptr[i] = (Node)element;
      } else {
	dstptr[i] = MULTIPLE;
      }
    }
    list = GET_POINTER_ARG1(list,2);
    IND_REMOVE(list);
  }
  C_RETURN(res);
}	


/* primCopyVector :: Vector a -> Vector a */
C_HEADER(primCopyVector)
{
  int size,i;
  NodePtr res,arg;
  NodePtr srcptr,dstptr;

  arg = C_GETARG1(1);
  IND_REMOVE(arg);
  size = CONINFO_LARGESIZES(GET_CONINFO(arg));

  res = C_ALLOC(1+EXTRA+size);
  res[0] = CONSTRP(size,0);
  INIT_PROFINFO(res,&nodeProfInfoCopy)

  srcptr = (NodePtr)&arg[1+EXTRA];
  dstptr = (NodePtr)&res[1+EXTRA];
  for(i=0; i<size; i++)
    dstptr[i] = srcptr[i];

  C_RETURN(res);
}	


/* primUpdateVector :: Int -> a -> Vector a -> () */
C_HEADER(primUpdateVector)
{
  int idx,size;
  NodePtr val,arg;
  NodePtr dstptr;

  arg = C_GETARG1(1);
  IND_REMOVE(arg);
  idx = GET_INT_VALUE(arg);

  val = C_GETARG1(2);
  IND_REMOVE(val);

  arg = C_GETARG1(3);
  IND_REMOVE(arg);
  size = CONINFO_LARGESIZES(GET_CONINFO(arg));
  dstptr = (NodePtr)&arg[1+EXTRA];

  if (idx<=size) dstptr[idx] = (Node)val;

  C_RETURN(nhc_mkUnit());
}	


#define SAFETY 100

/* primNewVectorC :: Int -> a -> IO (Vector a) */
NodePtr primNewVectorC (int size, NodePtr box)
{
  int i;
  NodePtr res, val;
  NodePtr dstptr;
  /*fprintf(stderr,"newVector: size=%d\n",size);*/

  val = GET_POINTER_ARG1(box,1);

  C_CHECK(size+SAFETY);
  res = C_ALLOC(1+EXTRA+size);
  res[0] = CONSTRP(size,0);
  INIT_PROFINFO(res,&nodeProfInfo)

  dstptr = (NodePtr)&res[1+EXTRA];
  for(i=0; i<size; i++)
    dstptr[i] = (Node)val;

  return res;
}


/* primCopyVectorC :: Vector a -> IO (Vector a) */
NodePtr primCopyVectorC (NodePtr arg)
{
  int size,i;
  NodePtr res;
  NodePtr srcptr,dstptr;

  size = CONINFO_LARGESIZES(GET_CONINFO(arg));
  /*fprintf(stderr,"copyVector: size=%d\n",size);*/

  C_CHECK(size+SAFETY);
  res = C_ALLOC(1+EXTRA+size);
  res[0] = CONSTRP(size,0);
  INIT_PROFINFO(res,&nodeProfInfoCopy)
  
  srcptr = (NodePtr)&arg[1+EXTRA];
  dstptr = (NodePtr)&res[1+EXTRA];
  for(i=0; i<size; i++)
    dstptr[i] = srcptr[i];

  return res;
}	


/* primUpdateVectorC :: Int -> _E a -> Vector a -> IO () */
void primUpdateVectorC (int idx, NodePtr box, NodePtr arg)
{
  int size;
  NodePtr val,dstptr;

  val = GET_POINTER_ARG1(box,1);

  size = CONINFO_LARGESIZES(GET_CONINFO(arg));
  dstptr = (NodePtr)&arg[1+EXTRA];
  /*fprintf(stderr,"updateVector: size=%d idx=%d\n",size,idx);*/

  if (idx<=size) dstptr[idx] = (Node)val;

  return;
}

/* primSetVectorC :: Int -> _E a -> Vector a -> IO () */
void primSetVectorC (int idx, NodePtr box, NodePtr arg)
{
  int size;
  NodePtr val,dstptr;

  val = GET_POINTER_ARG1(box,1);

  size = CONINFO_LARGESIZES(GET_CONINFO(arg));
  dstptr = (NodePtr)&arg[1+EXTRA];
  /*fprintf(stderr,"setVector: size=%d idx=%d\n",size,idx);*/

  if (idx<=size) {
    dstptr[idx] = (Node)val;
    if(dstptr[idx] == UNDEFINED) {
        dstptr[idx] = (Node)val;
    } else {
        dstptr[idx] = MULTIPLE;
    }
  }

  return;
}
