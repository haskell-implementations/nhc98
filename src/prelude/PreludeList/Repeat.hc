#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+32)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v167)
,};
Node FN_Prelude_46repeat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,2)
, bytes2word(PUSH_P1,0,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v167: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46repeat[] = {
  CAPTAG(useLabel(FN_Prelude_46repeat),1)
,};
