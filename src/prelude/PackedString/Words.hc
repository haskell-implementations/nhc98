#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+27)
#define CT_v192	((void*)startLabel+68)
#define FN_LAMBDA188	((void*)startLabel+116)
#define CT_v193	((void*)startLabel+128)
#define F0_LAMBDA188	((void*)startLabel+136)
#define FN_LAMBDA187	((void*)startLabel+148)
#define CT_v194	((void*)startLabel+160)
#define F0_LAMBDA187	((void*)startLabel+168)
extern Node FN_NHC_46PackedString_46dropWhile[];
extern Node F0_Char_46isSpace[];
extern Node FN_NHC_46PackedString_46null[];
extern Node FN_NHC_46PackedString_46break[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_NHC_46PackedString_46words[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,6,0,PUSH_HEAP)
,	/* v190: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_I4,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,9)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I2,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v192: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_NHC_46PackedString_46words[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46words),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46dropWhile))
, useLabel(F0_Char_46isSpace)
, VAPTAG(useLabel(FN_NHC_46PackedString_46null))
, VAPTAG(useLabel(FN_NHC_46PackedString_46break))
, VAPTAG(useLabel(FN_LAMBDA187))
, VAPTAG(useLabel(FN_LAMBDA188))
, VAPTAG(useLabel(FN_NHC_46PackedString_46words))
, bytes2word(1,0,0,1)
, useLabel(CT_v193)
,	/* FN_LAMBDA188: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA188: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA188),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v194)
,	/* FN_LAMBDA187: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v194: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA187: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA187),1)
,};
