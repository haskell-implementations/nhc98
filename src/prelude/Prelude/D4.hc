#include "newmacros.h"
#include "runtime.h"

#define CT_v743	((void*)startLabel+60)
#define CT_v744	((void*)startLabel+132)
#define v750	((void*)startLabel+206)
#define v751	((void*)startLabel+211)
#define v753	((void*)startLabel+238)
#define v754	((void*)startLabel+243)
#define v756	((void*)startLabel+272)
#define v757	((void*)startLabel+277)
#define v758	((void*)startLabel+297)
#define v759	((void*)startLabel+302)
#define v760	((void*)startLabel+307)
#define CT_v766	((void*)startLabel+328)
#define CT_v773	((void*)startLabel+500)
#define CT_v774	((void*)startLabel+580)
#define CT_v775	((void*)startLabel+640)
#define CT_v776	((void*)startLabel+700)
#define CT_v777	((void*)startLabel+760)
#define CT_v778	((void*)startLabel+820)
#define CT_v785	((void*)startLabel+936)
#define CT_v786	((void*)startLabel+1000)
#define CT_v787	((void*)startLabel+1072)
#define CT_v788	((void*)startLabel+1228)
#define CT_v789	((void*)startLabel+1328)
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
, useLabel(CT_v743)
,};
Node FN_Prelude_46Bounded_46Prelude_464_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v743: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_464_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46maxBound),4)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v744)
,};
Node FN_Prelude_46Bounded_46Prelude_464_46minBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v744: (byte 0) */
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
, useLabel(CT_v766)
,};
Node FN_Prelude_46Ord_46Prelude_464_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(UNPACK,4,PUSH_ZAP_ARG,6)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,4)
, bytes2word(PUSH_P1,0,PUSH_P1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,7,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v750: (byte 2) */
  bytes2word(TOP(107),BOT(107),POP_I1,PUSH_HEAP)
,	/* v751: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_I1,PUSH_P1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,8,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v753: (byte 2) */
  bytes2word(TOP(70),BOT(70),POP_I1,PUSH_HEAP)
,	/* v754: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,2,PUSH_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,9,ZAP_STACK_P1)
, bytes2word(5,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v756: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(31),BOT(31))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v757: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,3)
, bytes2word(PUSH_P1,8,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,10,ZAP_STACK_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v758: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v759: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v760: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v766: (byte 0) */
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
, useLabel(CT_v773)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
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
,	/* CT_v773: (byte 0) */
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
, useLabel(CT_v774)
,};
Node FN_Prelude_46Ord_46Prelude_464_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v774: (byte 0) */
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
, useLabel(CT_v775)
,};
Node FN_Prelude_46Ord_46Prelude_464_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v775: (byte 0) */
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
, useLabel(CT_v776)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v776: (byte 0) */
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
, useLabel(CT_v777)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v777: (byte 0) */
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
, useLabel(CT_v778)
,};
Node FN_Prelude_46Ord_46Prelude_464_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v778: (byte 0) */
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
, useLabel(CT_v785)
,};
Node FN_Prelude_46Eq_46Prelude_464_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
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
,	/* CT_v785: (byte 0) */
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
, useLabel(CT_v786)
,};
Node FN_Prelude_46Eq_46Prelude_464_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,5,6,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v786: (byte 0) */
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
, useLabel(CT_v787)
,};
Node FN_Prelude_46Eq_46Prelude_464[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v787: (byte 0) */
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
, useLabel(CT_v788)
,};
Node FN_Prelude_46Ord_46Prelude_464[] = {
  bytes2word(NEEDHEAP_P1,66,HEAP_CVAL_I3,HEAP_ARG)
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
, bytes2word(3,4,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v788: (byte 0) */
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
, useLabel(CT_v789)
,};
Node FN_Prelude_46Bounded_46Prelude_464[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v789: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_464[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464),4)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_464_46maxBound))
,};
