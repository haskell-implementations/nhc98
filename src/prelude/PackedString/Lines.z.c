#include "newmacros.h"
#include "runtime.h"

#define v194	((void*)startLabel+25)
#define CT_v197	((void*)startLabel+80)
#define FN_LAMBDA192	((void*)startLabel+128)
#define v198	((void*)startLabel+145)
#define CT_v201	((void*)startLabel+176)
#define F0_LAMBDA192	((void*)startLabel+184)
#define FN_LAMBDA191	((void*)startLabel+208)
#define CT_v203	((void*)startLabel+232)
#define F0_LAMBDA191	((void*)startLabel+240)
#define FN_LAMBDA190	((void*)startLabel+252)
#define CT_v205	((void*)startLabel+276)
#define F0_LAMBDA190	((void*)startLabel+284)
#define ST_v196	((void*)startLabel+288)
#define ST_v204	((void*)startLabel+311)
#define ST_v202	((void*)startLabel+340)
#define ST_v200	((void*)startLabel+375)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46null[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46Eq_46Prelude_46Char_46_61_61[];
extern Node FN_NHC_46PackedString_46break[];
extern Node TMSUB_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46tail[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_NHC_46PackedString_46lines[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(5,0,PUSH_HEAP,HEAP_CVAL_IN3)
,	/* v194: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CHAR_P1)
, bytes2word(10,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,9)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_I2,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 100001
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
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
, useLabel(CT_v201)
,	/* FN_LAMBDA192: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(5,0,PUSH_HEAP,HEAP_CVAL_IN3)
,	/* v198: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 130022
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46null))
, VAPTAG(useLabel(FN_NHC_46PackedString_46tail))
, VAPTAG(useLabel(FN_NHC_46PackedString_46lines))
, bytes2word(1,0,0,1)
, useLabel(CT_v203)
,	/* FN_LAMBDA191: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120022
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA191: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA191),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v205)
,	/* FN_LAMBDA190: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 120019
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA190: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA190),1)
,	/* ST_v196: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,108,105,110)
,	/* ST_v204: (byte 3) */
  bytes2word(101,115,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(108,105,110,101)
, bytes2word(115,58,49,50)
,	/* ST_v202: (byte 4) */
  bytes2word(58,49,57,0)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,108,105,110)
, bytes2word(101,115,58,49)
, bytes2word(50,58,50,50)
, bytes2word(45,49,50,58)
,	/* ST_v200: (byte 3) */
  bytes2word(50,51,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(108,105,110,101)
, bytes2word(115,58,49,51)
, bytes2word(58,50,50,45)
, bytes2word(49,51,58,54)
, bytes2word(48,0,0,0)
,};
