#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+88)
#define ST_v172	((void*)startLabel+124)
#define PS_v173	((void*)startLabel+148)
#define PS_v174	((void*)startLabel+160)
#define PS_v171	((void*)startLabel+172)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_NHC_46PackedString_46substr[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46length[];
extern Node PC_NHC_46PackedString_46substr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_NHC_46PackedString_46tail[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,1,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v172)
,	/* CT_v175: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46PackedString_46tail[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46tail),1)
, useLabel(PS_v171)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,};
Node PP_NHC_46PackedString_46tail[] = {
 };
Node PC_NHC_46PackedString_46tail[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,116,97,105)
, bytes2word(108,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46tail)
, useLabel(PC_NHC_46PackedString_46length)
,	/* PS_v174: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46tail)
, useLabel(PC_NHC_46PackedString_46substr)
,	/* PS_v171: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46tail)
, useLabel(PC_NHC_46PackedString_46tail)
,};
