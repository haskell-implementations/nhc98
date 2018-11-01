#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+60)
#define ST_v183	((void*)startLabel+96)
#define PS_v184	((void*)startLabel+108)
#define PS_v182	((void*)startLabel+120)
extern Node FN_Monad_46liftM2[];
extern Node F0_Prelude_46_36[];
extern Node PM_Monad[];
extern Node PC_Monad_46liftM2[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v185)
,};
Node FN_Monad_46ap[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v183)
,	/* CT_v185: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Monad_46ap[] = {
  CAPTAG(useLabel(FN_Monad_46ap),1)
, useLabel(PS_v182)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Monad_46liftM2))
, useLabel(F0_Prelude_46_36)
,};
Node PP_Monad_46ap[] = {
 };
Node PC_Monad_46ap[] = {
 	/* ST_v183: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,97,112)
, bytes2word(0,0,0,0)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46ap)
, useLabel(PC_Monad_46liftM2)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46ap)
, useLabel(PC_Monad_46ap)
,};
