#include "newmacros.h"
#include "runtime.h"

#define CT_v958	((void*)startLabel+84)
#define CT_v960	((void*)startLabel+180)
#define v966	((void*)startLabel+262)
#define v967	((void*)startLabel+266)
#define v969	((void*)startLabel+294)
#define v970	((void*)startLabel+298)
#define v972	((void*)startLabel+326)
#define v973	((void*)startLabel+330)
#define v975	((void*)startLabel+360)
#define v976	((void*)startLabel+364)
#define v978	((void*)startLabel+394)
#define v979	((void*)startLabel+398)
#define v980	((void*)startLabel+418)
#define v981	((void*)startLabel+423)
#define v982	((void*)startLabel+428)
#define v983	((void*)startLabel+433)
#define v984	((void*)startLabel+438)
#define CT_v993	((void*)startLabel+464)
#define CT_v1001	((void*)startLabel+724)
#define CT_v1003	((void*)startLabel+824)
#define CT_v1005	((void*)startLabel+904)
#define CT_v1007	((void*)startLabel+984)
#define CT_v1009	((void*)startLabel+1064)
#define CT_v1011	((void*)startLabel+1144)
#define CT_v1019	((void*)startLabel+1304)
#define CT_v1021	((void*)startLabel+1388)
#define CT_v1023	((void*)startLabel+1484)
#define CT_v1025	((void*)startLabel+1684)
#define CT_v1027	((void*)startLabel+1808)
#define ST_v1026	((void*)startLabel+1828)
#define ST_v957	((void*)startLabel+1854)
#define ST_v959	((void*)startLabel+1889)
#define ST_v1022	((void*)startLabel+1924)
#define ST_v1020	((void*)startLabel+1945)
#define ST_v1016	((void*)startLabel+1969)
#define ST_v1024	((void*)startLabel+1993)
#define ST_v1010	((void*)startLabel+2015)
#define ST_v998	((void*)startLabel+2039)
#define ST_v1006	((void*)startLabel+2064)
#define ST_v1008	((void*)startLabel+2088)
#define ST_v985	((void*)startLabel+2113)
#define ST_v1004	((void*)startLabel+2143)
#define ST_v1002	((void*)startLabel+2169)
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
, useLabel(CT_v958)
,};
Node FN_Prelude_46Bounded_46Prelude_466_46maxBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,6,0)
, 40022
, useLabel(ST_v957)
,	/* CT_v958: (byte 0) */
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
, useLabel(CT_v960)
,};
Node FN_Prelude_46Bounded_46Prelude_466_46minBound[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,5)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,6,0)
, 40022
, useLabel(ST_v959)
,	/* CT_v960: (byte 0) */
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
, useLabel(CT_v993)
,};
Node FN_Prelude_46Ord_46Prelude_466_46compare[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
, bytes2word(UNPACK,6,PUSH_ZAP_ARG,8)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,6)
, bytes2word(PUSH_P1,0,PUSH_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,9,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v966: (byte 2) */
  bytes2word(TOP(182),BOT(182),POP_I1,PUSH_HEAP)
,	/* v967: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_I1)
, bytes2word(PUSH_P1,8,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(10,ZAP_STACK_P1,4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v969: (byte 2) */
  bytes2word(TOP(145),BOT(145),POP_I1,PUSH_HEAP)
,	/* v970: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_P1)
, bytes2word(2,PUSH_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,3,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,11,ZAP_STACK_P1,5)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v972: (byte 2) */
  bytes2word(TOP(108),BOT(108),POP_I1,PUSH_HEAP)
,	/* v973: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_P1)
, bytes2word(3,PUSH_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,4,ZAP_ARG)
, bytes2word(4,ZAP_STACK_P1,12,ZAP_STACK_P1)
, bytes2word(6,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v975: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(69),BOT(69))
,	/* v976: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(POP_I1,PUSH_P1,4,PUSH_P1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(5,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(13,ZAP_STACK_P1,7,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v978: (byte 2) */
  bytes2word(TOP(30),BOT(30),POP_I1,PUSH_HEAP)
,	/* v979: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,POP_I1,PUSH_P1)
, bytes2word(5,PUSH_P1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,6,ZAP_ARG)
, bytes2word(6,ZAP_STACK_P1,14,ZAP_STACK_P1)
, bytes2word(8,EVAL,NEEDHEAP_I32,APPLY)
,	/* v980: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v981: (byte 3) */
  bytes2word(HEAP_CVAL_N1,4,RETURN,POP_I1)
,	/* v982: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
,	/* v983: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v984: (byte 2) */
  bytes2word(4,RETURN,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, 40017
, useLabel(ST_v985)
,	/* CT_v993: (byte 0) */
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
, useLabel(CT_v1001)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_60_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
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
, 40017
, useLabel(ST_v998)
,	/* CT_v1001: (byte 0) */
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
, useLabel(CT_v1003)
,};
Node FN_Prelude_46Ord_46Prelude_466_46min[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v1002)
,	/* CT_v1003: (byte 0) */
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
, useLabel(CT_v1005)
,};
Node FN_Prelude_46Ord_46Prelude_466_46max[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v1004)
,	/* CT_v1005: (byte 0) */
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
, useLabel(CT_v1007)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_62[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v1006)
,	/* CT_v1007: (byte 0) */
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
, useLabel(CT_v1009)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_62_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v1008)
,	/* CT_v1009: (byte 0) */
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
, useLabel(CT_v1011)
,};
Node FN_Prelude_46Ord_46Prelude_466_46_60[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40017
, useLabel(ST_v1010)
,	/* CT_v1011: (byte 0) */
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
, useLabel(CT_v1019)
,};
Node FN_Prelude_46Eq_46Prelude_466_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,7,EVAL)
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
, 40013
, useLabel(ST_v1016)
,	/* CT_v1019: (byte 0) */
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
, useLabel(CT_v1021)
,};
Node FN_Prelude_46Eq_46Prelude_466_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(7,8,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40013
, useLabel(ST_v1020)
,	/* CT_v1021: (byte 0) */
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
, useLabel(CT_v1023)
,};
Node FN_Prelude_46Eq_46Prelude_466[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40013
, useLabel(ST_v1022)
,	/* CT_v1023: (byte 0) */
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
, useLabel(CT_v1025)
,};
Node FN_Prelude_46Ord_46Prelude_466[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,86,HEAP_CVAL_I3,HEAP_ARG)
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
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_P1)
, bytes2word(8,HEAP_P1,7,HEAP_P1)
, bytes2word(6,HEAP_P1,5,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 40017
, useLabel(ST_v1024)
,	/* CT_v1025: (byte 0) */
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
, useLabel(CT_v1027)
,};
Node FN_Prelude_46Bounded_46Prelude_466[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG_ARG,5,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_ARG_ARG,5,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 40022
, useLabel(ST_v1026)
,	/* CT_v1027: (byte 0) */
  HW(2,6)
, 0
,};
Node F0_Prelude_46Bounded_46Prelude_466[] = {
  CAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466),6)
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466_46minBound))
, VAPTAG(useLabel(FN_Prelude_46Bounded_46Prelude_466_46maxBound))
,	/* ST_v1026: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(66,111,117,110)
, bytes2word(100,101,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v957: (byte 2) */
  bytes2word(54,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,66,111)
, bytes2word(117,110,100,101)
, bytes2word(100,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,54,46)
, bytes2word(109,97,120,66)
, bytes2word(111,117,110,100)
,	/* ST_v959: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,66,111,117)
, bytes2word(110,100,101,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,54,46,109)
, bytes2word(105,110,66,111)
,	/* ST_v1022: (byte 4) */
  bytes2word(117,110,100,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,54)
,	/* ST_v1020: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(54,46,47,61)
,	/* ST_v1016: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(54,46,61,61)
,	/* ST_v1024: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
,	/* ST_v1010: (byte 3) */
  bytes2word(46,54,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,54)
,	/* ST_v998: (byte 3) */
  bytes2word(46,60,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,54)
,	/* ST_v1006: (byte 4) */
  bytes2word(46,60,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v1008: (byte 4) */
  bytes2word(54,46,62,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(54,46,62,61)
,	/* ST_v985: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,54,46,99)
, bytes2word(111,109,112,97)
,	/* ST_v1004: (byte 3) */
  bytes2word(114,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,54)
, bytes2word(46,109,97,120)
,	/* ST_v1002: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,79,114,100)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,54,46,109)
, bytes2word(105,110,0,0)
,};
