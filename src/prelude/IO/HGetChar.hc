#include "newmacros.h"
#include "runtime.h"

#define CT_v210	((void*)startLabel+20)
#define CT_v211	((void*)startLabel+52)
#define FN_LAMBDA208	((void*)startLabel+80)
#define CT_v212	((void*)startLabel+96)
#define F0_LAMBDA208	((void*)startLabel+104)
#define FN_IO_46Prelude_46172_46input	((void*)startLabel+128)
#define v213	((void*)startLabel+155)
#define CT_v215	((void*)startLabel+192)
#define F0_IO_46Prelude_46172_46input	((void*)startLabel+200)
#define FN_LAMBDA207	((void*)startLabel+228)
#define CT_v217	((void*)startLabel+248)
#define CF_LAMBDA207	((void*)startLabel+256)
#define ST_v216	((void*)startLabel+260)
extern Node CF_Prelude_46Enum_46Prelude_46Char[];
extern Node FN_Prelude_46toEnum[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v210)
,};
Node FN_IO_46cHGetChar[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(HGETC,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v210: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46cHGetChar[] = {
  CAPTAG(useLabel(FN_IO_46cHGetChar),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,};
Node FN_IO_46hGetChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hGetChar[] = {
  CAPTAG(useLabel(FN_IO_46hGetChar),1)
, CAPTAG(useLabel(FN_LAMBDA208),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v212)
,	/* FN_LAMBDA208: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v212: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA208: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA208),2)
, VAPTAG(useLabel(FN_IO_46Prelude_46172_46input))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,	/* FN_IO_46Prelude_46172_46input: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,PUSH_INT_P1,0,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,LT_W,JUMPFALSE)
, bytes2word(15,0,HEAP_CVAL_I4,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,2,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v213: (byte 3) */
  bytes2word(HEAP_OFF_N1,4,RETURN,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, CONSTR(0,1,0)
, CONSTR(1,2,0)
,	/* CT_v215: (byte 0) */
  HW(4,2)
, 0
,	/* F0_IO_46Prelude_46172_46input: (byte 0) */
  CAPTAG(useLabel(FN_IO_46Prelude_46172_46input),2)
, VAPTAG(useLabel(FN_IO_46cHGetChar))
, VAPTAG(useLabel(FN_LAMBDA207))
, VAPTAG(useLabel(FN_Prelude_46toEnum))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v217)
,	/* FN_LAMBDA207: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v216)
,	/* CT_v217: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA207: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA207))
,	/* ST_v216: (byte 0) */
  bytes2word(104,71,101,116)
, bytes2word(67,104,97,114)
, bytes2word(0,0,0,0)
,};
