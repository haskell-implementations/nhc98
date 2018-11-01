#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+48)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Numeric_46showIntAtBase[];
extern Node F0_Char_46intToDigit[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Numeric_46showInt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 10
,	/* CT_v177: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Numeric_46showInt[] = {
  CAPTAG(useLabel(FN_Numeric_46showInt),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Numeric_46showIntAtBase),2)
, useLabel(F0_Char_46intToDigit)
,};
