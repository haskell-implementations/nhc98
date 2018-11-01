#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+28)
#define ST_v165	((void*)startLabel+56)
#define PS_v164	((void*)startLabel+72)
extern Node PM_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v166)
,};
Node FN_Char_46isLatin1[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,255,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LT_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v165)
,	/* CT_v166: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Char_46isLatin1[] = {
  CAPTAG(useLabel(FN_Char_46isLatin1),1)
, useLabel(PS_v164)
, 0
, 0
, 0
,};
Node PP_Char_46isLatin1[] = {
 };
Node PC_Char_46isLatin1[] = {
 	/* ST_v165: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,76)
, bytes2word(97,116,105,110)
, bytes2word(49,0,0,0)
,	/* PS_v164: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isLatin1)
, useLabel(PC_Char_46isLatin1)
,};
