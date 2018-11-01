#include "newmacros.h"
#include "runtime.h"

#define CT_v352	((void*)startLabel+96)
#define CT_v359	((void*)startLabel+228)
#define CT_v360	((void*)startLabel+292)
#define CT_v361	((void*)startLabel+340)
#define CT_v362	((void*)startLabel+388)
#define CT_v363	((void*)startLabel+436)
#define CT_v364	((void*)startLabel+484)
#define CT_v365	((void*)startLabel+584)
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Real_46Prelude_46Ord[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46_60_61[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46compare[];
extern Node FN_Prelude_46Eq_46Ratio_46Ratio[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v352)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_I2,HEAP_P1,5)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v352: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v359)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,UNPACK)
, bytes2word(2,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_I2,HEAP_P1,5)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,8,ZAP_STACK_P1)
, bytes2word(7,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v359: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61),3)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v360)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v360: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46min),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v361)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v361: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46max),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v362)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v362: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v363)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v363: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v364)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v364: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46compare),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, bytes2word(1,0,0,1)
, useLabel(CT_v365)
,};
Node FN_Prelude_46Ord_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_P1,34,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v365: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Ord_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio),1)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Ratio_46Ratio))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio_46max),2)
,};
