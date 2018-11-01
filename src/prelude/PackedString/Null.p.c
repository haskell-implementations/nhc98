#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+64)
#define ST_v174	((void*)startLabel+96)
#define PS_v175	((void*)startLabel+120)
#define PS_v173	((void*)startLabel+132)
extern Node FN_NHC_46PackedString_46length[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46length[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_NHC_46PackedString_46null[] = {
  bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,EQ_W)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46PackedString_46null[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46null),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
,};
Node PP_NHC_46PackedString_46null[] = {
 };
Node PC_NHC_46PackedString_46null[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,110,117,108)
, bytes2word(108,0,0,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46null)
, useLabel(PC_NHC_46PackedString_46length)
,	/* PS_v173: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46null)
, useLabel(PC_NHC_46PackedString_46null)
,};
