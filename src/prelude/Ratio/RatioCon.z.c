#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+92)
#define ST_v187	((void*)startLabel+136)
extern Node TM_Ratio[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46signum[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46abs[];
extern Node FN_Ratio_46reduce[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_Ratio_46_37[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_P1,33,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,12,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,6,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,15,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Ratio_46_37[] = {
  CAPTAG(useLabel(FN_Ratio_46_37),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46signum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46abs))
, VAPTAG(useLabel(FN_Ratio_46reduce))
,	/* ST_v187: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,37,0)
,};
