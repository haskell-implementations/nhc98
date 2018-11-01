#include "newmacros.h"
#include "runtime.h"

#define CT_v214	((void*)startLabel+60)
#define FN_Prelude_46Prelude_46162_46mcons	((void*)startLabel+100)
#define CT_v216	((void*)startLabel+140)
#define F0_Prelude_46Prelude_46162_46mcons	((void*)startLabel+148)
#define FN_LAMBDA208	((void*)startLabel+172)
#define CT_v218	((void*)startLabel+212)
#define F0_LAMBDA208	((void*)startLabel+220)
#define FN_LAMBDA207	((void*)startLabel+244)
#define CT_v220	((void*)startLabel+292)
#define F0_LAMBDA207	((void*)startLabel+300)
#define ST_v213	((void*)startLabel+308)
#define ST_v215	((void*)startLabel+325)
#define ST_v217	((void*)startLabel+352)
#define ST_v219	((void*)startLabel+379)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];
extern Node FN_Prelude_46foldr[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v214)
,};
Node FN_Prelude_46sequence[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_IN3,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46sequence[] = {
  CAPTAG(useLabel(FN_Prelude_46sequence),1)
, CAPTAG(useLabel(FN_Prelude_46Prelude_46162_46mcons),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v216)
,	/* FN_Prelude_46Prelude_46162_46mcons: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(3,1,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50025
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(2,3)
, 0
,	/* F0_Prelude_46Prelude_46162_46mcons: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46162_46mcons),3)
, CAPTAG(useLabel(FN_LAMBDA208),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v218)
,	/* FN_LAMBDA208: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 50043
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),3)
, CAPTAG(useLabel(FN_LAMBDA207),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v220)
,	/* FN_LAMBDA207: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 50055
, useLabel(ST_v219)
,	/* CT_v220: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA207: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA207),3)
, VAPTAG(useLabel(FN_Prelude_46return))
,	/* ST_v213: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,101,113,117)
, bytes2word(101,110,99,101)
,	/* ST_v215: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,115,101,113)
, bytes2word(117,101,110,99)
, bytes2word(101,58,53,58)
, bytes2word(50,53,45,53)
,	/* ST_v217: (byte 4) */
  bytes2word(58,55,50,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,101,113,117)
, bytes2word(101,110,99,101)
, bytes2word(58,53,58,52)
, bytes2word(51,45,53,58)
,	/* ST_v219: (byte 3) */
  bytes2word(55,50,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,115)
, bytes2word(101,113,117,101)
, bytes2word(110,99,101,58)
, bytes2word(53,58,53,53)
, bytes2word(45,53,58,55)
, bytes2word(50,0,0,0)
,};
