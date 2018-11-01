#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v177)
,};
Node FN_Prelude_46flip[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ARG_I3,PUSH_ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46flip[] = {
  CAPTAG(useLabel(FN_Prelude_46flip),3)
,};
