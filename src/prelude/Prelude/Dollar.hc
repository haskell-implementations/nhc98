#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,};
Node FN_Prelude_46_36[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v173: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46_36[] = {
  CAPTAG(useLabel(FN_Prelude_46_36),2)
,};
