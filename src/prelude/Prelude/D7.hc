#include "newmacros.h"
#include "runtime.h"

#define CT_v1064	((void*)startLabel+80)
#define CT_v1065	((void*)startLabel+172)
#define v1071	((void*)startLabel+250)
#define v1072	((void*)startLabel+255)
#define v1074	((void*)startLabel+282)
#define v1075	((void*)startLabel+287)
#define v1077	((void*)startLabel+316)
#define v1078	((void*)startLabel+321)
#define v1080	((void*)startLabel+350)
#define v1081	((void*)startLabel+355)
#define v1083	((void*)startLabel+384)
#define v1084	((void*)startLabel+389)
#define v1086	((void*)startLabel+418)
#define v1087	((void*)startLabel+423)
#define v1088	((void*)startLabel+443)
#define v1089	((void*)startLabel+448)
#define v1090	((void*)startLabel+453)
#define v1091	((void*)startLabel+458)
#define v1092	((void*)startLabel+463)
#define v1093	((void*)startLabel+468)
#define CT_v1102	((void*)startLabel+488)
#define CT_v1109	((void*)startLabel+772)
#define CT_v1110	((void*)startLabel+864)
#define CT_v1111	((void*)startLabel+936)
#define CT_v1112	((void*)startLabel+1008)
#define CT_v1113	((void*)startLabel+1080)
#define CT_v1114	((void*)startLabel+1152)
#define CT_v1121	((void*)startLabel+1316)
#define CT_v1122	((void*)startLabel+1392)
#define CT_v1123	((void*)startLabel+1480)
#define CT_v1124	((void*)startLabel+1688)
#define CT_v1125	((void*)startLabel+1804)
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
extern Node FN_Prelude_46Ord_46Prelude_467[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_467[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  42
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1064)
,};
Node FN_Prelude_46Bounded_46Prelude_467_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
,	/* CT_v1064: (byte 0) */
  HW(1,7)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_467_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_467_46maxBound),7)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1065)
,};
Node FN_Prelude_46Bounded_46Prelude_467_46minBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,9,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,7,0)
,	/* CT_v1065: (byte 0) */
  HW(1,7)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_467_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_467_46minBound),7)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1102)
,};
Node FN_Prelude_46Ord_46Prelude_467_46compare[] = {
  bytes2word(NEEDSTACK_P1,17,PUSH_ZAP_ARG,8)
, bytes2word(EVAL,UNPACK,7,PUSH_ZAP_ARG)
, bytes2word(9,EVAL,NEEDHEAP_I32,UNPACK)
, bytes2word(7,PUSH_P1,0,PUSH_P1)
, bytes2word(8,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_STACK_P1,10)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1071: (byte 2) */
  bytes2word(TOP(224),BOT(224),POP_I1,PUSH_HEAP)
,	/* v1072: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_I1,PUSH_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,11,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1074: (byte 2) */
  bytes2word(TOP(187),BOT(187),POP_I1,PUSH_HEAP)
,	/* v1075: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,2,PUSH_P1,10)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,12,ZAP_STACK_P1)
, bytes2word(5,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v1077: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(148),BOT(148))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1078: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,3)
, bytes2word(PUSH_P1,11,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,13,ZAP_STACK_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1080: (byte 2) */
  bytes2word(TOP(109),BOT(109),POP_I1,PUSH_HEAP)
,	/* v1081: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,4,PUSH_P1,12)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(ZAP_ARG,5,ZAP_STACK_P1,14)
, bytes2word(ZAP_STACK_P1,7,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v1083: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(70),BOT(70))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v1084: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,5)
, bytes2word(PUSH_P1,13,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,6,ZAP_ARG,6)
, bytes2word(ZAP_STACK_P1,15,ZAP_STACK_P1,8)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v1086: (byte 2) */
  bytes2word(TOP(31),BOT(31),POP_I1,PUSH_HEAP)
,	/* v1087: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,6,PUSH_P1,14)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,7)
, bytes2word(ZAP_ARG,7,ZAP_STACK_P1,16)
, bytes2word(ZAP_STACK_P1,9,EVAL,NEEDHEAP_I32)
,	/* v1088: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,POP_I1)
,	/* v1089: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v1090: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v1091: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v1092: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
,	/* v1093: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v1102: (byte 0) */
  HW(1,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46compare),9)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1109)
,};
Node FN_Prelude_46Ord_46Prelude_467_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,7,PUSH_ZAP_ARG,9)
, bytes2word(EVAL,NEEDHEAP_P1,126,UNPACK)
, bytes2word(7,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(7,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,7,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(8,HEAP_I1,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,8,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,9,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,9)
, bytes2word(HEAP_I2,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(10,HEAP_P1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,10,HEAP_P1)
, bytes2word(3,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(11,HEAP_P1,4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,11,HEAP_P1)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(12,HEAP_P1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,6,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,12,HEAP_P1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(7,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,13,HEAP_P1,6)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,22,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,42,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,51)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,62,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,71)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,82,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,91)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,102,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,111)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,122,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1109: (byte 0) */
  HW(7,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_60_61),9)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1110)
,};
Node FN_Prelude_46Ord_46Prelude_467_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,8,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1110: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46min),9)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1111)
,};
Node FN_Prelude_46Ord_46Prelude_467_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,8,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1111: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46max),9)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1112)
,};
Node FN_Prelude_46Ord_46Prelude_467_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,8,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1112: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_62),9)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1113)
,};
Node FN_Prelude_46Ord_46Prelude_467_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,8,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1113: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_62_61),9)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1114)
,};
Node FN_Prelude_46Ord_46Prelude_467_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,8,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1114: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_60),9)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1121)
,};
Node FN_Prelude_46Eq_46Prelude_467_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,8,EVAL)
, bytes2word(UNPACK,7,PUSH_ZAP_ARG,9)
, bytes2word(EVAL,NEEDHEAP_P1,60,UNPACK)
, bytes2word(7,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(7,HEAP_P1,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,8,HEAP_I1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,9)
, bytes2word(HEAP_I2,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(10,HEAP_P1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,11,HEAP_P1)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(12,HEAP_P1,5,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,7,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,13,HEAP_P1)
, bytes2word(6,HEAP_CVAL_I5,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(20,HEAP_OFF_N1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,29,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,38,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,47)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,56,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1121: (byte 0) */
  HW(3,9)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_467_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467_46_61_61),9)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(9,0,8,1)
, bytes2word(7,2,6,3)
, bytes2word(5,4,4,5)
, bytes2word(3,6,2,7)
, bytes2word(1,8,0,9)
, useLabel(CT_v1122)
,};
Node FN_Prelude_46Eq_46Prelude_467_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,HEAP_ARG)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(9,HEAP_ARG_ARG_RET_EVAL,8,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v1122: (byte 0) */
  HW(2,9)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_467_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467_46_47_61),9)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1123)
,};
Node FN_Prelude_46Eq_46Prelude_467[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1123: (byte 0) */
  HW(2,7)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_467[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467),7)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467_46_61_61),2)
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1124)
,};
Node FN_Prelude_46Ord_46Prelude_467[] = {
  bytes2word(NEEDHEAP_P1,96,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,15,HEAP_OFF_N1)
, bytes2word(14,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_ARG_ARG)
, bytes2word(5,6,HEAP_ARG,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(8,HEAP_P1,7,HEAP_P1)
, bytes2word(6,HEAP_P1,5,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v1124: (byte 0) */
  HW(9,7)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_467[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467),7)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_467))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_467_46max),2)
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v1125)
,};
Node FN_Prelude_46Bounded_46Prelude_467[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(HEAP_ARG,7,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,HEAP_ARG,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1125: (byte 0) */
  HW(2,7)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_467[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_467),7)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_467_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_467_46maxBound))
,};
