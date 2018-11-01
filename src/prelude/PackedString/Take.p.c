#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+128)
#define ST_v178	((void*)startLabel+168)
#define PS_v179	((void*)startLabel+192)
#define PS_v181	((void*)startLabel+204)
#define PS_v177	((void*)startLabel+216)
#define PS_v180	((void*)startLabel+228)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46min[];
extern Node FN_NHC_46PackedString_46substr[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46length[];
extern Node PC_NHC_46PackedString_46substr[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46min[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_NHC_46PackedString_46take[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_INT_P1)
, bytes2word(0,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v178)
,	/* CT_v182: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46take[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46take),2)
, useLabel(PS_v177)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46min))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,};
Node PP_NHC_46PackedString_46take[] = {
 };
Node PC_NHC_46PackedString_46take[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,116,97,107)
, bytes2word(101,0,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46take)
, useLabel(PC_NHC_46PackedString_46length)
,	/* PS_v181: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46take)
, useLabel(PC_NHC_46PackedString_46substr)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46take)
, useLabel(PC_NHC_46PackedString_46take)
,	/* PS_v180: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46take)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46min)
,};
