#include "newmacros.h"
#include "runtime.h"

#define v194	((void*)startLabel+46)
#define CT_v196	((void*)startLabel+64)
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46_95enumFromToInc[];
extern Node FN_Prelude_46_95enumFromToDec[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v196)
,};
Node FN_Prelude_46_95enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,PUSH_INT_P1,0,PUSH_I1)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,GE_W)
, bytes2word(JUMPFALSE,13,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_ARG)
,	/* v194: (byte 2) */
  bytes2word(3,RETURN_EVAL,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v196: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46_95enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromToInc))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromToDec))
,};
