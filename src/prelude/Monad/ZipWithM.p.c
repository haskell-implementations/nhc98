#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+108)
#define ST_v193	((void*)startLabel+144)
#define PS_v194	((void*)startLabel+160)
#define PS_v195	((void*)startLabel+172)
#define PS_v192	((void*)startLabel+184)
extern Node FN_Prelude_46zipWith[];
extern Node FN_Prelude_46sequence[];
extern Node PM_Monad[];
extern Node PC_Prelude_46zipWith[];
extern Node PC_Prelude_46sequence[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v196)
,};
Node FN_Monad_46zipWithM[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_ARG,4,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v193)
,	/* CT_v196: (byte 0) */
  HW(2,4)
, 0
,};
Node F0_Monad_46zipWithM[] = {
  CAPTAG(useLabel(FN_Monad_46zipWithM),4)
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46zipWith))
, VAPTAG(useLabel(FN_Prelude_46sequence))
,};
Node PP_Monad_46zipWithM[] = {
 };
Node PC_Monad_46zipWithM[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,122,105)
, bytes2word(112,87,105,116)
, bytes2word(104,77,0,0)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46zipWithM)
, useLabel(PC_Prelude_46zipWith)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46zipWithM)
, useLabel(PC_Prelude_46sequence)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46zipWithM)
, useLabel(PC_Monad_46zipWithM)
,};
