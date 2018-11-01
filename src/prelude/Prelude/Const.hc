#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+24)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Prelude_46const[] = {
  bytes2word(ZAP_ARG_I2,NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v172: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46const[] = {
  CAPTAG(useLabel(FN_Prelude_46const),2)
,};
