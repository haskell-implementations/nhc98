#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95compareBin	((void*)startLabel+20)
#define CT_v213	((void*)startLabel+64)
#define F0_NHC_46Binary_46hs_95compareBin	((void*)startLabel+72)
#define CT_v218	((void*)startLabel+196)
#define ST_v215	((void*)startLabel+232)
#define PP_NHC_46Binary_46hs_95compareBin	((void*)startLabel+254)
#define PC_NHC_46Binary_46hs_95compareBin	((void*)startLabel+254)
#define ST_v212	((void*)startLabel+254)
#define PS_v211	((void*)startLabel+280)
#define PS_v216	((void*)startLabel+292)
#define PS_v214	((void*)startLabel+304)
#define PS_v217	((void*)startLabel+316)
void FR_NHC_46Binary_46hs_95compareBin(void);
extern Node FN_Prelude_46Enum_46Prelude_46Ordering_46toEnum[];
extern Node PM_NHC_46Binary[];
extern Node PC_Prelude_46Enum_46Prelude_46Ordering_46toEnum[];

static Node startLabel[] = {
  bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v213)
,	/* FN_NHC_46Binary_46hs_95compareBin: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PUSH_ARG,4,EVAL)
, bytes2word(POP_I1,PUSH_ARG,5,EVAL)
, bytes2word(POP_I1,PUSH_ARG,6,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95compareBin)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(0,6)
, 0
,	/* F0_NHC_46Binary_46hs_95compareBin: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95compareBin),6)
, useLabel(PS_v211)
, 0
, 0
, 0
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v218)
,};
Node FN_NHC_46Binary_46compareBin[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
, 160001
, useLabel(ST_v215)
,	/* CT_v218: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_NHC_46Binary_46compareBin[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46compareBin),6)
, useLabel(PS_v214)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95compareBin))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46toEnum))
,};
Node PP_NHC_46Binary_46compareBin[] = {
 };
Node PC_NHC_46Binary_46compareBin[] = {
 	/* ST_v215: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,66,105)
,	/* PP_NHC_46Binary_46hs_95compareBin: (byte 2) */
 	/* PC_NHC_46Binary_46hs_95compareBin: (byte 2) */
 	/* ST_v212: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,66)
, bytes2word(105,110,0,0)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46hs_95compareBin)
, useLabel(PC_NHC_46Binary_46hs_95compareBin)
,	/* PS_v216: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46compareBin)
, useLabel(PC_NHC_46Binary_46hs_95compareBin)
,	/* PS_v214: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46compareBin)
, useLabel(PC_NHC_46Binary_46compareBin)
,	/* PS_v217: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46compareBin)
, useLabel(PC_Prelude_46Enum_46Prelude_46Ordering_46toEnum)
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
