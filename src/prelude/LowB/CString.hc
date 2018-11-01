#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+24)
#define CT_v176	((void*)startLabel+84)
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46init[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_CString_46fromCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v175: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CString_46fromCString[] = {
  CAPTAG(useLabel(FN_CString_46fromCString),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_Prelude_46init))
, bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_CString_46toCString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CHAR_P1,0,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v176: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CString_46toCString[] = {
  CAPTAG(useLabel(FN_CString_46toCString),1)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,};
