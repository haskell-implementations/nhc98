#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Prelude_46otherwise[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v163: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46otherwise[] = {
  VAPTAG(useLabel(FN_Prelude_46otherwise))
,};
