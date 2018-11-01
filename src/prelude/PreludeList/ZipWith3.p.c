#include "newmacros.h"
#include "runtime.h"

#define v217	((void*)startLabel+26)
#define v206	((void*)startLabel+30)
#define v218	((void*)startLabel+42)
#define v210	((void*)startLabel+46)
#define v219	((void*)startLabel+58)
#define v214	((void*)startLabel+62)
#define v211	((void*)startLabel+105)
#define v207	((void*)startLabel+110)
#define v203	((void*)startLabel+115)
#define CT_v223	((void*)startLabel+260)
#define ST_v216	((void*)startLabel+296)
#define PS_v220	((void*)startLabel+316)
#define PS_v222	((void*)startLabel+328)
#define PS_v221	((void*)startLabel+340)
#define PS_v215	((void*)startLabel+352)
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply3[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v223)
,};
Node FN_Prelude_46zipWith3[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v217: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v206: (byte 2) */
  bytes2word(87,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v218: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v210: (byte 2) */
  bytes2word(66,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v219: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v214: (byte 2) */
  bytes2word(45,0,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,4,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
, bytes2word(5,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,23,HEAP_OFF_N1,15)
,	/* v211: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v207: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v203: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v222)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v221)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v216)
,	/* CT_v223: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46zipWith3[] = {
  CAPTAG(useLabel(FN_Prelude_46zipWith3),4)
, useLabel(PS_v215)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46zipWith3))
,};
Node PP_Prelude_46zipWith3[] = {
 };
Node PC_Prelude_46zipWith3[] = {
 	/* ST_v216: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,87)
, bytes2word(105,116,104,51)
, bytes2word(0,0,0,0)
,	/* PS_v220: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith3)
, useLabel(PC_NHC_46Internal_46_95apply3)
,	/* PS_v222: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith3)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v221: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith3)
, useLabel(PC_Prelude_46_58)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith3)
, useLabel(PC_Prelude_46zipWith3)
,};
