#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+96)
#define ST_v178	((void*)startLabel+144)
#define PS_v179	((void*)startLabel+172)
#define PS_v180	((void*)startLabel+184)
#define PS_v177	((void*)startLabel+196)
extern Node FN_Prelude_46map[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46unlines[];
extern Node F0_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v181)
,};
Node FN_NHC_46PackedString_46unlines[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(13,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, 100001
, useLabel(ST_v178)
,	/* CT_v181: (byte 0) */
  HW(5,0)
, 0
,};
Node CF_NHC_46PackedString_46unlines[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46unlines))
, useLabel(PS_v177)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_NHC_46PackedString_46unpackPS)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46unlines)
, useLabel(F0_NHC_46PackedString_46packString)
,};
Node PP_NHC_46PackedString_46unlines[] = {
 };
Node PC_NHC_46PackedString_46unlines[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,117,110,108)
, bytes2word(105,110,101,115)
, bytes2word(0,0,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46unlines)
, useLabel(PC_Prelude_46map)
,	/* PS_v180: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46unlines)
, useLabel(PC_Prelude_46_46)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46unlines)
, useLabel(PC_NHC_46PackedString_46unlines)
,};
