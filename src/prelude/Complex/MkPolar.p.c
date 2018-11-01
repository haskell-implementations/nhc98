#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+432)
#define ST_v194	((void*)startLabel+496)
#define PS_v204	((void*)startLabel+512)
#define PS_v202	((void*)startLabel+524)
#define PS_v201	((void*)startLabel+536)
#define PS_v203	((void*)startLabel+548)
#define PS_v200	((void*)startLabel+560)
#define PS_v198	((void*)startLabel+572)
#define PS_v193	((void*)startLabel+584)
#define PS_v197	((void*)startLabel+596)
#define PS_v196	((void*)startLabel+608)
#define PS_v195	((void*)startLabel+620)
#define PS_v199	((void*)startLabel+632)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Floating[];
extern Node FN_Prelude_46cos[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46sin[];
extern Node PM_Complex[];
extern Node PC_Complex_46_58_43[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46sin[];
extern Node PC_Prelude_46cos[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Floating[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v205)
,};
Node FN_Complex_46mkPolar[] = {
  bytes2word(NEEDHEAP_P1,105,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(30,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(14,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,30)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,14)
, bytes2word(PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v194)
,	/* CT_v205: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Complex_46mkPolar[] = {
  CAPTAG(useLabel(FN_Complex_46mkPolar),3)
, useLabel(PS_v193)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Floating))
, VAPTAG(useLabel(FN_Prelude_46cos))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46sin))
,};
Node PP_Complex_46mkPolar[] = {
 };
Node PC_Complex_46mkPolar[] = {
 	/* ST_v194: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(109,107,80,111)
, bytes2word(108,97,114,0)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Complex_46_58_43)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v203: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46sin)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46cos)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46_42)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Complex_46mkPolar)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46mkPolar)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Floating)
,};
