#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+40)
#define CT_v194	((void*)startLabel+100)
#define CT_v195	((void*)startLabel+148)
extern Node FN_NHC_46PackedString_46primComparePS[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v193: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v194: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,};
Node FN_Prelude_46Eq_46NHC_46PackedString_46PackedString[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v195: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PackedString_46PackedString))
, useLabel(F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61)
,};
