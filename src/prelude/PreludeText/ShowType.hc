#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+32)
#define FN_LAMBDA170	((void*)startLabel+60)
#define CT_v174	((void*)startLabel+80)
#define CF_LAMBDA170	((void*)startLabel+88)
#define ST_v173	((void*)startLabel+92)
extern Node FN_Prelude_46showsType[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Prelude_46showType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v172: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46showType[] = {
  CAPTAG(useLabel(FN_Prelude_46showType),2)
, useLabel(CF_LAMBDA170)
, VAPTAG(useLabel(FN_Prelude_46showsType))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,	/* FN_LAMBDA170: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA170: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA170))
,	/* ST_v173: (byte 0) */
  bytes2word(0,0,0,0)
,};
