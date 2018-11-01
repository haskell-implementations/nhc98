#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+36)
#define CT_v187	((void*)startLabel+76)
#define FN_LAMBDA184	((void*)startLabel+108)
#define CT_v188	((void*)startLabel+128)
#define F0_LAMBDA184	((void*)startLabel+136)
extern void *cOpenSocket();
extern Node FN_CString_46toCString[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v186)
,};
Node FN_Prelude_46cOpenSocket[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(cOpenSocket)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v186: (byte 0) */
  HW(0,3)
, 0
,};
Node F0_Prelude_46cOpenSocket[] = {
  CAPTAG(useLabel(FN_Prelude_46cOpenSocket),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v187)
,};
Node FN_Prelude_46primOpenSocket[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v187: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46primOpenSocket[] = {
  CAPTAG(useLabel(FN_Prelude_46primOpenSocket),3)
, CAPTAG(useLabel(FN_LAMBDA184),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v188)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(ZAP_ARG,4,NEEDHEAP_I32,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG_RET_EVAL,2)
, bytes2word(3,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA184: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA184),4)
, VAPTAG(useLabel(FN_CString_46toCString))
, VAPTAG(useLabel(FN_Prelude_46cOpenSocket))
,};
