#include "newmacros.h"
#include "runtime.h"

#define v193	((void*)startLabel+97)
#define CT_v195	((void*)startLabel+124)
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46showParen[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v195)
,};
Node FN_Numeric_46showSigned[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(1,PUSH_P1,0,PUSH_ARG)
, bytes2word(4,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,SLIDE_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,46)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,45,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,5)
,	/* v193: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_ARG,4,PUSH_ARG_I2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v195: (byte 0) */
  HW(10,4)
, 0
,};
Node F0_Numeric_46showSigned[] = {
  CAPTAG(useLabel(FN_Numeric_46showSigned),4)
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showParen))
,};
