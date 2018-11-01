#include "newmacros.h"
#include "runtime.h"

#define CT_v237	((void*)startLabel+28)
#define CT_v238	((void*)startLabel+68)
#define v240	((void*)startLabel+102)
#define v241	((void*)startLabel+107)
#define CT_v243	((void*)startLabel+132)
#define CT_v244	((void*)startLabel+168)
#define CT_v245	((void*)startLabel+220)
extern Node FN_Prelude_46_95_46_62_62[];
extern Node CF_Prelude_46Monad_46Prelude_46Maybe[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v237)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46fail[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v237: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46fail),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46return[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v238: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46return),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v243)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v240: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v241: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(1,PUSH_P1,0,PUSH_ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v243: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v244)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v244: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe_46_62_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_62))
, useLabel(CF_Prelude_46Monad_46Prelude_46Maybe)
, bytes2word(0,0,0,0)
, useLabel(CT_v245)
,};
Node FN_Prelude_46Monad_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v245: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46Maybe))
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46_62_62)
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46fail)
, useLabel(F0_Prelude_46Monad_46Prelude_46Maybe_46return)
,};
