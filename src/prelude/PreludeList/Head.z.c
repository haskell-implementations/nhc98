#include "newmacros.h"
#include "runtime.h"

#define v171	((void*)startLabel+22)
#define v172	((void*)startLabel+29)
#define CT_v175	((void*)startLabel+48)
#define FN_LAMBDA168	((void*)startLabel+76)
#define CT_v178	((void*)startLabel+108)
#define CF_LAMBDA168	((void*)startLabel+116)
#define ST_v173	((void*)startLabel+120)
#define ST_v176	((void*)startLabel+133)
#define ST_v177	((void*)startLabel+156)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_Prelude_46head[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v171: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v172: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v173)
,	/* CT_v175: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46head[] = {
  CAPTAG(useLabel(FN_Prelude_46head),1)
, VAPTAG(useLabel(FN_LAMBDA168))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v178)
,	/* FN_LAMBDA168: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v177)
, 50025
, useLabel(ST_v176)
,	/* CT_v178: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA168: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA168))
,	/* ST_v173: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(104,101,97,100)
,	/* ST_v176: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,104,101,97)
, bytes2word(100,58,53,58)
, bytes2word(50,53,45,53)
,	/* ST_v177: (byte 4) */
  bytes2word(58,53,52,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(104,101,97,100)
, bytes2word(58,32,101,109)
, bytes2word(112,116,121,32)
, bytes2word(108,105,115,116)
, bytes2word(0,0,0,0)
,};
