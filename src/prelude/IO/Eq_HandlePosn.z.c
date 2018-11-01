#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primEqHandlePosnC	((void*)startLabel+12)
#define CT_v225	((void*)startLabel+44)
#define F0_IO_46primEqHandlePosnC	((void*)startLabel+52)
#define CT_v233	((void*)startLabel+112)
#define CT_v235	((void*)startLabel+172)
#define CT_v237	((void*)startLabel+232)
#define ST_v224	((void*)startLabel+252)
#define ST_v236	((void*)startLabel+273)
#define ST_v234	((void*)startLabel+298)
#define ST_v230	((void*)startLabel+326)
extern Node TM_IO[];
void FR_IO_46primEqHandlePosnC(void);
extern Node FN_Prelude_46Eq_46IO_46Handle_46_61_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46IO_46HandlePosn[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v225)
,	/* FN_IO_46primEqHandlePosnC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46primEqHandlePosnC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v224)
,	/* CT_v225: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46primEqHandlePosnC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primEqHandlePosnC),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v233)
,};
Node FN_Prelude_46Eq_46IO_46HandlePosn_46_61_61[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_P1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120003
, useLabel(ST_v230)
,	/* CT_v233: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46HandlePosn_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46HandlePosn_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_61_61))
, VAPTAG(useLabel(FN_IO_46primEqHandlePosnC))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v235)
,};
Node FN_Prelude_46Eq_46IO_46HandlePosn_46_47_61[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 110010
, useLabel(ST_v234)
,	/* CT_v235: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46HandlePosn_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46HandlePosn_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46IO_46HandlePosn)
, bytes2word(0,0,0,0)
, useLabel(CT_v237)
,};
Node FN_Prelude_46Eq_46IO_46HandlePosn[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 110010
, useLabel(ST_v236)
,	/* CT_v237: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46IO_46HandlePosn[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46HandlePosn))
, useLabel(F0_Prelude_46Eq_46IO_46HandlePosn_46_47_61)
, useLabel(F0_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
,	/* ST_v224: (byte 0) */
  bytes2word(73,79,46,112)
, bytes2word(114,105,109,69)
, bytes2word(113,72,97,110)
, bytes2word(100,108,101,80)
, bytes2word(111,115,110,67)
,	/* ST_v236: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(73,79,46,72)
, bytes2word(97,110,100,108)
, bytes2word(101,80,111,115)
,	/* ST_v234: (byte 2) */
  bytes2word(110,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,73,79,46)
, bytes2word(72,97,110,100)
, bytes2word(108,101,80,111)
, bytes2word(115,110,46,47)
,	/* ST_v230: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,73,79,46)
, bytes2word(72,97,110,100)
, bytes2word(108,101,80,111)
, bytes2word(115,110,46,61)
, bytes2word(61,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primEqHandlePosnC" IO.primEqHandlePosnC 2 :: FFI.ForeignPtr -> FFI.ForeignPtr -> Prelude.Bool */
extern HsBool primEqHandlePosnC(void*,void*);
#ifdef PROFILE
static SInfo pf_IO_46primEqHandlePosnC = {"IO","IO.primEqHandlePosnC","Prelude.Bool"};
#endif
C_HEADER(FR_IO_46primEqHandlePosnC) {
  NodePtr nodeptr;
  HsBool result;
  void* arg1;
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = primEqHandlePosnC(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46primEqHandlePosnC);
  C_RETURN(nodeptr);
}
