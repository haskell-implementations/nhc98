#include "newmacros.h"
#include "runtime.h"

#define CT_v165	((void*)startLabel+32)
#define ST_v164	((void*)startLabel+44)
extern Node TM_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v165)
,};
Node FN_Char_46isLatin1[] = {
  useLabel(TM_Char)
, bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,255,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v164)
,	/* CT_v165: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Char_46isLatin1[] = {
  CAPTAG(useLabel(FN_Char_46isLatin1),1)
,	/* ST_v164: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,76)
, bytes2word(97,116,105,110)
, bytes2word(49,0,0,0)
,};
