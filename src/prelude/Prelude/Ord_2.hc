#include "newmacros.h"
#include "runtime.h"

#define v369	((void*)startLabel+52)
#define v370	((void*)startLabel+57)
#define v371	((void*)startLabel+75)
#define CT_v375	((void*)startLabel+96)
#define CT_v376	((void*)startLabel+148)
#define CT_v377	((void*)startLabel+204)
#define CT_v378	((void*)startLabel+260)
#define CT_v379	((void*)startLabel+316)
#define CT_v380	((void*)startLabel+372)
#define CT_v381	((void*)startLabel+428)
#define CT_v382	((void*)startLabel+548)
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
, useLabel(CT_v375)
,};
Node FN_Prelude_46Ord_46Prelude_462_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,PUSH_P1)
, bytes2word(0,PUSH_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,5,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v369: (byte 4) */
  bytes2word(TOP(11),BOT(11),TOP(29),BOT(29))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v370: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_I1,PUSH_P1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,ZAP_STACK_P1,6)
, bytes2word(ZAP_STACK_P1,4,EVAL,NEEDHEAP_I32)
,	/* v371: (byte 3) */
  bytes2word(APPLY,2,RETURN_EVAL,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v375: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46compare),4)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v376)
,};
Node FN_Prelude_46Ord_46Prelude_462_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v376: (byte 0) */
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
, useLabel(CT_v377)
,};
Node FN_Prelude_46Ord_46Prelude_462_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v377: (byte 0) */
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
, useLabel(CT_v378)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v378: (byte 0) */
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
, useLabel(CT_v379)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v379: (byte 0) */
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
, useLabel(CT_v380)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v380: (byte 0) */
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
, useLabel(CT_v381)
,};
Node FN_Prelude_46Ord_46Prelude_462_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v381: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_462_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462_46_60_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v382)
,};
Node FN_Prelude_46Ord_46Prelude_462[] = {
  bytes2word(NEEDHEAP_P1,46,HEAP_CVAL_I3,HEAP_ARG)
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
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v382: (byte 0) */
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
,};
