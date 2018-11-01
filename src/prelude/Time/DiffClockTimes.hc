#include "newmacros.h"
#include "runtime.h"

#define CT_v260	((void*)startLabel+100)
#define FN_LAMBDA252	((void*)startLabel+152)
#define CT_v261	((void*)startLabel+164)
#define F0_LAMBDA252	((void*)startLabel+172)
#define FN_LAMBDA251	((void*)startLabel+184)
#define CT_v262	((void*)startLabel+196)
#define F0_LAMBDA251	((void*)startLabel+204)
#define FN_LAMBDA250	((void*)startLabel+216)
#define CT_v263	((void*)startLabel+228)
#define F0_LAMBDA250	((void*)startLabel+236)
#define FN_LAMBDA249	((void*)startLabel+248)
#define CT_v264	((void*)startLabel+260)
#define F0_LAMBDA249	((void*)startLabel+268)
#define FN_LAMBDA248	((void*)startLabel+280)
#define CT_v265	((void*)startLabel+292)
#define F0_LAMBDA248	((void*)startLabel+300)
#define FN_LAMBDA247	((void*)startLabel+312)
#define CT_v266	((void*)startLabel+324)
#define F0_LAMBDA247	((void*)startLabel+332)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46quotRem[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Time_46diffClockTimes[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_I2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_INT_P1,60,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_I2,HEAP_INT_P1)
, bytes2word(60,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_I2,HEAP_INT_P1,24)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_INT_P1,0,HEAP_INT_P1)
, bytes2word(0,HEAP_I2,HEAP_I1,HEAP_P1)
, bytes2word(4,HEAP_P1,7,HEAP_CADR_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(0,0)
, CONSTR(0,7,0)
,	/* CT_v260: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Time_46diffClockTimes[] = {
  CAPTAG(useLabel(FN_Time_46diffClockTimes),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quotRem))
, VAPTAG(useLabel(FN_LAMBDA247))
, VAPTAG(useLabel(FN_LAMBDA248))
, VAPTAG(useLabel(FN_LAMBDA249))
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_LAMBDA251))
, VAPTAG(useLabel(FN_LAMBDA252))
, bytes2word(1,0,0,1)
, useLabel(CT_v261)
,	/* FN_LAMBDA252: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v262)
,	/* FN_LAMBDA251: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v262: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA251: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA251),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v263)
,	/* FN_LAMBDA250: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v263: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA250: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA250),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v264)
,	/* FN_LAMBDA249: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA249: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA249),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v266)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),1)
,};
