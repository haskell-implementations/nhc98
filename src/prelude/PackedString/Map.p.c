#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+96)
#define ST_v180	((void*)startLabel+140)
#define PS_v181	((void*)startLabel+164)
#define PS_v182	((void*)startLabel+176)
#define PS_v179	((void*)startLabel+188)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_NHC_46PackedString_46map[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_CVAL_P1)
, bytes2word(9,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v180)
,	/* CT_v183: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46PackedString_46map[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46map),1)
, useLabel(PS_v179)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,};
Node PP_NHC_46PackedString_46map[] = {
 };
Node PC_NHC_46PackedString_46map[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,109,97,112)
, bytes2word(0,0,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46map)
, useLabel(PC_Prelude_46map)
,	/* PS_v182: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46map)
, useLabel(PC_Prelude_46_46)
,	/* PS_v179: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46map)
, useLabel(PC_NHC_46PackedString_46map)
,};
