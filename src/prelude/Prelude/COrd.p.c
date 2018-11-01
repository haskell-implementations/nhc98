#include "newmacros.h"
#include "runtime.h"

#define v306	((void*)startLabel+37)
#define v308	((void*)startLabel+50)
#define CT_v316	((void*)startLabel+188)
#define FN_LAMBDA302	((void*)startLabel+236)
#define CT_v320	((void*)startLabel+280)
#define CF_LAMBDA302	((void*)startLabel+288)
#define v321	((void*)startLabel+345)
#define v323	((void*)startLabel+358)
#define CT_v331	((void*)startLabel+496)
#define FN_LAMBDA303	((void*)startLabel+544)
#define CT_v335	((void*)startLabel+588)
#define CF_LAMBDA303	((void*)startLabel+596)
#define CT_v342	((void*)startLabel+788)
#define CT_v349	((void*)startLabel+1000)
#define CT_v356	((void*)startLabel+1212)
#define CT_v363	((void*)startLabel+1424)
#define v364	((void*)startLabel+1516)
#define v366	((void*)startLabel+1549)
#define v368	((void*)startLabel+1569)
#define CT_v381	((void*)startLabel+1840)
#define FN_LAMBDA304	((void*)startLabel+1896)
#define CT_v385	((void*)startLabel+1940)
#define CF_LAMBDA304	((void*)startLabel+1948)
#define CT_v388	((void*)startLabel+1996)
#define CT_v391	((void*)startLabel+2052)
#define CT_v394	((void*)startLabel+2108)
#define CT_v397	((void*)startLabel+2164)
#define CT_v400	((void*)startLabel+2220)
#define CT_v403	((void*)startLabel+2276)
#define CT_v406	((void*)startLabel+2332)
#define CT_v409	((void*)startLabel+2388)
#define ST_v390	((void*)startLabel+2416)
#define ST_v393	((void*)startLabel+2428)
#define ST_v399	((void*)startLabel+2440)
#define ST_v396	((void*)startLabel+2452)
#define ST_v387	((void*)startLabel+2464)
#define ST_v351	((void*)startLabel+2488)
#define ST_v358	((void*)startLabel+2500)
#define ST_v337	((void*)startLabel+2516)
#define ST_v344	((void*)startLabel+2528)
#define ST_v371	((void*)startLabel+2544)
#define PP_LAMBDA304	((void*)startLabel+2562)
#define PC_LAMBDA304	((void*)startLabel+2562)
#define ST_v383	((void*)startLabel+2562)
#define ST_v326	((void*)startLabel+2592)
#define PP_LAMBDA303	((void*)startLabel+2606)
#define PC_LAMBDA303	((void*)startLabel+2606)
#define ST_v333	((void*)startLabel+2606)
#define ST_v311	((void*)startLabel+2632)
#define PP_LAMBDA302	((void*)startLabel+2646)
#define PC_LAMBDA302	((void*)startLabel+2646)
#define ST_v318	((void*)startLabel+2646)
#define ST_v402	((void*)startLabel+2672)
#define ST_v408	((void*)startLabel+2688)
#define ST_v405	((void*)startLabel+2700)
#define ST_v384	((void*)startLabel+2712)
#define ST_v334	((void*)startLabel+2780)
#define ST_v319	((void*)startLabel+2848)
#define PS_v401	((void*)startLabel+2916)
#define PS_v392	((void*)startLabel+2928)
#define PS_v389	((void*)startLabel+2940)
#define PS_v395	((void*)startLabel+2952)
#define PS_v398	((void*)startLabel+2964)
#define PS_v407	((void*)startLabel+2976)
#define PS_v404	((void*)startLabel+2988)
#define PS_v380	((void*)startLabel+3000)
#define PS_v375	((void*)startLabel+3012)
#define PS_v376	((void*)startLabel+3024)
#define PS_v374	((void*)startLabel+3036)
#define PS_v378	((void*)startLabel+3048)
#define PS_v373	((void*)startLabel+3060)
#define PS_v377	((void*)startLabel+3072)
#define PS_v370	((void*)startLabel+3084)
#define PS_v372	((void*)startLabel+3096)
#define PS_v379	((void*)startLabel+3108)
#define PS_v360	((void*)startLabel+3120)
#define PS_v359	((void*)startLabel+3132)
#define PS_v361	((void*)startLabel+3144)
#define PS_v357	((void*)startLabel+3156)
#define PS_v362	((void*)startLabel+3168)
#define PS_v353	((void*)startLabel+3180)
#define PS_v352	((void*)startLabel+3192)
#define PS_v354	((void*)startLabel+3204)
#define PS_v350	((void*)startLabel+3216)
#define PS_v355	((void*)startLabel+3228)
#define PS_v346	((void*)startLabel+3240)
#define PS_v345	((void*)startLabel+3252)
#define PS_v347	((void*)startLabel+3264)
#define PS_v343	((void*)startLabel+3276)
#define PS_v348	((void*)startLabel+3288)
#define PS_v339	((void*)startLabel+3300)
#define PS_v338	((void*)startLabel+3312)
#define PS_v340	((void*)startLabel+3324)
#define PS_v336	((void*)startLabel+3336)
#define PS_v341	((void*)startLabel+3348)
#define PS_v330	((void*)startLabel+3360)
#define PS_v327	((void*)startLabel+3372)
#define PS_v328	((void*)startLabel+3384)
#define PS_v325	((void*)startLabel+3396)
#define PS_v329	((void*)startLabel+3408)
#define PS_v315	((void*)startLabel+3420)
#define PS_v312	((void*)startLabel+3432)
#define PS_v313	((void*)startLabel+3444)
#define PS_v310	((void*)startLabel+3456)
#define PS_v314	((void*)startLabel+3468)
#define PS_v386	((void*)startLabel+3480)
#define PS_v317	((void*)startLabel+3492)
#define PS_v332	((void*)startLabel+3504)
#define PS_v382	((void*)startLabel+3516)
extern Node FN_Prelude_46_60_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46_62_61[];
extern Node FN_Prelude_46compare[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46EQ[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46_61_61[];
extern Node PC_Prelude_46True[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node PC_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v316)
,};
Node FN_Prelude_46_95_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I2)
,	/* v306: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,JUMPFALSE,4,0)
,	/* v308: (byte 2) */
  bytes2word(PUSH_ARG_I3,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v315)
, 0
, 0
, 0
, 0
, useLabel(PS_v314)
, 0
, 0
, 0
, 0
, useLabel(PS_v313)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v312)
, 0
, 0
, 0
, 0
, 220005
, useLabel(ST_v311)
,	/* CT_v316: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46min),3)
, useLabel(PS_v310)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_LAMBDA302))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v320)
,	/* FN_LAMBDA302: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v319)
, 220005
, useLabel(ST_v318)
,	/* CT_v320: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA302: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA302))
, useLabel(PS_v317)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v331)
,};
Node FN_Prelude_46_95_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I2)
,	/* v321: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,JUMPFALSE,4,0)
,	/* v323: (byte 2) */
  bytes2word(PUSH_ARG_I3,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v327)
, 0
, 0
, 0
, 0
, 200005
, useLabel(ST_v326)
,	/* CT_v331: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46max),3)
, useLabel(PS_v325)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_62_61))
, VAPTAG(useLabel(FN_LAMBDA303))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v335)
,	/* FN_LAMBDA303: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v334)
, 200005
, useLabel(ST_v333)
,	/* CT_v335: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA303: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA303))
, useLabel(PS_v332)
, 0
, 0
, 0
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v342)
,};
Node FN_Prelude_46_95_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, CONSTR(2,0,0)
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
, 180005
, useLabel(ST_v337)
,	/* CT_v342: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_62),3)
, useLabel(PS_v336)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v349)
,};
Node FN_Prelude_46_95_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, CONSTR(0,0,0)
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
, 170005
, useLabel(ST_v344)
,	/* CT_v349: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_62_61),3)
, useLabel(PS_v343)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v356)
,};
Node FN_Prelude_46_95_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v355)
, 0
, 0
, 0
, 0
, useLabel(PS_v354)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v353)
, 0
, 0
, 0
, 0
, useLabel(PS_v352)
, 0
, 0
, 0
, 0
, 160005
, useLabel(ST_v351)
,	/* CT_v356: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_60),3)
, useLabel(PS_v350)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v363)
,};
Node FN_Prelude_46_95_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,18,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v362)
, 0
, 0
, 0
, 0
, useLabel(PS_v361)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v360)
, 0
, 0
, 0
, 0
, useLabel(PS_v359)
, 0
, 0
, 0
, 0
, 150005
, useLabel(ST_v358)
,	/* CT_v363: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46_95_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_60_61),3)
, useLabel(PS_v357)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v381)
,};
Node FN_Prelude_46_95_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,11,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
,	/* v364: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(PUSH_ARG_I3,PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,11,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,32,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v366: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,JUMPFALSE,11,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,47,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v368: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(57,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_CVAL_N1)
, bytes2word(62,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v380)
, 0
, 0
, 0
, 0
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
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v377)
, 0
, 0
, 0
, 0
, useLabel(PS_v376)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v375)
, 0
, 0
, 0
, 0
, useLabel(PS_v374)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v373)
, 0
, 0
, 0
, 0
, useLabel(PS_v372)
, 0
, 0
, 0
, 0
, 100005
, useLabel(ST_v371)
,	/* CT_v381: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Prelude_46_95_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46compare),3)
, useLabel(PS_v370)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_LAMBDA304))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v385)
,	/* FN_LAMBDA304: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v384)
, 100005
, useLabel(ST_v383)
,	/* CT_v385: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA304: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA304))
, useLabel(PS_v382)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v388)
,};
Node FN_Prelude_46Ord_46Prelude_46Eq[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v387)
,	/* CT_v388: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Eq[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq),1)
, useLabel(PS_v386)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,};
Node FN_Prelude_46_60[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v390)
,	/* CT_v391: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46_60),1)
, useLabel(PS_v389)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v394)
,};
Node FN_Prelude_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v393)
,	/* CT_v394: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_60_61),1)
, useLabel(PS_v392)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v397)
,};
Node FN_Prelude_46_62_61[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v396)
,	/* CT_v397: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46_62_61),1)
, useLabel(PS_v395)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v400)
,};
Node FN_Prelude_46_62[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v399)
,	/* CT_v400: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46_62),1)
, useLabel(PS_v398)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v403)
,};
Node FN_Prelude_46compare[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v402)
,	/* CT_v403: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46compare),1)
, useLabel(PS_v401)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v406)
,};
Node FN_Prelude_46min[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v405)
,	/* CT_v406: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46min),1)
, useLabel(PS_v404)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v409)
,};
Node FN_Prelude_46max[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 50018
, useLabel(ST_v408)
,	/* CT_v409: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46max),1)
, useLabel(PS_v407)
, 0
, 0
, 0
,};
Node PP_Prelude_46_60[] = {
 };
Node PC_Prelude_46_60[] = {
 	/* ST_v390: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(60,0,0,0)
,};
Node PP_Prelude_46_60_61[] = {
 };
Node PC_Prelude_46_60_61[] = {
 	/* ST_v393: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(60,61,0,0)
,};
Node PP_Prelude_46_62[] = {
 };
Node PC_Prelude_46_62[] = {
 	/* ST_v399: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(62,0,0,0)
,};
Node PP_Prelude_46_62_61[] = {
 };
Node PC_Prelude_46_62_61[] = {
 	/* ST_v396: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(62,61,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Eq[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Eq[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,0,0)
,};
Node PP_Prelude_46_95_46_60[] = {
 };
Node PC_Prelude_46_95_46_60[] = {
 	/* ST_v351: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,60,0)
,};
Node PP_Prelude_46_95_46_60_61[] = {
 };
Node PC_Prelude_46_95_46_60_61[] = {
 	/* ST_v358: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,60,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46_95_46_62[] = {
 };
Node PC_Prelude_46_95_46_62[] = {
 	/* ST_v337: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,62,0)
,};
Node PP_Prelude_46_95_46_62_61[] = {
 };
Node PC_Prelude_46_95_46_62_61[] = {
 	/* ST_v344: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,62,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46_95_46compare[] = {
 };
Node PC_Prelude_46_95_46compare[] = {
 	/* ST_v371: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,99,111)
, bytes2word(109,112,97,114)
,	/* PP_LAMBDA304: (byte 2) */
 	/* PC_LAMBDA304: (byte 2) */
 	/* ST_v383: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,58)
, bytes2word(49,48,58,53)
, bytes2word(45,49,51,58)
, bytes2word(50,56,0,0)
,};
Node PP_Prelude_46_95_46max[] = {
 };
Node PC_Prelude_46_95_46max[] = {
 	/* ST_v326: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,109,97)
,	/* PP_LAMBDA303: (byte 2) */
 	/* PC_LAMBDA303: (byte 2) */
 	/* ST_v333: (byte 2) */
  bytes2word(120,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(109,97,120,58)
, bytes2word(50,48,58,53)
, bytes2word(45,50,49,58)
, bytes2word(50,56,0,0)
,};
Node PP_Prelude_46_95_46min[] = {
 };
Node PC_Prelude_46_95_46min[] = {
 	/* ST_v311: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,46,109,105)
,	/* PP_LAMBDA302: (byte 2) */
 	/* PC_LAMBDA302: (byte 2) */
 	/* ST_v318: (byte 2) */
  bytes2word(110,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,46)
, bytes2word(109,105,110,58)
, bytes2word(50,50,58,53)
, bytes2word(45,50,51,58)
, bytes2word(50,56,0,0)
,};
Node PP_Prelude_46compare[] = {
 };
Node PC_Prelude_46compare[] = {
 	/* ST_v402: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,0)
,};
Node PP_Prelude_46max[] = {
 };
Node PC_Prelude_46max[] = {
 	/* ST_v408: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,120,0)
,};
Node PP_Prelude_46min[] = {
 };
Node PC_Prelude_46min[] = {
 	/* ST_v405: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v384: (byte 4) */
  bytes2word(109,105,110,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,67,79)
, bytes2word(114,100,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,48,58,53)
, bytes2word(45,49,51,58)
,	/* ST_v334: (byte 4) */
  bytes2word(50,56,46,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,67,79)
, bytes2word(114,100,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(50,48,58,53)
, bytes2word(45,50,49,58)
,	/* ST_v319: (byte 4) */
  bytes2word(50,56,46,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,67,79)
, bytes2word(114,100,46,104)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(50,50,58,53)
, bytes2word(45,50,51,58)
, bytes2word(50,56,46,0)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v392: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_60_61)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_60)
, useLabel(PC_Prelude_46_60)
,	/* PS_v395: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_62_61)
, useLabel(PC_Prelude_46_62_61)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_62)
, useLabel(PC_Prelude_46_62)
,	/* PS_v407: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46max)
, useLabel(PC_Prelude_46max)
,	/* PS_v404: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46min)
, useLabel(PC_Prelude_46min)
,	/* PS_v380: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v375: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v377: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46True)
,	/* PS_v370: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46_95_46compare)
,	/* PS_v372: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46compare)
, useLabel(PC_LAMBDA304)
,	/* PS_v360: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v359: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60_61)
, useLabel(PC_Prelude_46compare)
,	/* PS_v361: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60_61)
, useLabel(PC_Prelude_46GT)
,	/* PS_v357: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v362: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
,	/* PS_v353: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v352: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60)
, useLabel(PC_Prelude_46compare)
,	/* PS_v354: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60)
, useLabel(PC_Prelude_46LT)
,	/* PS_v350: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v355: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_60)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
,	/* PS_v346: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v345: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62_61)
, useLabel(PC_Prelude_46compare)
,	/* PS_v347: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62_61)
, useLabel(PC_Prelude_46LT)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v348: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62_61)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering_46_47_61)
,	/* PS_v339: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v338: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62)
, useLabel(PC_Prelude_46compare)
,	/* PS_v340: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62)
, useLabel(PC_Prelude_46GT)
,	/* PS_v336: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v341: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46_62)
, useLabel(PC_Prelude_46Eq_46Prelude_46Ordering_46_61_61)
,	/* PS_v330: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46max)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v327: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46max)
, useLabel(PC_Prelude_46_62_61)
,	/* PS_v328: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46max)
, useLabel(PC_Prelude_46True)
,	/* PS_v325: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v329: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46max)
, useLabel(PC_LAMBDA303)
,	/* PS_v315: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46min)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v312: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46min)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v313: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46min)
, useLabel(PC_Prelude_46True)
,	/* PS_v310: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v314: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95_46min)
, useLabel(PC_LAMBDA302)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Eq)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,	/* PS_v317: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA302)
, useLabel(PC_LAMBDA302)
,	/* PS_v332: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA303)
, useLabel(PC_LAMBDA303)
,	/* PS_v382: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA304)
, useLabel(PC_LAMBDA304)
,};
