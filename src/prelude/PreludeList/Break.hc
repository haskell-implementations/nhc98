#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+24)
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];
extern Node FN_Prelude_46span[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46break[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v170: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46break[] = {
  CAPTAG(useLabel(FN_Prelude_46break),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
, CAPTAG(useLabel(FN_Prelude_46span),1)
,};
