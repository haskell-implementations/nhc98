#include "newmacros.h"
#include "runtime.h"

#define FN_IO_46cHGetStr	((void*)startLabel+8)
#define CT_v188	((void*)startLabel+32)
#define F0_IO_46cHGetStr	((void*)startLabel+40)
#define CT_v190	((void*)startLabel+76)
#define FN_LAMBDA185	((void*)startLabel+104)
#define CT_v192	((void*)startLabel+140)
#define F0_LAMBDA185	((void*)startLabel+148)
#define ST_v187	((void*)startLabel+156)
#define ST_v189	((void*)startLabel+168)
#define ST_v191	((void*)startLabel+184)
extern Node TM_IO[];
extern Node TMSUB_IO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v188)
,	/* FN_IO_46cHGetStr: (byte 0) */
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(HGETS,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 270001
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(0,1)
, 0
,	/* F0_IO_46cHGetStr: (byte 0) */
  CAPTAG(useLabel(FN_IO_46cHGetStr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v190)
,};
Node FN_IO_46hGetContents[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hGetContents[] = {
  CAPTAG(useLabel(FN_IO_46hGetContents),1)
, CAPTAG(useLabel(FN_LAMBDA185),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,	/* FN_LAMBDA185: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 160032
, useLabel(ST_v191)
,	/* CT_v192: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),2)
, VAPTAG(useLabel(FN_IO_46cHGetStr))
,	/* ST_v187: (byte 0) */
  bytes2word(73,79,46,99)
, bytes2word(72,71,101,116)
,	/* ST_v189: (byte 4) */
  bytes2word(83,116,114,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(111,110,116,101)
,	/* ST_v191: (byte 4) */
  bytes2word(110,116,115,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(111,110,116,101)
, bytes2word(110,116,115,58)
, bytes2word(49,54,58,51)
, bytes2word(50,45,49,54)
, bytes2word(58,53,57,0)
,};
