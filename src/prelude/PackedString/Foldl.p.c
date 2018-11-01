#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+92)
#define ST_v181	((void*)startLabel+132)
#define PS_v182	((void*)startLabel+156)
#define PS_v183	((void*)startLabel+168)
#define PS_v180	((void*)startLabel+180)
extern Node FN_Prelude_46foldl[];
extern Node FN_Prelude_46_46[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node PM_NHC_46PackedString[];
extern Node PC_Prelude_46foldl[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v184)
,};
Node FN_NHC_46PackedString_46foldl[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_CVAL_P1,9,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v181)
,	/* CT_v184: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46foldl[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46foldl),2)
, useLabel(PS_v180)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_NHC_46PackedString_46unpackPS)
,};
Node PP_NHC_46PackedString_46foldl[] = {
 };
Node PC_NHC_46PackedString_46foldl[] = {
 	/* ST_v181: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,102,111,108)
, bytes2word(100,108,0,0)
,	/* PS_v182: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46foldl)
, useLabel(PC_Prelude_46foldl)
,	/* PS_v183: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46foldl)
, useLabel(PC_Prelude_46_46)
,	/* PS_v180: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46foldl)
, useLabel(PC_NHC_46PackedString_46foldl)
,};
