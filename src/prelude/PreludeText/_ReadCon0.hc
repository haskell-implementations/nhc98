#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+32)
extern Node FN_Prelude_46_95readCon[];
extern Node FN_Prelude_46readParen[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v178)
,};
Node FN_Prelude_46_95readCon0[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46_95readCon0[] = {
  CAPTAG(useLabel(FN_Prelude_46_95readCon0),3)
, VAPTAG(useLabel(FN_Prelude_46_95readCon))
, VAPTAG(useLabel(FN_Prelude_46readParen))
,};
