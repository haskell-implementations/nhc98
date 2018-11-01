#include "newmacros.h"
#include "runtime.h"

#define v203	((void*)startLabel+61)
#define v205	((void*)startLabel+116)
#define v207	((void*)startLabel+132)
#define CT_v210	((void*)startLabel+156)
#define FN_LAMBDA199	((void*)startLabel+228)
#define CT_v213	((void*)startLabel+260)
#define CF_LAMBDA199	((void*)startLabel+268)
#define FN_LAMBDA198	((void*)startLabel+280)
#define CT_v216	((void*)startLabel+312)
#define CF_LAMBDA198	((void*)startLabel+320)
#define ST_v209	((void*)startLabel+324)
#define ST_v215	((void*)startLabel+340)
#define ST_v214	((void*)startLabel+369)
#define ST_v211	((void*)startLabel+397)
#define ST_v212	((void*)startLabel+423)
extern Node TM_Char[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Char_46ord[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Char_46chr[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_Prelude_46error[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v210)
,};
Node FN_Char_46intToDigit[] = {
  useLabel(TM_Char)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(29,0,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,48,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(1,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
,	/* v203: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,10,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,15,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(36,0,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,97,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(4,HEAP_INT_P1,10,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(ZAP_ARG_I1,ZAP_STACK_P1,2,EVAL)
,	/* v205: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(PUSH_CVAL_P1,11,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_P1,12,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v207: (byte 4) */
  bytes2word(13,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,14,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v209)
,	/* CT_v210: (byte 0) */
  HW(13,1)
, 0
,};
Node F0_Char_46intToDigit[] = {
  CAPTAG(useLabel(FN_Char_46intToDigit),1)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60_61))
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Char_46ord))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Char_46chr))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA198))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_LAMBDA199))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v213)
,	/* FN_LAMBDA199: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v212)
, 80001
, useLabel(ST_v211)
,	/* CT_v213: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA199: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA199))
, bytes2word(0,0,0,0)
, useLabel(CT_v216)
,	/* FN_LAMBDA198: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v215)
, 110033
, useLabel(ST_v214)
,	/* CT_v216: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA198: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA198))
,	/* ST_v209: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,105,110,116)
, bytes2word(84,111,68,105)
,	/* ST_v215: (byte 4) */
  bytes2word(103,105,116,0)
, bytes2word(67,104,97,114)
, bytes2word(46,105,110,116)
, bytes2word(84,111,68,105)
, bytes2word(103,105,116,58)
, bytes2word(32,110,111,116)
, bytes2word(32,97,32,100)
, bytes2word(105,103,105,116)
,	/* ST_v214: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,105,110)
, bytes2word(116,84,111,68)
, bytes2word(105,103,105,116)
, bytes2word(58,49,49,58)
, bytes2word(51,51,45,49)
, bytes2word(49,58,54,50)
,	/* ST_v211: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,105,110)
, bytes2word(116,84,111,68)
, bytes2word(105,103,105,116)
, bytes2word(58,56,58,49)
, bytes2word(45,49,49,58)
,	/* ST_v212: (byte 3) */
  bytes2word(54,50,0,67)
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
, bytes2word(116,32,56,58)
, bytes2word(49,45,49,49)
, bytes2word(58,54,50,46)
, bytes2word(0,0,0,0)
,};
