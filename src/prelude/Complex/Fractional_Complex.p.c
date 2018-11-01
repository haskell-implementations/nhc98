#include "newmacros.h"
#include "runtime.h"

#define CT_v308	((void*)startLabel+336)
#define CT_v332	((void*)startLabel+1376)
#define CT_v337	((void*)startLabel+1548)
#define CT_v345	((void*)startLabel+1784)
#define ST_v339	((void*)startLabel+1828)
#define ST_v314	((void*)startLabel+1864)
#define ST_v299	((void*)startLabel+1904)
#define ST_v334	((void*)startLabel+1952)
#define PS_v331	((void*)startLabel+1996)
#define PS_v330	((void*)startLabel+2008)
#define PS_v326	((void*)startLabel+2020)
#define PS_v327	((void*)startLabel+2032)
#define PS_v322	((void*)startLabel+2044)
#define PS_v318	((void*)startLabel+2056)
#define PS_v317	((void*)startLabel+2068)
#define PS_v321	((void*)startLabel+2080)
#define PS_v329	((void*)startLabel+2092)
#define PS_v313	((void*)startLabel+2104)
#define PS_v328	((void*)startLabel+2116)
#define PS_v323	((void*)startLabel+2128)
#define PS_v325	((void*)startLabel+2140)
#define PS_v324	((void*)startLabel+2152)
#define PS_v319	((void*)startLabel+2164)
#define PS_v320	((void*)startLabel+2176)
#define PS_v307	((void*)startLabel+2188)
#define PS_v306	((void*)startLabel+2200)
#define PS_v303	((void*)startLabel+2212)
#define PS_v302	((void*)startLabel+2224)
#define PS_v298	((void*)startLabel+2236)
#define PS_v301	((void*)startLabel+2248)
#define PS_v300	((void*)startLabel+2260)
#define PS_v305	((void*)startLabel+2272)
#define PS_v304	((void*)startLabel+2284)
#define PS_v336	((void*)startLabel+2296)
#define PS_v333	((void*)startLabel+2308)
#define PS_v335	((void*)startLabel+2320)
#define PS_v341	((void*)startLabel+2332)
#define PS_v342	((void*)startLabel+2344)
#define PS_v343	((void*)startLabel+2356)
#define PS_v338	((void*)startLabel+2368)
#define PS_v344	((void*)startLabel+2380)
#define PS_v340	((void*)startLabel+2392)
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Fractional[];
extern Node FN_Prelude_46fromRational[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46exponent[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node FN_Prelude_46scaleFloat[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_43[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46_47[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46Fractional_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46recip[];
extern Node FN_Prelude_46Num_46Complex_46Complex[];
extern Node PM_Complex[];
extern Node PC_Complex_46_58_43[];
extern Node PC_Prelude_46_45[];
extern Node PC_Prelude_46_43[];
extern Node PC_Prelude_46_42[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46exponent[];
extern Node PC_Prelude_46scaleFloat[];
extern Node PC_Prelude_46_47[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Fractional[];
extern Node PC_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Real[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46max[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46fromRational[];
extern Node PC_Prelude_46_95_46recip[];
extern Node PC_Prelude_464[];
extern Node PC_Prelude_46Num_46Complex_46Complex[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v308)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
  bytes2word(NEEDHEAP_P1,59,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CADR_N1)
, bytes2word(42,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v307)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, CONSTRW(0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v306)
, 0
, 0
, 0
, 0
, useLabel(PS_v305)
, 0
, 0
, 0
, 0
, useLabel(PS_v304)
, 0
, 0
, 0
, 0
, useLabel(PS_v303)
, 0
, 0
, 0
, 0
, useLabel(PS_v302)
, 0
, 0
, 0
, 0
, useLabel(PS_v301)
, 0
, 0
, 0
, 0
, useLabel(PS_v300)
, 0
, 0
, 0
, 0
, 140005
, useLabel(ST_v299)
,	/* CT_v308: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46fromRational),2)
, useLabel(PS_v298)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v332)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P2)
, bytes2word(118,1,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_I1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,PUSH_HEAP,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_P1,4,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,4,HEAP_P1)
, bytes2word(7,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,7,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,8)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,39,HEAP_OFF_N1)
, bytes2word(28,HEAP_OFF_N1,15,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,18,HEAP_CVAL_N1,62)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,19,HEAP_CVAL_N1)
, bytes2word(67,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,15,HEAP_CVAL_N1,47)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,17,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_P1)
, bytes2word(10,HEAP_P1,4,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,15,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,17)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,11,HEAP_I2,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,75)
, bytes2word(HEAP_OFF_N1,46,HEAP_OFF_N1,15)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,107,HEAP_OFF_N1,14)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,18)
, bytes2word(HEAP_CVAL_N1,62,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(19,HEAP_CVAL_N1,67,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(20,HEAP_CVAL_N1,72,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(17,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_P1,12,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,14)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,11)
, bytes2word(HEAP_P1,3,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,75,HEAP_OFF_N1)
, bytes2word(46,HEAP_OFF_N1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(107,HEAP_OFF_N1,14,HEAP_I2)
, bytes2word(PUSH_I1,ZAP_ARG_I1,ZAP_STACK_P1,14)
, bytes2word(ZAP_STACK_P1,13,ZAP_STACK_P1,12)
, bytes2word(ZAP_STACK_P1,11,ZAP_STACK_P1,10)
, bytes2word(ZAP_STACK_P1,9,ZAP_STACK_P1,8)
, bytes2word(ZAP_STACK_P1,7,ZAP_STACK_P1,6)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,POP_I1)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,77)
, bytes2word(HEAP_CVAL_N1,82,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v331)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v330)
, 0
, 0
, 0
, 0
, useLabel(PS_v329)
, 0
, 0
, 0
, 0
, useLabel(PS_v328)
, 0
, 0
, 0
, 0
, useLabel(PS_v327)
, 0
, 0
, 0
, 0
, useLabel(PS_v326)
, 0
, 0
, 0
, 0
, useLabel(PS_v325)
, 0
, 0
, 0
, 0
, useLabel(PS_v324)
, 0
, 0
, 0
, 0
, useLabel(PS_v323)
, 0
, 0
, 0
, 0
, useLabel(PS_v322)
, 0
, 0
, 0
, 0
, useLabel(PS_v321)
, 0
, 0
, 0
, 0
, useLabel(PS_v320)
, 0
, 0
, 0
, 0
, useLabel(PS_v319)
, 0
, 0
, 0
, 0
, useLabel(PS_v318)
, 0
, 0
, 0
, 0
, useLabel(PS_v317)
, 0
, 0
, 0
, 0
, 80005
, useLabel(ST_v314)
,	/* CT_v332: (byte 0) */
  HW(14,3)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46_47),3)
, useLabel(PS_v313)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46exponent))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46max))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, VAPTAG(useLabel(FN_Prelude_46scaleFloat))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_43))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, VAPTAG(useLabel(FN_Prelude_46_45))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v337)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v336)
, 0
, 0
, 0
, 0
, useLabel(PS_v335)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v334)
,	/* CT_v337: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46recip),2)
, useLabel(PS_v333)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46recip))
, bytes2word(1,0,0,1)
, useLabel(CT_v345)
,};
Node FN_Prelude_46Fractional_46Complex_46Complex[] = {
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
, useLabel(PS_v344)
, 0
, 0
, 0
, 0
, CONSTR(0,4,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v343)
, 0
, 0
, 0
, 0
, useLabel(PS_v342)
, 0
, 0
, 0
, 0
, useLabel(PS_v341)
, 0
, 0
, 0
, 0
, useLabel(PS_v340)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v339)
,	/* CT_v345: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Fractional_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex),1)
, useLabel(PS_v338)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Complex_46Complex))
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46_47),2)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46fromRational),1)
, CAPTAG(useLabel(FN_Prelude_46Fractional_46Complex_46Complex_46recip),1)
,};
Node PP_Prelude_46Fractional_46Complex_46Complex[] = {
 };
Node PC_Prelude_46Fractional_46Complex_46Complex[] = {
 	/* ST_v339: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,0,0)
,};
Node PP_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
 };
Node PC_Prelude_46Fractional_46Complex_46Complex_46_47[] = {
 	/* ST_v314: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,47)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
 };
Node PC_Prelude_46Fractional_46Complex_46Complex_46fromRational[] = {
 	/* ST_v299: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,102)
, bytes2word(114,111,109,82)
, bytes2word(97,116,105,111)
, bytes2word(110,97,108,0)
,};
Node PP_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
 };
Node PC_Prelude_46Fractional_46Complex_46Complex_46recip[] = {
 	/* ST_v334: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,114,97,99)
, bytes2word(116,105,111,110)
, bytes2word(97,108,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,67)
, bytes2word(111,109,112,108)
, bytes2word(101,120,46,114)
, bytes2word(101,99,105,112)
, bytes2word(0,0,0,0)
,	/* PS_v331: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Complex_46_58_43)
,	/* PS_v330: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46_45)
,	/* PS_v326: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46_43)
,	/* PS_v327: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46_42)
,	/* PS_v322: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v318: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v317: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46exponent)
,	/* PS_v321: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46scaleFloat)
,	/* PS_v329: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46_47)
,	/* PS_v313: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex_46_47)
,	/* PS_v328: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Fractional)
,	/* PS_v323: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v325: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v324: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v319: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46max)
,	/* PS_v320: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46_47)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46negate)
,	/* PS_v307: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Complex_46_58_43)
,	/* PS_v306: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v303: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v302: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46fromRational)
,	/* PS_v298: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex_46fromRational)
,	/* PS_v301: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Fractional)
,	/* PS_v300: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46RealFrac)
,	/* PS_v305: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v304: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46fromRational)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Real)
,	/* PS_v336: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46recip)
, useLabel(PC_Prelude_46_95_46recip)
,	/* PS_v333: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46recip)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex_46recip)
,	/* PS_v335: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex_46recip)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex)
,	/* PS_v341: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex_46_47)
,	/* PS_v342: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex_46fromRational)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex_46recip)
,	/* PS_v338: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex)
, useLabel(PC_Prelude_46Fractional_46Complex_46Complex)
,	/* PS_v344: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex)
, useLabel(PC_Prelude_464)
,	/* PS_v340: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Prelude_46Fractional_46Complex_46Complex)
, useLabel(PC_Prelude_46Num_46Complex_46Complex)
,};
