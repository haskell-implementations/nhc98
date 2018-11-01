#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46hs_95copyBytes_35	((void*)startLabel+12)
#define CT_v215	((void*)startLabel+48)
#define F0_NHC_46Binary_46hs_95copyBytes_35	((void*)startLabel+56)
#define FN_NHC_46Binary_46hs_95copyBytes	((void*)startLabel+68)
#define CT_v217	((void*)startLabel+92)
#define CF_NHC_46Binary_46hs_95copyBytes	((void*)startLabel+100)
#define CT_v219	((void*)startLabel+160)
#define FN_LAMBDA212	((void*)startLabel+196)
#define CT_v221	((void*)startLabel+220)
#define F0_LAMBDA212	((void*)startLabel+228)
#define ST_v218	((void*)startLabel+236)
#define ST_v220	((void*)startLabel+257)
#define ST_v216	((void*)startLabel+290)
#define ST_v214	((void*)startLabel+314)
extern Node TM_NHC_46Binary[];
void FR_NHC_46Binary_46hs_95copyBytes_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v215)
,	/* FN_NHC_46Binary_46hs_95copyBytes_35: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46Binary_46hs_95copyBytes_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46Binary_46hs_95copyBytes_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBytes_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v217)
,	/* FN_NHC_46Binary_46hs_95copyBytes: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v216)
,	/* CT_v217: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46Binary_46hs_95copyBytes: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBytes))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46Binary_46hs_95copyBytes_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v219)
,};
Node FN_NHC_46Binary_46copyBytes[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 150001
, useLabel(ST_v218)
,	/* CT_v219: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46Binary_46copyBytes[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46copyBytes),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46hs_95copyBytes))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA212),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v221)
,	/* FN_LAMBDA212: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 160017
, useLabel(ST_v220)
,	/* CT_v221: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA212: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA212),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v218: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(111,112,121,66)
, bytes2word(121,116,101,115)
,	/* ST_v220: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(99,111,112,121)
, bytes2word(66,121,116,101)
, bytes2word(115,58,49,54)
, bytes2word(58,49,55,45)
, bytes2word(49,54,58,52)
,	/* ST_v216: (byte 2) */
  bytes2word(50,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,112,121)
, bytes2word(66,121,116,101)
,	/* ST_v214: (byte 2) */
  bytes2word(115,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,104,115,95)
, bytes2word(99,111,112,121)
, bytes2word(66,121,116,101)
, bytes2word(115,35,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "hs_copyBytes" NHC.Binary.hs_copyBytes# 3 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Int -> Prelude.Int */
extern HsInt hs_copyBytes(void*,void*,HsInt);
#ifdef PROFILE
static SInfo pf_NHC_46Binary_46hs_95copyBytes_35 = {"NHC.Binary","NHC.Binary.hs_copyBytes#","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46Binary_46hs_95copyBytes_35) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = hs_copyBytes(arg1,arg2,arg3);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46Binary_46hs_95copyBytes_35);
  C_RETURN(nodeptr);
}
