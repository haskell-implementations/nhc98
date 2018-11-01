#include "newmacros.h"
#include "runtime.h"

#define CT_v268	((void*)startLabel+256)
#define CT_v275	((void*)startLabel+368)
#define CT_v289	((void*)startLabel+636)
#define CT_v297	((void*)startLabel+884)
#define ST_v291	((void*)startLabel+928)
#define ST_v281	((void*)startLabel+960)
#define ST_v261	((void*)startLabel+996)
#define ST_v272	((void*)startLabel+1040)
#define PS_v288	((void*)startLabel+1080)
#define PS_v287	((void*)startLabel+1092)
#define PS_v286	((void*)startLabel+1104)
#define PS_v280	((void*)startLabel+1116)
#define PS_v285	((void*)startLabel+1128)
#define PS_v284	((void*)startLabel+1140)
#define PS_v274	((void*)startLabel+1152)
#define PS_v271	((void*)startLabel+1164)
#define PS_v267	((void*)startLabel+1176)
#define PS_v266	((void*)startLabel+1188)
#define PS_v265	((void*)startLabel+1200)
#define PS_v260	((void*)startLabel+1212)
#define PS_v264	((void*)startLabel+1224)
#define PS_v263	((void*)startLabel+1236)
#define PS_v293	((void*)startLabel+1248)
#define PS_v295	((void*)startLabel+1260)
#define PS_v294	((void*)startLabel+1272)
#define PS_v290	((void*)startLabel+1284)
#define PS_v296	((void*)startLabel+1296)
#define PS_v292	((void*)startLabel+1308)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Ratio_46_37[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio[];
extern Node PM_Ratio[];
extern Node PC_Ratio_46_37[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Ratio_46_58_37[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio_46fromRational[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_P1)
, bytes2word(50,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,3)
, bytes2word(PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v267)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
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
, 110005
, useLabel(ST_v261)
,	/* CT_v268: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46fromRational),2)
, useLabel(PS_v260)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio_46recip[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v274)
, 0
, 0
, 0
, 0
, 100005
, useLabel(ST_v272)
,	/* CT_v275: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46recip),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Ratio_46_37))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio_46_47[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(60,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_I2)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,3,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(40,HEAP_OFF_N1,15,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, useLabel(PS_v287)
, 0
, 0
, 0
, 0
, useLabel(PS_v286)
, 0
, 0
, 0
, 0
, useLabel(PS_v285)
, 0
, 0
, 0
, 0
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, 90005
, useLabel(ST_v281)
,	/* CT_v289: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47),3)
, useLabel(PS_v280)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Ratio_46_37))
, bytes2word(1,0,0,1)
, useLabel(CT_v297)
,};
Node FN_Prelude_46Fractional_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_P1,38,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v296)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v295)
, 0
, 0
, 0
, 0
, useLabel(PS_v294)
, 0
, 0
, 0
, 0
, useLabel(PS_v293)
, 0
, 0
, 0
, 0
, useLabel(PS_v292)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v291)
,	/* CT_v297: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio),1)
, useLabel(PS_v290)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio_46recip),1)
,};
Node PP_Prelude_46Fractional_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46Fractional_46Ratio_46Ratio[] = {
 	/* ST_v291: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,0,0)
,};
Node PP_Prelude_46Fractional_46Ratio_46Ratio_46_47[] = {
 };
Node PC_Prelude_46Fractional_46Ratio_46Ratio_46_47[] = {
 	/* ST_v281: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,47)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational[] = {
 };
Node PC_Prelude_46Fractional_46Ratio_46Ratio_46fromRational[] = {
 	/* ST_v261: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,102)
, bytes2word(114,111,109,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,0)
,};
Node PP_Prelude_46Fractional_46Ratio_46Ratio_46recip[] = {
 };
Node PC_Prelude_46Fractional_46Ratio_46Ratio_46recip[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,114)
, bytes2word(101,99,105,112)
, bytes2word(0,0,0,0)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46_47)
, useLabel(PC_Ratio_46_37)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46_47)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46_47)
, useLabel(PC_Prelude_46_42)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46_47)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46_47)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46_47)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46_47)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46recip)
, useLabel(PC_Ratio_46_37)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46recip)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46recip)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v265: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v260: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
,	/* PS_v264: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v263: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v293: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46_47)
,	/* PS_v295: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46recip)
,	/* PS_v294: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio_46fromRational)
,	/* PS_v290: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio)
, useLabel(PC_Prelude_464)
,	/* PS_v292: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Fractional_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio)
,};
