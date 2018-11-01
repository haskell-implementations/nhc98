#include "newmacros.h"
#include "runtime.h"

#define v369	((void*)startLabel+58)
#define v370	((void*)startLabel+68)
#define v371	((void*)startLabel+92)
#define CT_v380	((void*)startLabel+220)
#define CT_v385	((void*)startLabel+348)
#define CT_v390	((void*)startLabel+480)
#define CT_v395	((void*)startLabel+612)
#define CT_v400	((void*)startLabel+744)
#define CT_v405	((void*)startLabel+876)
#define CT_v410	((void*)startLabel+1008)
#define CT_v423	((void*)startLabel+1428)
#define ST_v412	((void*)startLabel+1492)
#define ST_v402	((void*)startLabel+1516)
#define ST_v407	((void*)startLabel+1540)
#define ST_v392	((void*)startLabel+1568)
#define ST_v397	((void*)startLabel+1592)
#define ST_v373	((void*)startLabel+1620)
#define ST_v387	((void*)startLabel+1652)
#define ST_v382	((void*)startLabel+1680)
#define PS_v376	((void*)startLabel+1708)
#define PS_v378	((void*)startLabel+1720)
#define PS_v379	((void*)startLabel+1732)
#define PS_v372	((void*)startLabel+1744)
#define PS_v409	((void*)startLabel+1756)
#define PS_v406	((void*)startLabel+1768)
#define PS_v408	((void*)startLabel+1780)
#define PS_v404	((void*)startLabel+1792)
#define PS_v401	((void*)startLabel+1804)
#define PS_v403	((void*)startLabel+1816)
#define PS_v399	((void*)startLabel+1828)
#define PS_v396	((void*)startLabel+1840)
#define PS_v398	((void*)startLabel+1852)
#define PS_v394	((void*)startLabel+1864)
#define PS_v391	((void*)startLabel+1876)
#define PS_v393	((void*)startLabel+1888)
#define PS_v389	((void*)startLabel+1900)
#define PS_v386	((void*)startLabel+1912)
#define PS_v388	((void*)startLabel+1924)
#define PS_v384	((void*)startLabel+1936)
#define PS_v381	((void*)startLabel+1948)
#define PS_v383	((void*)startLabel+1960)
#define PS_v419	((void*)startLabel+1972)
#define PS_v416	((void*)startLabel+1984)
#define PS_v415	((void*)startLabel+1996)
#define PS_v417	((void*)startLabel+2008)
#define PS_v418	((void*)startLabel+2020)
#define PS_v421	((void*)startLabel+2032)
#define PS_v420	((void*)startLabel+2044)
#define PS_v411	((void*)startLabel+2056)
#define PS_v422	((void*)startLabel+2068)
#define PS_v414	((void*)startLabel+2080)
#define PS_v413	((void*)startLabel+2092)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_462[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_462[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46compare[];
extern Node PC_Prelude_46LT[];
extern Node PC_Prelude_46GT[];
extern Node PC_Prelude_46_95_46_60_61[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];
extern Node PC_Prelude_46Eq_46Prelude_462[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v380)
,};
Node FN_Prelude_46Ord_46Prelude_462_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_P1)
, bytes2word(0,PUSH_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v369: (byte 2) */
  bytes2word(TOP(40),BOT(40),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CVAL_N1,17)
,	/* v370: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_I1,PUSH_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(6,ZAP_STACK_P1,4,EVAL)
,	/* v371: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v379)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v378)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v376)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v373)
,	/* CT_v380: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46compare),4)
, useLabel(PS_v372)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v385)
,};
Node FN_Prelude_46Ord_46Prelude_462_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
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
, 30027
, useLabel(ST_v382)
,	/* CT_v385: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46min),4)
, useLabel(PS_v381)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v390)
,};
Node FN_Prelude_46Ord_46Prelude_462_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
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
, 30027
, useLabel(ST_v387)
,	/* CT_v390: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46max),4)
, useLabel(PS_v386)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v395)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
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
, 30027
, useLabel(ST_v392)
,	/* CT_v395: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62),4)
, useLabel(PS_v391)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
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
, 30027
, useLabel(ST_v397)
,	/* CT_v400: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62_61),4)
, useLabel(PS_v396)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v405)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, 30027
, useLabel(ST_v402)
,	/* CT_v405: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60),4)
, useLabel(PS_v401)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v410)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, 30027
, useLabel(ST_v407)
,	/* CT_v410: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60_61),4)
, useLabel(PS_v406)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v423)
,};
Node FN_Prelude_46Ord_46Prelude_462[] = {
  bytes2word(NEEDHEAP_P1,90,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,17,HEAP_OFF_N1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,13,HEAP_CVAL_N1)
, bytes2word(37,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,14,HEAP_CVAL_N1,42)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_CVAL_N1,47,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,52)
, bytes2word(HEAP_CVAL_N1,57,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v422)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v421)
, 0
, 0
, 0
, 0
, useLabel(PS_v420)
, 0
, 0
, 0
, 0
, useLabel(PS_v419)
, 0
, 0
, 0
, 0
, useLabel(PS_v418)
, 0
, 0
, 0
, 0
, useLabel(PS_v417)
, 0
, 0
, 0
, 0
, useLabel(PS_v416)
, 0
, 0
, 0
, 0
, useLabel(PS_v415)
, 0
, 0
, 0
, 0
, useLabel(PS_v414)
, 0
, 0
, 0
, 0
, useLabel(PS_v413)
, 0
, 0
, 0
, 0
, 30027
, useLabel(ST_v412)
,	/* CT_v423: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462),2)
, useLabel(PS_v411)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46max),2)
,};
Node PP_Prelude_46Ord_46Prelude_462[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462[] = {
 	/* ST_v412: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46_60[] = {
 	/* ST_v402: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,60,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46_60_61[] = {
 	/* ST_v407: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,60,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46_62[] = {
 	/* ST_v392: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,62,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46_62_61[] = {
 	/* ST_v397: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,62,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46compare[] = {
 	/* ST_v373: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,99,111)
, bytes2word(109,112,97,114)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46max[] = {
 	/* ST_v387: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,109,97)
, bytes2word(120,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_462_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_462_46min[] = {
 	/* ST_v382: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,109,105)
, bytes2word(110,0,0,0)
,	/* PS_v376: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v378: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v379: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v372: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46compare)
,	/* PS_v409: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_60_61)
,	/* PS_v408: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v404: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v401: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_60)
,	/* PS_v403: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v396: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_62_61)
,	/* PS_v398: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v394: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v391: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_62)
,	/* PS_v393: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v389: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v386: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46max)
,	/* PS_v388: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v384: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v381: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46min)
,	/* PS_v383: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v419: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46compare)
,	/* PS_v416: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_60_61)
,	/* PS_v415: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_60)
,	/* PS_v417: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_62_61)
,	/* PS_v418: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46_62)
,	/* PS_v421: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46max)
,	/* PS_v420: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462_46min)
,	/* PS_v411: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_462)
,	/* PS_v422: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_468)
,	/* PS_v414: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Eq_46Prelude_462)
,	/* PS_v413: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_462)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,};
