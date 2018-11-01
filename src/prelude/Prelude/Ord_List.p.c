#include "newmacros.h"
#include "runtime.h"

#define v337	((void*)startLabel+22)
#define v339	((void*)startLabel+32)
#define v340	((void*)startLabel+42)
#define v341	((void*)startLabel+53)
#define v343	((void*)startLabel+64)
#define v344	((void*)startLabel+74)
#define v346	((void*)startLabel+106)
#define v347	((void*)startLabel+116)
#define v348	((void*)startLabel+131)
#define CT_v360	((void*)startLabel+316)
#define CT_v365	((void*)startLabel+440)
#define CT_v370	((void*)startLabel+564)
#define CT_v375	((void*)startLabel+688)
#define CT_v380	((void*)startLabel+812)
#define CT_v385	((void*)startLabel+936)
#define CT_v390	((void*)startLabel+1060)
#define CT_v403	((void*)startLabel+1456)
#define ST_v392	((void*)startLabel+1520)
#define ST_v382	((void*)startLabel+1544)
#define ST_v387	((void*)startLabel+1572)
#define ST_v372	((void*)startLabel+1600)
#define ST_v377	((void*)startLabel+1628)
#define ST_v350	((void*)startLabel+1656)
#define ST_v367	((void*)startLabel+1688)
#define ST_v362	((void*)startLabel+1716)
#define PS_v357	((void*)startLabel+1744)
#define PS_v354	((void*)startLabel+1756)
#define PS_v353	((void*)startLabel+1768)
#define PS_v356	((void*)startLabel+1780)
#define PS_v349	((void*)startLabel+1792)
#define PS_v359	((void*)startLabel+1804)
#define PS_v389	((void*)startLabel+1816)
#define PS_v386	((void*)startLabel+1828)
#define PS_v388	((void*)startLabel+1840)
#define PS_v384	((void*)startLabel+1852)
#define PS_v381	((void*)startLabel+1864)
#define PS_v383	((void*)startLabel+1876)
#define PS_v379	((void*)startLabel+1888)
#define PS_v376	((void*)startLabel+1900)
#define PS_v378	((void*)startLabel+1912)
#define PS_v374	((void*)startLabel+1924)
#define PS_v371	((void*)startLabel+1936)
#define PS_v373	((void*)startLabel+1948)
#define PS_v369	((void*)startLabel+1960)
#define PS_v366	((void*)startLabel+1972)
#define PS_v368	((void*)startLabel+1984)
#define PS_v364	((void*)startLabel+1996)
#define PS_v361	((void*)startLabel+2008)
#define PS_v363	((void*)startLabel+2020)
#define PS_v399	((void*)startLabel+2032)
#define PS_v396	((void*)startLabel+2044)
#define PS_v395	((void*)startLabel+2056)
#define PS_v397	((void*)startLabel+2068)
#define PS_v398	((void*)startLabel+2080)
#define PS_v401	((void*)startLabel+2092)
#define PS_v400	((void*)startLabel+2104)
#define PS_v391	((void*)startLabel+2116)
#define PS_v402	((void*)startLabel+2128)
#define PS_v394	((void*)startLabel+2140)
#define PS_v393	((void*)startLabel+2152)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46compare[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46EQ[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46_95_46_60_61[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_46Eq_46Prelude_46_91_93[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v337: (byte 2) */
  bytes2word(TOP(35),BOT(35),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v339: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v340: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v341: (byte 1) */
  bytes2word(RETURN,UNPACK,2,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v343: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
,	/* v344: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v346: (byte 2) */
  bytes2word(TOP(31),BOT(31),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
,	/* v347: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,42,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
,	/* v348: (byte 3) */
  bytes2word(4,HEAP_I2,RETURN_EVAL,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v359)
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
, CONSTR(2,0,0)
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
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v350)
,	/* CT_v360: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare),3)
, useLabel(PS_v349)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v365)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
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
, 30019
, useLabel(ST_v362)
,	/* CT_v365: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46min),3)
, useLabel(PS_v361)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v370)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
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
, 30019
, useLabel(ST_v367)
,	/* CT_v370: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46max),3)
, useLabel(PS_v366)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v375)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
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
, 30019
, useLabel(ST_v372)
,	/* CT_v375: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62),3)
, useLabel(PS_v371)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v380)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
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
, 30019
, useLabel(ST_v377)
,	/* CT_v380: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61),3)
, useLabel(PS_v376)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v385)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
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
, 30019
, useLabel(ST_v382)
,	/* CT_v385: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60),3)
, useLabel(PS_v381)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v390)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
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
, 30019
, useLabel(ST_v387)
,	/* CT_v390: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61),3)
, useLabel(PS_v386)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v403)
,};
Node FN_Prelude_46Ord_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_P1,76,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,12,HEAP_CVAL_N1,32)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,52,HEAP_CVAL_N1,57)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_P1)
, bytes2word(8,HEAP_P1,7,HEAP_P1)
, bytes2word(6,HEAP_P1,5,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v402)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
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
, useLabel(PS_v397)
, 0
, 0
, 0
, 0
, useLabel(PS_v396)
, 0
, 0
, 0
, 0
, useLabel(PS_v395)
, 0
, 0
, 0
, 0
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
, 30019
, useLabel(ST_v392)
,	/* CT_v403: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93),1)
, useLabel(PS_v391)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46max),2)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93[] = {
 	/* ST_v392: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46_60[] = {
 	/* ST_v382: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46_60_61[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46_62[] = {
 	/* ST_v372: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46_62_61[] = {
 	/* ST_v377: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46compare[] = {
 	/* ST_v350: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46max[] = {
 	/* ST_v367: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46_91_93_46min[] = {
 	/* ST_v362: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v357: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v354: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v353: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v356: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v349: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46compare)
,	/* PS_v359: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46compare)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_60_61)
,	/* PS_v388: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v381: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_60)
,	/* PS_v383: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_62_61)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v371: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_62)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v369: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v366: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46max)
,	/* PS_v368: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v364: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v361: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46min)
,	/* PS_v363: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46compare)
,	/* PS_v396: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_60_61)
,	/* PS_v395: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_60)
,	/* PS_v397: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_62_61)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46_62)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46max)
,	/* PS_v400: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93_46min)
,	/* PS_v391: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46_91_93)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_468)
,	/* PS_v394: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Eq_46Prelude_46_91_93)
,	/* PS_v393: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,};
