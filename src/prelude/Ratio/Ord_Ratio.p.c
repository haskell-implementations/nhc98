#include "newmacros.h"
#include "runtime.h"

#define CT_v360	((void*)startLabel+288)
#define CT_v375	((void*)startLabel+628)
#define CT_v380	((void*)startLabel+768)
#define CT_v385	((void*)startLabel+892)
#define CT_v390	((void*)startLabel+1016)
#define CT_v395	((void*)startLabel+1140)
#define CT_v400	((void*)startLabel+1264)
#define CT_v412	((void*)startLabel+1628)
#define ST_v402	((void*)startLabel+1688)
#define ST_v351	((void*)startLabel+1712)
#define ST_v366	((void*)startLabel+1740)
#define ST_v387	((void*)startLabel+1768)
#define ST_v392	((void*)startLabel+1796)
#define ST_v397	((void*)startLabel+1824)
#define ST_v382	((void*)startLabel+1856)
#define ST_v377	((void*)startLabel+1884)
#define PS_v372	((void*)startLabel+1912)
#define PS_v374	((void*)startLabel+1924)
#define PS_v371	((void*)startLabel+1936)
#define PS_v365	((void*)startLabel+1948)
#define PS_v373	((void*)startLabel+1960)
#define PS_v369	((void*)startLabel+1972)
#define PS_v370	((void*)startLabel+1984)
#define PS_v357	((void*)startLabel+1996)
#define PS_v359	((void*)startLabel+2008)
#define PS_v356	((void*)startLabel+2020)
#define PS_v350	((void*)startLabel+2032)
#define PS_v358	((void*)startLabel+2044)
#define PS_v354	((void*)startLabel+2056)
#define PS_v355	((void*)startLabel+2068)
#define PS_v399	((void*)startLabel+2080)
#define PS_v396	((void*)startLabel+2092)
#define PS_v398	((void*)startLabel+2104)
#define PS_v394	((void*)startLabel+2116)
#define PS_v391	((void*)startLabel+2128)
#define PS_v393	((void*)startLabel+2140)
#define PS_v389	((void*)startLabel+2152)
#define PS_v386	((void*)startLabel+2164)
#define PS_v388	((void*)startLabel+2176)
#define PS_v384	((void*)startLabel+2188)
#define PS_v381	((void*)startLabel+2200)
#define PS_v383	((void*)startLabel+2212)
#define PS_v379	((void*)startLabel+2224)
#define PS_v376	((void*)startLabel+2236)
#define PS_v378	((void*)startLabel+2248)
#define PS_v405	((void*)startLabel+2260)
#define PS_v404	((void*)startLabel+2272)
#define PS_v408	((void*)startLabel+2284)
#define PS_v406	((void*)startLabel+2296)
#define PS_v407	((void*)startLabel+2308)
#define PS_v410	((void*)startLabel+2320)
#define PS_v409	((void*)startLabel+2332)
#define PS_v401	((void*)startLabel+2344)
#define PS_v411	((void*)startLabel+2356)
#define PS_v403	((void*)startLabel+2368)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46compare[];
extern Node FN_Prelude_46Eq_46Ratio_46Ratio[];
extern Node PM_Ratio[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_60_61[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46Real_46Prelude_46Ord[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46_60[];
extern Node PC_Prelude_46_95_46compare[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_46Eq_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(70,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_P1,5,PUSH_P1)
, bytes2word(0,PUSH_P1,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,8,ZAP_STACK_P1,7)
, bytes2word(ZAP_STACK_P1,6,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v359)
, 0
, 0
, 0
, 0
, useLabel(PS_v358)
, 0
, 0
, 0
, 0
, useLabel(PS_v357)
, 0
, 0
, 0
, 0
, useLabel(PS_v356)
, 0
, 0
, 0
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
, 90005
, useLabel(ST_v351)
,	/* CT_v360: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60),3)
, useLabel(PS_v350)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v375)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(70,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,11,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_I2,HEAP_P1,5,PUSH_P1)
, bytes2word(0,PUSH_P1,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,8,ZAP_STACK_P1,7)
, bytes2word(ZAP_STACK_P1,6,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
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
, useLabel(PS_v372)
, 0
, 0
, 0
, 0
, useLabel(PS_v371)
, 0
, 0
, 0
, 0
, useLabel(PS_v370)
, 0
, 0
, 0
, 0
, useLabel(PS_v369)
, 0
, 0
, 0
, 0
, 80005
, useLabel(ST_v366)
,	/* CT_v375: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61),3)
, useLabel(PS_v365)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v380)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
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
, 70028
, useLabel(ST_v377)
,	/* CT_v380: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46min),3)
, useLabel(PS_v376)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v385)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
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
, 70028
, useLabel(ST_v382)
,	/* CT_v385: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46max),3)
, useLabel(PS_v381)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v390)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
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
, 70028
, useLabel(ST_v387)
,	/* CT_v390: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62),3)
, useLabel(PS_v386)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v395)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v394)
, 0
, 0
, 0
, 0
, useLabel(PS_v393)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v392)
,	/* CT_v395: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61),3)
, useLabel(PS_v391)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v399)
, 0
, 0
, 0
, 0
, useLabel(PS_v398)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v397)
,	/* CT_v400: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46compare),3)
, useLabel(PS_v396)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, bytes2word(1,0,0,1)
, useLabel(CT_v412)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_P1,70,PUSH_HEAP,HEAP_CVAL_P1)
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
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(47,HEAP_CVAL_N1,52,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v411)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v410)
, 0
, 0
, 0
, 0
, useLabel(PS_v409)
, 0
, 0
, 0
, 0
, useLabel(PS_v408)
, 0
, 0
, 0
, 0
, useLabel(PS_v407)
, 0
, 0
, 0
, 0
, useLabel(PS_v406)
, 0
, 0
, 0
, 0
, useLabel(PS_v405)
, 0
, 0
, 0
, 0
, useLabel(PS_v404)
, 0
, 0
, 0
, 0
, useLabel(PS_v403)
, 0
, 0
, 0
, 0
, 70028
, useLabel(ST_v402)
,	/* CT_v412: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio),1)
, useLabel(PS_v401)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46max),2)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio[] = {
 	/* ST_v402: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
 	/* ST_v351: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(60,0,0,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
 	/* ST_v366: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(60,61,0,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(62,0,0,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
 	/* ST_v392: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(62,61,0,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
 	/* ST_v397: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(99,111,109,112)
, bytes2word(97,114,101,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
 	/* ST_v382: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(109,97,120,0)
,};
Node PP_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
 };
Node PC_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
 	/* ST_v377: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(109,105,110,0)
,	/* PS_v372: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_Prelude_46_60_61)
,	/* PS_v371: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_Prelude_46_42)
,	/* PS_v365: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_Prelude_46Real_46Prelude_46Ord)
,	/* PS_v369: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v370: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v357: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v359: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_Prelude_46_60)
,	/* PS_v356: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_Prelude_46_42)
,	/* PS_v350: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_60)
,	/* PS_v358: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_Prelude_46Real_46Prelude_46Ord)
,	/* PS_v354: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v355: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_60)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46compare)
, useLabel(PC_Prelude_46_95_46compare)
,	/* PS_v396: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46compare)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46compare)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46compare)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v394: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v391: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_62_61)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_62_61)
,	/* PS_v393: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_62_61)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_62)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_62)
,	/* PS_v388: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46_62)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v381: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46max)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46max)
,	/* PS_v383: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46max)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46min)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46min)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio_46min)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v405: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_60_61)
,	/* PS_v404: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_60)
,	/* PS_v408: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46compare)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_62_61)
,	/* PS_v407: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46_62)
,	/* PS_v410: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46max)
,	/* PS_v409: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio_46min)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v411: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_468)
,	/* PS_v403: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Ord_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Eq_46Ratio_46Ratio)
,};
