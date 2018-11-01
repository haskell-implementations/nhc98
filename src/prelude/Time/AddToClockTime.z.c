#include "newmacros.h"
#include "runtime.h"

#define CT_v217	((void*)startLabel+104)
#define ST_v215	((void*)startLabel+140)
extern Node TM_Time[];
extern Node FN_Time_46tdDay[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node FN_Time_46tdHour[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Time_46tdMin[];
extern Node FN_Time_46tdSec[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v217)
,};
Node FN_Time_46addToClockTime[] = {
  useLabel(TM_Time)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_INT_P1,24,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,HEAP_INT_P1,60)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_INT_P1,60,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_I1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 70001
, useLabel(ST_v215)
,	/* CT_v217: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Time_46addToClockTime[] = {
  CAPTAG(useLabel(FN_Time_46addToClockTime),2)
, VAPTAG(useLabel(FN_Time_46tdDay))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, VAPTAG(useLabel(FN_Time_46tdHour))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Time_46tdMin))
, VAPTAG(useLabel(FN_Time_46tdSec))
,	/* ST_v215: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,97,100,100)
, bytes2word(84,111,67,108)
, bytes2word(111,99,107,84)
, bytes2word(105,109,101,0)
,};
