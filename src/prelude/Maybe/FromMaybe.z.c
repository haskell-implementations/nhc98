#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+26)
#define v173	((void*)startLabel+29)
#define CT_v176	((void*)startLabel+48)
#define ST_v174	((void*)startLabel+60)
extern Node TM_Maybe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v176)
,};
Node FN_Maybe_46fromMaybe[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v172: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I1)
,	/* v173: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Maybe_46fromMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46fromMaybe),2)
,	/* ST_v174: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,102,114)
, bytes2word(111,109,77,97)
, bytes2word(121,98,101,0)
,};
