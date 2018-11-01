#include "newmacros.h"
#include "runtime.h"

#define CT_v189	((void*)startLabel+44)
#define CT_v191	((void*)startLabel+108)
#define FN_NHC_46PackedString_46Prelude_46166_46forceList	((void*)startLabel+148)
#define v193	((void*)startLabel+162)
#define v194	((void*)startLabel+166)
#define CT_v197	((void*)startLabel+200)
#define F0_NHC_46PackedString_46Prelude_46166_46forceList	((void*)startLabel+208)
#define ST_v190	((void*)startLabel+224)
#define ST_v195	((void*)startLabel+252)
#define ST_v188	((void*)startLabel+291)
extern Node TM_NHC_46PackedString[];
extern void *primPackString();
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46seq[];
extern Node TMSUB_NHC_46PackedString[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,};
Node FN_NHC_46PackedString_46primPackString[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primPackString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 50001
, useLabel(ST_v188)
,	/* CT_v189: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46PackedString_46primPackString[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46primPackString),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v191)
,};
Node FN_NHC_46PackedString_46packString[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_NHC_46PackedString_46packString[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46packString),1)
, CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46166_46forceList),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_NHC_46PackedString_46primPackString))
, VAPTAG(useLabel(FN_Prelude_46seq))
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,	/* FN_NHC_46PackedString_46Prelude_46166_46forceList: (byte 0) */
  useLabel(TMSUB_NHC_46PackedString)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v193: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v194: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_I1)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 110004
, useLabel(ST_v195)
,	/* CT_v197: (byte 0) */
  HW(3,1)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46166_46forceList: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46166_46forceList),1)
, CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46166_46forceList),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46seq))
,	/* ST_v190: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,112,97,99)
, bytes2word(107,83,116,114)
,	/* ST_v195: (byte 4) */
  bytes2word(105,110,103,0)
, bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,112,97,99)
, bytes2word(107,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(49,49,58,52)
, bytes2word(45,49,50,58)
,	/* ST_v188: (byte 3) */
  bytes2word(52,50,0,78)
, bytes2word(72,67,46,80)
, bytes2word(97,99,107,101)
, bytes2word(100,83,116,114)
, bytes2word(105,110,103,46)
, bytes2word(112,114,105,109)
, bytes2word(80,97,99,107)
, bytes2word(83,116,114,105)
, bytes2word(110,103,0,0)
,};
