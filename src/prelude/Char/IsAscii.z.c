#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+32)
#define ST_v169	((void*)startLabel+44)
extern Node TM_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Char_46isAscii[] = {
  useLabel(TM_Char)
, bytes2word(NEEDSTACK_I16,PUSH_INT_P1,128,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v169)
,	/* CT_v170: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Char_46isAscii[] = {
  CAPTAG(useLabel(FN_Char_46isAscii),1)
,	/* ST_v169: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,65)
, bytes2word(115,99,105,105)
, bytes2word(0,0,0,0)
,};
