#include "newmacros.h"
#include "runtime.h"

#define v180	((void*)startLabel+18)
#define v181	((void*)startLabel+23)
#define v183	((void*)startLabel+36)
#define v184	((void*)startLabel+41)
#define CT_v187	((void*)startLabel+68)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v187)
,};
Node FN_Maybe_46catMaybes[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v180: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v181: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v183: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_I2)
,	/* v184: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,HEAP_CVAL_I3)
, bytes2word(HEAP_I2,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_I1,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v187: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Maybe_46catMaybes[] = {
  CAPTAG(useLabel(FN_Maybe_46catMaybes),1)
, VAPTAG(useLabel(FN_Maybe_46catMaybes))
,};
