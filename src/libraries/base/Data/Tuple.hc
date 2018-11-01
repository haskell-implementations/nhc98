#include "newmacros.h"
#include "runtime.h"

#define CT_v206	((void*)startLabel+36)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v206)
,};
Node FN_Data_46Tuple_46swap[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v206: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Data_46Tuple_46swap[] = {
  CAPTAG(useLabel(FN_Data_46Tuple_46swap),1)
,};
