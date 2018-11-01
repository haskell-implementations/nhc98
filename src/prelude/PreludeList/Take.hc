#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+26)
#define v193	((void*)startLabel+36)
#define v194	((void*)startLabel+41)
#define CT_v196	((void*)startLabel+72)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46take[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,LE_W,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v190: (byte 2) */
  bytes2word(1,RETURN,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v193: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v194: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_INT_P1,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_I1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v196: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46take[] = {
  CAPTAG(useLabel(FN_Prelude_46take),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46take))
,};
