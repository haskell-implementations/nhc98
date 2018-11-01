#include "newmacros.h"
#include "runtime.h"

#define v204	((void*)startLabel+79)
#define CT_v207	((void*)startLabel+152)
#define ST_v206	((void*)startLabel+204)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_62_61[];
extern Node FN_Prelude_46Fractional_46Prelude_46Num[];
extern Node FN_Prelude_46_94[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46recip[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v207)
,};
Node FN_Prelude_46_94_94[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,17,0)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG_ARG,2,3)
,	/* v204: (byte 3) */
  bytes2word(HEAP_ARG,4,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,12)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_OFF_N1)
, bytes2word(7,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 60001
, useLabel(ST_v206)
,	/* CT_v207: (byte 0) */
  HW(10,4)
, 0
,};
Node F0_Prelude_46_94_94[] = {
  CAPTAG(useLabel(FN_Prelude_46_94_94),4)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_94))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_Prelude_46recip))
,	/* ST_v206: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(94,94,0,0)
,};
