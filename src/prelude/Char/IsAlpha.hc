#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+28)
extern Node FN_Char_46isUpper[];
extern Node FN_Char_46isLower[];
extern Node FN_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Char_46isAlpha[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v169: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isAlpha[] = {
  CAPTAG(useLabel(FN_Char_46isAlpha),1)
, VAPTAG(useLabel(FN_Char_46isUpper))
, VAPTAG(useLabel(FN_Char_46isLower))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
,};
