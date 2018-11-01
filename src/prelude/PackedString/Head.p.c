#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+60)
#define ST_v171	((void*)startLabel+92)
#define PS_v172	((void*)startLabel+116)
#define PS_v170	((void*)startLabel+128)
extern Node FN_NHC_46PackedString_46index[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46index[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_NHC_46PackedString_46head[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v172)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v171)
,	/* CT_v173: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46PackedString_46head[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46head),1)
, useLabel(PS_v170)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
,};
Node PP_NHC_46PackedString_46head[] = {
 };
Node PC_NHC_46PackedString_46head[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,104,101,97)
, bytes2word(100,0,0,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46head)
, useLabel(PC_NHC_46PackedString_46index)
,	/* PS_v170: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46head)
, useLabel(PC_NHC_46PackedString_46head)
,};
