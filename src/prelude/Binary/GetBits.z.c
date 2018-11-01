#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+12)
#define CT_v197	((void*)startLabel+44)
#define F0_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+52)
#define FN_NHC_46Binary_46hs_95getBits	((void*)startLabel+64)
#define CT_v199	((void*)startLabel+88)
#define CF_NHC_46Binary_46hs_95getBits	((void*)startLabel+96)
#define CT_v201	((void*)startLabel+152)
#define ST_v200	((void*)startLabel+168)
#define ST_v198	((void*)startLabel+187)
#define ST_v196	((void*)startLabel+209)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95getBits_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,	/* FN_NHC_46Binary_46hs_95getBits_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95getBits_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95getBits_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v199)
,	/* FN_NHC_46Binary_46hs_95getBits: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95getBits: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Binary_46hs_95getBits_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,};
Node FN_NHC_46Binary_46getBits[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,ZAP_ARG_I1,ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Binary_46getBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getBits),2)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits))
,	/* ST_v200: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,66,105)
,	/* ST_v198: (byte 3) */
  bytes2word(116,115,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(66,105,116,115)
,	/* ST_v196: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(104,115,95,103)
, bytes2word(101,116,66,105)
, bytes2word(116,115,35,0)
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
