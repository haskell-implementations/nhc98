#include "newmacros.h"
#include "runtime.h"

#define CT_v355	((void*)startLabel+132)
#define CT_v360	((void*)startLabel+260)
#define CT_v366	((void*)startLabel+420)
#define CT_v371	((void*)startLabel+548)
#define CT_v376	((void*)startLabel+684)
#define CT_v385	((void*)startLabel+1032)
#define CT_v390	((void*)startLabel+1196)
#define CT_v395	((void*)startLabel+1348)
#define CT_v407	((void*)startLabel+1712)
#define ST_v397	((void*)startLabel+1772)
#define ST_v368	((void*)startLabel+1800)
#define ST_v357	((void*)startLabel+1836)
#define ST_v351	((void*)startLabel+1876)
#define ST_v362	((void*)startLabel+1916)
#define ST_v373	((void*)startLabel+1952)
#define ST_v387	((void*)startLabel+1988)
#define ST_v392	((void*)startLabel+2020)
#define ST_v378	((void*)startLabel+2052)
#define PS_v391	((void*)startLabel+2084)
#define PS_v393	((void*)startLabel+2096)
#define PS_v394	((void*)startLabel+2108)
#define PS_v386	((void*)startLabel+2120)
#define PS_v389	((void*)startLabel+2132)
#define PS_v388	((void*)startLabel+2144)
#define PS_v384	((void*)startLabel+2156)
#define PS_v383	((void*)startLabel+2168)
#define PS_v381	((void*)startLabel+2180)
#define PS_v377	((void*)startLabel+2192)
#define PS_v380	((void*)startLabel+2204)
#define PS_v379	((void*)startLabel+2216)
#define PS_v382	((void*)startLabel+2228)
#define PS_v375	((void*)startLabel+2240)
#define PS_v372	((void*)startLabel+2252)
#define PS_v374	((void*)startLabel+2264)
#define PS_v370	((void*)startLabel+2276)
#define PS_v367	((void*)startLabel+2288)
#define PS_v369	((void*)startLabel+2300)
#define PS_v365	((void*)startLabel+2312)
#define PS_v361	((void*)startLabel+2324)
#define PS_v363	((void*)startLabel+2336)
#define PS_v364	((void*)startLabel+2348)
#define PS_v359	((void*)startLabel+2360)
#define PS_v356	((void*)startLabel+2372)
#define PS_v358	((void*)startLabel+2384)
#define PS_v354	((void*)startLabel+2396)
#define PS_v350	((void*)startLabel+2408)
#define PS_v352	((void*)startLabel+2420)
#define PS_v353	((void*)startLabel+2432)
#define PS_v398	((void*)startLabel+2444)
#define PS_v399	((void*)startLabel+2456)
#define PS_v402	((void*)startLabel+2468)
#define PS_v401	((void*)startLabel+2480)
#define PS_v400	((void*)startLabel+2492)
#define PS_v404	((void*)startLabel+2504)
#define PS_v403	((void*)startLabel+2516)
#define PS_v405	((void*)startLabel+2528)
#define PS_v396	((void*)startLabel+2540)
#define PS_v406	((void*)startLabel+2552)
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];
extern Node FN_Prelude_46numericEnumFromThenTo[];
extern Node FN_Prelude_46numericEnumFromThen[];
extern Node FN_Prelude_46numericEnumFromTo[];
extern Node FN_Prelude_46numericEnumFrom[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Num_46Prelude_46Int_46fromInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_45[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_43[];
extern Node PM_Ratio[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46_43[];
extern Node PC_Prelude_46Num_46Ratio_46Ratio_46_45[];
extern Node PC_Ratio_46_58_37[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46fromInteger[];
extern Node PC_Prelude_46Real_46Prelude_46Num[];
extern Node PC_Prelude_46Integral_46Prelude_46Real[];
extern Node PC_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[];
extern Node PC_Prelude_46numericEnumFrom[];
extern Node PC_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node PC_Prelude_46numericEnumFromTo[];
extern Node PC_Prelude_46Ord_46Ratio_46Ratio[];
extern Node PC_Prelude_46numericEnumFromThen[];
extern Node PC_Prelude_46numericEnumFromThenTo[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v355)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v354)
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
, 170009
, useLabel(ST_v351)
,	/* CT_v355: (byte 0) */
  HW(3,4)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo),4)
, useLabel(PS_v350)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFromThenTo))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
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
, 160009
, useLabel(ST_v357)
,	/* CT_v360: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen),3)
, useLabel(PS_v356)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFromThen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v366)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,3,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v365)
, 0
, 0
, 0
, 0
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
, 150009
, useLabel(ST_v362)
,	/* CT_v366: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo),3)
, useLabel(PS_v361)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFromTo))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v371)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 140009
, useLabel(ST_v368)
,	/* CT_v371: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFrom),2)
, useLabel(PS_v367)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFrom))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v376)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(13,ZAP_ARG_I1,ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, 130009
, useLabel(ST_v373)
,	/* CT_v376: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46fromEnum),2)
, useLabel(PS_v372)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),1)
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46fromInteger)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v385)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46toEnum[] = {
  bytes2word(NEEDHEAP_P1,59,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CADR_N1)
, bytes2word(33,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,38,HEAP_CVAL_N1,43)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v384)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v383)
, 0
, 0
, 0
, 0
, useLabel(PS_v382)
, 0
, 0
, 0
, 0
, useLabel(PS_v381)
, 0
, 0
, 0
, 0
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
, 120009
, useLabel(ST_v378)
,	/* CT_v385: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46toEnum),2)
, useLabel(PS_v377)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v390)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46pred[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CADR_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(18,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v389)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v388)
, 0
, 0
, 0
, 0
, 110009
, useLabel(ST_v387)
,	/* CT_v390: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46pred),2)
, useLabel(PS_v386)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_45))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v395)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46succ[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CADR_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(18,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v394)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v393)
, 0
, 0
, 0
, 0
, 100009
, useLabel(ST_v392)
,	/* CT_v395: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46succ),2)
, useLabel(PS_v391)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v407)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio[] = {
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
, useLabel(PS_v406)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
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
, useLabel(PS_v402)
, 0
, 0
, 0
, 0
, useLabel(PS_v401)
, 0
, 0
, 0
, 0
, useLabel(PS_v400)
, 0
, 0
, 0
, 0
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
, 90027
, useLabel(ST_v397)
,	/* CT_v407: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio),1)
, useLabel(PS_v396)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46succ),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46pred),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFrom),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46fromEnum),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46toEnum),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen),2)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo),2)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo),3)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio[] = {
 	/* ST_v397: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46enumFrom[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46enumFrom[] = {
 	/* ST_v368: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,0,0,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen[] = {
 	/* ST_v357: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,84,104,101)
, bytes2word(110,0,0,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo[] = {
 	/* ST_v351: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,84,104,101)
, bytes2word(110,84,111,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo[] = {
 	/* ST_v362: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,101,110,117)
, bytes2word(109,70,114,111)
, bytes2word(109,84,111,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46fromEnum[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46fromEnum[] = {
 	/* ST_v373: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,102,114,111)
, bytes2word(109,69,110,117)
, bytes2word(109,0,0,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46pred[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46pred[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,112,114,101)
, bytes2word(100,0,0,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46succ[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46succ[] = {
 	/* ST_v392: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,115,117,99)
, bytes2word(99,0,0,0)
,};
Node PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum[] = {
 };
Node PC_Prelude_46Enum_46Ratio_46Ratio_46toEnum[] = {
 	/* ST_v378: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,116,111,69)
, bytes2word(110,117,109,0)
,	/* PS_v391: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46succ)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46succ)
,	/* PS_v393: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46succ)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
,	/* PS_v394: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46succ)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_43)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46pred)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46pred)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46pred)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46_45)
,	/* PS_v388: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46pred)
, useLabel(PC_Prelude_46Num_46Ratio_46Ratio_46fromInteger)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_Ratio_46_58_37)
,	/* PS_v383: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v381: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v377: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
,	/* PS_v380: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_Prelude_46Real_46Prelude_46Num)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_Prelude_46Integral_46Prelude_46Real)
,	/* PS_v382: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
, useLabel(PC_Prelude_46Integral_46Prelude_46Int_46toInteger)
,	/* PS_v375: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46fromEnum)
, useLabel(PC_Prelude_46_46)
,	/* PS_v372: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46fromEnum)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46fromEnum)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46fromEnum)
, useLabel(PC_Prelude_46RealFrac_46Ratio_46Ratio_46truncate)
,	/* PS_v370: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFrom)
, useLabel(PC_Prelude_46numericEnumFrom)
,	/* PS_v367: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFrom)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFrom)
,	/* PS_v369: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFrom)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v365: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo)
, useLabel(PC_Prelude_46numericEnumFromTo)
,	/* PS_v361: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo)
,	/* PS_v363: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v364: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v359: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen)
, useLabel(PC_Prelude_46numericEnumFromThen)
,	/* PS_v356: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen)
,	/* PS_v358: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v354: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo)
, useLabel(PC_Prelude_46numericEnumFromThenTo)
,	/* PS_v350: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo)
,	/* PS_v352: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo)
, useLabel(PC_Prelude_46Fractional_46Ratio_46Ratio)
,	/* PS_v353: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo)
, useLabel(PC_Prelude_46Ord_46Ratio_46Ratio)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46succ)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46pred)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46toEnum)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46fromEnum)
,	/* PS_v400: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFrom)
,	/* PS_v404: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo)
,	/* PS_v403: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen)
,	/* PS_v405: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo)
,	/* PS_v396: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_46Enum_46Ratio_46Ratio)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Prelude_46Enum_46Ratio_46Ratio)
, useLabel(PC_Prelude_468)
,};
