#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95compareBin	((void*)startLabel+20)
#define CT_v212	((void*)startLabel+68)
#define F0_NHC_46Binary_46hs_95compareBin	((void*)startLabel+76)
#define CT_v214	((void*)startLabel+136)
#define ST_v213	((void*)startLabel+156)
#define ST_v211	((void*)startLabel+178)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95compareBin(void);
extern Node FN_Prelude_46Enum_46Prelude_46Ordering_46toEnum[];

static Node startLabel[] = {
  bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v212)
,	/* FN_NHC_46Binary_46hs_95compareBin: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PUSH_ARG,6,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95compareBin)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(0,6)
, 0
,	/* F0_NHC_46Binary_46hs_95compareBin: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95compareBin),6)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v214)
,};
Node FN_NHC_46Binary_46compareBin[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_NHC_46Binary_46compareBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46compareBin),6)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95compareBin))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46toEnum))
,	/* ST_v213: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,66,105)
,	/* ST_v211: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,66)
, bytes2word(105,110,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_compareBin" NHC.Binary.hs_compareBin 6 :: Prelude.Int -> Prelude.Int -> FFI.ForeignObj -> Prelude.Int -> FFI.ForeignObj -> Prelude.Int -> Prelude.Int */
extern HsInt hs_compareBin(HsInt,HsInt,void*,HsInt,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95compareBin = {"NHC.Binary","NHC.Binary.hs_compareBin","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95compareBin) {
  NodePtr nodeptr;
  HsInt result;
  HsInt arg1;
  HsInt arg2;
  void* arg3;
  HsInt arg4;
  void* arg5;
  HsInt arg6;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(4);
  IND_REMOVE(nodeptr);
  arg4 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(5);
  IND_REMOVE(nodeptr);
  arg5 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(6);
  IND_REMOVE(nodeptr);
  arg6 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_compareBin(arg1,arg2,arg3,arg4,arg5,arg6);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95compareBin);
  C_RETURN(nodeptr);
}
