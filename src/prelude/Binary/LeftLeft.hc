#include "newmacros.h"
#include "runtime.h"

#define CT_v214	((void*)startLabel+44)
#define CT_v218	((void*)startLabel+96)
#define FN_LAMBDA209	((void*)startLabel+128)
#define CT_v219	((void*)startLabel+164)
#define F0_LAMBDA209	((void*)startLabel+172)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46snd[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_NHC_46Binary_46castFst[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_I2,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v214: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Binary_46castFst[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46castFst),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v218)
,};
Node FN_NHC_46Binary_46_60_60[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v218: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Binary_46_60_60[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_60_60),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA209))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v219)
,	/* FN_LAMBDA209: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v219: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA209: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA209),2)
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46snd))
,};
