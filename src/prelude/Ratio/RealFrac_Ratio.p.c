#include "newmacros.h"
#include "runtime.h"

#define CT_v350	((void*)startLabel+364)
#define FN_LAMBDA326	((void*)startLabel+440)
#define CT_v354	((void*)startLabel+516)
#define F0_LAMBDA326	((void*)startLabel+524)
#define FN_LAMBDA325	((void*)startLabel+552)
#define CT_v357	((void*)startLabel+572)
#define F0_LAMBDA325	((void*)startLabel+580)
#define FN_LAMBDA324	((void*)startLabel+608)
#define CT_v360	((void*)startLabel+628)
#define F0_LAMBDA324	((void*)startLabel+636)
#define CT_v365	((void*)startLabel+744)
#define CT_v370	((void*)startLabel+868)
#define CT_v375	((void*)startLabel+992)
#define CT_v380	((void*)startLabel+1116)
#define CT_v391	((void*)startLabel+1452)
#define ST_v382	((void*)startLabel+1508)
#define ST_v367	((void*)startLabel+1540)
#define ST_v362	((void*)startLabel+1580)
#define ST_v338	((void*)startLabel+1616)
#define PP_LAMBDA324	((void*)startLabel+1660)
#define PC_LAMBDA324	((void*)startLabel+1660)
#define ST_v359	((void*)startLabel+1660)
#define PP_LAMBDA325	((void*)startLabel+1710)
#define PC_LAMBDA325	((void*)startLabel+1710)
#define ST_v356	((void*)startLabel+1710)
#define PP_LAMBDA326	((void*)startLabel+1760)
#define PC_LAMBDA326	((void*)startLabel+1760)
#define ST_v352	((void*)startLabel+1760)
#define ST_v372	((void*)startLabel+1816)
#define ST_v377	((void*)startLabel+1852)
#define PS_v341	((void*)startLabel+1892)
#define PS_v347	((void*)startLabel+1904)
#define PS_v346	((void*)startLabel+1916)
#define PS_v349	((void*)startLabel+1928)
#define PS_v340	((void*)startLabel+1940)
#define PS_v337	((void*)startLabel+1952)
#define PS_v345	((void*)startLabel+1964)
#define PS_v344	((void*)startLabel+1976)
#define PS_v342	((void*)startLabel+1988)
#define PS_v343	((void*)startLabel+2000)
#define PS_v348	((void*)startLabel+2012)
#define PS_v379	((void*)startLabel+2024)
#define PS_v376	((void*)startLabel+2036)
#define PS_v378	((void*)startLabel+2048)
#define PS_v374	((void*)startLabel+2060)
#define PS_v371	((void*)startLabel+2072)
#define PS_v373	((void*)startLabel+2084)
#define PS_v369	((void*)startLabel+2096)
#define PS_v366	((void*)startLabel+2108)
#define PS_v368	((void*)startLabel+2120)
#define PS_v364	((void*)startLabel+2132)
#define PS_v361	((void*)startLabel+2144)
#define PS_v363	((void*)startLabel+2156)
#define PS_v388	((void*)startLabel+2168)
#define PS_v386	((void*)startLabel+2180)
#define PS_v385	((void*)startLabel+2192)
#define PS_v387	((void*)startLabel+2204)
#define PS_v389	((void*)startLabel+2216)
#define PS_v381	((void*)startLabel+2228)
#define PS_v390	((void*)startLabel+2240)
#define PS_v383	((void*)startLabel+2252)
#define PS_v384	((void*)startLabel+2264)
#define PS_v358	((void*)startLabel+2276)
#define PS_v355	((void*)startLabel+2288)
#define PS_v353	((void*)startLabel+2300)
#define PS_v351	((void*)startLabel+2312)
extern Node FN_Prelude_46quotRem[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromIntegral[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46floor[];
extern Node FN_Prelude_46_95_46ceiling[];
extern Node FN_Prelude_46_95_46round[];
extern Node FN_Prelude_46_95_46truncate[];
extern Node FN_Prelude_46Real_46Ratio_46Ratio[];
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node PM_Ratio[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46fromIntegral[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46quotRem[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46_95_46truncate[];
extern Node PC_Prelude_46_95_46round[];
extern Node PC_Prelude_46_95_46ceiling[];
extern Node PC_Prelude_46_95_46floor[];
extern Node PC_Prelude_467[];
extern Node PC_Prelude_46Real_46Ratio_46Ratio[];
extern Node PC_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node PC_Ratio_46_58_37[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v350)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(67,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_I2,HEAP_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,0)
, bytes2word(HEAP_P1,5,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,13,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v349)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v348)
, 0
, 0
, 0
, 0
, useLabel(PS_v347)
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
, useLabel(PS_v344)
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
, 90005
, useLabel(ST_v338)
,	/* CT_v350: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction),3)
, useLabel(PS_v337)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46quotRem))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_LAMBDA324))
, VAPTAG(useLabel(FN_LAMBDA325))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA326))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v354)
,	/* FN_LAMBDA326: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_ARG_I2,EVAL,NEEDHEAP_I32,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v353)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 90050
, useLabel(ST_v352)
,	/* CT_v354: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA326: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA326),2)
, useLabel(PS_v351)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v357)
,	/* FN_LAMBDA325: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100040
, useLabel(ST_v356)
,	/* CT_v357: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA325: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA325),1)
, useLabel(PS_v355)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v360)
,	/* FN_LAMBDA324: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100038
, useLabel(ST_v359)
,	/* CT_v360: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),1)
, useLabel(PS_v358)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v365)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v364)
, 0
, 0
, 0
, 0
, useLabel(PS_v363)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v362)
,	/* CT_v365: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor),3)
, useLabel(PS_v361)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46floor))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v370)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v369)
, 0
, 0
, 0
, 0
, useLabel(PS_v368)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v367)
,	/* CT_v370: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling),3)
, useLabel(PS_v366)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46ceiling))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v375)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v374)
, 0
, 0
, 0
, 0
, useLabel(PS_v373)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v372)
,	/* CT_v375: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round),3)
, useLabel(PS_v371)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46round))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v380)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v379)
, 0
, 0
, 0
, 0
, useLabel(PS_v378)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v377)
,	/* CT_v380: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),3)
, useLabel(PS_v376)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46truncate))
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,};
Node FN_Prelude_46RealFrac_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_P1,62,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_N1,37,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,42,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v390)
, 0
, 0
, 0
, 0
, CONSTR(0,7,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v389)
, 0
, 0
, 0
, 0
, useLabel(PS_v388)
, 0
, 0
, 0
, 0
, useLabel(PS_v387)
, 0
, 0
, 0
, 0
, useLabel(PS_v386)
, 0
, 0
, 0
, 0
, useLabel(PS_v385)
, 0
, 0
, 0
, 0
, useLabel(PS_v384)
, 0
, 0
, 0
, 0
, useLabel(PS_v383)
, 0
, 0
, 0
, 0
, 80028
, useLabel(ST_v382)
,	/* CT_v391: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Prelude_46RealFrac_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio),1)
, useLabel(PS_v381)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Real_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46round),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46floor),2)
,};
Node PP_Prelude_46RealFrac_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46RealFrac_46Ratio_46Ratio[] = {
 	/* ST_v382: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
 };
Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling[] = {
 	/* ST_v367: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,99,101,105)
, bytes2word(108,105,110,103)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
 };
Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor[] = {
 	/* ST_v362: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,102,108,111)
, bytes2word(111,114,0,0)
,};
Node PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
 };
Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction[] = {
 	/* ST_v338: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,112,114,111)
, bytes2word(112,101,114,70)
, bytes2word(114,97,99,116)
,	/* PP_LAMBDA324: (byte 4) */
 	/* PC_LAMBDA324: (byte 4) */
 	/* ST_v359: (byte 4) */
  bytes2word(105,111,110,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,112,114,111)
, bytes2word(112,101,114,70)
, bytes2word(114,97,99,116)
, bytes2word(105,111,110,58)
, bytes2word(49,48,58,51)
,	/* PP_LAMBDA325: (byte 2) */
 	/* PC_LAMBDA325: (byte 2) */
 	/* ST_v356: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,82,101)
, bytes2word(97,108,70,114)
, bytes2word(97,99,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,112)
, bytes2word(114,111,112,101)
, bytes2word(114,70,114,97)
, bytes2word(99,116,105,111)
, bytes2word(110,58,49,48)
,	/* PP_LAMBDA326: (byte 4) */
 	/* PC_LAMBDA326: (byte 4) */
 	/* ST_v352: (byte 4) */
  bytes2word(58,52,48,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,112,114,111)
, bytes2word(112,101,114,70)
, bytes2word(114,97,99,116)
, bytes2word(105,111,110,58)
, bytes2word(57,58,53,48)
, bytes2word(45,57,58,53)
, bytes2word(49,0,0,0)
,};
Node PP_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
 };
Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46round[] = {
 	/* ST_v372: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,114,111,117)
, bytes2word(110,100,0,0)
,};
Node PP_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
 };
Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[] = {
 	/* ST_v377: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(82,101,97,108)
, bytes2word(70,114,97,99)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,116,114,117)
, bytes2word(110,99,97,116)
, bytes2word(101,0,0,0)
,	/* PS_v341: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v347: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v346: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_Prelude_46fromIntegral)
,	/* PS_v349: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_Prelude_462)
,	/* PS_v340: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_Prelude_46quotRem)
,	/* PS_v337: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
,	/* PS_v345: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v344: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v342: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_LAMBDA324)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_LAMBDA325)
,	/* PS_v348: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
, useLabel(PC_LAMBDA326)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
, useLabel(PC_Prelude_46_95_46truncate)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46round)
, useLabel(PC_Prelude_46_95_46round)
,	/* PS_v371: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46round)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46round)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46round)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio)
,	/* PS_v369: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling)
, useLabel(PC_Prelude_46_95_46ceiling)
,	/* PS_v366: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling)
,	/* PS_v368: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio)
,	/* PS_v364: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
, useLabel(PC_Prelude_46_95_46floor)
,	/* PS_v361: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
,	/* PS_v363: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio)
,	/* PS_v388: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46properFraction)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
,	/* PS_v385: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46round)
,	/* PS_v387: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46ceiling)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46floor)
,	/* PS_v381: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio)
,	/* PS_v390: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_467)
,	/* PS_v383: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Real_46Ratio_46Ratio)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46RealFrac_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v358: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_LAMBDA324)
, useLabel(PC_LAMBDA324)
,	/* PS_v355: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_LAMBDA325)
, useLabel(PC_LAMBDA325)
,	/* PS_v353: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_LAMBDA326)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v351: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_LAMBDA326)
, useLabel(PC_LAMBDA326)
,};
