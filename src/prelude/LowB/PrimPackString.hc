#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+32)
#define CT_v189	((void*)startLabel+84)
#define FN_NHC_46PackedString_46Prelude_46166_46forceList	((void*)startLabel+124)
#define v191	((void*)startLabel+134)
#define v192	((void*)startLabel+139)
#define CT_v194	((void*)startLabel+168)
#define F0_NHC_46PackedString_46Prelude_46166_46forceList	((void*)startLabel+176)
extern void *primPackString();
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_NHC_46PackedString_46primPackString[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(primPackString)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46PackedString_46primPackString[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46primPackString),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v189)
,};
Node FN_NHC_46PackedString_46packString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v189: (byte 0) */
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
, useLabel(CT_v194)
,	/* FN_NHC_46PackedString_46Prelude_46166_46forceList: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v191: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v192: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v194: (byte 0) */
  HW(3,1)
, 0
,	/* F0_NHC_46PackedString_46Prelude_46166_46forceList: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46166_46forceList),1)
, CAPTAG(useLabel(FN_NHC_46PackedString_46Prelude_46166_46forceList),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
