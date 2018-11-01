#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+64)
#define FN_LAMBDA197	((void*)startLabel+112)
#define CT_v210	((void*)startLabel+204)
#define F0_LAMBDA197	((void*)startLabel+212)
#define FN_LAMBDA196	((void*)startLabel+256)
#define CT_v215	((void*)startLabel+348)
#define F0_LAMBDA196	((void*)startLabel+356)
#define FN_LAMBDA195	((void*)startLabel+400)
#define CT_v220	((void*)startLabel+492)
#define F0_LAMBDA195	((void*)startLabel+500)
#define ST_v203	((void*)startLabel+528)
#define PP_LAMBDA197	((void*)startLabel+541)
#define PC_LAMBDA197	((void*)startLabel+541)
#define ST_v207	((void*)startLabel+541)
#define PP_LAMBDA196	((void*)startLabel+564)
#define PC_LAMBDA196	((void*)startLabel+564)
#define ST_v212	((void*)startLabel+564)
#define PP_LAMBDA195	((void*)startLabel+582)
#define PC_LAMBDA195	((void*)startLabel+582)
#define ST_v217	((void*)startLabel+582)
#define PS_v202	((void*)startLabel+600)
#define PS_v204	((void*)startLabel+612)
#define PS_v218	((void*)startLabel+624)
#define PS_v219	((void*)startLabel+636)
#define PS_v216	((void*)startLabel+648)
#define PS_v214	((void*)startLabel+660)
#define PS_v213	((void*)startLabel+672)
#define PS_v211	((void*)startLabel+684)
#define PS_v209	((void*)startLabel+696)
#define PS_v208	((void*)startLabel+708)
#define PS_v206	((void*)startLabel+720)
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46return[];
extern Node PM_Monad[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46return[];
extern Node PC_Prelude_46_62_62_61[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v205)
,};
Node FN_Monad_46liftM2[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v204)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v203)
,	/* CT_v205: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM2[] = {
  CAPTAG(useLabel(FN_Monad_46liftM2),2)
, useLabel(PS_v202)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA197),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v210)
,	/* FN_LAMBDA197: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,4,1)
, bytes2word(HEAP_ARG,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v209)
, 0
, 0
, 0
, 0
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, 40016
, useLabel(ST_v207)
,	/* CT_v210: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),4)
, useLabel(PS_v206)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA196),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v215)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,4)
, bytes2word(HEAP_ARG,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 40033
, useLabel(ST_v212)
,	/* CT_v215: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),4)
, useLabel(PS_v211)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA195),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v220)
,	/* FN_LAMBDA195: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,3,2)
, bytes2word(HEAP_ARG,4,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, 50033
, useLabel(ST_v217)
,	/* CT_v220: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA195: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA195),4)
, useLabel(PS_v216)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46return))
,};
Node PP_Monad_46liftM2[] = {
 };
Node PC_Monad_46liftM2[] = {
 	/* ST_v203: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,50)
,	/* PP_LAMBDA197: (byte 1) */
 	/* PC_LAMBDA197: (byte 1) */
 	/* ST_v207: (byte 1) */
  bytes2word(0,77,111,110)
, bytes2word(97,100,46,108)
, bytes2word(105,102,116,77)
, bytes2word(50,58,52,58)
, bytes2word(49,54,45,54)
,	/* PP_LAMBDA196: (byte 4) */
 	/* PC_LAMBDA196: (byte 4) */
 	/* ST_v212: (byte 4) */
  bytes2word(58,52,50,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,50)
, bytes2word(58,52,58,51)
,	/* PP_LAMBDA195: (byte 2) */
 	/* PC_LAMBDA195: (byte 2) */
 	/* ST_v217: (byte 2) */
  bytes2word(51,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(108,105,102,116)
, bytes2word(77,50,58,53)
, bytes2word(58,51,51,0)
,	/* PS_v202: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46liftM2)
, useLabel(PC_Monad_46liftM2)
,	/* PS_v204: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46liftM2)
, useLabel(PC_LAMBDA197)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA195)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v219: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA195)
, useLabel(PC_Prelude_46return)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA195)
, useLabel(PC_LAMBDA195)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA196)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA196)
, useLabel(PC_LAMBDA195)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA196)
, useLabel(PC_LAMBDA196)
,	/* PS_v209: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA197)
, useLabel(PC_Prelude_46_62_62_61)
,	/* PS_v208: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA197)
, useLabel(PC_LAMBDA196)
,	/* PS_v206: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_LAMBDA197)
, useLabel(PC_LAMBDA197)
,};
