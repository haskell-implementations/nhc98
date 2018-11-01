#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+22)
#define v173	((void*)startLabel+25)
#define CT_v175	((void*)startLabel+36)

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Maybe_46fromMaybe[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v172: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I1)
,	/* v173: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v175: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Maybe_46fromMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46fromMaybe),2)
,};
