#include "newmacros.h"
#include "runtime.h"

#define v201	((void*)startLabel+78)
#define CT_v203	((void*)startLabel+136)
#define FN_LAMBDA196	((void*)startLabel+200)
#define CT_v205	((void*)startLabel+220)
#define CF_LAMBDA196	((void*)startLabel+228)
#define ST_v204	((void*)startLabel+232)
extern Node FN_Prelude_46gcd[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46quot[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v203)
,};
Node FN_Ratio_46reduce[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,1,PUSH_P1)
, bytes2word(0,PUSH_ARG_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,ZAP_STACK_P1,5,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(10,0,HEAP_CVAL_P1,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
,	/* v201: (byte 2) */
  bytes2word(2,RETURN_EVAL,HEAP_CVAL_P1,12)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_I1,HEAP_CVAL_P1,12)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,HEAP_I2,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,3)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
,	/* CT_v203: (byte 0) */
  HW(11,3)
, 0
,};
Node F0_Ratio_46reduce[] = {
  CAPTAG(useLabel(FN_Ratio_46reduce),3)
, VAPTAG(useLabel(FN_Prelude_46gcd))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_LAMBDA196))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46quot))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
,	/* ST_v204: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,37,58)
, bytes2word(32,122,101,114)
, bytes2word(111,32,100,101)
, bytes2word(110,111,109,105)
, bytes2word(110,97,116,111)
, bytes2word(114,0,0,0)
,};
