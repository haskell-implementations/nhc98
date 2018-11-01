#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+64)
#define FN_LAMBDA186	((void*)startLabel+108)
#define CT_v198	((void*)startLabel+196)
#define F0_LAMBDA186	((void*)startLabel+204)
#define FN_LAMBDA185	((void*)startLabel+244)
#define CT_v203	((void*)startLabel+332)
#define F0_LAMBDA185	((void*)startLabel+340)
#define ST_v191	((void*)startLabel+368)
#define PP_LAMBDA186	((void*)startLabel+380)
#define PC_LAMBDA186	((void*)startLabel+380)
#define ST_v195	((void*)startLabel+380)
#define PP_LAMBDA185	((void*)startLabel+402)
#define PC_LAMBDA185	((void*)startLabel+402)
#define ST_v200	((void*)startLabel+402)
#define PS_v190	((void*)startLabel+420)
#define PS_v192	((void*)startLabel+432)
#define PS_v201	((void*)startLabel+444)
#define PS_v202	((void*)startLabel+456)
#define PS_v199	((void*)startLabel+468)
#define PS_v197	((void*)startLabel+480)
#define PS_v196	((void*)startLabel+492)
#define PS_v194	((void*)startLabel+504)
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46return[];
extern Node PM_Monad[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46return[];
extern Node PC_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_Monad_46liftM[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v191)
,	/* CT_v193: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM[] = {
  CAPTAG(useLabel(FN_Monad_46liftM),2)
, useLabel(PS_v190)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA186),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v198)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_P1,0,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, 40015
, useLabel(ST_v195)
,	/* CT_v198: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),3)
, useLabel(PS_v194)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA185),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v203)
,	/* FN_LAMBDA185: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v202)
, 0
, 0
, 0
, 0
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, 40029
, useLabel(ST_v200)
,	/* CT_v203: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),3)
, useLabel(PS_v199)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46return))
,};
Node PP_Monad_46liftM[] = {
 };
Node PC_Monad_46liftM[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
,	/* PP_LAMBDA186: (byte 4) */
 	/* PC_LAMBDA186: (byte 4) */
 	/* ST_v195: (byte 4) */
  bytes2word(102,116,77,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,58)
, bytes2word(52,58,49,53)
, bytes2word(45,53,58,51)
,	/* PP_LAMBDA185: (byte 2) */
 	/* PC_LAMBDA185: (byte 2) */
 	/* ST_v200: (byte 2) */
  bytes2word(53,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(108,105,102,116)
, bytes2word(77,58,52,58)
, bytes2word(50,57,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46liftM)
, useLabel(PC_Monad_46liftM)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46liftM)
, useLabel(PC_LAMBDA186)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA185)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA185)
, useLabel(PC_Prelude_46return)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA185)
, useLabel(PC_LAMBDA185)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA186)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA186)
, useLabel(PC_LAMBDA185)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA186)
, useLabel(PC_LAMBDA186)
,};
