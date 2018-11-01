#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+44)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v181)
,};
Node FN_Prelude_46curry[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_P1)
, bytes2word(0,PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v181: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46curry[] = {
  CAPTAG(useLabel(FN_Prelude_46curry),3)
,};
