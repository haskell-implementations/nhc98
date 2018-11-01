#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+22)
#define v170	((void*)startLabel+29)
#define CT_v173	((void*)startLabel+48)
#define FN_LAMBDA166	((void*)startLabel+76)
#define CT_v176	((void*)startLabel+108)
#define CF_LAMBDA166	((void*)startLabel+116)
#define ST_v171	((void*)startLabel+120)
#define ST_v175	((void*)startLabel+135)
#define ST_v174	((void*)startLabel+159)
extern Node TM_Maybe[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_Maybe_46fromJust[] = {
  useLabel(TM_Maybe)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v169: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v170: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v171)
,	/* CT_v173: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Maybe_46fromJust[] = {
  CAPTAG(useLabel(FN_Maybe_46fromJust),1)
, VAPTAG(useLabel(FN_LAMBDA166))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v176)
,	/* FN_LAMBDA166: (byte 0) */
  useLabel(TMSUB_Maybe)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v175)
, 50033
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA166: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA166))
,	/* ST_v171: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,102,114)
, bytes2word(111,109,74,117)
,	/* ST_v175: (byte 3) */
  bytes2word(115,116,0,77)
, bytes2word(97,121,98,101)
, bytes2word(46,102,114,111)
, bytes2word(109,74,117,115)
, bytes2word(116,58,32,78)
, bytes2word(111,116,104,105)
,	/* ST_v174: (byte 3) */
  bytes2word(110,103,0,77)
, bytes2word(97,121,98,101)
, bytes2word(46,102,114,111)
, bytes2word(109,74,117,115)
, bytes2word(116,58,53,58)
, bytes2word(51,51,45,53)
, bytes2word(58,53,55,0)
,};
