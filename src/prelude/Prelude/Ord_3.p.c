#include "newmacros.h"
#include "runtime.h"

#define v424	((void*)startLabel+60)
#define v425	((void*)startLabel+70)
#define v427	((void*)startLabel+104)
#define v428	((void*)startLabel+114)
#define v429	((void*)startLabel+139)
#define v430	((void*)startLabel+149)
#define CT_v440	((void*)startLabel+276)
#define CT_v445	((void*)startLabel+404)
#define CT_v450	((void*)startLabel+536)
#define CT_v455	((void*)startLabel+668)
#define CT_v460	((void*)startLabel+800)
#define CT_v465	((void*)startLabel+932)
#define CT_v470	((void*)startLabel+1064)
#define CT_v483	((void*)startLabel+1508)
#define ST_v472	((void*)startLabel+1572)
#define ST_v462	((void*)startLabel+1596)
#define ST_v467	((void*)startLabel+1620)
#define ST_v452	((void*)startLabel+1648)
#define ST_v457	((void*)startLabel+1672)
#define ST_v432	((void*)startLabel+1700)
#define ST_v447	((void*)startLabel+1732)
#define ST_v442	((void*)startLabel+1760)
#define PS_v435	((void*)startLabel+1788)
#define PS_v437	((void*)startLabel+1800)
#define PS_v439	((void*)startLabel+1812)
#define PS_v431	((void*)startLabel+1824)
#define PS_v469	((void*)startLabel+1836)
#define PS_v466	((void*)startLabel+1848)
#define PS_v468	((void*)startLabel+1860)
#define PS_v464	((void*)startLabel+1872)
#define PS_v461	((void*)startLabel+1884)
#define PS_v463	((void*)startLabel+1896)
#define PS_v459	((void*)startLabel+1908)
#define PS_v456	((void*)startLabel+1920)
#define PS_v458	((void*)startLabel+1932)
#define PS_v454	((void*)startLabel+1944)
#define PS_v451	((void*)startLabel+1956)
#define PS_v453	((void*)startLabel+1968)
#define PS_v449	((void*)startLabel+1980)
#define PS_v446	((void*)startLabel+1992)
#define PS_v448	((void*)startLabel+2004)
#define PS_v444	((void*)startLabel+2016)
#define PS_v441	((void*)startLabel+2028)
#define PS_v443	((void*)startLabel+2040)
#define PS_v479	((void*)startLabel+2052)
#define PS_v476	((void*)startLabel+2064)
#define PS_v475	((void*)startLabel+2076)
#define PS_v477	((void*)startLabel+2088)
#define PS_v478	((void*)startLabel+2100)
#define PS_v481	((void*)startLabel+2112)
#define PS_v480	((void*)startLabel+2124)
#define PS_v471	((void*)startLabel+2136)
#define PS_v482	((void*)startLabel+2148)
#define PS_v474	((void*)startLabel+2160)
#define PS_v473	((void*)startLabel+2172)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_463[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_463[];
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
extern Node PC_Prelude_46Eq_46Prelude_463[];
extern Node PC_Prelude_46Ord_46Prelude_46Eq[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v440)
,};
Node FN_Prelude_46Ord_46Prelude_463_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,3,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(PUSH_P1,0,PUSH_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(6,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v424: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(95),BOT(95))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v425: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,7,ZAP_STACK_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v427: (byte 4) */
  bytes2word(TOP(16),BOT(16),TOP(41),BOT(41))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v428: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,ZAP_ARG_I3,ZAP_STACK_P1,8)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
,	/* v429: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v430: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CVAL_N1,27,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v439)
, 0
, 0
, 0
, 0
, CONSTR(2,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v437)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v435)
, 0
, 0
, 0
, 0
, 40003
, useLabel(ST_v432)
,	/* CT_v440: (byte 0) */
  HW(1,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46compare),5)
, useLabel(PS_v431)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v445)
,};
Node FN_Prelude_46Ord_46Prelude_463_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, 30033
, useLabel(ST_v442)
,	/* CT_v445: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46min),5)
, useLabel(PS_v441)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v450)
,};
Node FN_Prelude_46Ord_46Prelude_463_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v449)
, 0
, 0
, 0
, 0
, useLabel(PS_v448)
, 0
, 0
, 0
, 0
, 30033
, useLabel(ST_v447)
,	/* CT_v450: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46max),5)
, useLabel(PS_v446)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v455)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v454)
, 0
, 0
, 0
, 0
, useLabel(PS_v453)
, 0
, 0
, 0
, 0
, 30033
, useLabel(ST_v452)
,	/* CT_v455: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62),5)
, useLabel(PS_v451)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v460)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v459)
, 0
, 0
, 0
, 0
, useLabel(PS_v458)
, 0
, 0
, 0
, 0
, 30033
, useLabel(ST_v457)
,	/* CT_v460: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62_61),5)
, useLabel(PS_v456)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v465)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v464)
, 0
, 0
, 0
, 0
, useLabel(PS_v463)
, 0
, 0
, 0
, 0
, 30033
, useLabel(ST_v462)
,	/* CT_v465: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60),5)
, useLabel(PS_v461)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v470)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,13,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v469)
, 0
, 0
, 0
, 0
, useLabel(PS_v468)
, 0
, 0
, 0
, 0
, 30033
, useLabel(ST_v467)
,	/* CT_v470: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60_61),5)
, useLabel(PS_v466)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v483)
,};
Node FN_Prelude_46Ord_46Prelude_463[] = {
  bytes2word(NEEDHEAP_P1,104,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,23,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,13,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_N1,32,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_N1,37)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_N1)
, bytes2word(42,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,15)
, bytes2word(HEAP_CVAL_N1,47,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(52,HEAP_CVAL_N1,57,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v482)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v481)
, 0
, 0
, 0
, 0
, useLabel(PS_v480)
, 0
, 0
, 0
, 0
, useLabel(PS_v479)
, 0
, 0
, 0
, 0
, useLabel(PS_v478)
, 0
, 0
, 0
, 0
, useLabel(PS_v477)
, 0
, 0
, 0
, 0
, useLabel(PS_v476)
, 0
, 0
, 0
, 0
, useLabel(PS_v475)
, 0
, 0
, 0
, 0
, useLabel(PS_v474)
, 0
, 0
, 0
, 0
, useLabel(PS_v473)
, 0
, 0
, 0
, 0
, 30033
, useLabel(ST_v472)
,	/* CT_v483: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463),3)
, useLabel(PS_v471)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46max),2)
,};
Node PP_Prelude_46Ord_46Prelude_463[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463[] = {
 	/* ST_v472: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46_60[] = {
 	/* ST_v462: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,60,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46_60_61[] = {
 	/* ST_v467: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,60,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46_62[] = {
 	/* ST_v452: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,62,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46_62_61[] = {
 	/* ST_v457: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,62,61)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46compare[] = {
 	/* ST_v432: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,99,111)
, bytes2word(109,112,97,114)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46max[] = {
 	/* ST_v447: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,109,97)
, bytes2word(120,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_463_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_463_46min[] = {
 	/* ST_v442: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,109,105)
, bytes2word(110,0,0,0)
,	/* PS_v435: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46compare)
, useLabel(PC_Prelude_46compare)
,	/* PS_v437: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46compare)
, useLabel(PC_Prelude_46LT)
,	/* PS_v439: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46compare)
, useLabel(PC_Prelude_46GT)
,	/* PS_v431: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46compare)
,	/* PS_v469: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_60_61)
, useLabel(PC_Prelude_46_95_46_60_61)
,	/* PS_v466: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_60_61)
,	/* PS_v468: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v464: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v461: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_60)
,	/* PS_v463: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v459: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v456: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_62_61)
,	/* PS_v458: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v454: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v451: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_62)
,	/* PS_v453: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v449: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v446: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46max)
,	/* PS_v448: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v444: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v441: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46min)
,	/* PS_v443: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v479: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46compare)
,	/* PS_v476: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_60_61)
,	/* PS_v475: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_60)
,	/* PS_v477: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_62_61)
,	/* PS_v478: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46_62)
,	/* PS_v481: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46max)
,	/* PS_v480: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463_46min)
,	/* PS_v471: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_463)
,	/* PS_v482: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_468)
,	/* PS_v474: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Eq_46Prelude_463)
,	/* PS_v473: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_463)
, useLabel(PC_Prelude_46Ord_46Prelude_46Eq)
,};
