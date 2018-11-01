#include "newmacros.h"
#include "runtime.h"

#define v193	((void*)startLabel+26)
#define v190	((void*)startLabel+30)
#define v191	((void*)startLabel+35)
#define v187	((void*)startLabel+41)
#define CT_v194	((void*)startLabel+68)
#define ST_v192	((void*)startLabel+80)
extern Node TM_IO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v194)
,};
Node FN_IO_46ioeGetHandle[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(17),BOT(17),TOP(8),BOT(8))
,	/* v193: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v190: (byte 2) */
  bytes2word(13,0,UNPACK,4)
,	/* v191: (byte 3) */
  bytes2word(PUSH_P1,2,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
,	/* v187: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
, 70001
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46ioeGetHandle[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetHandle),1)
,	/* ST_v192: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(111,101,71,101)
, bytes2word(116,72,97,110)
, bytes2word(100,108,101,0)
,};
