#include "newmacros.h"
#include "runtime.h"

#define v174	((void*)startLabel+25)
#define CT_v176	((void*)startLabel+32)

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v176)
,};
Node FN_Prelude_46_95filter[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,JUMPFALSE)
, bytes2word(9,0,PUSH_ARG_I3,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v174: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG_I3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46_95filter[] = {
  CAPTAG(useLabel(FN_Prelude_46_95filter),3)
,};
