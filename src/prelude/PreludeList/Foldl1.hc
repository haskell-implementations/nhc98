#include "newmacros.h"
#include "runtime.h"

#define v180	((void*)startLabel+22)
#define v181	((void*)startLabel+29)
#define CT_v183	((void*)startLabel+44)
#define FN_LAMBDA177	((void*)startLabel+76)
#define CT_v185	((void*)startLabel+96)
#define CF_LAMBDA177	((void*)startLabel+104)
#define ST_v184	((void*)startLabel+108)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46foldl[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Prelude_46foldl1[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v180: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v181: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46foldl1[] = {
  CAPTAG(useLabel(FN_Prelude_46foldl1),2)
, VAPTAG(useLabel(FN_LAMBDA177))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46foldl))
, bytes2word(0,0,0,0)
, useLabel(CT_v185)
,	/* FN_LAMBDA177: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA177: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA177))
,	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(102,111,108,100)
, bytes2word(108,49,58,32)
, bytes2word(101,109,112,116)
, bytes2word(121,32,108,105)
, bytes2word(115,116,0,0)
,};
