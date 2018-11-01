#include "newmacros.h"
#include "runtime.h"

#define CT_v225	((void*)startLabel+316)
#define ST_v216	((void*)startLabel+368)
#define PS_v224	((void*)startLabel+388)
#define PS_v218	((void*)startLabel+400)
#define PS_v220	((void*)startLabel+412)
#define PS_v222	((void*)startLabel+424)
#define PS_v223	((void*)startLabel+436)
#define PS_v215	((void*)startLabel+448)
#define PS_v221	((void*)startLabel+460)
#define PS_v219	((void*)startLabel+472)
extern Node FN_Time_46tdDay[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node FN_Time_46tdHour[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Time_46tdMin[];
extern Node FN_Time_46tdSec[];
extern Node PM_Time[];
extern Node PC_Time_46CT[];
extern Node PC_Time_46tdDay[];
extern Node PC_Time_46tdHour[];
extern Node PC_Time_46tdMin[];
extern Node PC_Time_46tdSec[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_42[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v225)
,};
Node FN_Time_46addToClockTime[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(79,UNPACK,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_INT_P1,24,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,12,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_INT_P1,60,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,HEAP_INT_P1)
, bytes2word(60,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,37,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v224)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v223)
, 0
, 0
, 0
, 0
, useLabel(PS_v222)
, 0
, 0
, 0
, 0
, useLabel(PS_v221)
, 0
, 0
, 0
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v216)
,	/* CT_v225: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Time_46addToClockTime[] = {
  CAPTAG(useLabel(FN_Time_46addToClockTime),2)
, useLabel(PS_v215)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Time_46tdDay))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, VAPTAG(useLabel(FN_Time_46tdHour))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Time_46tdMin))
, VAPTAG(useLabel(FN_Time_46tdSec))
,};
Node PP_Time_46addToClockTime[] = {
 };
Node PC_Time_46addToClockTime[] = {
 	/* ST_v216: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,97,100,100)
, bytes2word(84,111,67,108)
, bytes2word(111,99,107,84)
, bytes2word(105,109,101,0)
,	/* PS_v224: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Time_46CT)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Time_46tdDay)
,	/* PS_v220: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Time_46tdHour)
,	/* PS_v222: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Time_46tdMin)
,	/* PS_v223: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Time_46tdSec)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Time_46addToClockTime)
,	/* PS_v221: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v219: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46addToClockTime)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_42)
,};
