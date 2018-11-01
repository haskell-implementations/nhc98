#include "newmacros.h"
#include "runtime.h"

#define CT_v203	((void*)startLabel+36)
#define FN_LAMBDA197	((void*)startLabel+68)
#define CT_v205	((void*)startLabel+112)
#define F0_LAMBDA197	((void*)startLabel+120)
#define FN_LAMBDA196	((void*)startLabel+148)
#define CT_v207	((void*)startLabel+192)
#define F0_LAMBDA196	((void*)startLabel+200)
#define FN_LAMBDA195	((void*)startLabel+228)
#define CT_v209	((void*)startLabel+272)
#define F0_LAMBDA195	((void*)startLabel+280)
#define ST_v202	((void*)startLabel+292)
#define ST_v204	((void*)startLabel+305)
#define ST_v206	((void*)startLabel+328)
#define ST_v208	((void*)startLabel+346)
extern Node TM_Monad[];
extern Node TMSUB_Monad[];
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v203)
,};
Node FN_Monad_46liftM2[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM2[] = {
  CAPTAG(useLabel(FN_Monad_46liftM2),2)
, CAPTAG(useLabel(FN_LAMBDA197),2)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v205)
,	/* FN_LAMBDA197: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,1,HEAP_ARG,2)
, bytes2word(PUSH_P1,0,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40016
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA197: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA197),4)
, CAPTAG(useLabel(FN_LAMBDA196),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v207)
,	/* FN_LAMBDA196: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,4,HEAP_ARG,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40033
, useLabel(ST_v206)
,	/* CT_v207: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),4)
, CAPTAG(useLabel(FN_LAMBDA195),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v209)
,	/* FN_LAMBDA195: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(3,2,HEAP_ARG,4)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50033
, useLabel(ST_v208)
,	/* CT_v209: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA195: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA195),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46return))
,	/* ST_v202: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,50)
,	/* ST_v204: (byte 1) */
  bytes2word(0,77,111,110)
, bytes2word(97,100,46,108)
, bytes2word(105,102,116,77)
, bytes2word(50,58,52,58)
, bytes2word(49,54,45,54)
,	/* ST_v206: (byte 4) */
  bytes2word(58,52,50,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,50)
, bytes2word(58,52,58,51)
,	/* ST_v208: (byte 2) */
  bytes2word(51,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(108,105,102,116)
, bytes2word(77,50,58,53)
, bytes2word(58,51,51,0)
,};
