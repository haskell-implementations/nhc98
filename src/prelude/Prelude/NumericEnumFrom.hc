#include "newmacros.h"
#include "runtime.h"

#define CT_v217	((void*)startLabel+60)
#define CT_v218	((void*)startLabel+212)
extern Node FN_Prelude_46Fractional_46Prelude_46Num[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46iterate[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46_47[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46takeWhile[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v217)
,};
Node FN_Prelude_46numericEnumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CADR_N1,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v217: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Prelude_46numericEnumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46numericEnumFrom),2)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, VAPTAG(useLabel(FN_Prelude_46iterate))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v218)
,};
Node FN_Prelude_46numericEnumFromTo[] = {
  bytes2word(NEEDHEAP_P1,40,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(4,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(23,HEAP_ARG,4,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(31,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2
, CONSTRW(1,0)
, 1
,	/* CT_v218: (byte 0) */
  HW(10,4)
, 0
,};
Node F0_Prelude_46numericEnumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46numericEnumFromTo),4)
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_47))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, VAPTAG(useLabel(FN_Prelude_46numericEnumFrom))
, VAPTAG(useLabel(FN_Prelude_46takeWhile))
,};
