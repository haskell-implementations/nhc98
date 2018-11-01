#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+36)
#define FN_LAMBDA169	((void*)startLabel+72)
#define CT_v172	((void*)startLabel+96)
#define F0_LAMBDA169	((void*)startLabel+104)
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v171)
,};
Node FN_Prelude_46reverse[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v171: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Prelude_46reverse[] = {
  VAPTAG(useLabel(FN_Prelude_46reverse))
, CAPTAG(useLabel(FN_LAMBDA169),2)
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,	/* FN_LAMBDA169: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v172: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA169: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA169),2)
,};
