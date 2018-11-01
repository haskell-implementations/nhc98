#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+12)
#define CT_v198	((void*)startLabel+40)
#define F0_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+48)
#define FN_NHC_46Binary_46hs_95getBits	((void*)startLabel+76)
#define CT_v202	((void*)startLabel+128)
#define CF_NHC_46Binary_46hs_95getBits	((void*)startLabel+136)
#define CT_v206	((void*)startLabel+232)
#define ST_v204	((void*)startLabel+264)
#define PP_NHC_46Binary_46hs_95getBits	((void*)startLabel+283)
#define PC_NHC_46Binary_46hs_95getBits	((void*)startLabel+283)
#define ST_v200	((void*)startLabel+283)
#define PP_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+305)
#define PC_NHC_46Binary_46hs_95getBits_35	((void*)startLabel+305)
#define ST_v197	((void*)startLabel+305)
#define PS_v201	((void*)startLabel+328)
#define PS_v199	((void*)startLabel+340)
#define PS_v205	((void*)startLabel+352)
#define PS_v203	((void*)startLabel+364)
#define PS_v196	((void*)startLabel+376)
void FR_NHC_46Binary_46hs_95getBits_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Internal_46_95mkIOok2[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,	/* FN_NHC_46Binary_46hs_95getBits_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46Binary_46hs_95getBits_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46Binary_46hs_95getBits_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits_35),2)
, useLabel(PS_v196)
, 0
, 0
, 0
, bytes2word(0,0,0,0)
, useLabel(CT_v202)
,	/* FN_NHC_46Binary_46hs_95getBits: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95getBits: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits))
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46Binary_46hs_95getBits_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,};
Node FN_NHC_46Binary_46getBits[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, 120001
, useLabel(ST_v204)
,	/* CT_v206: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Binary_46getBits[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getBits),2)
, useLabel(PS_v203)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95getBits))
,};
Node PP_NHC_46Binary_46getBits[] = {
 };
Node PC_NHC_46Binary_46getBits[] = {
 	/* ST_v204: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,66,105)
,	/* PP_NHC_46Binary_46hs_95getBits: (byte 3) */
 	/* PC_NHC_46Binary_46hs_95getBits: (byte 3) */
 	/* ST_v200: (byte 3) */
  bytes2word(116,115,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,104,115)
, bytes2word(95,103,101,116)
, bytes2word(66,105,116,115)
,	/* PP_NHC_46Binary_46hs_95getBits_35: (byte 1) */
 	/* PC_NHC_46Binary_46hs_95getBits_35: (byte 1) */
 	/* ST_v197: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(104,115,95,103)
, bytes2word(101,116,66,105)
, bytes2word(116,115,35,0)
,	/* PS_v201: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95getBits)
, useLabel(PC_NHC_46Internal_46_95mkIOok2)
,	/* PS_v199: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95getBits)
, useLabel(PC_NHC_46Binary_46hs_95getBits)
,	/* PS_v205: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBits)
, useLabel(PC_NHC_46Binary_46hs_95getBits)
,	/* PS_v203: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getBits)
, useLabel(PC_NHC_46Binary_46getBits)
,	/* PS_v196: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95getBits_35)
, useLabel(PC_NHC_46Binary_46hs_95getBits_35)
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
