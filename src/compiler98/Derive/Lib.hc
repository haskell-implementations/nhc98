#include "newmacros.h"
#include "runtime.h"

#define CT_v485	((void*)startLabel+20)
#define FN_LAMBDA481	((void*)startLabel+48)
#define CT_v486	((void*)startLabel+80)
#define F0_LAMBDA481	((void*)startLabel+88)
#define v499	((void*)startLabel+118)
#define v490	((void*)startLabel+122)
#define v500	((void*)startLabel+134)
#define v494	((void*)startLabel+138)
#define v501	((void*)startLabel+150)
#define v498	((void*)startLabel+154)
#define v495	((void*)startLabel+159)
#define v491	((void*)startLabel+164)
#define v487	((void*)startLabel+169)
#define CT_v502	((void*)startLabel+188)
#define CT_v503	((void*)startLabel+248)
#define FN_LAMBDA482	((void*)startLabel+280)
#define CT_v504	((void*)startLabel+304)
#define F0_LAMBDA482	((void*)startLabel+312)
#define CT_v505	((void*)startLabel+344)
#define FN_LAMBDA483	((void*)startLabel+376)
#define CT_v509	((void*)startLabel+424)
#define F0_LAMBDA483	((void*)startLabel+432)
extern Node FN_IntState_46addError[];
extern Node FN_Info_46ntI[];
extern Node FN_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v485)
,};
Node FN_Derive_46Lib_46deriveError[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v485: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Derive_46Lib_46deriveError[] = {
  CAPTAG(useLabel(FN_Derive_46Lib_46deriveError),1)
, CAPTAG(useLabel(FN_LAMBDA481),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v486)
,	/* FN_LAMBDA481: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(3,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(14,1,0)
,	/* CT_v486: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA481: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA481),3)
, VAPTAG(useLabel(FN_IntState_46addError))
, bytes2word(1,0,0,1)
, useLabel(CT_v502)
,};
Node FN_Derive_46Lib_46noArgs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v499: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v490: (byte 2) */
  bytes2word(49,0,UNPACK,4)
, bytes2word(PUSH_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v500: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v494: (byte 2) */
  bytes2word(28,0,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v501: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v498: (byte 2) */
  bytes2word(7,0,POP_I1,PUSH_HEAP)
,	/* v495: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,POP_P1)
,	/* v491: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,4,JUMP,2)
,	/* v487: (byte 1) */
  bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,0,0)
,	/* CT_v502: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Derive_46Lib_46noArgs[] = {
  CAPTAG(useLabel(FN_Derive_46Lib_46noArgs),1)
, VAPTAG(useLabel(FN_Info_46ntI))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v503)
,};
Node FN_Derive_46Lib_46syntaxType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,3,0)
,	/* CT_v503: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Derive_46Lib_46syntaxType[] = {
  CAPTAG(useLabel(FN_Derive_46Lib_46syntaxType),3)
, CAPTAG(useLabel(FN_LAMBDA482),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v504)
,	/* FN_LAMBDA482: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,2,0)
,	/* CT_v504: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA482: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA482),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v505)
,};
Node FN_Derive_46Lib_46syntaxCtxs[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v505: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Derive_46Lib_46syntaxCtxs[] = {
  CAPTAG(useLabel(FN_Derive_46Lib_46syntaxCtxs),2)
, CAPTAG(useLabel(FN_LAMBDA483),1)
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v509)
,	/* FN_LAMBDA483: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(2,HEAP_CVAL_IN3,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_OFF_N1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,3,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v509: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA483: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA483),2)
,};
