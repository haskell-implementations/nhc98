#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+92)
#define ST_v177	((void*)startLabel+132)
#define PS_v179	((void*)startLabel+156)
#define PS_v178	((void*)startLabel+168)
#define PS_v176	((void*)startLabel+180)
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];
extern Node FN_NHC_46PackedString_46span[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46span[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_NHC_46PackedString_46break[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
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
, 80001
, useLabel(ST_v177)
,	/* CT_v180: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46PackedString_46break[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46break),2)
, useLabel(PS_v176)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
, VAPTAG(useLabel(FN_NHC_46PackedString_46span))
,};
Node PP_NHC_46PackedString_46break[] = {
 };
Node PC_NHC_46PackedString_46break[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,98,114,101)
, bytes2word(97,107,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46break)
, useLabel(PC_NHC_46PackedString_46span)
,	/* PS_v178: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46break)
, useLabel(PC_Prelude_46_46)
,	/* PS_v176: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46break)
, useLabel(PC_NHC_46PackedString_46break)
,};
