#include "newmacros.h"
#include "runtime.h"

#define CT_v197	((void*)startLabel+320)
#define ST_v188	((void*)startLabel+380)
#define PS_v196	((void*)startLabel+388)
#define PS_v194	((void*)startLabel+400)
#define PS_v193	((void*)startLabel+412)
#define PS_v191	((void*)startLabel+424)
#define PS_v195	((void*)startLabel+436)
#define PS_v192	((void*)startLabel+448)
#define PS_v187	((void*)startLabel+460)
#define PS_v190	((void*)startLabel+472)
#define PS_v189	((void*)startLabel+484)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46signum[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46abs[];
extern Node FN_Ratio_46reduce[];
extern Node PM_Ratio[];
extern Node PC_Ratio_46reduce[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46abs[];
extern Node PC_Prelude_46signum[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v197)
,};
Node FN_Ratio_46_37[] = {
  bytes2word(NEEDHEAP_P1,85,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,36)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,14)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,39,HEAP_OFF_N1,14)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v188)
,	/* CT_v197: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Ratio_46_37[] = {
  CAPTAG(useLabel(FN_Ratio_46_37),3)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46signum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46abs))
, VAPTAG(useLabel(FN_Ratio_46reduce))
,};
Node PP_Ratio_46_37[] = {
 };
Node PC_Ratio_46_37[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,37,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Ratio_46reduce)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Prelude_46_42)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Prelude_46abs)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Prelude_46signum)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Ratio_46_37)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46_37)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,};
