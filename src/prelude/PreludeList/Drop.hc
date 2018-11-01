#include "newmacros.h"
#include "runtime.h"

#define v189	((void*)startLabel+23)
#define v192	((void*)startLabel+32)
#define v193	((void*)startLabel+37)
#define CT_v195	((void*)startLabel+64)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v195)
,};
Node FN_Prelude_46drop[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,LE_W,JUMPFALSE,4)
,	/* v189: (byte 3) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v192: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v193: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v195: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46drop[] = {
  CAPTAG(useLabel(FN_Prelude_46drop),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46drop))
,};
