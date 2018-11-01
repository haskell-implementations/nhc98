#include "newmacros.h"
#include "runtime.h"

#define v194	((void*)startLabel+22)
#define CT_v196	((void*)startLabel+68)
#define FN_LAMBDA192	((void*)startLabel+116)
#define v197	((void*)startLabel+130)
#define CT_v199	((void*)startLabel+152)
#define F0_LAMBDA192	((void*)startLabel+160)
#define FN_LAMBDA191	((void*)startLabel+184)
#define CT_v200	((void*)startLabel+196)
#define F0_LAMBDA191	((void*)startLabel+204)
#define FN_LAMBDA190	((void*)startLabel+216)
#define CT_v201	((void*)startLabel+228)
#define F0_LAMBDA190	((void*)startLabel+236)
extern Node FN_NHC_46PackedString_46null[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[];
extern Node FN_NHC_46PackedString_46break[];
extern Node FN_NHC_46PackedString_46tail[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v196)
,};
Node FN_NHC_46PackedString_46lines[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v194: (byte 2) */
  bytes2word(1,RETURN,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CHAR_P1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(9,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_I2,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v196: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_NHC_46PackedString_46lines[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46lines),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46null))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46Eq_46Prelude_46Char_46_61_61)
, VAPTAG(useLabel(FN_NHC_46PackedString_46break))
, VAPTAG(useLabel(FN_LAMBDA190))
, VAPTAG(useLabel(FN_LAMBDA191))
, VAPTAG(useLabel(FN_LAMBDA192))
, bytes2word(1,0,0,1)
, useLabel(CT_v199)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v197: (byte 2) */
  bytes2word(1,RETURN,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v199: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46null))
, VAPTAG(useLabel(FN_NHC_46PackedString_46tail))
, VAPTAG(useLabel(FN_NHC_46PackedString_46lines))
, bytes2word(1,0,0,1)
, useLabel(CT_v200)
,	/* FN_LAMBDA191: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v200: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v201)
,	/* FN_LAMBDA190: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v201: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA190: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA190),1)
,};
