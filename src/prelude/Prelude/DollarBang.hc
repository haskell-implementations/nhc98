#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+32)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v176)
,};
Node FN_Prelude_46_36_33[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_36_33[] = {
  CAPTAG(useLabel(FN_Prelude_46_36_33),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
