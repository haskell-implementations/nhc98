#include "newmacros.h"
#include "runtime.h"

#define v199	((void*)startLabel+42)
#define v201	((void*)startLabel+89)
#define v203	((void*)startLabel+137)
#define v205	((void*)startLabel+153)
#define CT_v208	((void*)startLabel+176)
#define FN_LAMBDA197	((void*)startLabel+240)
#define CT_v211	((void*)startLabel+272)
#define CF_LAMBDA197	((void*)startLabel+280)
#define FN_LAMBDA196	((void*)startLabel+292)
#define CT_v214	((void*)startLabel+324)
#define CF_LAMBDA196	((void*)startLabel+332)
#define ST_v207	((void*)startLabel+336)
#define ST_v213	((void*)startLabel+352)
#define ST_v212	((void*)startLabel+381)
#define ST_v209	((void*)startLabel+409)
#define ST_v210	((void*)startLabel+435)
extern Node TM_Char[];
extern Node FN_Char_46isDigit[];
extern Node FN_Char_46ord[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_Prelude_46error[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v208)
,};
Node FN_Char_46digitToInt[] = {
  useLabel(TM_Char)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(22,0,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(48,EVAL,NEEDHEAP_I32,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_ARG,1,EVAL,NEEDHEAP_I32)
,	/* v199: (byte 2) */
  bytes2word(SUB_W,RETURN,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CHAR_P1,97)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(HEAP_CHAR_P1,102,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(25,0,PUSH_INT_P1,10)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,97,EVAL)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(EVAL,NEEDHEAP_I32,SUB_W,ADD_W)
,	/* v201: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_CHAR_P1,65,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,HEAP_CHAR_P1)
, bytes2word(70,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,26)
, bytes2word(0,PUSH_INT_P1,10,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,65,EVAL,NEEDHEAP_I32)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,SUB_W,ADD_W)
,	/* v203: (byte 1) */
  bytes2word(RETURN,PUSH_CVAL_P1,9,ZAP_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,10)
, bytes2word(0,HEAP_CVAL_P1,10,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,2)
,	/* v205: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,12,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v207)
,	/* CT_v208: (byte 0) */
  HW(11,1)
, 0
,};
Node F0_Char_46digitToInt[] = {
  CAPTAG(useLabel(FN_Char_46digitToInt),1)
, VAPTAG(useLabel(FN_Char_46isDigit))
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA196))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_LAMBDA197))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v211)
,	/* FN_LAMBDA197: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v210)
, 70001
, useLabel(ST_v209)
,	/* CT_v211: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA197: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA197))
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,	/* FN_LAMBDA196: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v213)
, 110035
, useLabel(ST_v212)
,	/* CT_v214: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
,	/* ST_v207: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,100,105,103)
, bytes2word(105,116,84,111)
,	/* ST_v213: (byte 4) */
  bytes2word(73,110,116,0)
, bytes2word(67,104,97,114)
, bytes2word(46,100,105,103)
, bytes2word(105,116,84,111)
, bytes2word(73,110,116,58)
, bytes2word(32,110,111,116)
, bytes2word(32,97,32,100)
, bytes2word(105,103,105,116)
,	/* ST_v212: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,100,105)
, bytes2word(103,105,116,84)
, bytes2word(111,73,110,116)
, bytes2word(58,49,49,58)
, bytes2word(51,53,45,49)
, bytes2word(49,58,54,52)
,	/* ST_v209: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,100,105)
, bytes2word(103,105,116,84)
, bytes2word(111,73,110,116)
, bytes2word(58,55,58,49)
, bytes2word(45,49,49,58)
,	/* ST_v210: (byte 3) */
  bytes2word(54,52,0,67)
, bytes2word(104,97,114,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,55,58)
, bytes2word(49,45,49,49)
, bytes2word(58,54,52,46)
, bytes2word(0,0,0,0)
,};
