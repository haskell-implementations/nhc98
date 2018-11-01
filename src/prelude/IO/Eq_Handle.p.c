#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primEqHandleC	((void*)startLabel+12)
#define CT_v211	((void*)startLabel+40)
#define F0_IO_46primEqHandleC	((void*)startLabel+48)
#define CT_v215	((void*)startLabel+132)
#define CT_v219	((void*)startLabel+228)
#define CT_v223	((void*)startLabel+340)
#define PP_IO_46primEqHandleC	((void*)startLabel+376)
#define PC_IO_46primEqHandleC	((void*)startLabel+376)
#define ST_v210	((void*)startLabel+376)
#define ST_v221	((void*)startLabel+396)
#define ST_v217	((void*)startLabel+420)
#define ST_v213	((void*)startLabel+444)
#define PS_v209	((void*)startLabel+468)
#define PS_v214	((void*)startLabel+480)
#define PS_v212	((void*)startLabel+492)
#define PS_v218	((void*)startLabel+504)
#define PS_v216	((void*)startLabel+516)
#define PS_v220	((void*)startLabel+528)
#define PS_v222	((void*)startLabel+540)
void FR_IO_46primEqHandleC(void);
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46IO_46Handle[];
extern Node PM_IO[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v211)
,	/* FN_IO_46primEqHandleC: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46primEqHandleC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46primEqHandleC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primEqHandleC),2)
, useLabel(PS_v209)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,};
Node FN_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, 100003
, useLabel(ST_v213)
,	/* CT_v215: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_61_61),2)
, useLabel(PS_v212)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46primEqHandleC))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v219)
,};
Node FN_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, 90010
, useLabel(ST_v217)
,	/* CT_v219: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_47_61),2)
, useLabel(PS_v216)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46IO_46Handle)
, bytes2word(0,0,0,0)
, useLabel(CT_v223)
,};
Node FN_Prelude_46Eq_46IO_46Handle[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v222)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 90010
, useLabel(ST_v221)
,	/* CT_v223: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46IO_46Handle[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle))
, useLabel(PS_v220)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46IO_46Handle_46_47_61)
, useLabel(F0_Prelude_46Eq_46IO_46Handle_46_61_61)
,	/* PP_IO_46primEqHandleC: (byte 0) */
 	/* PC_IO_46primEqHandleC: (byte 0) */
 	/* ST_v210: (byte 0) */
  bytes2word(73,79,46,112)
, bytes2word(114,105,109,69)
, bytes2word(113,72,97,110)
, bytes2word(100,108,101,67)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46IO_46Handle[] = {
 };
Node PC_Prelude_46Eq_46IO_46Handle[] = {
 	/* ST_v221: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,72,97)
, bytes2word(110,100,108,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46IO_46Handle_46_47_61[] = {
 	/* ST_v217: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,72,97)
, bytes2word(110,100,108,101)
, bytes2word(46,47,61,0)
,};
Node PP_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46IO_46Handle_46_61_61[] = {
 	/* ST_v213: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,72,97)
, bytes2word(110,100,108,101)
, bytes2word(46,61,61,0)
,	/* PS_v209: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46primEqHandleC)
, useLabel(PC_IO_46primEqHandleC)
,	/* PS_v214: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46Handle_46_61_61)
, useLabel(PC_IO_46primEqHandleC)
,	/* PS_v212: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46Handle_46_61_61)
, useLabel(PC_Prelude_46Eq_46IO_46Handle_46_61_61)
,	/* PS_v218: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46Handle_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v216: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46Handle_46_47_61)
, useLabel(PC_Prelude_46Eq_46IO_46Handle_46_47_61)
,	/* PS_v220: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46Handle)
, useLabel(PC_Prelude_46Eq_46IO_46Handle)
,	/* PS_v222: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46Handle)
, useLabel(PC_Prelude_462)
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
