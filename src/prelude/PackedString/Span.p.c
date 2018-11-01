#include "newmacros.h"
#include "runtime.h"

#define CT_v203	((void*)startLabel+92)
#define FN_NHC_46PackedString_46Prelude_46168_46sp	((void*)startLabel+144)
#define v206	((void*)startLabel+207)
#define v204	((void*)startLabel+245)
#define CT_v214	((void*)startLabel+392)
#define F0_NHC_46PackedString_46Prelude_46168_46sp	((void*)startLabel+400)
#define ST_v200	((void*)startLabel+440)
#define PP_NHC_46PackedString_46Prelude_46168_46sp	((void*)startLabel+462)
#define PC_NHC_46PackedString_46Prelude_46168_46sp	((void*)startLabel+462)
#define ST_v209	((void*)startLabel+462)
#define PS_v201	((void*)startLabel+496)
#define PS_v199	((void*)startLabel+508)
#define PS_v202	((void*)startLabel+520)
#define PS_v212	((void*)startLabel+532)
#define PS_v210	((void*)startLabel+544)
#define PS_v213	((void*)startLabel+556)
#define PS_v208	((void*)startLabel+568)
#define PS_v211	((void*)startLabel+580)
extern Node FN_NHC_46PackedString_46length[];
extern Node FN_NHC_46PackedString_46index[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46PackedString_46substr[];
extern Node CF_NHC_46PackedString_46nil[];
extern Node PM_NHC_46PackedString[];
extern Node PC_NHC_46PackedString_46length[];
extern Node PC_NHC_46PackedString_46substr[];
extern Node PC_NHC_46PackedString_46index[];
extern Node PC_Prelude_462[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v203)
,};
Node FN_NHC_46PackedString_46span[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_INT_P1,0,HEAP_OFF_N1)
, bytes2word(14,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, 110001
, useLabel(ST_v200)
,	/* CT_v203: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46span[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46span),2)
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46sp))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v214)
,	/* FN_NHC_46PackedString_46Prelude_46168_46sp: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG,4,EVAL)
, bytes2word(PUSH_ARG_I3,EVAL,NEEDHEAP_I32,LT_W)
, bytes2word(JUMPFALSE,92,0,PUSH_HEAP)
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
,	/* v206: (byte 3) */
  bytes2word(HEAP_ARG,4,RETURN_EVAL,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_INT_P1,0,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,27,HEAP_CVAL_N1)
, bytes2word(32,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,21,HEAP_OFF_N1,14)
,	/* v204: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v212)
, 0
, 0
, 0
, 0
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, useLabel(PS_v211)
, 0
, 0
, 0
, 0
, useLabel(PS_v210)
, 0
, 0
, 0
, 0
, 130015
, useLabel(ST_v209)
,	/* CT_v214: (byte 0) */
  HW(5,4)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46168_46sp: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46sp),4)
, useLabel(PS_v208)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46PackedString_46index))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46168_46sp))
, VAPTAG(useLabel(FN_NHC_46PackedString_46substr))
, useLabel(CF_NHC_46PackedString_46nil)
,};
Node PP_NHC_46PackedString_46span[] = {
 };
Node PC_NHC_46PackedString_46span[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,115,112,97)
,	/* PP_NHC_46PackedString_46Prelude_46168_46sp: (byte 2) */
 	/* PC_NHC_46PackedString_46Prelude_46168_46sp: (byte 2) */
 	/* ST_v209: (byte 2) */
  bytes2word(110,0,78,72)
, bytes2word(67,46,80,97)
, bytes2word(99,107,101,100)
, bytes2word(83,116,114,105)
, bytes2word(110,103,46,115)
, bytes2word(112,97,110,58)
, bytes2word(49,51,58,49)
, bytes2word(53,45,49,55)
, bytes2word(58,50,56,0)
,	/* PS_v201: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46span)
, useLabel(PC_NHC_46PackedString_46length)
,	/* PS_v199: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46span)
, useLabel(PC_NHC_46PackedString_46span)
,	/* PS_v202: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46span)
, useLabel(PC_NHC_46PackedString_46Prelude_46168_46sp)
,	/* PS_v212: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46168_46sp)
, useLabel(PC_NHC_46PackedString_46substr)
,	/* PS_v210: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46168_46sp)
, useLabel(PC_NHC_46PackedString_46index)
,	/* PS_v213: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46168_46sp)
, useLabel(PC_Prelude_462)
,	/* PS_v208: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46168_46sp)
, useLabel(PC_NHC_46PackedString_46Prelude_46168_46sp)
,	/* PS_v211: (byte 0) */
  useLabel(PM_NHC_46PackedString)
, useLabel(PP_NHC_46PackedString_46Prelude_46168_46sp)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,};
