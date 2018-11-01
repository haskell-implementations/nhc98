#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+52)
extern Node FN_Numeric_46formatRealFloat[];
extern Node FN_Prelude_46showString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_Numeric_46showEFloat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v184: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Numeric_46showEFloat[] = {
  CAPTAG(useLabel(FN_Numeric_46showEFloat),3)
, VAPTAG(useLabel(FN_Numeric_46formatRealFloat))
, VAPTAG(useLabel(FN_Prelude_46showString))
,};
