#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+40)
#define FN_LAMBDA165	((void*)startLabel+76)
#define CT_v171	((void*)startLabel+108)
#define CF_LAMBDA165	((void*)startLabel+116)
#define ST_v170	((void*)startLabel+120)
#define ST_v167	((void*)startLabel+122)
#define ST_v169	((void*)startLabel+138)
extern Node TM_Prelude[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46_43_43[];
extern Node FN_Prelude_46concatMap[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v168)
,};
Node FN_Prelude_46unlines[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v167)
,	/* CT_v168: (byte 0) */
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
, useLabel(CT_v171)
,	/* FN_LAMBDA165: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v170)
, 40033
, useLabel(ST_v169)
,	/* CT_v171: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA165: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA165))
,	/* ST_v170: (byte 0) */
 	/* ST_v167: (byte 2) */
  bytes2word(10,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,117,110)
, bytes2word(108,105,110,101)
,	/* ST_v169: (byte 2) */
  bytes2word(115,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,117,110)
, bytes2word(108,105,110,101)
, bytes2word(115,58,52,58)
, bytes2word(51,51,45,52)
, bytes2word(58,51,54,0)
,};
