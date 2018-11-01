#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+44)
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Char_46isControl[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,32,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,127,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CHAR_P1,159)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v172: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Char_46isControl[] = {
  CAPTAG(useLabel(FN_Char_46isControl),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
,};
