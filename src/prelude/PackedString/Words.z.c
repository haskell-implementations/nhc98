#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+30)
#define CT_v193	((void*)startLabel+80)
#define FN_LAMBDA188	((void*)startLabel+128)
#define CT_v195	((void*)startLabel+152)
#define F0_LAMBDA188	((void*)startLabel+160)
#define FN_LAMBDA187	((void*)startLabel+172)
#define CT_v197	((void*)startLabel+196)
#define F0_LAMBDA187	((void*)startLabel+204)
#define ST_v192	((void*)startLabel+208)
#define ST_v196	((void*)startLabel+231)
#define ST_v194	((void*)startLabel+260)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46dropWhile[];
extern Node F0_Char_46isSpace[];
extern Node FN_NHC_46PackedString_46null[];
extern Node FN_NHC_46PackedString_46break[];
extern Node TMSUB_NHC_46PackedString[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_NHC_46PackedString_46words[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,5,0,PUSH_HEAP)
,	/* v190: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_CVAL_P1,9,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I2,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 120001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
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
, useLabel(CT_v195)
,	/* FN_LAMBDA188: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140045
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA188: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA188),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,	/* FN_LAMBDA187: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 140042
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA187: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA187),1)
,	/* ST_v192: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,119,111,114)
,	/* ST_v196: (byte 3) */
  bytes2word(100,115,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(119,111,114,100)
, bytes2word(115,58,49,52)
,	/* ST_v194: (byte 4) */
  bytes2word(58,52,50,0)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,119,111,114)
, bytes2word(100,115,58,49)
, bytes2word(52,58,52,53)
, bytes2word(45,49,52,58)
, bytes2word(52,55,0,0)
,};
