#include "newmacros.h"
#include "runtime.h"

#define v200	((void*)startLabel+79)
#define v204	((void*)startLabel+141)
#define CT_v209	((void*)startLabel+224)
#define ST_v208	((void*)startLabel+280)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46quot[];
extern Node FN_Prelude_46gcd[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46abs[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v209)
,};
Node FN_Prelude_46lcm[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(3,PUSH_P1,0,PUSH_ARG_I3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(19,0,PUSH_CADR_N1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
,	/* v200: (byte 3) */
  bytes2word(APPLY,1,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,3,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,19,0)
, bytes2word(PUSH_CADR_N1,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v204: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,7,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(6,HEAP_ARG,3,PUSH_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 50001
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(11,3)
, 0
,};
Node F0_Prelude_46lcm[] = {
  CAPTAG(useLabel(FN_Prelude_46lcm),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46quot))
, VAPTAG(useLabel(FN_Prelude_46gcd))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46abs))
,	/* ST_v208: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(108,99,109,0)
,};
