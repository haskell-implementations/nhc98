#include "newmacros.h"
#include "runtime.h"

#define v323	((void*)startLabel+22)
#define v325	((void*)startLabel+32)
#define v326	((void*)startLabel+42)
#define v327	((void*)startLabel+53)
#define v329	((void*)startLabel+64)
#define v330	((void*)startLabel+74)
#define CT_v340	((void*)startLabel+260)
#define CT_v345	((void*)startLabel+380)
#define CT_v350	((void*)startLabel+504)
#define CT_v355	((void*)startLabel+628)
#define CT_v360	((void*)startLabel+752)
#define CT_v365	((void*)startLabel+876)
#define CT_v370	((void*)startLabel+1000)
#define CT_v383	((void*)startLabel+1396)
#define ST_v372	((void*)startLabel+1460)
#define ST_v362	((void*)startLabel+1488)
#define ST_v367	((void*)startLabel+1516)
#define ST_v352	((void*)startLabel+1548)
#define ST_v357	((void*)startLabel+1576)
#define ST_v332	((void*)startLabel+1608)
#define ST_v347	((void*)startLabel+1644)
#define ST_v342	((void*)startLabel+1676)
#define PS_v339	((void*)startLabel+1708)
#define PS_v336	((void*)startLabel+1720)
#define PS_v335	((void*)startLabel+1732)
#define PS_v338	((void*)startLabel+1744)
#define PS_v331	((void*)startLabel+1756)
#define PS_v369	((void*)startLabel+1768)
#define PS_v366	((void*)startLabel+1780)
#define PS_v368	((void*)startLabel+1792)
#define PS_v364	((void*)startLabel+1804)
#define PS_v361	((void*)startLabel+1816)
#define PS_v363	((void*)startLabel+1828)
#define PS_v359	((void*)startLabel+1840)
#define PS_v356	((void*)startLabel+1852)
#define PS_v358	((void*)startLabel+1864)
#define PS_v354	((void*)startLabel+1876)
#define PS_v351	((void*)startLabel+1888)
#define PS_v353	((void*)startLabel+1900)
#define PS_v349	((void*)startLabel+1912)
#define PS_v346	((void*)startLabel+1924)
#define PS_v348	((void*)startLabel+1936)
#define PS_v344	((void*)startLabel+1948)
#define PS_v341	((void*)startLabel+1960)
#define PS_v343	((void*)startLabel+1972)
#define PS_v379	((void*)startLabel+1984)
#define PS_v376	((void*)startLabel+1996)
#define PS_v375	((void*)startLabel+2008)
#define PS_v377	((void*)startLabel+2020)
#define PS_v378	((void*)startLabel+2032)
#define PS_v381	((void*)startLabel+2044)
#define PS_v380	((void*)startLabel+2056)
#define PS_v371	((void*)startLabel+2068)
#define PS_v382	((void*)startLabel+2080)
#define PS_v374	((void*)startLabel+2092)
#define PS_v373	((void*)startLabel+2104)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Maybe[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46Maybe[];
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
extern Node PC_Prelude_46Eq_46Prelude_46Maybe[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v340)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v323: (byte 2) */
  bytes2word(TOP(35),BOT(35),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v325: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v326: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v327: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v329: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
,	/* v330: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v336)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v335)
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
, useLabel(ST_v332)
,	/* CT_v340: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare),3)
, useLabel(PS_v331)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v345)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
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
, 30019
, useLabel(ST_v342)
,	/* CT_v345: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46min),3)
, useLabel(PS_v341)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v350)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v349)
, 0
, 0
, 0
, 0
, useLabel(PS_v348)
, 0
, 0
, 0
, 0
, 30019
, useLabel(ST_v347)
,	/* CT_v350: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46max),3)
, useLabel(PS_v346)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v355)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
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
, 30019
, useLabel(ST_v352)
,	/* CT_v355: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62),3)
, useLabel(PS_v351)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
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
, 30019
, useLabel(ST_v357)
,	/* CT_v360: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61),3)
, useLabel(PS_v356)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v365)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
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
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60),3)
, useLabel(PS_v361)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v370)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
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
Node F0_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61),3)
, useLabel(PS_v366)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v383)
,};
Node FN_Prelude_46Ord_46Prelude_46Maybe[] = {
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
, useLabel(PS_v382)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
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
, useLabel(PS_v378)
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
, useLabel(PS_v373)
, 0
, 0
, 0
, 0
, 30019
, useLabel(ST_v372)
,	/* CT_v383: (byte 0) */
  HW(9,1)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe),1)
, useLabel(PS_v371)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Maybe_46max),2)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe[] = {
 	/* ST_v372: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46_60[] = {
 	/* ST_v362: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,60,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46_60_61[] = {
 	/* ST_v367: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,60,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46_62[] = {
 	/* ST_v352: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,62,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46_62_61[] = {
 	/* ST_v357: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,62,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46compare[] = {
 	/* ST_v332: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,99,111)
, bytes2word(109,112,97,114)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46max[] = {
 	/* ST_v347: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,109,97)
, bytes2word(120,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Maybe_46min[] = {
 	/* ST_v342: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,109,105)
, bytes2word(110,0,0,0)
,	/* PS_v339: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v336: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v335: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46compare)
, useLabel(PC_Prelude_46EQ)
,	/* PS_v338: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v331: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46compare)
,	/* PS_v369: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v366: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_60_61)
,	/* PS_v368: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v364: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v361: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_60)
,	/* PS_v363: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v359: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v356: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_62_61)
,	/* PS_v358: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v354: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v351: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_62)
,	/* PS_v353: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v349: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v346: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46max)
,	/* PS_v348: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v344: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v341: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46min)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46compare)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_60_61)
,	/* PS_v375: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_60)
,	/* PS_v377: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_62_61)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46_62)
,	/* PS_v381: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46max)
,	/* PS_v380: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe_46min)
,	/* PS_v371: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Maybe)
,	/* PS_v382: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_468)
,	/* PS_v374: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Eq_46Prelude_46Maybe)
,	/* PS_v373: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,};
