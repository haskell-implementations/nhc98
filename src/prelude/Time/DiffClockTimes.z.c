#include "newmacros.h"
#include "runtime.h"

#define CT_v261	((void*)startLabel+112)
#define FN_LAMBDA252	((void*)startLabel+164)
#define CT_v263	((void*)startLabel+188)
#define F0_LAMBDA252	((void*)startLabel+196)
#define FN_LAMBDA251	((void*)startLabel+208)
#define CT_v265	((void*)startLabel+232)
#define F0_LAMBDA251	((void*)startLabel+240)
#define FN_LAMBDA250	((void*)startLabel+252)
#define CT_v267	((void*)startLabel+276)
#define F0_LAMBDA250	((void*)startLabel+284)
#define FN_LAMBDA249	((void*)startLabel+296)
#define CT_v269	((void*)startLabel+320)
#define F0_LAMBDA249	((void*)startLabel+328)
#define FN_LAMBDA248	((void*)startLabel+340)
#define CT_v271	((void*)startLabel+364)
#define F0_LAMBDA248	((void*)startLabel+372)
#define FN_LAMBDA247	((void*)startLabel+384)
#define CT_v273	((void*)startLabel+408)
#define F0_LAMBDA247	((void*)startLabel+416)
#define ST_v258	((void*)startLabel+420)
#define ST_v270	((void*)startLabel+440)
#define ST_v272	((void*)startLabel+472)
#define ST_v266	((void*)startLabel+502)
#define ST_v268	((void*)startLabel+534)
#define ST_v262	((void*)startLabel+564)
#define ST_v264	((void*)startLabel+596)
extern Node TM_Time[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46quotRem[];
extern Node TMSUB_Time[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Time_46diffClockTimes[] = {
  useLabel(TM_Time)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
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
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_INT_P1,0,HEAP_INT_P1,0)
, bytes2word(HEAP_I2,HEAP_I1,HEAP_P1,4)
, bytes2word(HEAP_P1,7,HEAP_CADR_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(0,0)
, CONSTR(0,7,0)
, 70001
, useLabel(ST_v258)
,	/* CT_v261: (byte 0) */
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
, useLabel(CT_v263)
,	/* FN_LAMBDA252: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140010
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,	/* FN_LAMBDA251: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140006
, useLabel(ST_v264)
,	/* CT_v265: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA251: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA251),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v267)
,	/* FN_LAMBDA250: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130010
, useLabel(ST_v266)
,	/* CT_v267: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA250: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA250),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v269)
,	/* FN_LAMBDA249: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130006
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA249: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA249),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v271)
,	/* FN_LAMBDA248: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120010
, useLabel(ST_v270)
,	/* CT_v271: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,	/* FN_LAMBDA247: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120006
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),1)
,	/* ST_v258: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
,	/* ST_v270: (byte 4) */
  bytes2word(109,101,115,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
,	/* ST_v272: (byte 4) */
  bytes2word(58,49,49,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,50,58,54)
, bytes2word(45,49,50,58)
,	/* ST_v266: (byte 2) */
  bytes2word(55,0,84,105)
, bytes2word(109,101,46,100)
, bytes2word(105,102,102,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
, bytes2word(115,58,49,51)
, bytes2word(58,49,48,45)
, bytes2word(49,51,58,49)
,	/* ST_v268: (byte 2) */
  bytes2word(49,0,84,105)
, bytes2word(109,101,46,100)
, bytes2word(105,102,102,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
, bytes2word(115,58,49,51)
, bytes2word(58,54,45,49)
,	/* ST_v262: (byte 4) */
  bytes2word(51,58,55,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,52,58,49)
, bytes2word(48,45,49,52)
,	/* ST_v264: (byte 4) */
  bytes2word(58,49,49,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,52,58,54)
, bytes2word(45,49,52,58)
, bytes2word(55,0,0,0)
,};
