#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+22)
#define v173	((void*)startLabel+25)
#define CT_v177	((void*)startLabel+44)
#define ST_v175	((void*)startLabel+72)
#define PS_v174	((void*)startLabel+88)
extern Node PM_Maybe[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v177)
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
, 40001
, useLabel(ST_v175)
,	/* CT_v177: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Maybe_46fromMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46fromMaybe),2)
, useLabel(PS_v174)
, 0
, 0
, 0
,};
Node PP_Maybe_46fromMaybe[] = {
 };
Node PC_Maybe_46fromMaybe[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,102,114)
, bytes2word(111,109,77,97)
, bytes2word(121,98,101,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46fromMaybe)
, useLabel(PC_Maybe_46fromMaybe)
,};
