#include "newmacros.h"
#include "runtime.h"

#define CT_v189	((void*)startLabel+148)
#define ST_v185	((void*)startLabel+184)
#define PS_v186	((void*)startLabel+204)
#define PS_v187	((void*)startLabel+216)
#define PS_v188	((void*)startLabel+228)
#define PS_v184	((void*)startLabel+240)
extern Node FN_Numeric_46formatRealFloat[];
extern Node FN_Prelude_46showString[];
extern Node PM_Numeric[];
extern Node PC_Numeric_46FFGeneric[];
extern Node PC_Numeric_46formatRealFloat[];
extern Node PC_Prelude_46showString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v189)
,};
Node FN_Numeric_46showGFloat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v188)
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
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v185)
,	/* CT_v189: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Numeric_46showGFloat[] = {
  CAPTAG(useLabel(FN_Numeric_46showGFloat),3)
, useLabel(PS_v184)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Numeric_46formatRealFloat))
, VAPTAG(useLabel(FN_Prelude_46showString))
,};
Node PP_Numeric_46showGFloat[] = {
 };
Node PC_Numeric_46showGFloat[] = {
 	/* ST_v185: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
, bytes2word(71,70,108,111)
, bytes2word(97,116,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showGFloat)
, useLabel(PC_Numeric_46FFGeneric)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showGFloat)
, useLabel(PC_Numeric_46formatRealFloat)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showGFloat)
, useLabel(PC_Prelude_46showString)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showGFloat)
, useLabel(PC_Numeric_46showGFloat)
,};
