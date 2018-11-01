#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+28)
#define FN_LAMBDA164	((void*)startLabel+60)
#define CT_v168	((void*)startLabel+80)
#define CF_LAMBDA164	((void*)startLabel+88)
#define ST_v167	((void*)startLabel+92)
extern Node FN_Prelude_46elem[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v166)
,};
Node FN_Char_46isSpace[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v166: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isSpace[] = {
  CAPTAG(useLabel(FN_Char_46isSpace),1)
, useLabel(CF_LAMBDA164)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v168)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v167)
,	/* CT_v168: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
,	/* ST_v167: (byte 0) */
  bytes2word(32,9,10,13)
, bytes2word(12,11,160,0)
,};
