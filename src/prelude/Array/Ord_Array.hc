#include "newmacros.h"
#include "runtime.h"

#define CT_v394	((void*)startLabel+48)
#define CT_v395	((void*)startLabel+112)
#define CT_v396	((void*)startLabel+168)
#define CT_v397	((void*)startLabel+224)
#define CT_v398	((void*)startLabel+280)
#define CT_v399	((void*)startLabel+336)
#define CT_v400	((void*)startLabel+392)
#define CT_v401	((void*)startLabel+508)
extern Node FN_Ix_46Ix_46Prelude_46Ord[];
extern Node FN_Prelude_46Ord_46Prelude_462[];
extern Node FN_Array_46assocs[];
extern Node FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61[];
extern Node FN_Prelude_46Ord_46Array_46Array[];
extern Node FN_Prelude_46_95_46min[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46compare[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_Prelude_46Eq_46Array_46Array[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v394)
,};
Node FN_Prelude_46Ord_46Array_46Array_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG_ARG,1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,10,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v394: (byte 0) */
  HW(4,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_60_61),4)
, VAPTAG(useLabel(FN_Ix_46Ix_46Prelude_46Ord))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_462))
, VAPTAG(useLabel(FN_Array_46assocs))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46_91_93_46_60_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v395)
,};
Node FN_Prelude_46Ord_46Array_46Array_46min[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v395: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46min),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array))
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v396)
,};
Node FN_Prelude_46Ord_46Array_46Array_46max[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v396: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46max),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array))
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v397)
,};
Node FN_Prelude_46Ord_46Array_46Array_46_62[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v397: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_62),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v398)
,};
Node FN_Prelude_46Ord_46Array_46Array_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v398: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_62_61),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array))
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v399)
,};
Node FN_Prelude_46Ord_46Array_46Array_46_60[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v399: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_60),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array))
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v400)
,};
Node FN_Prelude_46Ord_46Array_46Array_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v400: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46compare),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array))
, VAPTAG(useLabel(FN_Prelude_46_95_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v401)
,};
Node FN_Prelude_46Ord_46Array_46Array[] = {
  bytes2word(NEEDHEAP_P1,44,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(8,HEAP_P1,7,HEAP_P1)
, bytes2word(6,HEAP_P1,5,HEAP_P1)
, bytes2word(4,HEAP_P1,3,HEAP_I2)
, bytes2word(HEAP_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v401: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Prelude_46Ord_46Array_46Array[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Array_46Array))
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_60),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_60_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_62_61),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46_62),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46compare),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46min),2)
, CAPTAG(useLabel(FN_Prelude_46Ord_46Array_46Array_46max),2)
,};
