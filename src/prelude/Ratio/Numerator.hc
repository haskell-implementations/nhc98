#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Ratio_46numerator[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v182: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Ratio_46numerator[] = {
  CAPTAG(useLabel(FN_Ratio_46numerator),2)
,};
