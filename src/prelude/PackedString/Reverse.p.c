#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+72)
#define ST_v176	((void*)startLabel+116)
#define PS_v177	((void*)startLabel+144)
#define PS_v175	((void*)startLabel+156)
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46reverse[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node F0_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v178)
,};
Node FN_NHC_46PackedString_46reverse[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v176)
,	/* CT_v178: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_NHC_46PackedString_46reverse[] = {
  VAPTAG(useLabel(FN_NHC_46PackedString_46reverse))
, useLabel(PS_v175)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46reverse)
, useLabel(F0_NHC_46PackedString_46unpackPS)
, useLabel(F0_NHC_46PackedString_46packString)
,};
Node PP_NHC_46PackedString_46reverse[] = {
 };
Node PC_NHC_46PackedString_46reverse[] = {
 	/* ST_v176: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,114,101,118)
, bytes2word(101,114,115,101)
, bytes2word(0,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46reverse)
, useLabel(PC_Prelude_46_46)
,	/* PS_v175: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46reverse)
, useLabel(PC_NHC_46PackedString_46reverse)
,};
