#include "newmacros.h"
#include "runtime.h"

#define v200	((void*)startLabel+26)
#define v212	((void*)startLabel+36)
#define v204	((void*)startLabel+40)
#define v205	((void*)startLabel+44)
#define v213	((void*)startLabel+56)
#define v209	((void*)startLabel+60)
#define v206	((void*)startLabel+72)
#define v197	((void*)startLabel+76)
#define CT_v214	((void*)startLabel+104)
#define CT_v216	((void*)startLabel+152)
#define CT_v218	((void*)startLabel+212)
#define ST_v217	((void*)startLabel+232)
#define ST_v215	((void*)startLabel+259)
#define ST_v210	((void*)startLabel+289)
extern Node TM_System[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46System_46ExitCode[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,};
Node FN_Prelude_46Eq_46System_46ExitCode_46_61_61[] = {
  useLabel(TM_System)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v200: (byte 2) */
  bytes2word(TOP(22),BOT(22),POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v212: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v204: (byte 4) */
  bytes2word(POP_I1,JUMP,38,0)
,	/* v205: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,1,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v213: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v209: (byte 4) */
  bytes2word(POP_I1,JUMP,14,0)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,1,EVAL,PUSH_P1)
,	/* v206: (byte 4) */
  bytes2word(2,EVAL,EQ_W,RETURN)
,	/* v197: (byte 4) */
  bytes2word(POP_I1,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
, 60003
, useLabel(ST_v210)
,	/* CT_v214: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46System_46ExitCode_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46System_46ExitCode_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v216)
,};
Node FN_Prelude_46Eq_46System_46ExitCode_46_47_61[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 50010
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46System_46ExitCode_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46System_46ExitCode_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46System_46ExitCode)
, bytes2word(0,0,0,0)
, useLabel(CT_v218)
,};
Node FN_Prelude_46Eq_46System_46ExitCode[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 50010
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46System_46ExitCode[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46System_46ExitCode))
, useLabel(F0_Prelude_46Eq_46System_46ExitCode_46_47_61)
, useLabel(F0_Prelude_46Eq_46System_46ExitCode_46_61_61)
,	/* ST_v217: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,69,120)
, bytes2word(105,116,67,111)
,	/* ST_v215: (byte 3) */
  bytes2word(100,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,83,121)
, bytes2word(115,116,101,109)
, bytes2word(46,69,120,105)
, bytes2word(116,67,111,100)
, bytes2word(101,46,47,61)
,	/* ST_v210: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,113,46)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,69)
, bytes2word(120,105,116,67)
, bytes2word(111,100,101,46)
, bytes2word(61,61,0,0)
,};
