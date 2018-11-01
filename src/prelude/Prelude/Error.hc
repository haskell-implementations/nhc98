#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+20)
extern Node FN_Prelude_46primError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46error[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v169: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46error[] = {
  CAPTAG(useLabel(FN_Prelude_46error),1)
, VAPTAG(useLabel(FN_Prelude_46primError))
,};
