#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95skipBits_35	((void*)startLabel+12)
#define CT_v208	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95skipBits_35	((void*)startLabel+40)
#define FN_NHC_46Binary_46hs_95skipBits	((void*)startLabel+52)
#define CT_v209	((void*)startLabel+64)
#define CF_NHC_46Binary_46hs_95skipBits	((void*)startLabel+72)
#define CT_v210	((void*)startLabel+120)
#define FN_LAMBDA206	((void*)startLabel+156)
#define CT_v211	((void*)startLabel+168)
#define F0_LAMBDA206	((void*)startLabel+176)
void FR_NHC_46Binary_46hs_95skipBits_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v208)
,	/* FN_NHC_46Binary_46hs_95skipBits_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95skipBits_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v208: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95skipBits_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95skipBits_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v209)
,	/* FN_NHC_46Binary_46hs_95skipBits: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v209: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95skipBits: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95skipBits))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Binary_46hs_95skipBits_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v210)
,};
Node FN_NHC_46Binary_46skipBits[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v210: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_NHC_46Binary_46skipBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46skipBits),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95skipBits))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,	/* FN_LAMBDA206: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_skipBits" NHC.Binary.hs_skipBits# 2 :: FFI.ForeignObj -> Prelude.Int -> Prelude.() */
extern void hs_skipBits(void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95skipBits_35 = {"NHC.Binary","NHC.Binary.hs_skipBits#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95skipBits_35) {
  NodePtr nodeptr;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  hs_skipBits(arg1,arg2);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95skipBits_35);
  C_RETURN(nodeptr);
}
