#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+32)
extern Node FN_Prelude_46fromRational[];
extern Node FN_Prelude_46toRational[];
extern Node FN_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v183)
,};
Node FN_Prelude_46realToFrac[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46realToFrac[] = {
  CAPTAG(useLabel(FN_Prelude_46realToFrac),2)
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_Prelude_46toRational))
, VAPTAG(useLabel(FN_Prelude_46_46))
,};
