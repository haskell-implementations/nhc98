#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+72)
#define ST_v180	((void*)startLabel+108)
#define PS_v181	((void*)startLabel+120)
#define PS_v179	((void*)startLabel+132)
extern Node F0_Prelude_46id[];
extern Node FN_Prelude_46_62_62_61[];
extern Node PM_Monad[];
extern Node PC_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Monad_46join[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,7,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v180)
,	/* CT_v182: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Monad_46join[] = {
  CAPTAG(useLabel(FN_Monad_46join),2)
, useLabel(PS_v179)
, 0
, 0
, 0
, useLabel(F0_Prelude_46id)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
,};
Node PP_Monad_46join[] = {
 };
Node PC_Monad_46join[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,106,111)
, bytes2word(105,110,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46join)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46join)
, useLabel(PC_Monad_46join)
,};
