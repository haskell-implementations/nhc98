#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+20)
#define FN_LAMBDA181	((void*)startLabel+52)
#define CT_v184	((void*)startLabel+76)
#define F0_LAMBDA181	((void*)startLabel+84)
extern Node FN_Prelude_46zipWith3[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v183)
,};
Node FN_Prelude_46zip3[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46zip3[] = {
  VAPTAG(useLabel(FN_Prelude_46zip3))
, CAPTAG(useLabel(FN_LAMBDA181),3)
, CAPTAG(useLabel(FN_Prelude_46zipWith3),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,	/* FN_LAMBDA181: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v184: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
,};
