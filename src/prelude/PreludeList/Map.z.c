#include "newmacros.h"
#include "runtime.h"

#define v181	((void*)startLabel+26)
#define v182	((void*)startLabel+30)
#define CT_v185	((void*)startLabel+72)
#define ST_v183	((void*)startLabel+92)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v185)
,};
Node FN_Prelude_46map[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v181: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v182: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v183)
,	/* CT_v185: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46map[] = {
  CAPTAG(useLabel(FN_Prelude_46map),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46map))
,	/* ST_v183: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,112,0)
,};
