#include "newmacros.h"
#include "runtime.h"

#define v180	((void*)startLabel+22)
#define v181	((void*)startLabel+26)
#define v183	((void*)startLabel+38)
#define v184	((void*)startLabel+43)
#define CT_v188	((void*)startLabel+76)
#define ST_v185	((void*)startLabel+92)
extern Node TM_Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_Maybe_46catMaybes[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v180: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v181: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v184: (byte 3) */
  bytes2word(HEAP_CVAL_I3,HEAP_I2,RETURN_EVAL,UNPACK)
, bytes2word(1,HEAP_CVAL_I3,HEAP_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 50001
, useLabel(ST_v185)
,	/* CT_v188: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Maybe_46catMaybes[] = {
  CAPTAG(useLabel(FN_Maybe_46catMaybes),1)
, VAPTAG(useLabel(FN_Maybe_46catMaybes))
,	/* ST_v185: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,99,97)
, bytes2word(116,77,97,121)
, bytes2word(98,101,115,0)
,};
