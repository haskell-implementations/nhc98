#include "newmacros.h"
#include "runtime.h"

#define CT_v212	((void*)startLabel+20)
#define FN_LAMBDA210	((void*)startLabel+48)
#define CT_v213	((void*)startLabel+60)
#define F0_LAMBDA210	((void*)startLabel+68)
#define FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164	((void*)startLabel+92)
#define CT_v214	((void*)startLabel+120)
#define F0_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164	((void*)startLabel+128)
#define FN_LAMBDA209	((void*)startLabel+160)
#define CT_v218	((void*)startLabel+196)
#define F0_LAMBDA209	((void*)startLabel+204)
#define CT_v219	((void*)startLabel+236)
#define CT_v220	((void*)startLabel+284)
extern Node CF_Prelude_46Num_46Prelude_46Int[];
extern Node FN_Prelude_46Read_46Prelude_46Integer_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46_95_46readList[];
extern Node CF_Prelude_46Read_46Prelude_46Int[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v212)
,};
Node FN_Prelude_46Read_46Prelude_46Int_46readsPrec[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v212: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Read_46Prelude_46Int_46readsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Int_46readsPrec),1)
, CAPTAG(useLabel(FN_LAMBDA210),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v213)
,	/* FN_LAMBDA210: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v213: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA210: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA210),2)
, VAPTAG(useLabel(FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164))
, useLabel(CF_Prelude_46Num_46Prelude_46Int)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v214)
,	/* FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46Read_46Prelude_46Int_46readsPrec_39164),3)
, CAPTAG(useLabel(FN_LAMBDA209),1)
, VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Integer_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v218)
,	/* FN_LAMBDA209: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_I2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v218: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA209: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA209),2)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v219)
,};
Node FN_Prelude_46Read_46Prelude_46Int_46readList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v219: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Int_46readList[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Int_46readList))
, VAPTAG(useLabel(FN_Prelude_46_95_46readList))
, useLabel(CF_Prelude_46Read_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v220)
,};
Node FN_Prelude_46Read_46Prelude_46Int[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v220: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Read_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Read_46Prelude_46Int))
, useLabel(F0_Prelude_46Read_46Prelude_46Int_46readsPrec)
, useLabel(CF_Prelude_46Read_46Prelude_46Int_46readList)
,};
