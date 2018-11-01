#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+80)
#define ST_v183	((void*)startLabel+108)
extern Node TM_Complex[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node FN_Prelude_46cos[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46sin[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Complex_46cis[] = {
  useLabel(TM_Complex)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_I1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60001
, useLabel(ST_v183)
,	/* CT_v184: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Complex_46cis[] = {
  CAPTAG(useLabel(FN_Complex_46cis),2)
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Floating))
, VAPTAG(useLabel(FN_Prelude_46cos))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46sin))
,	/* ST_v183: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(99,105,115,0)
,};
