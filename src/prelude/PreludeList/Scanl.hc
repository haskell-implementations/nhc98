#include "newmacros.h"
#include "runtime.h"

#define CT_v184	((void*)startLabel+40)
#define FN_LAMBDA182	((void*)startLabel+68)
#define v186	((void*)startLabel+78)
#define v187	((void*)startLabel+83)
#define CT_v189	((void*)startLabel+112)
#define F0_LAMBDA182	((void*)startLabel+120)
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v184)
,};
Node FN_Prelude_46scanl[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,6,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v184: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46scanl[] = {
  CAPTAG(useLabel(FN_Prelude_46scanl),3)
, VAPTAG(useLabel(FN_LAMBDA182))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v189)
,	/* FN_LAMBDA182: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v186: (byte 2) */
  bytes2word(TOP(9),BOT(9),POP_I1,PUSH_HEAP)
,	/* v187: (byte 3) */
  bytes2word(HEAP_CVAL_N1,1,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(6,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v189: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA182: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA182),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46scanl))
,};
