#include "newmacros.h"
#include "runtime.h"

#define CT_v157	((void*)startLabel+24)
extern void *primDecodeFloat();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v157)
,};
Node FN_Prelude_46primDecodeFloat[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primDecodeFloat)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v157: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primDecodeFloat[] = {
  CAPTAG(useLabel(FN_Prelude_46primDecodeFloat),1)
,};
