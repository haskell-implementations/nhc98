#include "newmacros.h"
#include "runtime.h"

#define CT_v226	((void*)startLabel+24)
#define FN_LAMBDA219	((void*)startLabel+60)
#define CT_v227	((void*)startLabel+100)
#define F0_LAMBDA219	((void*)startLabel+108)
#define FN_LAMBDA218	((void*)startLabel+140)
#define CT_v228	((void*)startLabel+180)
#define F0_LAMBDA218	((void*)startLabel+188)
#define FN_LAMBDA217	((void*)startLabel+220)
#define CT_v229	((void*)startLabel+260)
#define F0_LAMBDA217	((void*)startLabel+268)
#define FN_LAMBDA216	((void*)startLabel+300)
#define CT_v230	((void*)startLabel+340)
#define F0_LAMBDA216	((void*)startLabel+348)
#define FN_LAMBDA215	((void*)startLabel+380)
#define CT_v231	((void*)startLabel+420)
#define F0_LAMBDA215	((void*)startLabel+428)
extern Node FN_Prelude_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95apply4[];
extern Node FN_Prelude_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v226)
,};
Node FN_Monad_46liftM4[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v226: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Monad_46liftM4[] = {
  CAPTAG(useLabel(FN_Monad_46liftM4),2)
, CAPTAG(useLabel(FN_LAMBDA219),4)
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v227)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(4,5,HEAP_ARG_ARG,6)
, bytes2word(1,HEAP_ARG,2,PUSH_P1)
, bytes2word(0,PUSH_ARG_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_ARG)
, bytes2word(5,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v227: (byte 0) */
  HW(2,6)
, 0
,	/* F0_LAMBDA219: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA219),6)
, CAPTAG(useLabel(FN_LAMBDA218),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v228)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,4)
, bytes2word(6,HEAP_ARG,5,PUSH_P1)
, bytes2word(0,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,4,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_ARG)
, bytes2word(5,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(2,6)
, 0
,	/* F0_LAMBDA218: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA218),6)
, CAPTAG(useLabel(FN_LAMBDA217),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v229)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,4)
, bytes2word(6,HEAP_ARG,5,PUSH_P1)
, bytes2word(0,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,3,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_ARG)
, bytes2word(5,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v229: (byte 0) */
  HW(2,6)
, 0
,	/* F0_LAMBDA217: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA217),6)
, CAPTAG(useLabel(FN_LAMBDA216),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v230)
,	/* FN_LAMBDA216: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,3,HEAP_ARG_ARG,4)
, bytes2word(6,HEAP_ARG,5,PUSH_P1)
, bytes2word(0,PUSH_ARG_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_ARG,4,ZAP_ARG)
, bytes2word(5,ZAP_ARG,6,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v230: (byte 0) */
  HW(2,6)
, 0
,	/* F0_LAMBDA216: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA216),6)
, CAPTAG(useLabel(FN_LAMBDA215),1)
, VAPTAG(useLabel(FN_Prelude_46_62_62_61))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v231)
,	/* FN_LAMBDA215: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(5,2,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_ARG,6,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_ARG,4,ZAP_ARG,5)
, bytes2word(ZAP_ARG,6,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v231: (byte 0) */
  HW(2,6)
, 0
,	/* F0_LAMBDA215: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA215),6)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, VAPTAG(useLabel(FN_Prelude_46return))
,};
