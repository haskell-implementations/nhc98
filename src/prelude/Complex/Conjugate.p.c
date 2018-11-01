#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+244)
#define ST_v191	((void*)startLabel+292)
#define PS_v198	((void*)startLabel+312)
#define PS_v197	((void*)startLabel+324)
#define PS_v196	((void*)startLabel+336)
#define PS_v190	((void*)startLabel+348)
#define PS_v195	((void*)startLabel+360)
#define PS_v194	((void*)startLabel+372)
#define PS_v193	((void*)startLabel+384)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46negate[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node PM_Complex[];
extern Node PC_Complex_46_58_43[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46negate[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v199)
,};
Node FN_Complex_46conjugate[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(3,EVAL,POP_I1,PUSH_P1)
, bytes2word(0,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,32,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v198)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
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
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v191)
,	/* CT_v199: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Complex_46conjugate[] = {
  CAPTAG(useLabel(FN_Complex_46conjugate),2)
, useLabel(PS_v190)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46negate))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,};
Node PP_Complex_46conjugate[] = {
 };
Node PC_Complex_46conjugate[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(99,111,110,106)
, bytes2word(117,103,97,116)
, bytes2word(101,0,0,0)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_Complex_46_58_43)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_Prelude_46negate)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_Complex_46conjugate)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46conjugate)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,};
