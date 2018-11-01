#include "newmacros.h"
#include "runtime.h"

#define v240	((void*)startLabel+30)
#define v252	((void*)startLabel+46)
#define v244	((void*)startLabel+50)
#define v241	((void*)startLabel+68)
#define v245	((void*)startLabel+72)
#define v253	((void*)startLabel+88)
#define v249	((void*)startLabel+92)
#define v246	((void*)startLabel+110)
#define v237	((void*)startLabel+114)
#define CT_v254	((void*)startLabel+140)
#define CT_v256	((void*)startLabel+204)
#define CT_v258	((void*)startLabel+280)
#define ST_v257	((void*)startLabel+300)
#define ST_v255	((void*)startLabel+326)
#define ST_v250	((void*)startLabel+355)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v254)
,};
Node FN_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v240: (byte 2) */
  bytes2word(TOP(46),BOT(46),UNPACK,1)
, bytes2word(PUSH_ARG,4,ZAP_ARG_I2,ZAP_ARG)
, bytes2word(4,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v252: (byte 2) */
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
,	/* v253: (byte 4) */
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
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40003
, useLabel(ST_v250)
,	/* CT_v254: (byte 0) */
  HW(1,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_61_61),4)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v256)
,};
Node FN_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,3,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30026
, useLabel(ST_v255)
,	/* CT_v256: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_47_61),4)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_Prelude_46Eq_46Prelude_46Either[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 30026
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Either_46_61_61),2)
,	/* ST_v257: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,113,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(105,116,104,101)
,	/* ST_v255: (byte 2) */
  bytes2word(114,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,113)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,46)
,	/* ST_v250: (byte 3) */
  bytes2word(47,61,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(113,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,105)
, bytes2word(116,104,101,114)
, bytes2word(46,61,61,0)
,};
