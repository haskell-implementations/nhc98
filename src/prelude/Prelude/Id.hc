#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+16)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v168)
,};
Node FN_Prelude_46id[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v168: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46id[] = {
  CAPTAG(useLabel(FN_Prelude_46id),1)
,};
