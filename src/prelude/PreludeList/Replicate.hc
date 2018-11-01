#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+28)
extern Node FN_Prelude_46repeat[];
extern Node FN_Prelude_46take[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v170)
,};
Node FN_Prelude_46replicate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v170: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46replicate[] = {
  CAPTAG(useLabel(FN_Prelude_46replicate),2)
, VAPTAG(useLabel(FN_Prelude_46repeat))
, VAPTAG(useLabel(FN_Prelude_46take))
,};
