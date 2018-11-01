#include "newmacros.h"
#include "runtime.h"

#define v185	((void*)startLabel+22)
#define v186	((void*)startLabel+25)
#define CT_v190	((void*)startLabel+96)
#define ST_v188	((void*)startLabel+128)
#define PS_v187	((void*)startLabel+144)
extern Node PM_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v190)
,};
Node FN_Prelude_46foldr[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v185: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v186: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_I2,PUSH_P1)
, bytes2word(0,PUSH_P1,2,PUSH_ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v188)
,	/* CT_v190: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46foldr[] = {
  CAPTAG(useLabel(FN_Prelude_46foldr),3)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46foldr))
,};
Node PP_Prelude_46foldr[] = {
 };
Node PC_Prelude_46foldr[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,111,108,100)
, bytes2word(114,0,0,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldr)
, useLabel(PC_Prelude_46foldr)
,};
