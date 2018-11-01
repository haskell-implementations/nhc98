#include "newmacros.h"
#include "runtime.h"

#define CT_v238	((void*)startLabel+28)
#define CT_v239	((void*)startLabel+72)
#define CT_v240	((void*)startLabel+120)
#define CT_v241	((void*)startLabel+164)
#define CT_v242	((void*)startLabel+216)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46concat[];
extern Node FN_Prelude_46_95_46_62_62[];
extern Node CF_Prelude_46Monad_46Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_Prelude_46Monad_46Prelude_46_91_93_46fail[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v238: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46_91_93_46fail[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46_91_93_46fail),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v239)
,};
Node FN_Prelude_46Monad_46Prelude_46_91_93_46return[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v239: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46_91_93_46return[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46_91_93_46return),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v240)
,};
Node FN_Prelude_46Monad_46Prelude_46_91_93_46_62_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v240: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46_91_93_46_62_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46_91_93_46_62_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46concat))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,};
Node FN_Prelude_46Monad_46Prelude_46_91_93_46_62_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v241: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Monad_46Prelude_46_91_93_46_62_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46_91_93_46_62_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_62))
, useLabel(CF_Prelude_46Monad_46Prelude_46_91_93)
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,};
Node FN_Prelude_46Monad_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v242: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Monad_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Prelude_46Monad_46Prelude_46_91_93))
, useLabel(F0_Prelude_46Monad_46Prelude_46_91_93_46_62_62_61)
, useLabel(F0_Prelude_46Monad_46Prelude_46_91_93_46_62_62)
, useLabel(F0_Prelude_46Monad_46Prelude_46_91_93_46fail)
, useLabel(F0_Prelude_46Monad_46Prelude_46_91_93_46return)
,};
