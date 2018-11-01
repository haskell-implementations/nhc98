#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+180)
#define ST_v193	((void*)startLabel+232)
#define PS_v195	((void*)startLabel+256)
#define PS_v196	((void*)startLabel+268)
#define PS_v197	((void*)startLabel+280)
#define PS_v192	((void*)startLabel+292)
#define PS_v194	((void*)startLabel+304)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46take[];
extern Node FN_Prelude_46drop[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_Prelude_46take[];
extern Node PC_Prelude_46drop[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v198)
,};
Node FN_NHC_46PackedString_46substr[] = {
  bytes2word(NEEDHEAP_P1,42,PUSH_ARG_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,3)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,24,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(13,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, 140001
, useLabel(ST_v193)
,	/* CT_v198: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_NHC_46PackedString_46substr[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46substr),3)
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, CAPTAG(useLabel(FN_Prelude_46take),1)
, CAPTAG(useLabel(FN_Prelude_46drop),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,};
Node PP_NHC_46PackedString_46substr[] = {
 };
Node PC_NHC_46PackedString_46substr[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,115,117,98)
, bytes2word(115,116,114,0)
,	/* PS_v195: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46substr)
, useLabel(PC_Prelude_46take)
,	/* PS_v196: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46substr)
, useLabel(PC_Prelude_46drop)
,	/* PS_v197: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46substr)
, useLabel(PC_Prelude_46_46)
,	/* PS_v192: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46substr)
, useLabel(PC_NHC_46PackedString_46substr)
,	/* PS_v194: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46substr)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,};
