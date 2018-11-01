#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+12)
#define CT_v196	((void*)startLabel+32)
#define F0_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+40)
#define FN_NHC_46Binary_46hs_95getBits	((void*)startLabel+52)
#define CT_v197	((void*)startLabel+64)
#define CF_NHC_46Binary_46hs_95getBits	((void*)startLabel+72)
#define CT_v198	((void*)startLabel+116)
void FR_NHC_46Binary_46hs_95getBits_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,	/* FN_NHC_46Binary_46hs_95getBits_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95getBits_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v196: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95getBits_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v197)
,	/* FN_NHC_46Binary_46hs_95getBits: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v197: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95getBits: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Binary_46hs_95getBits_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_NHC_46Binary_46getBits[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,ZAP_ARG_I1,ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v198: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Binary_46getBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getBits),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits))
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_getBits" NHC.Binary.hs_getBits# 2 :: FFI.ForeignObj -> Prelude.Int -> Prelude.Int */
extern HsInt hs_getBits(void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95getBits_35 = {"NHC.Binary","NHC.Binary.hs_getBits#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95getBits_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_getBits(arg1,arg2);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95getBits_35);
  C_RETURN(nodeptr);
}
