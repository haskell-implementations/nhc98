#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+16)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v162)
,};
Node FN_NonStdUnsafeCoerce_46unsafeCoerce[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v162: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NonStdUnsafeCoerce_46unsafeCoerce[] = {
  CAPTAG(useLabel(FN_NonStdUnsafeCoerce_46unsafeCoerce),1)
,};
