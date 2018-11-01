#include "newmacros.h"
#include "runtime.h"

#define CT_v157	((void*)startLabel+24)
extern void *primDecodeDouble();

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v157)
,};
Node FN_Prelude_46primDecodeDouble[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(primDecodeDouble)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v157: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46primDecodeDouble[] = {
  CAPTAG(useLabel(FN_Prelude_46primDecodeDouble),1)
,};
