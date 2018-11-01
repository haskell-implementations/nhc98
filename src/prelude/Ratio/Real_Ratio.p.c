#include "newmacros.h"
#include "runtime.h"

#define CT_v206	((void*)startLabel+176)
#define CT_v213	((void*)startLabel+384)
#define ST_v208	((void*)startLabel+424)
#define ST_v201	((void*)startLabel+452)
#define PS_v205	((void*)startLabel+488)
#define PS_v204	((void*)startLabel+500)
#define PS_v203	((void*)startLabel+512)
#define PS_v200	((void*)startLabel+524)
#define PS_v211	((void*)startLabel+536)
#define PS_v207	((void*)startLabel+548)
#define PS_v212	((void*)startLabel+560)
#define PS_v209	((void*)startLabel+572)
#define PS_v210	((void*)startLabel+584)
extern Node FN_Prelude_46toInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];
extern Node PM_Ratio[];
extern Node PC_Ratio_46_58_37[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46toInteger[];
extern Node PC_Prelude_463[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio[];
extern Node PC_Prelude_46Ord_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v206)
,};
Node FN_Prelude_46Real_46Ratio_46Ratio_46toRational[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_I1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,PUSH_I1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, 110005
, useLabel(ST_v201)
,	/* CT_v206: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Real_46Ratio_46Ratio_46toRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio_46toRational),2)
, useLabel(PS_v200)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46toInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Real_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
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
, 100028
, useLabel(ST_v208)
,	/* CT_v213: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46Real_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio),1)
, useLabel(PS_v207)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio_46toRational),1)
,};
Node PP_Prelude_46Real_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46Real_46Ratio_46Ratio[] = {
 	/* ST_v208: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Real_46Ratio_46Ratio_46toRational[] = {
 };
Node PC_Prelude_46Real_46Ratio_46Ratio_46toRational[] = {
 	/* ST_v201: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,116,111,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,0)
,	/* PS_v205: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio_46toRational)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio_46toRational)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio_46toRational)
, useLabel(PC_Prelude_46toInteger)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio_46toRational)
, useLabel(PC_Prelude_46Real_46Ratio_46Ratio_46toRational)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Real_46Ratio_46Ratio_46toRational)
,	/* PS_v207: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Real_46Ratio_46Ratio)
,	/* PS_v212: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio)
, useLabel(PC_Prelude_463)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Real_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,};
