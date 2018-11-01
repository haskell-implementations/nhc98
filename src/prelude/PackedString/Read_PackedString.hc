#include "newmacros.h"
#include "runtime.h"

#define CT_v220	((void*)startLabel+20)
#define FN_LAMBDA218	((void*)startLabel+48)
#define CT_v221	((void*)startLabel+60)
#define F0_LAMBDA218	((void*)startLabel+68)
#define FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174	((void*)startLabel+88)
#define CT_v222	((void*)startLabel+128)
#define F0_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174	((void*)startLabel+136)
#define FN_LAMBDA217	((void*)startLabel+172)
#define CT_v226	((void*)startLabel+208)
#define F0_LAMBDA217	((void*)startLabel+216)
#define CT_v227	((void*)startLabel+244)
#define CT_v228	((void*)startLabel+292)
extern Node FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec[];
extern Node CF_Prelude_46Read_46Prelude_46Char[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46PackedString_46packString[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46NHC_46PackedString_46PackedString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v220)
,};
Node FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v220: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA218),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v221)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v221: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v222)
,	/* FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v222: (byte 0) */
  HW(5,2)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec_39174),2)
, CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46_91_93_46readsPrec))
, useLabel(CF_Prelude_46Read_46Prelude_46Char)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v226)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v226: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
, bytes2word(0,0,0,0)
, useLabel(CT_v227)
,};
Node FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v227: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,0,0)
, useLabel(CT_v228)
,};
Node FN_Prelude_46Read_46NHC_46PackedString_46PackedString[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v228: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46NHC_46PackedString_46PackedString))
, useLabel(F0_Prelude_46Read_46NHC_46PackedString_46PackedString_46readsPrec)
, useLabel(CF_Prelude_46Read_46NHC_46PackedString_46PackedString_46readList)
,};
