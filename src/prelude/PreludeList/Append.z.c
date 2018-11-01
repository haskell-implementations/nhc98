#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+26)
#define v178	((void*)startLabel+29)
#define CT_v181	((void*)startLabel+64)
#define ST_v179	((void*)startLabel+80)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v181)
,};
Node FN_Prelude_46_43_43[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v177: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v178: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_I1,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 60001
, useLabel(ST_v179)
,	/* CT_v181: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_43_43[] = {
  CAPTAG(useLabel(FN_Prelude_46_43_43),2)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
,	/* ST_v179: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(43,43,0,0)
,};
