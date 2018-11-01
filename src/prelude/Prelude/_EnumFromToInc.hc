#include "newmacros.h"
#include "runtime.h"

#define v187	((void*)startLabel+28)
#define v188	((void*)startLabel+51)
#define v189	((void*)startLabel+65)
#define CT_v191	((void*)startLabel+84)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95toEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,};
Node FN_Prelude_46_95enumFromToInc[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v187: (byte 4) */
  bytes2word(TOP(29),BOT(29),TOP(43),BOT(43))
, bytes2word(POP_I1,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,10)
,	/* v188: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
,	/* v189: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v191: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46_95enumFromToInc[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromToInc),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, VAPTAG(useLabel(FN_Prelude_46_95toEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromToInc))
,};
