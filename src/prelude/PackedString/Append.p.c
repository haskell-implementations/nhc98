#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+132)
#define ST_v176	((void*)startLabel+172)
#define PS_v177	((void*)startLabel+196)
#define PS_v179	((void*)startLabel+208)
#define PS_v178	((void*)startLabel+220)
#define PS_v175	((void*)startLabel+232)
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46unpackPS[];
extern Node PC_NHC_46PackedString_46packString[];
extern Node PC_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_NHC_46PackedString_46append[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,17)
, bytes2word(HEAP_OFF_N1,12,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v176)
,	/* CT_v180: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46append[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46append),2)
, useLabel(PS_v175)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,};
Node PP_NHC_46PackedString_46append[] = {
 };
Node PC_NHC_46PackedString_46append[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,97,112,112)
, bytes2word(101,110,100,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46append)
, useLabel(PC_NHC_46PackedString_46unpackPS)
,	/* PS_v179: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46append)
, useLabel(PC_NHC_46PackedString_46packString)
,	/* PS_v178: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46append)
, useLabel(PC_Prelude_46_43_43)
,	/* PS_v175: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46append)
, useLabel(PC_NHC_46PackedString_46append)
,};
