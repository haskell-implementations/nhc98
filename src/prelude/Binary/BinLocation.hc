#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46toBinLocation	((void*)startLabel+16)
#define v210	((void*)startLabel+32)
#define v211	((void*)startLabel+37)
#define CT_v214	((void*)startLabel+60)
#define F0_NHC_46Binary_46toBinLocation	((void*)startLabel+68)
#define v216	((void*)startLabel+90)
#define v217	((void*)startLabel+105)
#define CT_v219	((void*)startLabel+140)
#define FN_LAMBDA205	((void*)startLabel+164)
#define CT_v221	((void*)startLabel+184)
#define CF_LAMBDA205	((void*)startLabel+192)
#define ST_v220	((void*)startLabel+196)

static Node startLabel[] = {
  42
,};
Node C0_NHC_46Binary_46Memory[] = {
  CONSTR(0,0,0)
, bytes2word(1,0,0,1)
, useLabel(CT_v214)
,	/* FN_NHC_46Binary_46toBinLocation: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(3,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v210: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(9),BOT(9))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v211: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I2,HEAP_P1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v214: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46toBinLocation: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46toBinLocation),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v219)
,};
Node FN_NHC_46Binary_46fromBinLocation[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v216: (byte 2) */
  bytes2word(TOP(19),BOT(19),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_I3,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
,	/* v217: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(2,HEAP_I1,HEAP_I2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,0,0)
, CONSTR(0,3,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
,	/* CT_v219: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Binary_46fromBinLocation[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46fromBinLocation),1)
, VAPTAG(useLabel(FN_LAMBDA205))
, bytes2word(0,0,0,0)
, useLabel(CT_v221)
,	/* FN_LAMBDA205: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v220)
,	/* CT_v221: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA205: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA205))
,	/* ST_v220: (byte 0) */
  bytes2word(0,0,0,0)
,};
