#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46primEqHandlePosnC	((void*)startLabel+12)
#define CT_v226	((void*)startLabel+40)
#define F0_IO_46primEqHandlePosnC	((void*)startLabel+48)
#define CT_v238	((void*)startLabel+200)
#define CT_v242	((void*)startLabel+304)
#define CT_v246	((void*)startLabel+416)
#define PP_IO_46primEqHandlePosnC	((void*)startLabel+452)
#define PC_IO_46primEqHandlePosnC	((void*)startLabel+452)
#define ST_v225	((void*)startLabel+452)
#define ST_v244	((void*)startLabel+476)
#define ST_v240	((void*)startLabel+504)
#define ST_v232	((void*)startLabel+532)
#define PS_v224	((void*)startLabel+560)
#define PS_v237	((void*)startLabel+572)
#define PS_v236	((void*)startLabel+584)
#define PS_v231	((void*)startLabel+596)
#define PS_v235	((void*)startLabel+608)
#define PS_v241	((void*)startLabel+620)
#define PS_v239	((void*)startLabel+632)
#define PS_v243	((void*)startLabel+644)
#define PS_v245	((void*)startLabel+656)
void FR_IO_46primEqHandlePosnC(void);
extern Node FN_Prelude_46Eq_46IO_46Handle_46_61_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46IO_46HandlePosn[];
extern Node PM_IO[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46Eq_46IO_46Handle_46_61_61[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v226)
,	/* FN_IO_46primEqHandlePosnC: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_IO_46primEqHandlePosnC)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v225)
,	/* CT_v226: (byte 0) */
  HW(0,2)
, 0
,	/* F0_IO_46primEqHandlePosnC: (byte 0) */
  CAPTAG(useLabel(FN_IO_46primEqHandlePosnC),2)
, useLabel(PS_v224)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v238)
,};
Node FN_Prelude_46Eq_46IO_46HandlePosn_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v237)
, 0
, 0
, 0
, 0
, useLabel(PS_v236)
, 0
, 0
, 0
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, 120003
, useLabel(ST_v232)
,	/* CT_v238: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46HandlePosn_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46HandlePosn_46_61_61),2)
, useLabel(PS_v231)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46Handle_46_61_61))
, VAPTAG(useLabel(FN_IO_46primEqHandlePosnC))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v242)
,};
Node FN_Prelude_46Eq_46IO_46HandlePosn_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v241)
, 0
, 0
, 0
, 0
, 110010
, useLabel(ST_v240)
,	/* CT_v242: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46IO_46HandlePosn_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46IO_46HandlePosn_46_47_61),2)
, useLabel(PS_v239)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46IO_46HandlePosn)
, bytes2word(0,0,0,0)
, useLabel(CT_v246)
,};
Node FN_Prelude_46Eq_46IO_46HandlePosn[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v245)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 110010
, useLabel(ST_v244)
,	/* CT_v246: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46IO_46HandlePosn[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46IO_46HandlePosn))
, useLabel(PS_v243)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Eq_46IO_46HandlePosn_46_47_61)
, useLabel(F0_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
,	/* PP_IO_46primEqHandlePosnC: (byte 0) */
 	/* PC_IO_46primEqHandlePosnC: (byte 0) */
 	/* ST_v225: (byte 0) */
  bytes2word(73,79,46,112)
, bytes2word(114,105,109,69)
, bytes2word(113,72,97,110)
, bytes2word(100,108,101,80)
, bytes2word(111,115,110,67)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46IO_46HandlePosn[] = {
 };
Node PC_Prelude_46Eq_46IO_46HandlePosn[] = {
 	/* ST_v244: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,72,97)
, bytes2word(110,100,108,101)
, bytes2word(80,111,115,110)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Eq_46IO_46HandlePosn_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46IO_46HandlePosn_46_47_61[] = {
 	/* ST_v240: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,72,97)
, bytes2word(110,100,108,101)
, bytes2word(80,111,115,110)
, bytes2word(46,47,61,0)
,};
Node PP_Prelude_46Eq_46IO_46HandlePosn_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46IO_46HandlePosn_46_61_61[] = {
 	/* ST_v232: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,73)
, bytes2word(79,46,72,97)
, bytes2word(110,100,108,101)
, bytes2word(80,111,115,110)
, bytes2word(46,61,61,0)
,	/* PS_v224: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46primEqHandlePosnC)
, useLabel(PC_IO_46primEqHandlePosnC)
,	/* PS_v237: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v236: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
, useLabel(PC_IO_46primEqHandlePosnC)
,	/* PS_v231: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
, useLabel(PC_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
,	/* PS_v235: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn_46_61_61)
, useLabel(PC_Prelude_46Eq_46IO_46Handle_46_61_61)
,	/* PS_v241: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v239: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn_46_47_61)
, useLabel(PC_Prelude_46Eq_46IO_46HandlePosn_46_47_61)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn)
, useLabel(PC_Prelude_46Eq_46IO_46HandlePosn)
,	/* PS_v245: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_Prelude_46Eq_46IO_46HandlePosn)
, useLabel(PC_Prelude_462)
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
