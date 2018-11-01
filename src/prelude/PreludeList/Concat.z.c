#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+44)
#define ST_v166	((void*)startLabel+64)
extern Node TM_Prelude[];
extern Node FN_Prelude_46foldr[];
extern Node F0_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_Prelude_46concat[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46concat[] = {
  VAPTAG(useLabel(FN_Prelude_46concat))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, useLabel(F0_Prelude_46_43_43)
,	/* ST_v166: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,111,110,99)
, bytes2word(97,116,0,0)
,};
