#include "newmacros.h"
#include "runtime.h"

#define v200	((void*)startLabel+22)
#define v211	((void*)startLabel+32)
#define v204	((void*)startLabel+36)
#define v205	((void*)startLabel+41)
#define v212	((void*)startLabel+52)
#define v209	((void*)startLabel+56)
#define v206	((void*)startLabel+68)
#define v197	((void*)startLabel+72)
#define CT_v213	((void*)startLabel+92)
#define CT_v214	((void*)startLabel+128)
#define CT_v215	((void*)startLabel+176)
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46System_46ExitCode[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Eq_46System_46ExitCode_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v200: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v211: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v204: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v205: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v212: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v209: (byte 4) */
  bytes2word(POP_I1,JUMP,14,0)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,1,EVAL,PUSH_P1)
,	/* v206: (byte 4) */
  bytes2word(2,EVAL,EQ_W,RETURN)
,	/* v197: (byte 4) */
  bytes2word(POP_I1,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v213: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46System_46ExitCode_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46System_46ExitCode_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Eq_46System_46ExitCode_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46System_46ExitCode_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46System_46ExitCode_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46System_46ExitCode)
, bytes2word(0,0,0,0)
, useLabel(CT_v215)
,};
Node FN_Prelude_46Eq_46System_46ExitCode[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v215: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46System_46ExitCode[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46System_46ExitCode))
, useLabel(F0_Prelude_46Eq_46System_46ExitCode_46_47_61)
, useLabel(F0_Prelude_46Eq_46System_46ExitCode_46_61_61)
,};
