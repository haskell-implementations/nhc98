#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+26)
#define v185	((void*)startLabel+30)
#define CT_v188	((void*)startLabel+60)
#define ST_v186	((void*)startLabel+76)
extern Node TM_Prelude[];
extern Node FN_Prelude_46scanl[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46scanl1[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v185: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46scanl1[] = {
  CAPTAG(useLabel(FN_Prelude_46scanl1),2)
, VAPTAG(useLabel(FN_Prelude_46scanl))
,	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,99,97,110)
, bytes2word(108,49,0,0)
,};
