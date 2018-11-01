#include "newmacros.h"
#include "runtime.h"

#define v198	((void*)startLabel+282)
#define CT_v217	((void*)startLabel+504)
#define ST_v207	((void*)startLabel+564)
#define PS_v213	((void*)startLabel+580)
#define PS_v216	((void*)startLabel+592)
#define PS_v212	((void*)startLabel+604)
#define PS_v215	((void*)startLabel+616)
#define PS_v206	((void*)startLabel+628)
#define PS_v211	((void*)startLabel+640)
#define PS_v210	((void*)startLabel+652)
#define PS_v209	((void*)startLabel+664)
#define PS_v214	((void*)startLabel+676)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46atan2[];
extern Node PM_Complex[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46atan2[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node PC_Prelude_46Num_46Prelude_46Eq[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v217)
,};
Node FN_Complex_46phase[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(61,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CADR_N1,32,PUSH_P1)
, bytes2word(0,PUSH_P1,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_P1,61,JUMPFALSE,155)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CADR_N1)
, bytes2word(32,PUSH_P1,0,PUSH_P1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,SLIDE_P1)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(46,0,PUSH_CADR_N1,32)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,EVAL,NEEDHEAP_I32,APPLY)
,	/* v198: (byte 2) */
  bytes2word(1,RETURN_EVAL,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, CONSTRW(0,0)
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
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v207)
,	/* CT_v217: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_Complex_46phase[] = {
  CAPTAG(useLabel(FN_Complex_46phase),2)
, useLabel(PS_v206)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46atan2))
,};
Node PP_Complex_46phase[] = {
 };
Node PC_Complex_46phase[] = {
 	/* ST_v207: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(112,104,97,115)
, bytes2word(101,0,0,0)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46atan2)
,	/* PS_v212: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Complex_46phase)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46phase)
, useLabel(PC_Prelude_46Num_46Prelude_46Eq)
,};
