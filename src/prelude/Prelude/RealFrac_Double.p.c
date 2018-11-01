#include "newmacros.h"
#include "runtime.h"

#define v328	((void*)startLabel+207)
#define CT_v349	((void*)startLabel+644)
#define CT_v353	((void*)startLabel+792)
#define CT_v357	((void*)startLabel+892)
#define CT_v361	((void*)startLabel+992)
#define CT_v365	((void*)startLabel+1092)
#define CT_v369	((void*)startLabel+1216)
#define ST_v367	((void*)startLabel+1272)
#define ST_v355	((void*)startLabel+1304)
#define ST_v351	((void*)startLabel+1344)
#define ST_v333	((void*)startLabel+1384)
#define ST_v359	((void*)startLabel+1432)
#define ST_v363	((void*)startLabel+1472)
#define PS_v343	((void*)startLabel+1516)
#define PS_v340	((void*)startLabel+1528)
#define PS_v342	((void*)startLabel+1540)
#define PS_v344	((void*)startLabel+1552)
#define PS_v338	((void*)startLabel+1564)
#define PS_v339	((void*)startLabel+1576)
#define PS_v332	((void*)startLabel+1588)
#define PS_v334	((void*)startLabel+1600)
#define PS_v337	((void*)startLabel+1612)
#define PS_v336	((void*)startLabel+1624)
#define PS_v341	((void*)startLabel+1636)
#define PS_v346	((void*)startLabel+1648)
#define PS_v345	((void*)startLabel+1660)
#define PS_v348	((void*)startLabel+1672)
#define PS_v364	((void*)startLabel+1684)
#define PS_v362	((void*)startLabel+1696)
#define PS_v360	((void*)startLabel+1708)
#define PS_v358	((void*)startLabel+1720)
#define PS_v356	((void*)startLabel+1732)
#define PS_v354	((void*)startLabel+1744)
#define PS_v352	((void*)startLabel+1756)
#define PS_v350	((void*)startLabel+1768)
#define PS_v366	((void*)startLabel+1780)
#define PS_v368	((void*)startLabel+1792)
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node FN_Prelude_46Integral_46Prelude_46Integer_46quotRem[];
extern Node FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat[];
extern Node FN_Prelude_46_95_46floor[];
extern Node CF_Prelude_46RealFrac_46Prelude_46Double[];
extern Node FN_Prelude_46_95_46ceiling[];
extern Node FN_Prelude_46_95_46round[];
extern Node FN_Prelude_46_95_46truncate[];
extern Node CF_Prelude_46Real_46Prelude_46Double[];
extern Node CF_Prelude_46Fractional_46Prelude_46Double[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_94[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Double_46floatRadix[];
extern Node PC_Prelude_46Integral_46Prelude_46Integer_46quotRem[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46negate[];
extern Node PC_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat[];
extern Node PC_Prelude_46_95_46truncate[];
extern Node PC_Prelude_46_95_46round[];
extern Node PC_Prelude_46_95_46ceiling[];
extern Node PC_Prelude_46_95_46floor[];
extern Node PC_Prelude_467[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v349)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46properFraction[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,EVAL)
, bytes2word(UNPACK,2,PUSH_INT_P1,0)
, bytes2word(PUSH_P1,2,EVAL,NEEDHEAP_P1)
, bytes2word(110,GE_W,JUMPFALSE,172)
, bytes2word(0,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_CVAL_P1)
, bytes2word(14,HEAP_CVAL_N1,42,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,42)
, bytes2word(HEAP_CVAL_P1,15,HEAP_OFF_N1,14)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,16,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,88,HEAP_OFF_N1,65)
, bytes2word(HEAP_OFF_N1,16,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,13)
,	/* v328: (byte 3) */
  bytes2word(HEAP_CADR_N1,65,RETURN,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,17,HEAP_CVAL_N1,70)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(18,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,14,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,19,HEAP_CVAL_N1,75)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(HEAP_OFF_N1,15,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(1,EVAL,NEEDHEAP_P1,39)
, bytes2word(UNPACK,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,20,HEAP_CVAL_N1,80)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(HEAP_P1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v348)
, 0
, 0
, 0
, 0
, useLabel(PS_v346)
, 0
, 0
, 0
, 0
, useLabel(PS_v345)
, 0
, 0
, 0
, 0
, CONSTRW(2,0)
, 0
, 0
, 0
, 0
, 0
, 0
, 0
, useLabel(PS_v344)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
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
, useLabel(PS_v339)
, 0
, 0
, 0
, 0
, useLabel(PS_v338)
, 0
, 0
, 0
, 0
, useLabel(PS_v337)
, 0
, 0
, 0
, 0
, useLabel(PS_v336)
, 0
, 0
, 0
, 0
, useLabel(PS_v334)
, 0
, 0
, 0
, 0
, 40005
, useLabel(ST_v333)
,	/* CT_v349: (byte 0) */
  HW(14,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46properFraction),2)
, useLabel(PS_v332)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46floatRadix))
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46negate))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Integer_46quotRem))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v353)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46floor[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v352)
, 0
, 0
, 0
, 0
, 30011
, useLabel(ST_v351)
,	/* CT_v353: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46floor),2)
, useLabel(PS_v350)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46floor))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v357)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v356)
, 0
, 0
, 0
, 0
, 30011
, useLabel(ST_v355)
,	/* CT_v357: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46ceiling),2)
, useLabel(PS_v354)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46ceiling))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v361)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46round[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v360)
, 0
, 0
, 0
, 0
, 30011
, useLabel(ST_v359)
,	/* CT_v361: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46round),2)
, useLabel(PS_v358)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46round))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v365)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double_46truncate[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v364)
, 0
, 0
, 0
, 0
, 30011
, useLabel(ST_v363)
,	/* CT_v365: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46RealFrac_46Prelude_46Double_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46truncate),2)
, useLabel(PS_v362)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46truncate))
, useLabel(CF_Prelude_46RealFrac_46Prelude_46Double)
, bytes2word(0,0,0,0)
, useLabel(CT_v369)
,};
Node FN_Prelude_46RealFrac_46Prelude_46Double[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v368)
, 0
, 0
, 0
, 0
, CONSTR(0,7,0)
, 0
, 0
, 0
, 0
, 30011
, useLabel(ST_v367)
,	/* CT_v369: (byte 0) */
  HW(7,0)
, 0
,};
Node CF_Prelude_46RealFrac_46Prelude_46Double[] = {
  VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double))
, useLabel(PS_v366)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Real_46Prelude_46Double)
, useLabel(CF_Prelude_46Fractional_46Prelude_46Double)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46round)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46truncate)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46ceiling)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(F0_Prelude_46RealFrac_46Prelude_46Double_46floor)
,};
Node PP_Prelude_46RealFrac_46Prelude_46Double[] = {
 };
Node PC_Prelude_46RealFrac_46Prelude_46Double[] = {
 	/* ST_v367: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,0)
,};
Node PP_Prelude_46RealFrac_46Prelude_46Double_46ceiling[] = {
 };
Node PC_Prelude_46RealFrac_46Prelude_46Double_46ceiling[] = {
 	/* ST_v355: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(99,101,105,108)
, bytes2word(105,110,103,0)
,};
Node PP_Prelude_46RealFrac_46Prelude_46Double_46floor[] = {
 };
Node PC_Prelude_46RealFrac_46Prelude_46Double_46floor[] = {
 	/* ST_v351: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(102,108,111,111)
, bytes2word(114,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction[] = {
 };
Node PC_Prelude_46RealFrac_46Prelude_46Double_46properFraction[] = {
 	/* ST_v333: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(112,114,111,112)
, bytes2word(101,114,70,114)
, bytes2word(97,99,116,105)
, bytes2word(111,110,0,0)
,};
Node PP_Prelude_46RealFrac_46Prelude_46Double_46round[] = {
 };
Node PC_Prelude_46RealFrac_46Prelude_46Double_46round[] = {
 	/* ST_v359: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(114,111,117,110)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Prelude_46Double_46truncate[] = {
 };
Node PC_Prelude_46RealFrac_46Prelude_46Double_46truncate[] = {
 	/* ST_v363: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,68,111,117)
, bytes2word(98,108,101,46)
, bytes2word(116,114,117,110)
, bytes2word(99,97,116,101)
, bytes2word(0,0,0,0)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v340: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v342: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46_94)
,	/* PS_v344: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_462)
,	/* PS_v338: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46_42)
,	/* PS_v339: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v332: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
,	/* PS_v334: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Double_46decodeFloat)
,	/* PS_v337: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v336: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v341: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Double_46floatRadix)
,	/* PS_v346: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46Integral_46Prelude_46Integer_46quotRem)
,	/* PS_v345: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46negate)
,	/* PS_v348: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46properFraction)
, useLabel(PC_Prelude_46RealFloat_46Prelude_46Double_46encodeFloat)
,	/* PS_v364: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46truncate)
, useLabel(PC_Prelude_46_95_46truncate)
,	/* PS_v362: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46truncate)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46truncate)
,	/* PS_v360: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46round)
, useLabel(PC_Prelude_46_95_46round)
,	/* PS_v358: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46round)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46round)
,	/* PS_v356: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46ceiling)
, useLabel(PC_Prelude_46_95_46ceiling)
,	/* PS_v354: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46ceiling)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46ceiling)
,	/* PS_v352: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46floor)
, useLabel(PC_Prelude_46_95_46floor)
,	/* PS_v350: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double_46floor)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46floor)
,	/* PS_v366: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double)
,	/* PS_v368: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46RealFrac_46Prelude_46Double)
, useLabel(PC_Prelude_467)
,};
