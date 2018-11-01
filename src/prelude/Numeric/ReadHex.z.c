#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+64)
#define ST_v178	((void*)startLabel+104)
extern Node TM_Numeric[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Numeric_46readInt[];
extern Node F0_Char_46isHexDigit[];
extern Node F0_Char_46digitToInt[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_Numeric_46readHex[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 16
, 90001
, useLabel(ST_v178)
,	/* CT_v179: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Numeric_46readHex[] = {
  CAPTAG(useLabel(FN_Numeric_46readHex),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Numeric_46readInt),1)
, useLabel(F0_Char_46isHexDigit)
, useLabel(F0_Char_46digitToInt)
,	/* ST_v178: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(114,101,97,100)
, bytes2word(72,101,120,0)
,};
