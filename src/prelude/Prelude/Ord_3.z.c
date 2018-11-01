#include "newmacros.h"
#include "runtime.h"

#define v424	((void*)startLabel+58)
#define v425	((void*)startLabel+62)
#define v427	((void*)startLabel+90)
#define v428	((void*)startLabel+94)
#define v429	((void*)startLabel+113)
#define v430	((void*)startLabel+118)
#define CT_v436	((void*)startLabel+144)
#define CT_v438	((void*)startLabel+208)
#define CT_v440	((void*)startLabel+276)
#define CT_v442	((void*)startLabel+344)
#define CT_v444	((void*)startLabel+412)
#define CT_v446	((void*)startLabel+480)
#define CT_v448	((void*)startLabel+548)
#define CT_v450	((void*)startLabel+696)
#define ST_v449	((void*)startLabel+744)
#define ST_v445	((void*)startLabel+766)
#define ST_v447	((void*)startLabel+790)
#define ST_v441	((void*)startLabel+815)
#define ST_v443	((void*)startLabel+839)
#define ST_v431	((void*)startLabel+864)
#define ST_v439	((void*)startLabel+894)
#define ST_v437	((void*)startLabel+920)
extern Node TM_Prelude[];
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

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v436)
,};
Node FN_Prelude_46Ord_46Prelude_463_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,3,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(PUSH_P1,0,PUSH_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v424: (byte 2) */
  bytes2word(TOP(66),BOT(66),POP_I1,PUSH_HEAP)
,	/* v425: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,5,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v427: (byte 2) */
  bytes2word(TOP(29),BOT(29),POP_I1,PUSH_HEAP)
,	/* v428: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,8,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v429: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v430: (byte 2) */
  bytes2word(4,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v431)
,	/* CT_v436: (byte 0) */
  HW(1,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46compare),5)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v438)
,};
Node FN_Prelude_46Ord_46Prelude_463_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30033
, useLabel(ST_v437)
,	/* CT_v438: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46min),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v440)
,};
Node FN_Prelude_46Ord_46Prelude_463_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30033
, useLabel(ST_v439)
,	/* CT_v440: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46max),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v442)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30033
, useLabel(ST_v441)
,	/* CT_v442: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v444)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30033
, useLabel(ST_v443)
,	/* CT_v444: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62_61),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v446)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30033
, useLabel(ST_v445)
,	/* CT_v446: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v448)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30033
, useLabel(ST_v447)
,	/* CT_v448: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60_61),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v450)
,};
Node FN_Prelude_46Ord_46Prelude_463[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,56,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30033
, useLabel(ST_v449)
,	/* CT_v450: (byte 0) */
  HW(9,3)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_463))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46max),2)
,	/* ST_v449: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v445: (byte 2) */
  bytes2word(51,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,51,46)
,	/* ST_v447: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,51,46)
,	/* ST_v441: (byte 3) */
  bytes2word(60,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,51)
,	/* ST_v443: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,51)
,	/* ST_v431: (byte 4) */
  bytes2word(46,62,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v439: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,51,46)
,	/* ST_v437: (byte 4) */
  bytes2word(109,97,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(51,46,109,105)
, bytes2word(110,0,0,0)
,};
