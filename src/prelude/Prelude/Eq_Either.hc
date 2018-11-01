#include "newmacros.h"
#include "runtime.h"

#define v240	((void*)startLabel+26)
#define v251	((void*)startLabel+42)
#define v244	((void*)startLabel+46)
#define v241	((void*)startLabel+64)
#define v245	((void*)startLabel+68)
#define v252	((void*)startLabel+84)
#define v249	((void*)startLabel+88)
#define v246	((void*)startLabel+106)
#define v237	((void*)startLabel+110)
#define CT_v253	((void*)startLabel+128)
#define CT_v254	((void*)startLabel+180)
#define CT_v255	((void*)startLabel+244)
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v253)
,};
Node FN_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v240: (byte 2) */
  bytes2word(TOP(46),BOT(46),UNPACK,1)
, bytes2word(PUSH_ARG,4,ZAP_ARG_I2,ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v251: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v244: (byte 2) */
  bytes2word(20,0,UNPACK,1)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,3,EVAL)
,	/* v241: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
,	/* v245: (byte 4) */
  bytes2word(POP_I1,JUMP,44,0)
, bytes2word(UNPACK,1,PUSH_ARG,4)
, bytes2word(ZAP_ARG_I1,ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v252: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v249: (byte 4) */
  bytes2word(POP_I1,JUMP,20,0)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
,	/* v246: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,JUMP)
,	/* v237: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v253: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_61_61),4)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v254: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_47_61),4)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v255)
,};
Node FN_Prelude_46Eq_46Prelude_46Either[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v255: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_61_61),2)
,};
