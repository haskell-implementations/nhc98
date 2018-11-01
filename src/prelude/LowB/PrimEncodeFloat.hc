#include "newmacros.h"
#include "runtime.h"

#define CT_v157	((void*)startLabel+32)
extern void *primEncodeFloat();

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v157)
,};
Node FN_Prelude_46primEncodeFloat[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primEncodeFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v157: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46primEncodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46primEncodeFloat),2)
,};
