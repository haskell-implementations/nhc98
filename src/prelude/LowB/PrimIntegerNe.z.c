#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+40)
#define ST_v171	((void*)startLabel+60)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primIntegerEq[];
extern Node FN_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Prelude_46primIntegerNe[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v171)
,	/* CT_v172: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46primIntegerNe[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerNe),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerEq))
, VAPTAG(useLabel(FN_Prelude_46not))
,	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,78)
, bytes2word(101,0,0,0)
,};
