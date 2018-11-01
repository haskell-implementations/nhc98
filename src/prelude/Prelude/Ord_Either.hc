#include "newmacros.h"
#include "runtime.h"

#define v387	((void*)startLabel+26)
#define v389	((void*)startLabel+38)
#define v390	((void*)startLabel+54)
#define v391	((void*)startLabel+60)
#define v393	((void*)startLabel+76)
#define v394	((void*)startLabel+82)
#define CT_v398	((void*)startLabel+116)
#define CT_v399	((void*)startLabel+168)
#define CT_v400	((void*)startLabel+224)
#define CT_v401	((void*)startLabel+280)
#define CT_v402	((void*)startLabel+336)
#define CT_v403	((void*)startLabel+392)
#define CT_v404	((void*)startLabel+448)
#define CT_v405	((void*)startLabel+568)
extern Node FN_Prelude_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Prelude_46Either[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v398)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46compare[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v387: (byte 2) */
  bytes2word(TOP(38),BOT(38),UNPACK,1)
, bytes2word(PUSH_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v389: (byte 2) */
  bytes2word(TOP(20),BOT(20),UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
,	/* v390: (byte 2) */
  bytes2word(2,RETURN_EVAL,UNPACK,1)
,	/* v391: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN)
, bytes2word(UNPACK,1,PUSH_ARG,4)
, bytes2word(ZAP_ARG_I1,ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v393: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(10),BOT(10))
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v394: (byte 2) */
  bytes2word(2,RETURN,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I2,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v398: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46compare),4)
, VAPTAG(useLabel(FN_Prelude_46compare))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v399)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v399: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46min),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v400: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46max),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v401)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v401: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v402)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v402: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v403)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v403: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v404)
,};
Node FN_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v404: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v405)
,};
Node FN_Prelude_46Ord_46Prelude_46Either[] = {
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
,	/* CT_v405: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Either_46max),2)
,};
