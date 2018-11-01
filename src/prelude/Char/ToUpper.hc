#include "newmacros.h"
#include "runtime.h"

#define v185	((void*)startLabel+40)
#define v187	((void*)startLabel+49)
#define CT_v189	((void*)startLabel+64)
#define FN_LAMBDA183	((void*)startLabel+112)
#define CT_v191	((void*)startLabel+132)
#define CF_LAMBDA183	((void*)startLabel+140)
#define ST_v190	((void*)startLabel+144)
extern Node FN_Char_46isLower[];
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v189)
,};
Node FN_Char_46toUpper[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_CHAR_P1,97)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I4,HEAP_CHAR_P1,65)
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
,	/* CT_v189: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Char_46toUpper[] = {
  CAPTAG(useLabel(FN_Char_46toUpper),1)
, VAPTAG(useLabel(FN_Char_46isLower))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA183))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v191)
,	/* FN_LAMBDA183: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v190)
,	/* CT_v191: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA183: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA183))
,	/* ST_v190: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,54)
, bytes2word(58,49,45,55)
, bytes2word(58,50,56,46)
, bytes2word(0,0,0,0)
,};
