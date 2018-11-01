#include "newmacros.h"
#include "runtime.h"

#define CT_v271	((void*)startLabel+384)
#define FN_LAMBDA252	((void*)startLabel+452)
#define CT_v274	((void*)startLabel+472)
#define F0_LAMBDA252	((void*)startLabel+480)
#define FN_LAMBDA251	((void*)startLabel+508)
#define CT_v277	((void*)startLabel+528)
#define F0_LAMBDA251	((void*)startLabel+536)
#define FN_LAMBDA250	((void*)startLabel+564)
#define CT_v280	((void*)startLabel+584)
#define F0_LAMBDA250	((void*)startLabel+592)
#define FN_LAMBDA249	((void*)startLabel+620)
#define CT_v283	((void*)startLabel+640)
#define F0_LAMBDA249	((void*)startLabel+648)
#define FN_LAMBDA248	((void*)startLabel+676)
#define CT_v286	((void*)startLabel+696)
#define F0_LAMBDA248	((void*)startLabel+704)
#define FN_LAMBDA247	((void*)startLabel+732)
#define CT_v289	((void*)startLabel+752)
#define F0_LAMBDA247	((void*)startLabel+760)
#define ST_v259	((void*)startLabel+780)
#define PP_LAMBDA248	((void*)startLabel+800)
#define PC_LAMBDA248	((void*)startLabel+800)
#define ST_v285	((void*)startLabel+800)
#define PP_LAMBDA247	((void*)startLabel+832)
#define PC_LAMBDA247	((void*)startLabel+832)
#define ST_v288	((void*)startLabel+832)
#define PP_LAMBDA250	((void*)startLabel+862)
#define PC_LAMBDA250	((void*)startLabel+862)
#define ST_v279	((void*)startLabel+862)
#define PP_LAMBDA249	((void*)startLabel+894)
#define PC_LAMBDA249	((void*)startLabel+894)
#define ST_v282	((void*)startLabel+894)
#define PP_LAMBDA252	((void*)startLabel+924)
#define PC_LAMBDA252	((void*)startLabel+924)
#define ST_v273	((void*)startLabel+924)
#define PP_LAMBDA251	((void*)startLabel+956)
#define PC_LAMBDA251	((void*)startLabel+956)
#define ST_v276	((void*)startLabel+956)
#define PS_v270	((void*)startLabel+988)
#define PS_v258	((void*)startLabel+1000)
#define PS_v262	((void*)startLabel+1012)
#define PS_v263	((void*)startLabel+1024)
#define PS_v264	((void*)startLabel+1036)
#define PS_v265	((void*)startLabel+1048)
#define PS_v266	((void*)startLabel+1060)
#define PS_v267	((void*)startLabel+1072)
#define PS_v268	((void*)startLabel+1084)
#define PS_v269	((void*)startLabel+1096)
#define PS_v287	((void*)startLabel+1108)
#define PS_v284	((void*)startLabel+1120)
#define PS_v281	((void*)startLabel+1132)
#define PS_v278	((void*)startLabel+1144)
#define PS_v275	((void*)startLabel+1156)
#define PS_v272	((void*)startLabel+1168)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46quotRem[];
extern Node PM_Time[];
extern Node PC_Time_46TimeDiff[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PC_Prelude_46Integral_46Prelude_46Int_46quotRem[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v271)
,};
Node FN_Time_46diffClockTimes[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(1,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(76,UNPACK,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_INT_P1,60)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,18)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_INT_P1,60,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_INT_P1,24,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,18,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_INT_P1,0)
, bytes2word(HEAP_INT_P1,0,HEAP_I2,HEAP_I1)
, bytes2word(HEAP_P1,4,HEAP_P1,7)
, bytes2word(HEAP_CADR_N1,57,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, CONSTR(0,7,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, useLabel(PS_v266)
, 0
, 0
, 0
, 0
, useLabel(PS_v265)
, 0
, 0
, 0
, 0
, useLabel(PS_v264)
, 0
, 0
, 0
, 0
, useLabel(PS_v263)
, 0
, 0
, 0
, 0
, useLabel(PS_v262)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v259)
,	/* CT_v271: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Time_46diffClockTimes[] = {
  CAPTAG(useLabel(FN_Time_46diffClockTimes),2)
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46quotRem))
, VAPTAG(useLabel(FN_LAMBDA247))
, VAPTAG(useLabel(FN_LAMBDA248))
, VAPTAG(useLabel(FN_LAMBDA249))
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_LAMBDA251))
, VAPTAG(useLabel(FN_LAMBDA252))
, bytes2word(1,0,0,1)
, useLabel(CT_v274)
,	/* FN_LAMBDA252: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140010
, useLabel(ST_v273)
,	/* CT_v274: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA252: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA252),1)
, useLabel(PS_v272)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,	/* FN_LAMBDA251: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140006
, useLabel(ST_v276)
,	/* CT_v277: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA251: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA251),1)
, useLabel(PS_v275)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v280)
,	/* FN_LAMBDA250: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130010
, useLabel(ST_v279)
,	/* CT_v280: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA250: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA250),1)
, useLabel(PS_v278)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v283)
,	/* FN_LAMBDA249: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130006
, useLabel(ST_v282)
,	/* CT_v283: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA249: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA249),1)
, useLabel(PS_v281)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v286)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120010
, useLabel(ST_v285)
,	/* CT_v286: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA248: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA248),1)
, useLabel(PS_v284)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v289)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120006
, useLabel(ST_v288)
,	/* CT_v289: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA247: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA247),1)
, useLabel(PS_v287)
, 0
, 0
, 0
,};
Node PP_Time_46diffClockTimes[] = {
 };
Node PC_Time_46diffClockTimes[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
,	/* PP_LAMBDA248: (byte 4) */
 	/* PC_LAMBDA248: (byte 4) */
 	/* ST_v285: (byte 4) */
  bytes2word(109,101,115,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
,	/* PP_LAMBDA247: (byte 4) */
 	/* PC_LAMBDA247: (byte 4) */
 	/* ST_v288: (byte 4) */
  bytes2word(58,49,49,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,50,58,54)
, bytes2word(45,49,50,58)
,	/* PP_LAMBDA250: (byte 2) */
 	/* PC_LAMBDA250: (byte 2) */
 	/* ST_v279: (byte 2) */
  bytes2word(55,0,84,105)
, bytes2word(109,101,46,100)
, bytes2word(105,102,102,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
, bytes2word(115,58,49,51)
, bytes2word(58,49,48,45)
, bytes2word(49,51,58,49)
,	/* PP_LAMBDA249: (byte 2) */
 	/* PC_LAMBDA249: (byte 2) */
 	/* ST_v282: (byte 2) */
  bytes2word(49,0,84,105)
, bytes2word(109,101,46,100)
, bytes2word(105,102,102,67)
, bytes2word(108,111,99,107)
, bytes2word(84,105,109,101)
, bytes2word(115,58,49,51)
, bytes2word(58,54,45,49)
,	/* PP_LAMBDA252: (byte 4) */
 	/* PC_LAMBDA252: (byte 4) */
 	/* ST_v273: (byte 4) */
  bytes2word(51,58,55,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,52,58,49)
, bytes2word(48,45,49,52)
,	/* PP_LAMBDA251: (byte 4) */
 	/* PC_LAMBDA251: (byte 4) */
 	/* ST_v276: (byte 4) */
  bytes2word(58,49,49,0)
, bytes2word(84,105,109,101)
, bytes2word(46,100,105,102)
, bytes2word(102,67,108,111)
, bytes2word(99,107,84,105)
, bytes2word(109,101,115,58)
, bytes2word(49,52,58,54)
, bytes2word(45,49,52,58)
, bytes2word(55,0,0,0)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_Time_46TimeDiff)
,	/* PS_v258: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_Time_46diffClockTimes)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46quotRem)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_LAMBDA247)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_LAMBDA248)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_LAMBDA249)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_LAMBDA250)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_LAMBDA251)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46diffClockTimes)
, useLabel(PC_LAMBDA252)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA247)
, useLabel(PC_LAMBDA247)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA248)
, useLabel(PC_LAMBDA248)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA249)
, useLabel(PC_LAMBDA249)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA250)
, useLabel(PC_LAMBDA250)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA251)
, useLabel(PC_LAMBDA251)
,	/* PS_v272: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA252)
, useLabel(PC_LAMBDA252)
,};
