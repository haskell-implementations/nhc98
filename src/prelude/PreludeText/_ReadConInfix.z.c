#include "newmacros.h"
#include "runtime.h"

#define CT_v274	((void*)startLabel+64)
#define FN_LAMBDA271	((void*)startLabel+108)
#define CT_v276	((void*)startLabel+164)
#define F0_LAMBDA271	((void*)startLabel+172)
#define FN_LAMBDA270	((void*)startLabel+212)
#define CT_v281	((void*)startLabel+260)
#define F0_LAMBDA270	((void*)startLabel+268)
#define FN_LAMBDA269	((void*)startLabel+304)
#define CT_v285	((void*)startLabel+368)
#define F0_LAMBDA269	((void*)startLabel+376)
#define FN_LAMBDA268	((void*)startLabel+424)
#define CT_v289	((void*)startLabel+476)
#define F0_LAMBDA268	((void*)startLabel+484)
#define ST_v273	((void*)startLabel+492)
#define ST_v279	((void*)startLabel+514)
#define ST_v275	((void*)startLabel+547)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node FN_Prelude_46readParen[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46readsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Prelude_46lex[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_95filter[];

static Node startLabel[] = {
  bytes2word(0,0,8,0)
, bytes2word(7,1,6,2)
, bytes2word(5,3,4,4)
, bytes2word(3,5,2,6)
, bytes2word(1,7,0,8)
, useLabel(CT_v274)
,};
Node FN_Prelude_46_95readConInfix[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,3)
, bytes2word(4,HEAP_CVAL_I4,HEAP_ARG_ARG,8)
, bytes2word(7,HEAP_ARG_ARG,2,6)
, bytes2word(HEAP_ARG_ARG,1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(9,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v273)
,	/* CT_v274: (byte 0) */
  HW(3,8)
, 0
,};
Node F0_Prelude_46_95readConInfix[] = {
  CAPTAG(useLabel(FN_Prelude_46_95readConInfix),8)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, CAPTAG(useLabel(FN_LAMBDA271),1)
, VAPTAG(useLabel(FN_Prelude_46readParen))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v276)
,	/* FN_LAMBDA271: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG_ARG,3,4)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,5,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG_ARG,6)
, bytes2word(7,HEAP_CVAL_IN3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 90009
, useLabel(ST_v275)
,	/* CT_v276: (byte 0) */
  HW(4,7)
, 0
,	/* F0_LAMBDA271: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA271),7)
, CAPTAG(useLabel(FN_LAMBDA270),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v281)
,	/* FN_LAMBDA270: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,5,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_ARG_ARG,2,3,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_I4,HEAP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,9,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90016
, useLabel(ST_v279)
,	/* CT_v281: (byte 0) */
  HW(3,6)
, 0
,	/* F0_LAMBDA270: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA270),6)
, CAPTAG(useLabel(FN_LAMBDA269),2)
, VAPTAG(useLabel(FN_Prelude_46lex))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(7,0,6,1)
, bytes2word(5,2,4,3)
, bytes2word(3,4,2,5)
, bytes2word(1,6,0,7)
, useLabel(CT_v285)
,	/* FN_LAMBDA269: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,6,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_P1,0,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_ARG_ARG,2)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(4,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,5,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,17,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 90016
, useLabel(ST_v279)
,	/* CT_v285: (byte 0) */
  HW(7,7)
, 0
,	/* F0_LAMBDA269: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA269),7)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, CAPTAG(useLabel(FN_LAMBDA268),2)
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_Prelude_46_95foldr),1)
, VAPTAG(useLabel(FN_Prelude_46_95filter))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v289)
,	/* FN_LAMBDA268: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,5,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, 90016
, useLabel(ST_v279)
,	/* CT_v289: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA268: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA268),4)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
,	/* ST_v273: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,114,101,97)
, bytes2word(100,67,111,110)
, bytes2word(73,110,102,105)
,	/* ST_v279: (byte 2) */
  bytes2word(120,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,95,114)
, bytes2word(101,97,100,67)
, bytes2word(111,110,73,110)
, bytes2word(102,105,120,58)
, bytes2word(57,58,49,54)
, bytes2word(45,49,50,58)
,	/* ST_v275: (byte 3) */
  bytes2word(52,50,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(114,101,97,100)
, bytes2word(67,111,110,73)
, bytes2word(110,102,105,120)
, bytes2word(58,57,58,57)
, bytes2word(45,49,50,58)
, bytes2word(52,50,0,0)
,};
