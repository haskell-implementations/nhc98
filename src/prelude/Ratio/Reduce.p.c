#include "newmacros.h"
#include "runtime.h"

#define v201	((void*)startLabel+139)
#define CT_v217	((void*)startLabel+500)
#define FN_LAMBDA196	((void*)startLabel+580)
#define CT_v221	((void*)startLabel+624)
#define CF_LAMBDA196	((void*)startLabel+632)
#define ST_v220	((void*)startLabel+652)
#define ST_v204	((void*)startLabel+680)
#define PP_LAMBDA196	((void*)startLabel+693)
#define PC_LAMBDA196	((void*)startLabel+693)
#define ST_v219	((void*)startLabel+693)
#define PS_v216	((void*)startLabel+716)
#define PS_v215	((void*)startLabel+728)
#define PS_v209	((void*)startLabel+740)
#define PS_v205	((void*)startLabel+752)
#define PS_v213	((void*)startLabel+764)
#define PS_v214	((void*)startLabel+776)
#define PS_v208	((void*)startLabel+788)
#define PS_v211	((void*)startLabel+800)
#define PS_v203	((void*)startLabel+812)
#define PS_v210	((void*)startLabel+824)
#define PS_v207	((void*)startLabel+836)
#define PS_v206	((void*)startLabel+848)
#define PS_v212	((void*)startLabel+860)
#define PS_v218	((void*)startLabel+872)
extern Node FN_Prelude_46gcd[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46quot[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node PM_Ratio[];
extern Node PC_Ratio_46_58_37[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46gcd[];
extern Node PC_Prelude_46error[];
extern Node PC_Prelude_46quot[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46Num_46Prelude_46Eq[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v217)
,};
Node FN_Ratio_46reduce[] = {
  bytes2word(NEEDHEAP_P1,64,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CADR_N1,32)
, bytes2word(PUSH_P1,0,PUSH_ARG_I3,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,SLIDE_P1,1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,20)
, bytes2word(0,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v201: (byte 3) */
  bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,17,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_ARG,2)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_N1,62,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,3,HEAP_I2,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(3,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,67,HEAP_CVAL_N1)
, bytes2word(72,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v204)
,	/* CT_v217: (byte 0) */
  HW(11,3)
, 0
,};
Node F0_Ratio_46reduce[] = {
  CAPTAG(useLabel(FN_Ratio_46reduce),3)
, useLabel(PS_v203)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46gcd))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_LAMBDA196))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46quot))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, bytes2word(0,0,0,0)
, useLabel(CT_v221)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v220)
, 80025
, useLabel(ST_v219)
,	/* CT_v221: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
, useLabel(PS_v218)
, 0
, 0
, 0
,	/* ST_v220: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,37,58)
, bytes2word(32,122,101,114)
, bytes2word(111,32,100,101)
, bytes2word(110,111,109,105)
, bytes2word(110,97,116,111)
, bytes2word(114,0,0,0)
,};
Node PP_Ratio_46reduce[] = {
 };
Node PC_Ratio_46reduce[] = {
 	/* ST_v204: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,114,101)
, bytes2word(100,117,99,101)
,	/* PP_LAMBDA196: (byte 1) */
 	/* PC_LAMBDA196: (byte 1) */
 	/* ST_v219: (byte 1) */
  bytes2word(0,82,97,116)
, bytes2word(105,111,46,114)
, bytes2word(101,100,117,99)
, bytes2word(101,58,56,58)
, bytes2word(50,53,45,56)
, bytes2word(58,53,49,0)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46gcd)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46error)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46quot)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Ratio_46reduce)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46Num_46Prelude_46Eq)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v212: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46reduce)
, useLabel(PC_LAMBDA196)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_LAMBDA196)
, useLabel(PC_LAMBDA196)
,};
