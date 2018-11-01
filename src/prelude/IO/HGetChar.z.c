#include "newmacros.h"
#include "runtime.h"

#define CT_v211	((void*)startLabel+32)
#define CT_v213	((void*)startLabel+76)
#define FN_LAMBDA208	((void*)startLabel+104)
#define CT_v215	((void*)startLabel+132)
#define F0_LAMBDA208	((void*)startLabel+140)
#define FN_IO_46Prelude_46172_46input	((void*)startLabel+164)
#define v216	((void*)startLabel+194)
#define CT_v219	((void*)startLabel+240)
#define F0_IO_46Prelude_46172_46input	((void*)startLabel+248)
#define FN_LAMBDA207	((void*)startLabel+276)
#define CT_v222	((void*)startLabel+308)
#define CF_LAMBDA207	((void*)startLabel+316)
#define ST_v210	((void*)startLabel+320)
#define ST_v212	((void*)startLabel+333)
#define ST_v214	((void*)startLabel+345)
#define ST_v218	((void*)startLabel+369)
#define ST_v220	((void*)startLabel+392)
#define ST_v221	((void*)startLabel+416)
extern Node TM_IO[];
extern Node TMSUB_IO[];
extern Node CF_Prelude_46Enum_46Prelude_46Char[];
extern Node FN_Prelude_46toEnum[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v211)
,};
Node FN_IO_46cHGetChar[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(HGETC,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 280001
, useLabel(ST_v210)
,	/* CT_v211: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46cHGetChar[] = {
  CAPTAG(useLabel(FN_IO_46cHGetChar),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_IO_46hGetChar[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hGetChar[] = {
  CAPTAG(useLabel(FN_IO_46hGetChar),1)
, CAPTAG(useLabel(FN_LAMBDA208),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,	/* FN_LAMBDA208: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 190021
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),2)
, VAPTAG(useLabel(FN_IO_46Prelude_46172_46input))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v219)
,	/* FN_IO_46Prelude_46172_46input: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,PUSH_INT_P1,0,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,LT_W,JUMPFALSE)
, bytes2word(14,0,HEAP_CVAL_I4,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
,	/* v216: (byte 2) */
  bytes2word(4,RETURN,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,1,0)
, CONSTR(1,2,0)
, 210003
, useLabel(ST_v218)
,	/* CT_v219: (byte 0) */
  HW(4,2)
, 0
,	/* F0_IO_46Prelude_46172_46input: (byte 0) */
  CAPTAG(useLabel(FN_IO_46Prelude_46172_46input),2)
, VAPTAG(useLabel(FN_IO_46cHGetChar))
, VAPTAG(useLabel(FN_LAMBDA207))
, VAPTAG(useLabel(FN_Prelude_46toEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v222)
,	/* FN_LAMBDA207: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v221)
, 230033
, useLabel(ST_v220)
,	/* CT_v222: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA207: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA207))
,	/* ST_v210: (byte 0) */
  bytes2word(73,79,46,99)
, bytes2word(72,71,101,116)
, bytes2word(67,104,97,114)
,	/* ST_v212: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(67,104,97,114)
,	/* ST_v214: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(67,104,97,114)
, bytes2word(58,49,57,58)
, bytes2word(50,49,45,49)
, bytes2word(57,58,51,55)
,	/* ST_v218: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,71,101,116)
, bytes2word(67,104,97,114)
, bytes2word(58,50,49,58)
, bytes2word(51,45,50,53)
,	/* ST_v220: (byte 4) */
  bytes2word(58,51,51,0)
, bytes2word(73,79,46,104)
, bytes2word(71,101,116,67)
, bytes2word(104,97,114,58)
, bytes2word(50,51,58,51)
, bytes2word(51,45,50,51)
,	/* ST_v221: (byte 4) */
  bytes2word(58,52,50,0)
, bytes2word(104,71,101,116)
, bytes2word(67,104,97,114)
, bytes2word(0,0,0,0)
,};
