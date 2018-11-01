#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+36)
#define ST_v174	((void*)startLabel+56)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46flip[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_Prelude_46subtract[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46subtract[] = {
  CAPTAG(useLabel(FN_Prelude_46subtract),1)
, VAPTAG(useLabel(FN_Prelude_46_45))
, CAPTAG(useLabel(FN_Prelude_46flip),2)
,	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,117,98,116)
, bytes2word(114,97,99,116)
, bytes2word(0,0,0,0)
,};
