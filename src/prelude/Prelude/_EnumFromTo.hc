#include "newmacros.h"
#include "runtime.h"

#define v199	((void*)startLabel+28)
#define v200	((void*)startLabel+51)
#define v201	((void*)startLabel+65)
#define CT_v203	((void*)startLabel+84)
#define CT_v204	((void*)startLabel+140)
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95toEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46_95fromEnum[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v203)
,};
Node FN_Prelude_46_95enumFromTo_39[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v199: (byte 4) */
  bytes2word(TOP(29),BOT(29),TOP(43),BOT(43))
, bytes2word(POP_I1,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,9)
,	/* v200: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN,POP_I1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
,	/* v201: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v203: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46_95enumFromTo_39[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, VAPTAG(useLabel(FN_Prelude_46_95toEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v204)
,};
Node FN_Prelude_46_95enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v204: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39))
,};
