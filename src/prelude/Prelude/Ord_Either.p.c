#include "newmacros.h"
#include "runtime.h"

#define v387	((void*)startLabel+26)
#define v389	((void*)startLabel+38)
#define v390	((void*)startLabel+60)
#define v391	((void*)startLabel+71)
#define v393	((void*)startLabel+86)
#define v394	((void*)startLabel+97)
#define CT_v403	((void*)startLabel+240)
#define CT_v408	((void*)startLabel+368)
#define CT_v413	((void*)startLabel+500)
#define CT_v418	((void*)startLabel+632)
#define CT_v423	((void*)startLabel+764)
#define CT_v428	((void*)startLabel+896)
#define CT_v433	((void*)startLabel+1028)
#define CT_v446	((void*)startLabel+1448)
#define ST_v435	((void*)startLabel+1512)
#define ST_v425	((void*)startLabel+1540)
#define ST_v430	((void*)startLabel+1572)
#define ST_v415	((void*)startLabel+1604)
#define ST_v420	((void*)startLabel+1636)
#define ST_v396	((void*)startLabel+1668)
#define ST_v410	((void*)startLabel+1704)
#define ST_v405	((void*)startLabel+1736)
#define PS_v399	((void*)startLabel+1768)
#define PS_v400	((void*)startLabel+1780)
#define PS_v402	((void*)startLabel+1792)
#define PS_v395	((void*)startLabel+1804)
#define PS_v432	((void*)startLabel+1816)
#define PS_v429	((void*)startLabel+1828)
#define PS_v431	((void*)startLabel+1840)
#define PS_v427	((void*)startLabel+1852)
#define PS_v424	((void*)startLabel+1864)
#define PS_v426	((void*)startLabel+1876)
#define PS_v422	((void*)startLabel+1888)
#define PS_v419	((void*)startLabel+1900)
#define PS_v421	((void*)startLabel+1912)
#define PS_v417	((void*)startLabel+1924)
#define PS_v414	((void*)startLabel+1936)
#define PS_v416	((void*)startLabel+1948)
#define PS_v412	((void*)startLabel+1960)
#define PS_v409	((void*)startLabel+1972)
#define PS_v411	((void*)startLabel+1984)
#define PS_v407	((void*)startLabel+1996)
#define PS_v404	((void*)startLabel+2008)
#define PS_v406	((void*)startLabel+2020)
#define PS_v442	((void*)startLabel+2032)
#define PS_v439	((void*)startLabel+2044)
#define PS_v438	((void*)startLabel+2056)
#define PS_v440	((void*)startLabel+2068)
#define PS_v441	((void*)startLabel+2080)
#define PS_v444	((void*)startLabel+2092)
#define PS_v443	((void*)startLabel+2104)
#define PS_v434	((void*)startLabel+2116)
#define PS_v445	((void*)startLabel+2128)
#define PS_v437	((void*)startLabel+2140)
#define PS_v436	((void*)startLabel+2152)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46Either[];
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
extern Node PC_Prelude_46Eq_46Prelude_46Either[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v403)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v387: (byte 2) */
  bytes2word(TOP(49),BOT(49),UNPACK,1)
, bytes2word(PUSH_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v389: (byte 2) */
  bytes2word(TOP(26),BOT(26),UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,EVAL)
,	/* v390: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CVAL_N1,17,HEAP_CREATE)
,	/* v391: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,UNPACK)
, bytes2word(1,PUSH_ARG,4,ZAP_ARG_I1)
, bytes2word(ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v393: (byte 2) */
  bytes2word(TOP(15),BOT(15),UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v394: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_P1)
, bytes2word(0,PUSH_P1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v402)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v400)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v399)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v396)
,	/* CT_v403: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46compare),4)
, useLabel(PS_v395)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v408)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, 30028
, useLabel(ST_v405)
,	/* CT_v408: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46min),4)
, useLabel(PS_v404)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v413)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v412)
, 0
, 0
, 0
, 0
, useLabel(PS_v411)
, 0
, 0
, 0
, 0
, 30028
, useLabel(ST_v410)
,	/* CT_v413: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46max),4)
, useLabel(PS_v409)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v418)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, 30028
, useLabel(ST_v415)
,	/* CT_v418: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62),4)
, useLabel(PS_v414)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v423)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v422)
, 0
, 0
, 0
, 0
, useLabel(PS_v421)
, 0
, 0
, 0
, 0
, 30028
, useLabel(ST_v420)
,	/* CT_v423: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62_61),4)
, useLabel(PS_v419)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v428)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v427)
, 0
, 0
, 0
, 0
, useLabel(PS_v426)
, 0
, 0
, 0
, 0
, 30028
, useLabel(ST_v425)
,	/* CT_v428: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60),4)
, useLabel(PS_v424)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v433)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v432)
, 0
, 0
, 0
, 0
, useLabel(PS_v431)
, 0
, 0
, 0
, 0
, 30028
, useLabel(ST_v430)
,	/* CT_v433: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60_61),4)
, useLabel(PS_v429)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v446)
,};
Node FN_Prelude_46Ord_46Prelude_46Either[] = {
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
, useLabel(PS_v445)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v444)
, 0
, 0
, 0
, 0
, useLabel(PS_v443)
, 0
, 0
, 0
, 0
, useLabel(PS_v442)
, 0
, 0
, 0
, 0
, useLabel(PS_v441)
, 0
, 0
, 0
, 0
, useLabel(PS_v440)
, 0
, 0
, 0
, 0
, useLabel(PS_v439)
, 0
, 0
, 0
, 0
, useLabel(PS_v438)
, 0
, 0
, 0
, 0
, useLabel(PS_v437)
, 0
, 0
, 0
, 0
, useLabel(PS_v436)
, 0
, 0
, 0
, 0
, 30028
, useLabel(ST_v435)
,	/* CT_v446: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either),2)
, useLabel(PS_v434)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46max),2)
,};
Node PP_Prelude_46Ord_46Prelude_46Either[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either[] = {
 	/* ST_v435: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46_60[] = {
 	/* ST_v425: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,60)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
 	/* ST_v430: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,60)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46_62[] = {
 	/* ST_v415: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,62)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
 	/* ST_v420: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,62)
, bytes2word(61,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46compare[] = {
 	/* ST_v396: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,99)
, bytes2word(111,109,112,97)
, bytes2word(114,101,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46max[] = {
 	/* ST_v410: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,109)
, bytes2word(97,120,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Either_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Either_46min[] = {
 	/* ST_v405: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,109)
, bytes2word(105,110,0,0)
,	/* PS_v399: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v400: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v402: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v395: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46compare)
,	/* PS_v432: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v429: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_60_61)
,	/* PS_v431: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v427: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v424: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_60)
,	/* PS_v426: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v422: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v419: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_62_61)
,	/* PS_v421: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v417: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v414: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_62)
,	/* PS_v416: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v412: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v409: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46max)
,	/* PS_v411: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v407: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v404: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46min)
,	/* PS_v406: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v442: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46compare)
,	/* PS_v439: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_60_61)
,	/* PS_v438: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_60)
,	/* PS_v440: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_62_61)
,	/* PS_v441: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46_62)
,	/* PS_v444: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46max)
,	/* PS_v443: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either_46min)
,	/* PS_v434: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Either)
,	/* PS_v445: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_468)
,	/* PS_v437: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Eq_46Prelude_46Either)
,	/* PS_v436: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Either)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,};
