#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+24)
#define CT_v178	((void*)startLabel+56)
#define FN_LAMBDA175	((void*)startLabel+80)
#define CT_v179	((void*)startLabel+112)
#define F0_LAMBDA175	((void*)startLabel+120)
extern void *cGetArgs();
extern Node FN_Prelude_46map[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v177)
,};
Node FN_System_46cGetArgs[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(cGetArgs)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v177: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46cGetArgs[] = {
  VAPTAG(useLabel(FN_System_46cGetArgs))
, bytes2word(0,0,0,0)
, useLabel(CT_v178)
,};
Node FN_System_46primGetArgs[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v178: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46primGetArgs[] = {
  VAPTAG(useLabel(FN_System_46primGetArgs))
, CAPTAG(useLabel(FN_LAMBDA175),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v179)
,	/* FN_LAMBDA175: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1,0)
, bytes2word(HEAP_CVAL_N1,1,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_I1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v179: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA175: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA175),1)
, useLabel(CF_System_46cGetArgs)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
