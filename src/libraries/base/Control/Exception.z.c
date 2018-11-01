#include "newmacros.h"
#include "runtime.h"

#define FN_Control_46Exception_46catchesHandler	((void*)startLabel+16)
#define CT_v262	((void*)startLabel+56)
#define F0_Control_46Exception_46catchesHandler	((void*)startLabel+64)
#define FN_Control_46Exception_46Prelude_46214_46tryHandler	((void*)startLabel+100)
#define v266	((void*)startLabel+126)
#define v267	((void*)startLabel+129)
#define CT_v271	((void*)startLabel+160)
#define F0_Control_46Exception_46Prelude_46214_46tryHandler	((void*)startLabel+168)
#define CT_v273	((void*)startLabel+220)
#define ST_v260	((void*)startLabel+244)
#define ST_v272	((void*)startLabel+262)
#define ST_v261	((void*)startLabel+288)
#define ST_v268	((void*)startLabel+321)
extern Node TM_Control_46Exception[];
extern Node FN_Control_46Exception_46Base_46throw[];
extern Node CF_Control_46Exception_46Base_46Exception_46Control_46Exception_46Base_46SomeException[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldr[];
extern Node TMSUB_Control_46Exception[];
extern Node FN_Control_46Exception_46Base_46fromException[];
extern Node FN_Control_46Exception_46Base_46catch[];

static Node startLabel[] = {
  42
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,	/* FN_Control_46Exception_46catchesHandler: (byte 0) */
  useLabel(TM_Control_46Exception)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 1860001
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(5,2)
, 0
,	/* F0_Control_46Exception_46catchesHandler: (byte 0) */
  CAPTAG(useLabel(FN_Control_46Exception_46catchesHandler),2)
, CAPTAG(useLabel(FN_Control_46Exception_46Prelude_46214_46tryHandler),2)
, VAPTAG(useLabel(FN_Control_46Exception_46Base_46throw))
, useLabel(CF_Control_46Exception_46Base_46Exception_46Control_46Exception_46Base_46SomeException)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v271)
,	/* FN_Control_46Exception_46Prelude_46214_46tryHandler: (byte 0) */
  useLabel(TMSUB_Control_46Exception)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_I2,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,EVAL)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v266: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v267: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,PUSH_P1,3,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 1870011
, useLabel(ST_v268)
,	/* CT_v271: (byte 0) */
  HW(1,3)
, 0
,	/* F0_Control_46Exception_46Prelude_46214_46tryHandler: (byte 0) */
  CAPTAG(useLabel(FN_Control_46Exception_46Prelude_46214_46tryHandler),3)
, VAPTAG(useLabel(FN_Control_46Exception_46Base_46fromException))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,};
Node FN_Control_46Exception_46catches[] = {
  useLabel(TM_Control_46Exception)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1830001
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Control_46Exception_46catches[] = {
  CAPTAG(useLabel(FN_Control_46Exception_46catches),2)
, CAPTAG(useLabel(FN_Control_46Exception_46catchesHandler),1)
, VAPTAG(useLabel(FN_Control_46Exception_46Base_46catch))
, useLabel(CF_Control_46Exception_46Base_46Exception_46Control_46Exception_46Base_46SomeException)
,};
Node PM_Control_46Exception[] = {
 	/* ST_v260: (byte 0) */
  bytes2word(67,111,110,116)
, bytes2word(114,111,108,46)
, bytes2word(69,120,99,101)
, bytes2word(112,116,105,111)
,	/* ST_v272: (byte 2) */
  bytes2word(110,0,67,111)
, bytes2word(110,116,114,111)
, bytes2word(108,46,69,120)
, bytes2word(99,101,112,116)
, bytes2word(105,111,110,46)
, bytes2word(99,97,116,99)
,	/* ST_v261: (byte 4) */
  bytes2word(104,101,115,0)
, bytes2word(67,111,110,116)
, bytes2word(114,111,108,46)
, bytes2word(69,120,99,101)
, bytes2word(112,116,105,111)
, bytes2word(110,46,99,97)
, bytes2word(116,99,104,101)
, bytes2word(115,72,97,110)
, bytes2word(100,108,101,114)
,	/* ST_v268: (byte 1) */
  bytes2word(0,67,111,110)
, bytes2word(116,114,111,108)
, bytes2word(46,69,120,99)
, bytes2word(101,112,116,105)
, bytes2word(111,110,46,99)
, bytes2word(97,116,99,104)
, bytes2word(101,115,72,97)
, bytes2word(110,100,108,101)
, bytes2word(114,58,49,56)
, bytes2word(55,58,49,49)
, bytes2word(45,49,57,48)
, bytes2word(58,51,48,0)
,};
