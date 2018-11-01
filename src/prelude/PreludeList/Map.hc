#include "newmacros.h"
#include "runtime.h"

#define v181	((void*)startLabel+22)
#define v182	((void*)startLabel+27)
#define CT_v184	((void*)startLabel+60)
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_Prelude_46map[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v181: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v182: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v184: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46map[] = {
  CAPTAG(useLabel(FN_Prelude_46map),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46map))
,};
