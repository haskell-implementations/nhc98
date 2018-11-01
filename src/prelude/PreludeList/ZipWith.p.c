#include "newmacros.h"
#include "runtime.h"

#define v201	((void*)startLabel+22)
#define v194	((void*)startLabel+26)
#define v202	((void*)startLabel+38)
#define v198	((void*)startLabel+42)
#define v195	((void*)startLabel+81)
#define v191	((void*)startLabel+86)
#define CT_v206	((void*)startLabel+228)
#define ST_v200	((void*)startLabel+264)
#define PS_v203	((void*)startLabel+280)
#define PS_v205	((void*)startLabel+292)
#define PS_v204	((void*)startLabel+304)
#define PS_v199	((void*)startLabel+316)
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v206)
,};
Node FN_Prelude_46zipWith[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v201: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v194: (byte 2) */
  bytes2word(62,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v202: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v198: (byte 2) */
  bytes2word(41,0,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,14)
,	/* v195: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v191: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v200)
,	/* CT_v206: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46zipWith[] = {
  CAPTAG(useLabel(FN_Prelude_46zipWith),3)
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46zipWith))
,};
Node PP_Prelude_46zipWith[] = {
 };
Node PC_Prelude_46zipWith[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,87)
, bytes2word(105,116,104,0)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith)
, useLabel(PC_Prelude_46_58)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zipWith)
, useLabel(PC_Prelude_46zipWith)
,};
