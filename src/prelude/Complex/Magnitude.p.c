#include "newmacros.h"
#include "runtime.h"

#define CT_v249	((void*)startLabel+752)
#define ST_v232	((void*)startLabel+844)
#define PS_v245	((void*)startLabel+864)
#define PS_v235	((void*)startLabel+876)
#define PS_v248	((void*)startLabel+888)
#define PS_v234	((void*)startLabel+900)
#define PS_v244	((void*)startLabel+912)
#define PS_v239	((void*)startLabel+924)
#define PS_v243	((void*)startLabel+936)
#define PS_v247	((void*)startLabel+948)
#define PS_v231	((void*)startLabel+960)
#define PS_v238	((void*)startLabel+972)
#define PS_v242	((void*)startLabel+984)
#define PS_v241	((void*)startLabel+996)
#define PS_v240	((void*)startLabel+1008)
#define PS_v246	((void*)startLabel+1020)
#define PS_v236	((void*)startLabel+1032)
#define PS_v237	((void*)startLabel+1044)
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46exponent[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node FN_Prelude_46sqrt[];
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46scaleFloat[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_94[];
extern Node PM_Complex[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_94[];
extern Node PC_Prelude_46exponent[];
extern Node PC_Prelude_46scaleFloat[];
extern Node PC_Prelude_46sqrt[];
extern Node PC_Prelude_46_43[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46negate[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v249)
,};
Node FN_Complex_46magnitude[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(231,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,18)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_N1,62,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,0,HEAP_P1,5)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,67)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,21)
, bytes2word(HEAP_CVAL_N1,72,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CADR_N1,78,HEAP_CVAL_P1,22)
, bytes2word(HEAP_CVAL_N1,83,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,50,HEAP_P1)
, bytes2word(4,HEAP_OFF_N1,40,HEAP_OFF_N1)
, bytes2word(15,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,0)
, bytes2word(HEAP_P1,6,HEAP_CVAL_P1,20)
, bytes2word(HEAP_CVAL_N1,67,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,3,HEAP_CVAL_P1)
, bytes2word(16,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,21,HEAP_CVAL_N1,72)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CADR_N1,78)
, bytes2word(HEAP_CVAL_P1,22,HEAP_CVAL_N1,83)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(50,HEAP_P1,3,HEAP_OFF_N1)
, bytes2word(40,HEAP_OFF_N1,15,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_N1,62,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,143)
, bytes2word(HEAP_OFF_N1,81,HEAP_OFF_N1,16)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,175,HEAP_OFF_N1,14)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,18,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(10,ZAP_STACK_P1,9,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,5,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 2
, useLabel(PS_v247)
, 0
, 0
, 0
, 0
, useLabel(PS_v246)
, 0
, 0
, 0
, 0
, useLabel(PS_v245)
, 0
, 0
, 0
, 0
, useLabel(PS_v244)
, 0
, 0
, 0
, 0
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, useLabel(PS_v242)
, 0
, 0
, 0
, 0
, useLabel(PS_v241)
, 0
, 0
, 0
, 0
, useLabel(PS_v240)
, 0
, 0
, 0
, 0
, useLabel(PS_v239)
, 0
, 0
, 0
, 0
, useLabel(PS_v238)
, 0
, 0
, 0
, 0
, useLabel(PS_v237)
, 0
, 0
, 0
, 0
, useLabel(PS_v236)
, 0
, 0
, 0
, 0
, useLabel(PS_v235)
, 0
, 0
, 0
, 0
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v232)
,	/* CT_v249: (byte 0) */
  HW(16,2)
, 0
,};
Node F0_Complex_46magnitude[] = {
  CAPTAG(useLabel(FN_Complex_46magnitude),2)
, useLabel(PS_v231)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46exponent))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Floating))
, VAPTAG(useLabel(FN_Prelude_46sqrt))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46scaleFloat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46_94))
,};
Node PP_Complex_46magnitude[] = {
 };
Node PC_Complex_46magnitude[] = {
 	/* ST_v232: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(109,97,103,110)
, bytes2word(105,116,117,100)
, bytes2word(101,0,0,0)
,	/* PS_v245: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v235: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46_94)
,	/* PS_v234: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46exponent)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46scaleFloat)
,	/* PS_v239: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46sqrt)
,	/* PS_v243: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46_43)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v231: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Complex_46magnitude)
,	/* PS_v238: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Floating)
,	/* PS_v242: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v241: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v240: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v236: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46max)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46magnitude)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46negate)
,};
