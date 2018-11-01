#include "newmacros.h"
#include "runtime.h"

#define CT_v256	((void*)startLabel+36)
#define CT_v258	((void*)startLabel+88)
#define CT_v260	((void*)startLabel+144)
#define CT_v262	((void*)startLabel+200)
#define CT_v264	((void*)startLabel+256)
#define CT_v266	((void*)startLabel+312)
#define CT_v268	((void*)startLabel+368)
#define CT_v270	((void*)startLabel+440)
#define ST_v269	((void*)startLabel+484)
#define ST_v265	((void*)startLabel+526)
#define ST_v267	((void*)startLabel+570)
#define ST_v261	((void*)startLabel+615)
#define ST_v263	((void*)startLabel+659)
#define ST_v255	((void*)startLabel+704)
#define ST_v259	((void*)startLabel+754)
#define ST_v257	((void*)startLabel+800)
extern Node TM_NHC_46PackedString[];
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
, useLabel(CT_v256)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46compare),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46primComparePS))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70010
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v260)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70010
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70010
, useLabel(ST_v261)
,	/* CT_v262: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70010
, useLabel(ST_v263)
,	/* CT_v264: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v266)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70010
, useLabel(ST_v265)
,	/* CT_v266: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 70010
, useLabel(ST_v267)
,	/* CT_v268: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46PackedString_46PackedString_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,0,0)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46NHC_46PackedString_46PackedString[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 70010
, useLabel(ST_v269)
,	/* CT_v270: (byte 0) */
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
,	/* ST_v269: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
,	/* ST_v265: (byte 2) */
  bytes2word(103,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
,	/* ST_v267: (byte 2) */
  bytes2word(60,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
,	/* ST_v261: (byte 3) */
  bytes2word(60,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v263: (byte 3) */
  bytes2word(46,62,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,79)
, bytes2word(114,100,46,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v255: (byte 4) */
  bytes2word(46,62,61,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,99,111)
, bytes2word(109,112,97,114)
,	/* ST_v259: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,79,114)
, bytes2word(100,46,78,72)
, bytes2word(67,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
,	/* ST_v257: (byte 4) */
  bytes2word(109,97,120,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,80,97,99)
, bytes2word(107,101,100,83)
, bytes2word(116,114,105,110)
, bytes2word(103,46,109,105)
, bytes2word(110,0,0,0)
,};
