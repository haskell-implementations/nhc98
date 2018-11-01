#include "newmacros.h"
#include "runtime.h"

#define v177	((void*)startLabel+21)
#define CT_v182	((void*)startLabel+80)
#define ST_v180	((void*)startLabel+116)
#define PS_v181	((void*)startLabel+128)
#define PS_v179	((void*)startLabel+140)
extern Node C0__40_41[];
extern Node FN_Prelude_46return[];
extern Node PM_Monad[];
extern Node PC_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v182)
,};
Node FN_Monad_46when[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I3)
,	/* v177: (byte 1) */
  bytes2word(RETURN_EVAL,PUSH_CVAL_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
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
  HW(2,3)
, 0
,};
Node F0_Monad_46when[] = {
  CAPTAG(useLabel(FN_Monad_46when),3)
, useLabel(PS_v179)
, 0
, 0
, 0
, useLabel(C0__40_41)
, VAPTAG(useLabel(FN_Prelude_46return))
,};
Node PP_Monad_46when[] = {
 };
Node PC_Monad_46when[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,119,104)
, bytes2word(101,110,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46when)
, useLabel(PC_Prelude_46return)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46when)
, useLabel(PC_Monad_46when)
,};
