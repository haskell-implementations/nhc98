#include "newmacros.h"
#include "runtime.h"

#define CT_v201	((void*)startLabel+68)
#define CT_v202	((void*)startLabel+132)
extern Node FN_Prelude_46toInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,};
Node FN_Prelude_46Real_46Ratio_46Ratio_46toRational[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,3,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v201: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Real_46Ratio_46Ratio_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio_46toRational),2)
, VAPTAG(useLabel(FN_Prelude_46toInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(1,0,0,1)
, useLabel(CT_v202)
,};
Node FN_Prelude_46Real_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v202: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio_46toRational),1)
,};
