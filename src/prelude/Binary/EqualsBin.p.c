#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95equalsBin	((void*)startLabel+16)
#define CT_v207	((void*)startLabel+56)
#define F0_NHC_46Binary_46hs_95equalsBin	((void*)startLabel+64)
#define CT_v211	((void*)startLabel+160)
#define ST_v209	((void*)startLabel+192)
#define PP_NHC_46Binary_46hs_95equalsBin	((void*)startLabel+213)
#define PC_NHC_46Binary_46hs_95equalsBin	((void*)startLabel+213)
#define ST_v206	((void*)startLabel+213)
#define PS_v205	((void*)startLabel+240)
#define PS_v210	((void*)startLabel+252)
#define PS_v208	((void*)startLabel+264)
void FR_NHC_46Binary_46hs_95equalsBin(void);
extern Node PM_NHC_46Binary[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v207)
,	/* FN_NHC_46Binary_46hs_95equalsBin: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95equalsBin)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v206)
,	/* CT_v207: (byte 0) */
  HW(0,5)
, 0
,	/* F0_NHC_46Binary_46hs_95equalsBin: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95equalsBin),5)
, useLabel(PS_v205)
, 0
, 0
, 0
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v211)
,};
Node FN_NHC_46Binary_46equalsBin[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG)
, bytes2word(5,PUSH_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, 130001
, useLabel(ST_v209)
,	/* CT_v211: (byte 0) */
  HW(1,5)
, 0
,};
Node F0_NHC_46Binary_46equalsBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46equalsBin),5)
, useLabel(PS_v208)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95equalsBin))
,};
Node PP_NHC_46Binary_46equalsBin[] = {
 };
Node PC_NHC_46Binary_46equalsBin[] = {
 	/* ST_v209: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,101)
, bytes2word(113,117,97,108)
, bytes2word(115,66,105,110)
,	/* PP_NHC_46Binary_46hs_95equalsBin: (byte 1) */
 	/* PC_NHC_46Binary_46hs_95equalsBin: (byte 1) */
 	/* ST_v206: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(104,115,95,101)
, bytes2word(113,117,97,108)
, bytes2word(115,66,105,110)
, bytes2word(0,0,0,0)
,	/* PS_v205: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95equalsBin)
, useLabel(PC_NHC_46Binary_46hs_95equalsBin)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46equalsBin)
, useLabel(PC_NHC_46Binary_46hs_95equalsBin)
,	/* PS_v208: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46equalsBin)
, useLabel(PC_NHC_46Binary_46equalsBin)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_equalsBin" NHC.Binary.hs_equalsBin 5 :: Prelude.Int -> FFI.ForeignObj -> Prelude.Int -> FFI.ForeignObj -> Prelude.Int -> Prelude.Bool */
extern HsBool hs_equalsBin(HsInt,void*,HsInt,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95equalsBin = {"NHC.Binary","NHC.Binary.hs_equalsBin","Prelude.Bool"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95equalsBin) {
  NodePtr nodeptr;
  HsBool result;
  HsInt arg1;
  void* arg2;
  HsInt arg3;
  void* arg4;
  HsInt arg5;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(4);
  IND_REMOVE(nodeptr);
  arg4 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(5);
  IND_REMOVE(nodeptr);
  arg5 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_equalsBin(arg1,arg2,arg3,arg4,arg5);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95equalsBin);
  C_RETURN(nodeptr);
}
