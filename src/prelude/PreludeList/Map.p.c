#include "newmacros.h"
#include "runtime.h"

#define v181	((void*)startLabel+22)
#define v182	((void*)startLabel+32)
#define CT_v189	((void*)startLabel+204)
#define ST_v184	((void*)startLabel+240)
#define PS_v187	((void*)startLabel+252)
#define PS_v186	((void*)startLabel+264)
#define PS_v188	((void*)startLabel+276)
#define PS_v183	((void*)startLabel+288)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,};
Node FN_Prelude_46map[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v181: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v182: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,13,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v184)
,	/* CT_v189: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46map[] = {
  CAPTAG(useLabel(FN_Prelude_46map),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46map))
,};
Node PP_Prelude_46map[] = {
 };
Node PC_Prelude_46map[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,112,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46map)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46map)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46map)
, useLabel(PC_Prelude_46_58)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46map)
, useLabel(PC_Prelude_46map)
,};
