#include "newmacros.h"
#include "runtime.h"

#define v215	((void*)startLabel+22)
#define v226	((void*)startLabel+32)
#define v219	((void*)startLabel+36)
#define v220	((void*)startLabel+41)
#define v227	((void*)startLabel+52)
#define v224	((void*)startLabel+56)
#define v221	((void*)startLabel+74)
#define v212	((void*)startLabel+78)
#define CT_v228	((void*)startLabel+96)
#define CT_v229	((void*)startLabel+140)
#define CT_v230	((void*)startLabel+196)
extern Node FN_Prelude_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46Maybe[];
extern Node FN_Prelude_46_95_46_47_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v228)
,};
Node FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v215: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,PUSH_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v226: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v219: (byte 4) */
  bytes2word(POP_I1,JUMP,44,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v220: (byte 1) */
  bytes2word(RETURN,UNPACK,1,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v227: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v224: (byte 4) */
  bytes2word(POP_I1,JUMP,20,0)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(PUSH_P1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
,	/* v221: (byte 2) */
  bytes2word(2,RETURN_EVAL,POP_I1,JUMP)
,	/* v212: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v228: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Maybe_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v229)
,};
Node FN_Prelude_46Eq_46Prelude_46Maybe_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Maybe_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe_46_47_61),3)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe))
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v230)
,};
Node FN_Prelude_46Eq_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v230: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46Maybe[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe),1)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe_46_47_61),2)
, CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Maybe_46_61_61),2)
,};
