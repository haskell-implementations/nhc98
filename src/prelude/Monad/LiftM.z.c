#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+36)
#define FN_LAMBDA186	((void*)startLabel+64)
#define CT_v193	((void*)startLabel+104)
#define F0_LAMBDA186	((void*)startLabel+112)
#define FN_LAMBDA185	((void*)startLabel+136)
#define CT_v195	((void*)startLabel+176)
#define F0_LAMBDA185	((void*)startLabel+184)
#define ST_v190	((void*)startLabel+196)
#define ST_v192	((void*)startLabel+208)
#define ST_v194	((void*)startLabel+230)
extern Node TM_Monad[];
extern Node TMSUB_Monad[];
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Monad_46liftM[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM[] = {
  CAPTAG(useLabel(FN_Monad_46liftM),2)
, CAPTAG(useLabel(FN_LAMBDA186),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v193)
,	/* FN_LAMBDA186: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40015
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),3)
, CAPTAG(useLabel(FN_LAMBDA185),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v195)
,	/* FN_LAMBDA185: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40029
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
,	/* ST_v190: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
,	/* ST_v192: (byte 4) */
  bytes2word(102,116,77,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,58)
, bytes2word(52,58,49,53)
, bytes2word(45,53,58,51)
,	/* ST_v194: (byte 2) */
  bytes2word(53,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(108,105,102,116)
, bytes2word(77,58,52,58)
, bytes2word(50,57,0,0)
,};
