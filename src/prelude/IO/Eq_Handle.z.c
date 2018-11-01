#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primEqHandleC	((void*)startLabel+12)
#define CT_v210	((void*)startLabel+44)
#define F0_IO_46primEqHandleC	((void*)startLabel+52)
#define CT_v212	((void*)startLabel+92)
#define CT_v214	((void*)startLabel+144)
#define CT_v216	((void*)startLabel+204)
#define ST_v209	((void*)startLabel+224)
#define ST_v215	((void*)startLabel+241)
#define ST_v213	((void*)startLabel+262)
#define ST_v211	((void*)startLabel+286)
extern Node TM_IO[];
void FR_IO_46primEqHandleC(void);
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46IO_46Handle[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v210)
,	/* FN_IO_46primEqHandleC: (byte 0) */
  useLabel(TM_IO)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46primEqHandleC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v209)
,	/* CT_v210: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46primEqHandleC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primEqHandleC),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v212)
,};
Node FN_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100003
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_61_61),2)
, VAPTAG(useLabel(FN_IO_46primEqHandleC))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 90010
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46IO_46Handle)
, bytes2word(0,0,0,0)
, useLabel(CT_v216)
,};
Node FN_Prelude_46Eq_46IO_46Handle[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 90010
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46IO_46Handle[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle))
, useLabel(F0_Prelude_46Eq_46IO_46Handle_46_47_61)
, useLabel(F0_Prelude_46Eq_46IO_46Handle_46_61_61)
,	/* ST_v209: (byte 0) */
  bytes2word(73,79,46,112)
, bytes2word(114,105,109,69)
, bytes2word(113,72,97,110)
, bytes2word(100,108,101,67)
,	/* ST_v215: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(73,79,46,72)
, bytes2word(97,110,100,108)
,	/* ST_v213: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,73,79,46)
, bytes2word(72,97,110,100)
, bytes2word(108,101,46,47)
,	/* ST_v211: (byte 2) */
  bytes2word(61,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,73,79,46)
, bytes2word(72,97,110,100)
, bytes2word(108,101,46,61)
, bytes2word(61,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primEqHandleC" IO.primEqHandleC 2 :: FFI.ForeignObj -> FFI.ForeignObj -> Prelude.Bool */
extern HsBool primEqHandleC(void*,void*);
#ifdef PROFILE
static SInfo pf_IO_46primEqHandleC = {"IO","IO.primEqHandleC","Prelude.Bool"};
#endif
C_HEADER(FR_IO_46primEqHandleC) {
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

  result = primEqHandleC(arg1,arg2);

  nodeptr = nhc_mkBool(result);
  INIT_PROFINFO(nodeptr,&pf_IO_46primEqHandleC);
  C_RETURN(nodeptr);
}
