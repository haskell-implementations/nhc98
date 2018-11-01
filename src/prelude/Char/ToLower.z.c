#include "newmacros.h"
#include "runtime.h"

#define v185	((void*)startLabel+44)
#define v187	((void*)startLabel+53)
#define CT_v190	((void*)startLabel+76)
#define FN_LAMBDA183	((void*)startLabel+124)
#define CT_v193	((void*)startLabel+156)
#define CF_LAMBDA183	((void*)startLabel+164)
#define ST_v189	((void*)startLabel+168)
#define ST_v191	((void*)startLabel+181)
#define ST_v192	((void*)startLabel+203)
extern Node TM_Char[];
extern Node FN_Char_46isUpper[];
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Char[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v190)
,};
Node FN_Char_46toLower[] = {
  useLabel(TM_Char)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CHAR_P1,65)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I4,HEAP_CHAR_P1,97)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
,	/* v185: (byte 4) */
  bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(PUSH_CVAL_P1,7,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_ARG_I1)
,	/* v187: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,8,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v189)
,	/* CT_v190: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Char_46toLower[] = {
  CAPTAG(useLabel(FN_Char_46toLower),1)
, VAPTAG(useLabel(FN_Char_46isUpper))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA183))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v193)
,	/* FN_LAMBDA183: (byte 0) */
  useLabel(TMSUB_Char)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v192)
, 60001
, useLabel(ST_v191)
,	/* CT_v193: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA183: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA183))
,	/* ST_v189: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,116,111,76)
, bytes2word(111,119,101,114)
,	/* ST_v191: (byte 1) */
  bytes2word(0,67,104,97)
, bytes2word(114,46,116,111)
, bytes2word(76,111,119,101)
, bytes2word(114,58,54,58)
, bytes2word(49,45,55,58)
,	/* ST_v192: (byte 3) */
  bytes2word(50,56,0,67)
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
, bytes2word(116,32,54,58)
, bytes2word(49,45,55,58)
, bytes2word(50,56,46,0)
,};
