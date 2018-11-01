#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+24)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v176)
,};
Node FN_Prelude_46seq[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46seq[] = {
  CAPTAG(useLabel(FN_Prelude_46seq),2)
,};
