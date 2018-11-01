#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+24)
extern Node FN_Prelude_46even[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Prelude_46odd[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46odd[] = {
  CAPTAG(useLabel(FN_Prelude_46odd),1)
, CAPTAG(useLabel(FN_Prelude_46even),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
,};
