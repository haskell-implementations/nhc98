#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+124)
#define ST_v169	((void*)startLabel+164)
#define PS_v172	((void*)startLabel+180)
#define PS_v168	((void*)startLabel+192)
#define PS_v170	((void*)startLabel+204)
#define PS_v171	((void*)startLabel+216)
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node PM_Char[];
extern Node PC_Prelude_46_38_38[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node PC_Prelude_46Ord_46Prelude_46Char_46_60_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_Char_46isOctDigit[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CHAR_P1,48)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,55,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(19,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v170)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v169)
,	/* CT_v173: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Char_46isOctDigit[] = {
  CAPTAG(useLabel(FN_Char_46isOctDigit),1)
, useLabel(PS_v168)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
,};
Node PP_Char_46isOctDigit[] = {
 };
Node PC_Char_46isOctDigit[] = {
 	/* ST_v169: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,115,79)
, bytes2word(99,116,68,105)
, bytes2word(103,105,116,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isOctDigit)
, useLabel(PC_Prelude_46_38_38)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isOctDigit)
, useLabel(PC_Char_46isOctDigit)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isOctDigit)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_62_61)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46isOctDigit)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_60_61)
,};
