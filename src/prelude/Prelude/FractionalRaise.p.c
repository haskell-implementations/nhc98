#include "newmacros.h"
#include "runtime.h"

#define v204	((void*)startLabel+126)
#define CT_v218	((void*)startLabel+452)
#define ST_v207	((void*)startLabel+520)
#define PS_v211	((void*)startLabel+532)
#define PS_v215	((void*)startLabel+544)
#define PS_v217	((void*)startLabel+556)
#define PS_v213	((void*)startLabel+568)
#define PS_v216	((void*)startLabel+580)
#define PS_v210	((void*)startLabel+592)
#define PS_v206	((void*)startLabel+604)
#define PS_v212	((void*)startLabel+616)
#define PS_v208	((void*)startLabel+628)
#define PS_v209	((void*)startLabel+640)
#define PS_v214	((void*)startLabel+652)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_62_61[];
extern Node FN_Prelude_46Fractional_46Prelude_46Num[];
extern Node FN_Prelude_46_94[];
extern Node FN_Prelude_46negate[];
extern Node FN_Prelude_46recip[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_94[];
extern Node PC_Prelude_46recip[];
extern Node PC_Prelude_46_62_61[];
extern Node PC_Prelude_46negate[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46Real_46Prelude_46Ord[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Fractional_46Prelude_46Num[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v218)
,};
Node FN_Prelude_46_94_94[] = {
  bytes2word(NEEDHEAP_P1,47,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CADR_N1)
, bytes2word(27,PUSH_P1,0,PUSH_ARG)
, bytes2word(4,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_P1,46,JUMPFALSE,27)
, bytes2word(0,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
,	/* v204: (byte 2) */
  bytes2word(4,RETURN_EVAL,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,36,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_OFF_N1,15)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, useLabel(PS_v216)
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
, CONSTRW(0,0)
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
, 60001
, useLabel(ST_v207)
,	/* CT_v218: (byte 0) */
  HW(10,4)
, 0
,};
Node F0_Prelude_46_94_94[] = {
  CAPTAG(useLabel(FN_Prelude_46_94_94),4)
, useLabel(PS_v206)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_94))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_Prelude_46recip))
,};
Node PP_Prelude_46_94_94[] = {
 };
Node PC_Prelude_46_94_94[] = {
 	/* ST_v207: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(94,94,0,0)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46_94)
,	/* PS_v217: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46recip)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46_62_61)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46negate)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46_94_94)
,	/* PS_v212: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46Real_46Prelude_46Ord)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_94_94)
, useLabel(PC_Prelude_46Fractional_46Prelude_46Num)
,};
