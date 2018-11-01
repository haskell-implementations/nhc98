#include "newmacros.h"
#include "runtime.h"

#define CT_v216	((void*)startLabel+40)
#define ST_v215	((void*)startLabel+64)
extern Node TM_Array[];
extern Node FN_Ix_46range[];
extern Node FN_Array_46bounds[];
extern Node FN_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v216)
,};
Node FN_Array_46indices[] = {
  useLabel(TM_Array)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Array_46indices[] = {
  CAPTAG(useLabel(FN_Array_46indices),1)
, VAPTAG(useLabel(FN_Ix_46range))
, CAPTAG(useLabel(FN_Array_46bounds),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
,	/* ST_v215: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,105,110)
, bytes2word(100,105,99,101)
, bytes2word(115,0,0,0)
,};
