#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+28)
#define FN_LAMBDA165	((void*)startLabel+64)
#define CT_v169	((void*)startLabel+84)
#define CF_LAMBDA165	((void*)startLabel+92)
#define ST_v168	((void*)startLabel+96)
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46_43_43[];
extern Node FN_Prelude_46concatMap[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_Prelude_46unlines[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v167: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46unlines[] = {
  VAPTAG(useLabel(FN_Prelude_46unlines))
, VAPTAG(useLabel(FN_LAMBDA165))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46_43_43)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, bytes2word(0,0,0,0)
, useLabel(CT_v169)
,	/* FN_LAMBDA165: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA165: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA165))
,	/* ST_v168: (byte 0) */
  bytes2word(10,0,0,0)
,};
