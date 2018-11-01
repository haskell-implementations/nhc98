#include "newmacros.h"
#include "runtime.h"

#define CT_v215	((void*)startLabel+36)
#define FN_LAMBDA208	((void*)startLabel+68)
#define CT_v217	((void*)startLabel+116)
#define F0_LAMBDA208	((void*)startLabel+124)
#define FN_LAMBDA207	((void*)startLabel+152)
#define CT_v219	((void*)startLabel+200)
#define F0_LAMBDA207	((void*)startLabel+208)
#define FN_LAMBDA206	((void*)startLabel+236)
#define CT_v221	((void*)startLabel+284)
#define F0_LAMBDA206	((void*)startLabel+292)
#define FN_LAMBDA205	((void*)startLabel+320)
#define CT_v223	((void*)startLabel+368)
#define F0_LAMBDA205	((void*)startLabel+376)
#define ST_v214	((void*)startLabel+388)
#define ST_v216	((void*)startLabel+401)
#define ST_v218	((void*)startLabel+424)
#define ST_v220	((void*)startLabel+442)
#define ST_v222	((void*)startLabel+460)
extern Node TM_Monad[];
extern Node TMSUB_Monad[];
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,};
Node FN_Monad_46liftM3[] = {
  useLabel(TM_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM3[] = {
  CAPTAG(useLabel(FN_Monad_46liftM3),2)
, CAPTAG(useLabel(FN_LAMBDA208),3)
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v217)
,	/* FN_LAMBDA208: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40016
, useLabel(ST_v216)
,	/* CT_v217: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),5)
, CAPTAG(useLabel(FN_LAMBDA207),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v219)
,	/* FN_LAMBDA207: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,5)
, bytes2word(4,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40035
, useLabel(ST_v218)
,	/* CT_v219: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA207: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA207),5)
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v221)
,	/* FN_LAMBDA206: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,5)
, bytes2word(4,PUSH_P1,0,PUSH_ARG_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG)
, bytes2word(4,ZAP_ARG,5,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50035
, useLabel(ST_v220)
,	/* CT_v221: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),5)
, CAPTAG(useLabel(FN_LAMBDA205),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v223)
,	/* FN_LAMBDA205: (byte 0) */
  useLabel(TMSUB_Monad)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,2,HEAP_ARG_ARG,3)
, bytes2word(5,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_ARG,4)
, bytes2word(ZAP_ARG,5,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60035
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(2,5)
, 0
,	/* F0_LAMBDA205: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA205),5)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46return))
,	/* ST_v214: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,51)
,	/* ST_v216: (byte 1) */
  bytes2word(0,77,111,110)
, bytes2word(97,100,46,108)
, bytes2word(105,102,116,77)
, bytes2word(51,58,52,58)
, bytes2word(49,54,45,55)
,	/* ST_v218: (byte 4) */
  bytes2word(58,52,55,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,51)
, bytes2word(58,52,58,51)
,	/* ST_v220: (byte 2) */
  bytes2word(53,0,77,111)
, bytes2word(110,97,100,46)
, bytes2word(108,105,102,116)
, bytes2word(77,51,58,53)
,	/* ST_v222: (byte 4) */
  bytes2word(58,51,53,0)
, bytes2word(77,111,110,97)
, bytes2word(100,46,108,105)
, bytes2word(102,116,77,51)
, bytes2word(58,54,58,51)
, bytes2word(53,0,0,0)
,};
