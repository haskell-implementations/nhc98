#include "newmacros.h"
#include "runtime.h"

#define v201	((void*)startLabel+82)
#define CT_v204	((void*)startLabel+148)
#define FN_LAMBDA196	((void*)startLabel+212)
#define CT_v207	((void*)startLabel+244)
#define CF_LAMBDA196	((void*)startLabel+252)
#define ST_v206	((void*)startLabel+256)
#define ST_v203	((void*)startLabel+282)
#define ST_v205	((void*)startLabel+295)
extern Node TM_Ratio[];
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
extern Node TMSUB_Ratio[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v204)
,};
Node FN_Ratio_46reduce[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,3,PUSH_P1)
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
, bytes2word(HEAP_CVAL_N1,4,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTRW(0,0)
, 70001
, useLabel(ST_v203)
,	/* CT_v204: (byte 0) */
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
, useLabel(CT_v207)
,	/* FN_LAMBDA196: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v206)
, 80025
, useLabel(ST_v205)
,	/* CT_v207: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
,	/* ST_v206: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,37,58)
, bytes2word(32,122,101,114)
, bytes2word(111,32,100,101)
, bytes2word(110,111,109,105)
, bytes2word(110,97,116,111)
,	/* ST_v203: (byte 2) */
  bytes2word(114,0,82,97)
, bytes2word(116,105,111,46)
, bytes2word(114,101,100,117)
,	/* ST_v205: (byte 3) */
  bytes2word(99,101,0,82)
, bytes2word(97,116,105,111)
, bytes2word(46,114,101,100)
, bytes2word(117,99,101,58)
, bytes2word(56,58,50,53)
, bytes2word(45,56,58,53)
, bytes2word(49,0,0,0)
,};
