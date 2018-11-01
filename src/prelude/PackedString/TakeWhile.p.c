#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+92)
#define FN_NHC_46PackedString_46Prelude_46167_46tw	((void*)startLabel+144)
#define v201	((void*)startLabel+207)
#define v199	((void*)startLabel+222)
#define CT_v208	((void*)startLabel+320)
#define F0_NHC_46PackedString_46Prelude_46167_46tw	((void*)startLabel+328)
#define ST_v195	((void*)startLabel+364)
#define PP_NHC_46PackedString_46Prelude_46167_46tw	((void*)startLabel+391)
#define PC_NHC_46PackedString_46Prelude_46167_46tw	((void*)startLabel+391)
#define ST_v204	((void*)startLabel+391)
#define PS_v196	((void*)startLabel+432)
#define PS_v194	((void*)startLabel+444)
#define PS_v197	((void*)startLabel+456)
#define PS_v207	((void*)startLabel+468)
#define PS_v205	((void*)startLabel+480)
#define PS_v203	((void*)startLabel+492)
#define PS_v206	((void*)startLabel+504)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_NHC_46PackedString_46index[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46PackedString_46substr[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46length[];
extern Node PC_NHC_46PackedString_46substr[];
extern Node PC_NHC_46PackedString_46index[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_NHC_46PackedString_46takeWhile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v195)
,	/* CT_v198: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46takeWhile[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46takeWhile),2)
, useLabel(PS_v194)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46167_46tw))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v208)
,	/* FN_NHC_46PackedString_46Prelude_46167_46tw: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,LT_W)
, bytes2word(JUMPFALSE,69,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,SLIDE_P1,1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,29,0)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_OFF_N1,14)
,	/* v201: (byte 3) */
  bytes2word(HEAP_ARG,4,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,0,HEAP_ARG)
,	/* v199: (byte 2) */
  bytes2word(3,RETURN_EVAL,PUSH_ARG_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, useLabel(PS_v203)
, 0
, 0
, 0
, 0
, useLabel(PS_v206)
, 0
, 0
, 0
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, 120015
, useLabel(ST_v204)
,	/* CT_v208: (byte 0) */
  HW(4,4)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46167_46tw: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46167_46tw),4)
, useLabel(PS_v203)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46167_46tw))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
,};
Node PP_NHC_46PackedString_46takeWhile[] = {
 };
Node PC_NHC_46PackedString_46takeWhile[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,116,97,107)
, bytes2word(101,87,104,105)
,	/* PP_NHC_46PackedString_46Prelude_46167_46tw: (byte 3) */
 	/* PC_NHC_46PackedString_46Prelude_46167_46tw: (byte 3) */
 	/* ST_v204: (byte 3) */
  bytes2word(108,101,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(116,97,107,101)
, bytes2word(87,104,105,108)
, bytes2word(101,58,49,50)
, bytes2word(58,49,53,45)
, bytes2word(49,54,58,50)
, bytes2word(49,0,0,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46takeWhile)
, useLabel(PC_NHC_46PackedString_46length)
,	/* PS_v194: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46takeWhile)
, useLabel(PC_NHC_46PackedString_46takeWhile)
,	/* PS_v197: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46takeWhile)
, useLabel(PC_NHC_46PackedString_46Prelude_46167_46tw)
,	/* PS_v207: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46167_46tw)
, useLabel(PC_NHC_46PackedString_46substr)
,	/* PS_v205: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46167_46tw)
, useLabel(PC_NHC_46PackedString_46index)
,	/* PS_v203: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46167_46tw)
, useLabel(PC_NHC_46PackedString_46Prelude_46167_46tw)
,	/* PS_v206: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46167_46tw)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,};
