#include "newmacros.h"
#include "runtime.h"

#define v208	((void*)startLabel+28)
#define v209	((void*)startLabel+45)
#define CT_v217	((void*)startLabel+196)
#define FN_LAMBDA203	((void*)startLabel+256)
#define CT_v221	((void*)startLabel+308)
#define F0_LAMBDA203	((void*)startLabel+316)
#define ST_v211	((void*)startLabel+340)
#define PP_LAMBDA203	((void*)startLabel+352)
#define PC_LAMBDA203	((void*)startLabel+352)
#define ST_v219	((void*)startLabel+352)
#define PS_v214	((void*)startLabel+376)
#define PS_v216	((void*)startLabel+388)
#define PS_v213	((void*)startLabel+400)
#define PS_v210	((void*)startLabel+412)
#define PS_v215	((void*)startLabel+424)
#define PS_v220	((void*)startLabel+436)
#define PS_v218	((void*)startLabel+448)
extern Node FN_Prelude_46return[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_62_62_61[];
extern Node PM_Monad[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46_62_62_61[];
extern Node PC_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v217)
,};
Node FN_Monad_46foldM[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v208: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(21),BOT(21))
, bytes2word(POP_I1,PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v209: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,3)
, bytes2word(PUSH_P1,0,PUSH_P1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,6,ZAP_STACK_P1)
, bytes2word(5,ZAP_STACK_P1,4,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v216)
, 0
, 0
, 0
, 0
, useLabel(PS_v215)
, 0
, 0
, 0
, 0
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v211)
,	/* CT_v217: (byte 0) */
  HW(4,4)
, 0
,};
Node F0_Monad_46foldM[] = {
  CAPTAG(useLabel(FN_Monad_46foldM),4)
, useLabel(PS_v210)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA203),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v221)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,4,3,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v220)
, 0
, 0
, 0
, 0
, 50031
, useLabel(ST_v219)
,	/* CT_v221: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA203: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA203),4)
, useLabel(PS_v218)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Monad_46foldM))
,};
Node PP_Monad_46foldM[] = {
 };
Node PC_Monad_46foldM[] = {
 	/* ST_v211: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,102,111)
,	/* PP_LAMBDA203: (byte 4) */
 	/* PC_LAMBDA203: (byte 4) */
 	/* ST_v219: (byte 4) */
  bytes2word(108,100,77,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,102,111)
, bytes2word(108,100,77,58)
, bytes2word(53,58,51,49)
, bytes2word(45,53,58,52)
, bytes2word(55,0,0,0)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46foldM)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46foldM)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46foldM)
, useLabel(PC_Prelude_46return)
,	/* PS_v210: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46foldM)
, useLabel(PC_Monad_46foldM)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46foldM)
, useLabel(PC_LAMBDA203)
,	/* PS_v220: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA203)
, useLabel(PC_Monad_46foldM)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA203)
, useLabel(PC_LAMBDA203)
,};
