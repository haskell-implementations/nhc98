#include "newmacros.h"
#include "runtime.h"

#define CT_v194	((void*)startLabel+52)
#define CT_v196	((void*)startLabel+124)
#define CT_v198	((void*)startLabel+184)
#define ST_v197	((void*)startLabel+204)
#define ST_v193	((void*)startLabel+245)
#define ST_v195	((void*)startLabel+289)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46primComparePS[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 80005
, useLabel(ST_v193)
,	/* CT_v194: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_47_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 70005
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Ordering_46_61_61))
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Eq_46NHC_46PackedString_46PackedString[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 60010
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46PackedString_46PackedString))
, useLabel(F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46PackedString_46PackedString_46_61_61)
,	/* ST_v197: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v193: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,47,61)
,	/* ST_v195: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,61,61)
, bytes2word(0,0,0,0)
,};
