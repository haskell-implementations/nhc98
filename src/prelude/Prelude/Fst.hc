#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+20)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Prelude_46fst[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v176: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46fst[] = {
  CAPTAG(useLabel(FN_Prelude_46fst),1)
,};
