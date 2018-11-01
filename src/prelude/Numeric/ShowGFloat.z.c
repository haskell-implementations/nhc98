#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+64)
#define ST_v184	((void*)startLabel+84)
extern Node TM_Numeric[];
extern Node FN_Numeric_46formatRealFloat[];
extern Node FN_Prelude_46showString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v185)
,};
Node FN_Numeric_46showGFloat[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, 70001
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Numeric_46showGFloat[] = {
  CAPTAG(useLabel(FN_Numeric_46showGFloat),3)
, VAPTAG(useLabel(FN_Numeric_46formatRealFloat))
, VAPTAG(useLabel(FN_Prelude_46showString))
,	/* ST_v184: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
, bytes2word(71,70,108,111)
, bytes2word(97,116,0,0)
,};
