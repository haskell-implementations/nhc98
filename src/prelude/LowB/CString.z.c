#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+36)
#define CT_v178	((void*)startLabel+108)
#define ST_v174	((void*)startLabel+128)
#define ST_v175	((void*)startLabel+136)
#define ST_v177	((void*)startLabel+156)
extern Node TM_CString[];
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46init[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_NHC_46PackedString_46packString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_CString_46fromCString[] = {
  useLabel(TM_CString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v175)
,	/* CT_v176: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CString_46fromCString[] = {
  CAPTAG(useLabel(FN_CString_46fromCString),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_Prelude_46init))
, bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_CString_46toCString[] = {
  useLabel(TM_CString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_N1,4)
, bytes2word(HEAP_CHAR_P1,0,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 50001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_CString_46toCString[] = {
  CAPTAG(useLabel(FN_CString_46toCString),1)
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_NHC_46PackedString_46packString))
,};
Node PM_CString[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(67,83,116,114)
,	/* ST_v175: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(67,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(102,114,111,109)
, bytes2word(67,83,116,114)
,	/* ST_v177: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(67,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(116,111,67,83)
, bytes2word(116,114,105,110)
, bytes2word(103,0,0,0)
,};
