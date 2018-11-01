#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+22)
#define v191	((void*)startLabel+25)
#define CT_v195	((void*)startLabel+96)
#define ST_v193	((void*)startLabel+128)
#define PS_v192	((void*)startLabel+144)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v195)
,};
Node FN_Prelude_46_95foldr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v191: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_I2,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_ZAP_ARG_I1,ZAP_ARG_I3,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, 50001
, useLabel(ST_v193)
,	/* CT_v195: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46_95foldr[] = {
  CAPTAG(useLabel(FN_Prelude_46_95foldr),3)
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
,};
Node PP_Prelude_46_95foldr[] = {
 };
Node PC_Prelude_46_95foldr[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,102,111,108)
, bytes2word(100,114,0,0)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95foldr)
, useLabel(PC_Prelude_46_95foldr)
,};
