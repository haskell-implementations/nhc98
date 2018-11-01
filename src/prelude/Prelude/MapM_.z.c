#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+52)
#define ST_v187	((void*)startLabel+72)
extern Node TM_Prelude[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46sequence_95[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v188)
,};
Node FN_Prelude_46mapM_95[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v187)
,	/* CT_v188: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46mapM_95[] = {
  CAPTAG(useLabel(FN_Prelude_46mapM_95),3)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46sequence_95))
,	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,112,77)
, bytes2word(95,0,0,0)
,};
