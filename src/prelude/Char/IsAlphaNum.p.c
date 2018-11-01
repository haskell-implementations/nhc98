#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+120)
#define ST_v170	((void*)startLabel+160)
#define PS_v171	((void*)startLabel+176)
#define PS_v172	((void*)startLabel+188)
#define PS_v173	((void*)startLabel+200)
#define PS_v169	((void*)startLabel+212)
extern Node FN_Char_46isAlpha[];
extern Node FN_Char_46isDigit[];
extern Node FN_Prelude_46_124_124[];
extern Node PM_Char[];
extern Node PC_Char_46isAlpha[];
extern Node PC_Char_46isDigit[];
extern Node PC_Prelude_46_124_124[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Char_46isAlphaNum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, useLabel(PS_v172)
, 0
, 0
, 0
, 0
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v170)
,	/* CT_v174: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isAlphaNum[] = {
  CAPTAG(useLabel(FN_Char_46isAlphaNum),1)
, useLabel(PS_v169)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Char_46isAlpha))
, VAPTAG(useLabel(FN_Char_46isDigit))
, VAPTAG(useLabel(FN_Prelude_46_124_124))
,};
Node PP_Char_46isAlphaNum[] = {
 };
Node PC_Char_46isAlphaNum[] = {
 	/* ST_v170: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,65)
, bytes2word(108,112,104,97)
, bytes2word(78,117,109,0)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isAlphaNum)
, useLabel(PC_Char_46isAlpha)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isAlphaNum)
, useLabel(PC_Char_46isDigit)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isAlphaNum)
, useLabel(PC_Prelude_46_124_124)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isAlphaNum)
, useLabel(PC_Char_46isAlphaNum)
,};
