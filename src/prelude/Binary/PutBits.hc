#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95putBits_35	((void*)startLabel+12)
#define CT_v214	((void*)startLabel+36)
#define F0_NHC_46Binary_46hs_95putBits_35	((void*)startLabel+44)
#define FN_NHC_46Binary_46hs_95putBits	((void*)startLabel+56)
#define CT_v215	((void*)startLabel+68)
#define CF_NHC_46Binary_46hs_95putBits	((void*)startLabel+76)
#define CT_v216	((void*)startLabel+124)
#define FN_LAMBDA212	((void*)startLabel+160)
#define CT_v217	((void*)startLabel+172)
#define F0_LAMBDA212	((void*)startLabel+180)
void FR_NHC_46Binary_46hs_95putBits_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v214)
,	/* FN_NHC_46Binary_46hs_95putBits_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95putBits_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95putBits_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95putBits_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v215)
,	/* FN_NHC_46Binary_46hs_95putBits: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v215: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95putBits: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95putBits))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95putBits_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v216)
,};
Node FN_NHC_46Binary_46putBits[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v216: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46putBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46putBits),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95putBits))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA212),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v217)
,	/* FN_LAMBDA212: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v217: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA212: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA212),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_putBits" NHC.Binary.hs_putBits# 3 :: FFI.ForeignObj -> Prelude.Int -> Prelude.Int -> Prelude.Int */
extern HsInt hs_putBits(void*,HsInt,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95putBits_35 = {"NHC.Binary","NHC.Binary.hs_putBits#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95putBits_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_putBits(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95putBits_35);
  C_RETURN(nodeptr);
}
