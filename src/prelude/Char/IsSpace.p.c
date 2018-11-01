#include "newmacros.h"
#include "runtime.h"

#define CT_v169	((void*)startLabel+68)
#define FN_LAMBDA164	((void*)startLabel+116)
#define CT_v173	((void*)startLabel+160)
#define CF_LAMBDA164	((void*)startLabel+168)
#define ST_v172	((void*)startLabel+188)
#define ST_v167	((void*)startLabel+196)
#define PP_LAMBDA164	((void*)startLabel+209)
#define PC_LAMBDA164	((void*)startLabel+209)
#define ST_v171	((void*)startLabel+209)
#define PS_v168	((void*)startLabel+232)
#define PS_v166	((void*)startLabel+244)
#define PS_v170	((void*)startLabel+256)
extern Node FN_Prelude_46elem[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node PM_Char[];
extern Node PC_Prelude_46elem[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v169)
,};
Node FN_Char_46isSpace[] = {
  bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,7,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v167)
,	/* CT_v169: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isSpace[] = {
  CAPTAG(useLabel(FN_Char_46isSpace),1)
, useLabel(PS_v166)
, 0
, 0
, 0
, useLabel(CF_LAMBDA164)
, VAPTAG(useLabel(FN_Prelude_46elem))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v173)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v172)
, 40029
, useLabel(ST_v171)
,	/* CT_v173: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
, useLabel(PS_v170)
, 0
, 0
, 0
,	/* ST_v172: (byte 0) */
  bytes2word(32,9,10,13)
, bytes2word(12,11,160,0)
,};
Node PP_Char_46isSpace[] = {
 };
Node PC_Char_46isSpace[] = {
 	/* ST_v167: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,83)
, bytes2word(112,97,99,101)
,	/* PP_LAMBDA164: (byte 1) */
 	/* PC_LAMBDA164: (byte 1) */
 	/* ST_v171: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,105,115)
, bytes2word(83,112,97,99)
, bytes2word(101,58,52,58)
, bytes2word(50,57,45,52)
, bytes2word(58,52,53,0)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isSpace)
, useLabel(PC_Prelude_46elem)
,	/* PS_v166: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isSpace)
, useLabel(PC_Char_46isSpace)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_LAMBDA164)
, useLabel(PC_LAMBDA164)
,};
