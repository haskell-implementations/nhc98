#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Ratio_46denominator[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_I1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v182: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Ratio_46denominator[] = {
  CAPTAG(useLabel(FN_Ratio_46denominator),2)
,};
