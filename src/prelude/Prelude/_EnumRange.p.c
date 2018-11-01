#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+100)
#define ST_v182	((void*)startLabel+136)
#define PS_v184	((void*)startLabel+156)
#define PS_v185	((void*)startLabel+168)
#define PS_v181	((void*)startLabel+180)
extern Node FN_Prelude_46_95fromEnum[];
extern Node FN_Prelude_46_95enumFromTo_39[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95fromEnum[];
extern Node PC_Prelude_46_95enumFromTo_39[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v186)
,};
Node FN_Prelude_46_95enumRange[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v182)
,	/* CT_v186: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95enumRange[] = {
  CAPTAG(useLabel(FN_Prelude_46_95enumRange),1)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95fromEnum))
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo_39))
,};
Node PP_Prelude_46_95enumRange[] = {
 };
Node PC_Prelude_46_95enumRange[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,101,110,117)
, bytes2word(109,82,97,110)
, bytes2word(103,101,0,0)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumRange)
, useLabel(PC_Prelude_46_95fromEnum)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumRange)
, useLabel(PC_Prelude_46_95enumFromTo_39)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95enumRange)
, useLabel(PC_Prelude_46_95enumRange)
,};
