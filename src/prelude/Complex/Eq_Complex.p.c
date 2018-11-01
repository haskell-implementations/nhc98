#include "newmacros.h"
#include "runtime.h"

#define CT_v240	((void*)startLabel+308)
#define CT_v245	((void*)startLabel+452)
#define CT_v251	((void*)startLabel+624)
#define ST_v247	((void*)startLabel+660)
#define ST_v242	((void*)startLabel+688)
#define ST_v230	((void*)startLabel+720)
#define PS_v238	((void*)startLabel+752)
#define PS_v239	((void*)startLabel+764)
#define PS_v237	((void*)startLabel+776)
#define PS_v229	((void*)startLabel+788)
#define PS_v236	((void*)startLabel+800)
#define PS_v235	((void*)startLabel+812)
#define PS_v234	((void*)startLabel+824)
#define PS_v233	((void*)startLabel+836)
#define PS_v244	((void*)startLabel+848)
#define PS_v241	((void*)startLabel+860)
#define PS_v243	((void*)startLabel+872)
#define PS_v249	((void*)startLabel+884)
#define PS_v248	((void*)startLabel+896)
#define PS_v246	((void*)startLabel+908)
#define PS_v250	((void*)startLabel+920)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46Eq_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node PM_Complex[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46Num_46Prelude_46Eq[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node PC_Prelude_46_95_46_47_61[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v240)
,};
Node FN_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(83,UNPACK,2,HEAP_CVAL_P1)
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
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_I2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,3)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,51,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, 60003
, useLabel(ST_v230)
,	/* CT_v240: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_61_61),3)
, useLabel(PS_v229)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v245)
,};
Node FN_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
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
, 50027
, useLabel(ST_v242)
,	/* CT_v245: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_47_61),3)
, useLabel(PS_v241)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v251)
,};
Node FN_Prelude_46Eq_46Complex_46Complex[] = {
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
, useLabel(PS_v250)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
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
, 50027
, useLabel(ST_v247)
,	/* CT_v251: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Eq_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex),1)
, useLabel(PS_v246)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Complex_46Complex_46_61_61),2)
,};
Node PP_Prelude_46Eq_46Complex_46Complex[] = {
 };
Node PC_Prelude_46Eq_46Complex_46Complex[] = {
 	/* ST_v247: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,0,0)
,};
Node PP_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
 };
Node PC_Prelude_46Eq_46Complex_46Complex_46_47_61[] = {
 	/* ST_v242: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,47)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
 };
Node PC_Prelude_46Eq_46Complex_46Complex_46_61_61[] = {
 	/* ST_v230: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,61)
, bytes2word(61,0,0,0)
,	/* PS_v238: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v239: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v237: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v229: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46Eq_46Complex_46Complex_46_61_61)
,	/* PS_v236: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46Num_46Prelude_46Eq)
,	/* PS_v235: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v234: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v233: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_61_61)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v244: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_47_61)
, useLabel(PC_Prelude_46_95_46_47_61)
,	/* PS_v241: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_47_61)
, useLabel(PC_Prelude_46Eq_46Complex_46Complex_46_47_61)
,	/* PS_v243: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex_46_47_61)
, useLabel(PC_Prelude_46Eq_46Complex_46Complex)
,	/* PS_v249: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex)
, useLabel(PC_Prelude_46Eq_46Complex_46Complex_46_61_61)
,	/* PS_v248: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex)
, useLabel(PC_Prelude_46Eq_46Complex_46Complex_46_47_61)
,	/* PS_v246: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex)
, useLabel(PC_Prelude_46Eq_46Complex_46Complex)
,	/* PS_v250: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Eq_46Complex_46Complex)
, useLabel(PC_Prelude_462)
,};
