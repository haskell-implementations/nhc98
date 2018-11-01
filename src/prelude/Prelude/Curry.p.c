#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+92)
#define ST_v182	((void*)startLabel+120)
#define PS_v183	((void*)startLabel+136)
#define PS_v181	((void*)startLabel+148)
extern Node PM_Prelude[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_Prelude_46curry[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v182)
,	/* CT_v184: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46curry[] = {
  CAPTAG(useLabel(FN_Prelude_46curry),3)
, useLabel(PS_v181)
, 0
, 0
, 0
,};
Node PP_Prelude_46curry[] = {
 };
Node PC_Prelude_46curry[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,117,114,114)
, bytes2word(121,0,0,0)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46curry)
, useLabel(PC_Prelude_462)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46curry)
, useLabel(PC_Prelude_46curry)
,};
