#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+28)
extern Node FN_Prelude_46primIntegerEq[];
extern Node FN_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v171)
,};
Node FN_Prelude_46primIntegerNe[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v171: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46primIntegerNe[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerNe),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerEq))
, VAPTAG(useLabel(FN_Prelude_46not))
,};
