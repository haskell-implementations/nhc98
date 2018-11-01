#include "newmacros.h"
#include "runtime.h"

#define CT_v255	((void*)startLabel+24)
#define CT_v256	((void*)startLabel+64)
#define CT_v257	((void*)startLabel+108)
#define CT_v258	((void*)startLabel+152)
#define CT_v259	((void*)startLabel+196)
#define CT_v260	((void*)startLabel+240)
#define CT_v261	((void*)startLabel+284)
#define CT_v262	((void*)startLabel+344)
extern Node FN_NHC_46PackedString_46primComparePS[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46PackedString_46PackedString[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node CF_Prelude_46Eq_46NHC_46PackedString_46PackedString[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v256: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v257)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v257: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v258: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v259)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v259: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v260: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,0,0)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v262: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString))
, useLabel(CF_Prelude_46Eq_46NHC_46PackedString_46PackedString)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max)
,};
