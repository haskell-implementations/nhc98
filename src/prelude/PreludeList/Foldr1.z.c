#include "newmacros.h"
#include "runtime.h"

#define v182	((void*)startLabel+26)
#define v183	((void*)startLabel+33)
#define v190	((void*)startLabel+44)
#define v187	((void*)startLabel+48)
#define v184	((void*)startLabel+52)
#define CT_v191	((void*)startLabel+88)
#define FN_LAMBDA178	((void*)startLabel+120)
#define CT_v194	((void*)startLabel+152)
#define CF_LAMBDA178	((void*)startLabel+160)
#define ST_v188	((void*)startLabel+164)
#define ST_v192	((void*)startLabel+179)
#define ST_v193	((void*)startLabel+204)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46foldr1[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v182: (byte 2) */
  bytes2word(TOP(11),BOT(11),POP_I1,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
,	/* v183: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v190: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v187: (byte 4) */
  bytes2word(POP_I1,JUMP,6,0)
,	/* v184: (byte 4) */
  bytes2word(POP_I1,PUSH_P1,0,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_I2,PUSH_P1,0,PUSH_P1)
, bytes2word(2,PUSH_ZAP_ARG_I1,ZAP_STACK_P1,5)
, bytes2word(ZAP_STACK_P1,4,ZAP_STACK_P1,3)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v188)
,	/* CT_v191: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46foldr1[] = {
  CAPTAG(useLabel(FN_Prelude_46foldr1),2)
, VAPTAG(useLabel(FN_LAMBDA178))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46foldr1))
, bytes2word(0,0,0,0)
, useLabel(CT_v194)
,	/* FN_LAMBDA178: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v193)
, 60026
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA178: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA178))
,	/* ST_v188: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,111,108,100)
,	/* ST_v192: (byte 3) */
  bytes2word(114,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,102)
, bytes2word(111,108,100,114)
, bytes2word(49,58,54,58)
, bytes2word(50,54,45,54)
,	/* ST_v193: (byte 4) */
  bytes2word(58,53,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(102,111,108,100)
, bytes2word(114,49,58,32)
, bytes2word(101,109,112,116)
, bytes2word(121,32,108,105)
, bytes2word(115,116,0,0)
,};
