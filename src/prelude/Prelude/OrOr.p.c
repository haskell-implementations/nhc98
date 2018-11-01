#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+22)
#define v170	((void*)startLabel+25)
#define CT_v175	((void*)startLabel+88)
#define ST_v172	((void*)startLabel+116)
#define PS_v174	((void*)startLabel+128)
#define PS_v171	((void*)startLabel+140)
extern Node PM_Prelude[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Prelude_46_124_124[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v169: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v170: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v172)
,	/* CT_v175: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46_124_124[] = {
  CAPTAG(useLabel(FN_Prelude_46_124_124),2)
, useLabel(PS_v171)
, 0
, 0
, 0
,};
Node PP_Prelude_46_124_124[] = {
 };
Node PC_Prelude_46_124_124[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(124,124,0,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_124_124)
, useLabel(PC_Prelude_46True)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_124_124)
, useLabel(PC_Prelude_46_124_124)
,};
