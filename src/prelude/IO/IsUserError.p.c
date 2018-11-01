#include "newmacros.h"
#include "runtime.h"

#define v178	((void*)startLabel+22)
#define v175	((void*)startLabel+26)
#define v172	((void*)startLabel+37)
#define CT_v181	((void*)startLabel+140)
#define ST_v177	((void*)startLabel+168)
#define PS_v180	((void*)startLabel+184)
#define PS_v179	((void*)startLabel+196)
#define PS_v176	((void*)startLabel+208)
extern Node PM_IO[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v181)
,};
Node FN_IO_46isUserError[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v178: (byte 2) */
  bytes2word(TOP(12),BOT(12),POP_I1,JUMP)
,	/* v175: (byte 2) */
  bytes2word(13,0,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v172: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v177)
,	/* CT_v181: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46isUserError[] = {
  CAPTAG(useLabel(FN_IO_46isUserError),1)
, useLabel(PS_v176)
, 0
, 0
, 0
,};
Node PP_IO_46isUserError[] = {
 };
Node PC_IO_46isUserError[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(115,85,115,101)
, bytes2word(114,69,114,114)
, bytes2word(111,114,0,0)
,	/* PS_v180: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46isUserError)
, useLabel(PC_Prelude_46False)
,	/* PS_v179: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46isUserError)
, useLabel(PC_Prelude_46True)
,	/* PS_v176: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46isUserError)
, useLabel(PC_IO_46isUserError)
,};
