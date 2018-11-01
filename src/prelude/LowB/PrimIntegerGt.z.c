#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+36)
#define ST_v170	((void*)startLabel+52)
extern Node TM_Prelude[];
extern Node FN_Prelude_46primIntegerLt[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v171)
,};
Node FN_Prelude_46primIntegerGt[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,1,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v170)
,	/* CT_v171: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46primIntegerGt[] = {
  CAPTAG(useLabel(FN_Prelude_46primIntegerGt),2)
, VAPTAG(useLabel(FN_Prelude_46primIntegerLt))
,	/* ST_v170: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,109)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,71)
, bytes2word(116,0,0,0)
,};
