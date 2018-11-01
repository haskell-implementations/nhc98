#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+26)
#define v175	((void*)startLabel+30)
#define v172	((void*)startLabel+35)
#define CT_v178	((void*)startLabel+60)
#define ST_v176	((void*)startLabel+72)
extern Node TM_IO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_IO_46isEOFError[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(12),BOT(12),TOP(8),BOT(8))
,	/* v177: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v175: (byte 2) */
  bytes2word(7,0,UNPACK,2)
,	/* v172: (byte 3) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 60001
, useLabel(ST_v176)
,	/* CT_v178: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46isEOFError[] = {
  CAPTAG(useLabel(FN_IO_46isEOFError),1)
,	/* ST_v176: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(115,69,79,70)
, bytes2word(69,114,114,111)
, bytes2word(114,0,0,0)
,};
