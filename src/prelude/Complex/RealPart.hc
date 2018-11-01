#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Complex_46realPart[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Complex_46realPart[] = {
  CAPTAG(useLabel(FN_Complex_46realPart),2)
,};
