#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+20)
#define FN_LAMBDA169	((void*)startLabel+52)
#define CT_v172	((void*)startLabel+76)
#define F0_LAMBDA169	((void*)startLabel+84)
extern Node FN_Prelude_46zipWith[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v171)
,};
Node FN_Prelude_46zip[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v171: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46zip[] = {
  VAPTAG(useLabel(FN_Prelude_46zip))
, CAPTAG(useLabel(FN_LAMBDA169),2)
, CAPTAG(useLabel(FN_Prelude_46zipWith),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,	/* FN_LAMBDA169: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v172: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA169: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA169),2)
,};
