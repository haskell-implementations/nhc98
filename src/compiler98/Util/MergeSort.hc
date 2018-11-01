#include "newmacros.h"
#include "runtime.h"

#define FN_Util_46MergeSort_46groupSorted	((void*)startLabel+12)
#define v241	((void*)startLabel+22)
#define v242	((void*)startLabel+27)
#define CT_v244	((void*)startLabel+56)
#define F0_Util_46MergeSort_46groupSorted	((void*)startLabel+64)
#define FN_Util_46MergeSort_46Prelude_46164_46groupSorted_39	((void*)startLabel+88)
#define v246	((void*)startLabel+100)
#define v247	((void*)startLabel+116)
#define v248	((void*)startLabel+149)
#define CT_v251	((void*)startLabel+192)
#define F0_Util_46MergeSort_46Prelude_46164_46groupSorted_39	((void*)startLabel+200)
#define CT_v252	((void*)startLabel+260)
#define CT_v253	((void*)startLabel+316)
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95apply4[];
extern Node FN_Prelude_46Ord_46Prelude_46Eq[];
extern Node FN_List_46sort[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46map[];
extern Node F0_Prelude_46head[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v244)
,	/* FN_Util_46MergeSort_46groupSorted: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v241: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v242: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_OFF_N1,4,HEAP_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v244: (byte 0) */
  HW(1,2)
, 0
,	/* F0_Util_46MergeSort_46groupSorted: (byte 0) */
  CAPTAG(useLabel(FN_Util_46MergeSort_46groupSorted),2)
, VAPTAG(useLabel(FN_Util_46MergeSort_46Prelude_46164_46groupSorted_39))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v251)
,	/* FN_Util_46MergeSort_46Prelude_46164_46groupSorted_39: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v246: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(20),BOT(20))
, bytes2word(POP_I1,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v247: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(17,0,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,6,HEAP_I2)
,	/* v248: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_CVAL_I5,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,5,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v251: (byte 0) */
  HW(4,4)
, 0
,	/* F0_Util_46MergeSort_46Prelude_46164_46groupSorted_39: (byte 0) */
  CAPTAG(useLabel(FN_Util_46MergeSort_46Prelude_46164_46groupSorted_39),4)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Util_46MergeSort_46Prelude_46164_46groupSorted_39))
, CAPTAG(useLabel(FN_Util_46MergeSort_46Prelude_46164_46groupSorted_39),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,};
Node FN_Util_46MergeSort_46group[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Util_46MergeSort_46group[] = {
  CAPTAG(useLabel(FN_Util_46MergeSort_46group),2)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Eq))
, VAPTAG(useLabel(FN_List_46sort))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Util_46MergeSort_46groupSorted))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,};
Node FN_Util_46MergeSort_46unique[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v253: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Util_46MergeSort_46unique[] = {
  CAPTAG(useLabel(FN_Util_46MergeSort_46unique),2)
, VAPTAG(useLabel(FN_Util_46MergeSort_46group))
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_Prelude_46head)
,};
