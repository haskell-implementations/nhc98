#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+20)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v164)
,};
Node FN_Char_46isLatin1[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,255,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v164: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Char_46isLatin1[] = {
  CAPTAG(useLabel(FN_Char_46isLatin1),1)
,};
