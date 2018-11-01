#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+76)
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Char_46isHexDigit[] = {
  bytes2word(NEEDHEAP_P1,34,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,48,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CHAR_P1,57)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,65,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,70,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CHAR_P1)
, bytes2word(97,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,102,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Char_46isHexDigit[] = {
  CAPTAG(useLabel(FN_Char_46isHexDigit),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
,};
