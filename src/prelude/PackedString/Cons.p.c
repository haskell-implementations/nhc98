#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+140)
#define ST_v174	((void*)startLabel+176)
#define PS_v175	((void*)startLabel+200)
#define PS_v177	((void*)startLabel+212)
#define PS_v176	((void*)startLabel+224)
#define PS_v173	((void*)startLabel+236)
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_NHC_46PackedString_46packString[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46unpackPS[];
extern Node PC_NHC_46PackedString_46packString[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v178)
,};
Node FN_NHC_46PackedString_46cons[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(12,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v174)
,	/* CT_v178: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46cons[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46cons),2)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,};
Node PP_NHC_46PackedString_46cons[] = {
 };
Node PC_NHC_46PackedString_46cons[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,99,111,110)
, bytes2word(115,0,0,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46cons)
, useLabel(PC_NHC_46PackedString_46unpackPS)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46cons)
, useLabel(PC_NHC_46PackedString_46packString)
,	/* PS_v176: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46cons)
, useLabel(PC_Prelude_46_58)
,	/* PS_v173: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46cons)
, useLabel(PC_NHC_46PackedString_46cons)
,};
