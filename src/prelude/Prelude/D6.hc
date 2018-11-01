#include "newmacros.h"
#include "runtime.h"

#define CT_v957	((void*)startLabel+72)
#define CT_v958	((void*)startLabel+156)
#define v964	((void*)startLabel+234)
#define v965	((void*)startLabel+239)
#define v967	((void*)startLabel+266)
#define v968	((void*)startLabel+271)
#define v970	((void*)startLabel+300)
#define v971	((void*)startLabel+305)
#define v973	((void*)startLabel+334)
#define v974	((void*)startLabel+339)
#define v976	((void*)startLabel+368)
#define v977	((void*)startLabel+373)
#define v978	((void*)startLabel+393)
#define v979	((void*)startLabel+398)
#define v980	((void*)startLabel+403)
#define v981	((void*)startLabel+408)
#define v982	((void*)startLabel+413)
#define CT_v990	((void*)startLabel+432)
#define CT_v997	((void*)startLabel+680)
#define CT_v998	((void*)startLabel+768)
#define CT_v999	((void*)startLabel+836)
#define CT_v1000	((void*)startLabel+904)
#define CT_v1001	((void*)startLabel+972)
#define CT_v1002	((void*)startLabel+1040)
#define CT_v1009	((void*)startLabel+1188)
#define CT_v1010	((void*)startLabel+1260)
#define CT_v1011	((void*)startLabel+1344)
#define CT_v1012	((void*)startLabel+1532)
#define CT_v1013	((void*)startLabel+1644)
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
extern Node FN_Prelude_46Ord_46Prelude_466[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46Eq_46Prelude_466[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  42
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v957)
,};
Node FN_Prelude_46Bounded_46Prelude_466_46maxBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,8,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,6,0)
,	/* CT_v957: (byte 0) */
  HW(1,6)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_466_46maxBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466_46maxBound),6)
, VAPTAG(useLabel(FN_Prelude_46maxBound))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v958)
,};
Node FN_Prelude_46Bounded_46Prelude_466_46minBound[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,8,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,6,0)
,	/* CT_v958: (byte 0) */
  HW(1,6)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_466_46minBound[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466_46minBound),6)
, VAPTAG(useLabel(FN_Prelude_46minBound))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v990)
,};
Node FN_Prelude_46Ord_46Prelude_466_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,6,PUSH_ZAP_ARG,8)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,6)
, bytes2word(PUSH_P1,0,PUSH_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,9,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v964: (byte 2) */
  bytes2word(TOP(185),BOT(185),POP_I1,PUSH_HEAP)
,	/* v965: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_I1,PUSH_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,10,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v967: (byte 2) */
  bytes2word(TOP(148),BOT(148),POP_I1,PUSH_HEAP)
,	/* v968: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,2,PUSH_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,11,ZAP_STACK_P1)
, bytes2word(5,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v970: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(109),BOT(109))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v971: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,3)
, bytes2word(PUSH_P1,10,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,12,ZAP_STACK_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v973: (byte 2) */
  bytes2word(TOP(70),BOT(70),POP_I1,PUSH_HEAP)
,	/* v974: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,4,PUSH_P1,11)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(ZAP_ARG,5,ZAP_STACK_P1,13)
, bytes2word(ZAP_STACK_P1,7,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v976: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(31),BOT(31))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v977: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_P1,5)
, bytes2word(PUSH_P1,12,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,6,ZAP_ARG,6)
, bytes2word(ZAP_STACK_P1,14,ZAP_STACK_P1,8)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
,	/* v978: (byte 1) */
  bytes2word(RETURN_EVAL,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v979: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v980: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
,	/* v981: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v982: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v990: (byte 0) */
  HW(1,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46compare),8)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v997)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,6,PUSH_ZAP_ARG,8)
, bytes2word(EVAL,NEEDHEAP_P1,106,UNPACK)
, bytes2word(6,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(6,HEAP_P1,0,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,6,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(7,HEAP_I1,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,7,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,8,HEAP_I2)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,3,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,8)
, bytes2word(HEAP_I2,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(9,HEAP_P1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,9,HEAP_P1)
, bytes2word(3,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(10,HEAP_P1,4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,10,HEAP_P1)
, bytes2word(4,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,11,HEAP_P1,5)
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
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,102,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v997: (byte 0) */
  HW(7,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_60_61),8)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v998)
,};
Node FN_Prelude_46Ord_46Prelude_466_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v998: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46min),8)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v999)
,};
Node FN_Prelude_46Ord_46Prelude_466_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v999: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46max),8)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v1000)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1000: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_62),8)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v1001)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1001: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_62_61),8)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v1002)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1002: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_60),8)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v1009)
,};
Node FN_Prelude_46Eq_46Prelude_466_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,6,PUSH_ZAP_ARG,8)
, bytes2word(EVAL,NEEDHEAP_P1,51,UNPACK)
, bytes2word(6,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(6,HEAP_P1,0,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,7,HEAP_I1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,8)
, bytes2word(HEAP_I2,HEAP_CVAL_I3,HEAP_ARG,4)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(9,HEAP_P1,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,5,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,10,HEAP_P1)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_P1)
, bytes2word(11,HEAP_P1,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,11,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,20,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,HEAP_OFF_N1,29)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(38,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,47,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1009: (byte 0) */
  HW(3,8)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_466_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466_46_61_61),8)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v1010)
,};
Node FN_Prelude_46Eq_46Prelude_466_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v1010: (byte 0) */
  HW(2,8)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_466_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466_46_47_61),8)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v1011)
,};
Node FN_Prelude_46Eq_46Prelude_466[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1011: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_466[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466),6)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466_46_61_61),2)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v1012)
,};
Node FN_Prelude_46Ord_46Prelude_466[] = {
  bytes2word(NEEDHEAP_P1,86,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,4,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(5,HEAP_CVAL_I3,HEAP_ARG,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,13)
, bytes2word(HEAP_OFF_N1,12,HEAP_OFF_N1,11)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,8,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,11)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_ARG_ARG,5)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,8,HEAP_P1,7)
, bytes2word(HEAP_P1,6,HEAP_P1,5)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v1012: (byte 0) */
  HW(9,6)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_466[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466),6)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_466))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_466_46max),2)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v1013)
,};
Node FN_Prelude_46Bounded_46Prelude_466[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v1013: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_466[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466),6)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466_46maxBound))
,};
