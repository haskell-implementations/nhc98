#include "newmacros.h"
#include "runtime.h"

#define v182	((void*)startLabel+45)
#define CT_v189	((void*)startLabel+136)
#define ST_v185	((void*)startLabel+180)
#define PS_v188	((void*)startLabel+192)
#define PS_v187	((void*)startLabel+204)
#define PS_v184	((void*)startLabel+216)
#define PS_v186	((void*)startLabel+228)
extern Node C0__40_41[];
extern Node FN_Monad_46MonadPlus_46Prelude_46Monad[];
extern Node FN_Prelude_46return[];
extern Node FN_Monad_46mzero[];
extern Node PM_Monad[];
extern Node PC_Monad_46mzero[];
extern Node PC_Prelude_46return[];
extern Node PC_Monad_46MonadPlus_46Prelude_46Monad[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,};
Node FN_Monad_46guard[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,28,0,PUSH_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v182: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v185)
,	/* CT_v189: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Monad_46guard[] = {
  CAPTAG(useLabel(FN_Monad_46guard),2)
, useLabel(PS_v184)
, 0
, 0
, 0
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_Monad_46MonadPlus_46Prelude_46Monad))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_Monad_46mzero))
,};
Node PP_Monad_46guard[] = {
 };
Node PC_Monad_46guard[] = {
 	/* ST_v185: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,103,117)
, bytes2word(97,114,100,0)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46guard)
, useLabel(PC_Monad_46mzero)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46guard)
, useLabel(PC_Prelude_46return)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46guard)
, useLabel(PC_Monad_46guard)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46guard)
, useLabel(PC_Monad_46MonadPlus_46Prelude_46Monad)
,};
