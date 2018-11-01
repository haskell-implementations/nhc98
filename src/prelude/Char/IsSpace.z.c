#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+40)
#define FN_LAMBDA164	((void*)startLabel+72)
#define CT_v170	((void*)startLabel+104)
#define CF_LAMBDA164	((void*)startLabel+112)
#define ST_v169	((void*)startLabel+116)
#define ST_v166	((void*)startLabel+124)
#define ST_v168	((void*)startLabel+137)
extern Node TM_Char[];
extern Node FN_Prelude_46elem[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node TMSUB_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v167)
,};
Node FN_Char_46isSpace[] = {
  useLabel(TM_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isSpace[] = {
  CAPTAG(useLabel(FN_Char_46isSpace),1)
, useLabel(CF_LAMBDA164)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v170)
,	/* FN_LAMBDA164: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v169)
, 40029
, useLabel(ST_v168)
,	/* CT_v170: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
,	/* ST_v169: (byte 0) */
  bytes2word(32,9,10,13)
,	/* ST_v166: (byte 4) */
  bytes2word(12,11,160,0)
, bytes2word(67,104,97,114)
, bytes2word(46,105,115,83)
, bytes2word(112,97,99,101)
,	/* ST_v168: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,105,115)
, bytes2word(83,112,97,99)
, bytes2word(101,58,52,58)
, bytes2word(50,57,45,52)
, bytes2word(58,52,53,0)
,};
