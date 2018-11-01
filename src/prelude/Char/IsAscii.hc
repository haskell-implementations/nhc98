#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+20)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Char_46isAscii[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,128,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v169: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Char_46isAscii[] = {
  CAPTAG(useLabel(FN_Char_46isAscii),1)
,};
