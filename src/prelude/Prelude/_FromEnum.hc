#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+20)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Prelude_46_95fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v169: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_95fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46_95fromEnum),1)
,};
