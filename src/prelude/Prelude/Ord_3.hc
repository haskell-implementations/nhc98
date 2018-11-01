#include "newmacros.h"
#include "runtime.h"

#define v424	((void*)startLabel+54)
#define v425	((void*)startLabel+59)
#define v427	((void*)startLabel+86)
#define v428	((void*)startLabel+91)
#define v429	((void*)startLabel+110)
#define v430	((void*)startLabel+115)
#define CT_v435	((void*)startLabel+136)
#define CT_v436	((void*)startLabel+188)
#define CT_v437	((void*)startLabel+244)
#define CT_v438	((void*)startLabel+300)
#define CT_v439	((void*)startLabel+356)
#define CT_v440	((void*)startLabel+412)
#define CT_v441	((void*)startLabel+468)
#define CT_v442	((void*)startLabel+608)
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
, useLabel(CT_v435)
,};
Node FN_Prelude_46Ord_46Prelude_463_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(UNPACK,3,PUSH_ZAP_ARG,5)
, bytes2word(EVAL,NEEDHEAP_I32,UNPACK,3)
, bytes2word(PUSH_P1,0,PUSH_P1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v424: (byte 2) */
  bytes2word(TOP(67),BOT(67),POP_I1,PUSH_HEAP)
,	/* v425: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_I1,PUSH_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,7,ZAP_STACK_P1,4)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,3)
, bytes2word(TOP(6),BOT(6),TOP(11),BOT(11))
,	/* v427: (byte 2) */
  bytes2word(TOP(30),BOT(30),POP_I1,PUSH_HEAP)
,	/* v428: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_I1)
, bytes2word(PUSH_P1,2,PUSH_P1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(5,EVAL,NEEDHEAP_I32,APPLY)
,	/* v429: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v430: (byte 3) */
  bytes2word(HEAP_CVAL_N1,2,RETURN,POP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v435: (byte 0) */
  HW(1,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46compare),5)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v436)
,};
Node FN_Prelude_46Ord_46Prelude_463_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v436: (byte 0) */
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
, useLabel(CT_v437)
,};
Node FN_Prelude_46Ord_46Prelude_463_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v437: (byte 0) */
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
, useLabel(CT_v438)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v438: (byte 0) */
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
, useLabel(CT_v439)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v439: (byte 0) */
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
, useLabel(CT_v440)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v440: (byte 0) */
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
, useLabel(CT_v441)
,};
Node FN_Prelude_46Ord_46Prelude_463_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(4,5,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v441: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_463_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463_46_60_61),5)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_463))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v442)
,};
Node FN_Prelude_46Ord_46Prelude_463[] = {
  bytes2word(NEEDHEAP_P1,56,HEAP_CVAL_I3,HEAP_ARG)
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
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,8,HEAP_P1)
, bytes2word(7,HEAP_P1,6,HEAP_P1)
, bytes2word(5,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v442: (byte 0) */
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
,};
