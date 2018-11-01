#include "newmacros.h"
#include "runtime.h"

#define CT_v744	((void*)startLabel+72)
#define CT_v746	((void*)startLabel+156)
#define v752	((void*)startLabel+234)
#define v753	((void*)startLabel+238)
#define v755	((void*)startLabel+266)
#define v756	((void*)startLabel+270)
#define v758	((void*)startLabel+298)
#define v759	((void*)startLabel+302)
#define v760	((void*)startLabel+322)
#define v761	((void*)startLabel+327)
#define v762	((void*)startLabel+332)
#define CT_v769	((void*)startLabel+360)
#define CT_v777	((void*)startLabel+544)
#define CT_v779	((void*)startLabel+636)
#define CT_v781	((void*)startLabel+708)
#define CT_v783	((void*)startLabel+780)
#define CT_v785	((void*)startLabel+852)
#define CT_v787	((void*)startLabel+924)
#define CT_v795	((void*)startLabel+1052)
#define CT_v797	((void*)startLabel+1128)
#define CT_v799	((void*)startLabel+1212)
#define CT_v801	((void*)startLabel+1376)
#define CT_v803	((void*)startLabel+1488)
#define ST_v802	((void*)startLabel+1508)
#define ST_v743	((void*)startLabel+1534)
#define ST_v745	((void*)startLabel+1569)
#define ST_v798	((void*)startLabel+1604)
#define ST_v796	((void*)startLabel+1625)
#define ST_v792	((void*)startLabel+1649)
#define ST_v800	((void*)startLabel+1673)
#define ST_v786	((void*)startLabel+1695)
#define ST_v774	((void*)startLabel+1719)
#define ST_v782	((void*)startLabel+1744)
#define ST_v784	((void*)startLabel+1768)
#define ST_v763	((void*)startLabel+1793)
#define ST_v780	((void*)startLabel+1823)
#define ST_v778	((void*)startLabel+1849)
extern Node TM_Prelude[];
extern Node FN_Prelude_46maxBound[];
extern Node FN_Prelude_46minBound[];
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46_60[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Prelude_46_124_124[];
extern Node FN_Prelude_46Ord_46Prelude_464[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_464[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  42
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v744)
,};
Node FN_Prelude_46Bounded_46Prelude_464_46maxBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,6,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 40022
, useLabel(ST_v743)
,	/* CT_v744: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_464_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46maxBound),4)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v746)
,};
Node FN_Prelude_46Bounded_46Prelude_464_46minBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,6,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 40022
, useLabel(ST_v745)
,	/* CT_v746: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_464_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46minBound),4)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v769)
,};
Node FN_Prelude_46Ord_46Prelude_464_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,4,PUSH_ZAP_ARG,6)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,4)
, bytes2word(PUSH_P1,0,PUSH_P1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,7,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v752: (byte 2) */
  bytes2word(TOP(104),BOT(104),POP_I1,PUSH_HEAP)
,	/* v753: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,6,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(8,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v755: (byte 2) */
  bytes2word(TOP(67),BOT(67),POP_I1,PUSH_HEAP)
,	/* v756: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,9,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v758: (byte 2) */
  bytes2word(TOP(30),BOT(30),POP_I1,PUSH_HEAP)
,	/* v759: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_P1)
, bytes2word(3,PUSH_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,4,ZAP_ARG)
, bytes2word(4,ZAP_STACK_P1,10,ZAP_STACK_P1)
, bytes2word(6,EVAL,NEEDHEAP_I32,APPLY)
,	/* v760: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v761: (byte 3) */
  bytes2word(HEAP_CVAL_N1,4,RETURN,POP_I1)
,	/* v762: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, 40017
, useLabel(ST_v763)
,	/* CT_v769: (byte 0) */
  HW(1,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46compare),6)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v777)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,4,PUSH_ZAP_ARG,6)
, bytes2word(EVAL,NEEDHEAP_P1,66,UNPACK)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(4,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,4,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(5,HEAP_I1,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,5,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,6,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,6)
, bytes2word(HEAP_I2,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,7,HEAP_P1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,42,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,51)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,62,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v774)
,	/* CT_v777: (byte 0) */
  HW(7,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_60_61),6)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v779)
,};
Node FN_Prelude_46Ord_46Prelude_464_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v778)
,	/* CT_v779: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46min),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v781)
,};
Node FN_Prelude_46Ord_46Prelude_464_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v780)
,	/* CT_v781: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46max),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v783)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v782)
,	/* CT_v783: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_62),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v785)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v784)
,	/* CT_v785: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_62_61),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v787)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v786)
,	/* CT_v787: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_60),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v795)
,};
Node FN_Prelude_46Eq_46Prelude_464_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,4,PUSH_ZAP_ARG,6)
, bytes2word(EVAL,NEEDHEAP_P1,33,UNPACK)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(4,HEAP_P1,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,5,HEAP_I1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,6)
, bytes2word(HEAP_I2,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(7,HEAP_P1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,20,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(29,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40013
, useLabel(ST_v792)
,	/* CT_v795: (byte 0) */
  HW(3,6)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_464_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464_46_61_61),6)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v797)
,};
Node FN_Prelude_46Eq_46Prelude_464_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
, 40013
, useLabel(ST_v796)
,	/* CT_v797: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_464_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464_46_47_61),6)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v799)
,};
Node FN_Prelude_46Eq_46Prelude_464[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40013
, useLabel(ST_v798)
,	/* CT_v799: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464),4)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464_46_61_61),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v801)
,};
Node FN_Prelude_46Ord_46Prelude_464[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,66,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 40017
, useLabel(ST_v800)
,	/* CT_v801: (byte 0) */
  HW(9,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_464))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_464_46max),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v803)
,};
Node FN_Prelude_46Bounded_46Prelude_464[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40022
, useLabel(ST_v802)
,	/* CT_v803: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464),4)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46maxBound))
,	/* ST_v802: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v743: (byte 2) */
  bytes2word(52,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(117,110,100,101)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,52,46)
, bytes2word(109,97,120,66)
, bytes2word(111,117,110,100)
,	/* ST_v745: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,117)
, bytes2word(110,100,101,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,109)
, bytes2word(105,110,66,111)
,	/* ST_v798: (byte 4) */
  bytes2word(117,110,100,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,52)
,	/* ST_v796: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(52,46,47,61)
,	/* ST_v792: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(52,46,61,61)
,	/* ST_v800: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v786: (byte 3) */
  bytes2word(46,52,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,52)
,	/* ST_v774: (byte 3) */
  bytes2word(46,60,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,52)
,	/* ST_v782: (byte 4) */
  bytes2word(46,60,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v784: (byte 4) */
  bytes2word(52,46,62,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(52,46,62,61)
,	/* ST_v763: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,99)
, bytes2word(111,109,112,97)
,	/* ST_v780: (byte 3) */
  bytes2word(114,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,52)
, bytes2word(46,109,97,120)
,	/* ST_v778: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,52,46,109)
, bytes2word(105,110,0,0)
,};
