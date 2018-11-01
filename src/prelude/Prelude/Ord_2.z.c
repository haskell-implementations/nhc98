#include "newmacros.h"
#include "runtime.h"

#define v369	((void*)startLabel+56)
#define v370	((void*)startLabel+60)
#define v371	((void*)startLabel+78)
#define CT_v376	((void*)startLabel+104)
#define CT_v378	((void*)startLabel+168)
#define CT_v380	((void*)startLabel+236)
#define CT_v382	((void*)startLabel+304)
#define CT_v384	((void*)startLabel+372)
#define CT_v386	((void*)startLabel+440)
#define CT_v388	((void*)startLabel+508)
#define CT_v390	((void*)startLabel+640)
#define ST_v389	((void*)startLabel+688)
#define ST_v385	((void*)startLabel+710)
#define ST_v387	((void*)startLabel+734)
#define ST_v381	((void*)startLabel+759)
#define ST_v383	((void*)startLabel+783)
#define ST_v372	((void*)startLabel+808)
#define ST_v379	((void*)startLabel+838)
#define ST_v377	((void*)startLabel+864)
extern Node TM_Prelude[];
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

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v376)
,};
Node FN_Prelude_46Ord_46Prelude_462_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_P1)
, bytes2word(0,PUSH_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v369: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(28),BOT(28))
,	/* v370: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(POP_I1,PUSH_I1,PUSH_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(4,EVAL,NEEDHEAP_I32,APPLY)
,	/* v371: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v372)
,	/* CT_v376: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46compare),4)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v378)
,};
Node FN_Prelude_46Ord_46Prelude_462_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30027
, useLabel(ST_v377)
,	/* CT_v378: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46min),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v380)
,};
Node FN_Prelude_46Ord_46Prelude_462_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30027
, useLabel(ST_v379)
,	/* CT_v380: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46max),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v382)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30027
, useLabel(ST_v381)
,	/* CT_v382: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v384)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30027
, useLabel(ST_v383)
,	/* CT_v384: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v386)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30027
, useLabel(ST_v385)
,	/* CT_v386: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v388)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30027
, useLabel(ST_v387)
,	/* CT_v388: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v390)
,};
Node FN_Prelude_46Ord_46Prelude_462[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,46,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30027
, useLabel(ST_v389)
,	/* CT_v390: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_462))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46max),2)
,	/* ST_v389: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v385: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
,	/* ST_v387: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
,	/* ST_v381: (byte 3) */
  bytes2word(60,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
,	/* ST_v383: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
,	/* ST_v372: (byte 4) */
  bytes2word(46,62,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v379: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
,	/* ST_v377: (byte 4) */
  bytes2word(109,97,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(50,46,109,105)
, bytes2word(110,0,0,0)
,};
