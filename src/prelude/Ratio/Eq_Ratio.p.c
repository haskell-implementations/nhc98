#include "newmacros.h"
#include "runtime.h"

#define CT_v252	((void*)startLabel+268)
#define CT_v267	((void*)startLabel+588)
#define CT_v273	((void*)startLabel+776)
#define ST_v269	((void*)startLabel+812)
#define ST_v243	((void*)startLabel+836)
#define ST_v258	((void*)startLabel+864)
#define PS_v265	((void*)startLabel+892)
#define PS_v266	((void*)startLabel+904)
#define PS_v264	((void*)startLabel+916)
#define PS_v257	((void*)startLabel+928)
#define PS_v263	((void*)startLabel+940)
#define PS_v262	((void*)startLabel+952)
#define PS_v261	((void*)startLabel+964)
#define PS_v250	((void*)startLabel+976)
#define PS_v251	((void*)startLabel+988)
#define PS_v249	((void*)startLabel+1000)
#define PS_v242	((void*)startLabel+1012)
#define PS_v248	((void*)startLabel+1024)
#define PS_v247	((void*)startLabel+1036)
#define PS_v246	((void*)startLabel+1048)
#define PS_v271	((void*)startLabel+1060)
#define PS_v270	((void*)startLabel+1072)
#define PS_v268	((void*)startLabel+1084)
#define PS_v272	((void*)startLabel+1096)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46_38_38[];
extern Node PM_Ratio[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46Num_46Prelude_46Eq[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46_124_124[];
extern Node PC_Prelude_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v252)
,};
Node FN_Prelude_46Eq_46Ratio_46Ratio_46_47_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(71,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(45,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, useLabel(PS_v249)
, 0
, 0
, 0
, 0
, useLabel(PS_v248)
, 0
, 0
, 0
, 0
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
, 80005
, useLabel(ST_v243)
,	/* CT_v252: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Eq_46Ratio_46Ratio_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_47_61),3)
, useLabel(PS_v242)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(71,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(45,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, 70005
, useLabel(ST_v258)
,	/* CT_v267: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Eq_46Ratio_46Ratio_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61),3)
, useLabel(PS_v257)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Eq_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v272)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v271)
, 0
, 0
, 0
, 0
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, 60028
, useLabel(ST_v269)
,	/* CT_v273: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Eq_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio),1)
, useLabel(PS_v268)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio_46_61_61),2)
,};
Node PP_Prelude_46Eq_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46Eq_46Ratio_46Ratio[] = {
 	/* ST_v269: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,0,0)
,};
Node PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Ratio_46Ratio_46_47_61[] = {
 	/* ST_v243: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,47)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Ratio_46Ratio_46_61_61[] = {
 	/* ST_v258: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,61)
, bytes2word(61,0,0,0)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v257: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_Prelude_46Num_46Prelude_46Eq)
,	/* PS_v262: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v261: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v251: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_Prelude_46_47_61)
,	/* PS_v242: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_Prelude_46Num_46Prelude_46Eq)
,	/* PS_v247: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio_46_61_61)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio_46_47_61)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio)
,	/* PS_v272: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Eq_46Ratio_46Ratio)
, useLabel(PC_Prelude_462)
,};
