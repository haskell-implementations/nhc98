#include "newmacros.h"
#include "runtime.h"

#define CT_v179	((void*)startLabel+140)
#define ST_v175	((void*)startLabel+176)
#define PS_v176	((void*)startLabel+204)
#define PS_v177	((void*)startLabel+216)
#define PS_v178	((void*)startLabel+228)
#define PS_v174	((void*)startLabel+240)
extern Node FN_NHC_46PackedString_46take[];
extern Node FN_NHC_46PackedString_46drop[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46take[];
extern Node PC_NHC_46PackedString_46drop[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,};
Node FN_NHC_46PackedString_46splitAt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(13,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
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
, 90001
, useLabel(ST_v175)
,	/* CT_v179: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46splitAt[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46splitAt),2)
, useLabel(PS_v174)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46take))
, VAPTAG(useLabel(FN_NHC_46PackedString_46drop))
,};
Node PP_NHC_46PackedString_46splitAt[] = {
 };
Node PC_NHC_46PackedString_46splitAt[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,115,112,108)
, bytes2word(105,116,65,116)
, bytes2word(0,0,0,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46splitAt)
, useLabel(PC_NHC_46PackedString_46take)
,	/* PS_v177: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46splitAt)
, useLabel(PC_NHC_46PackedString_46drop)
,	/* PS_v178: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46splitAt)
, useLabel(PC_Prelude_462)
,	/* PS_v174: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46splitAt)
, useLabel(PC_NHC_46PackedString_46splitAt)
,};
