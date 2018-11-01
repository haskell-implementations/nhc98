#include "newmacros.h"
#include "runtime.h"

#define CT_v215	((void*)startLabel+56)
#define CT_v220	((void*)startLabel+120)
#define FN_LAMBDA209	((void*)startLabel+152)
#define CT_v222	((void*)startLabel+196)
#define F0_LAMBDA209	((void*)startLabel+204)
#define ST_v218	((void*)startLabel+220)
#define ST_v221	((void*)startLabel+234)
#define ST_v213	((void*)startLabel+260)
extern Node TM_NHC_46Binary[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46snd[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v215)
,};
Node FN_NHC_46Binary_46castFst[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,HEAP_I2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 160001
, useLabel(ST_v213)
,	/* CT_v215: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46Binary_46castFst[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46castFst),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v220)
,};
Node FN_NHC_46Binary_46_60_60[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v218)
,	/* CT_v220: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Binary_46_60_60[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_60_60),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA209))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v222)
,	/* FN_LAMBDA209: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I5,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 130015
, useLabel(ST_v221)
,	/* CT_v222: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA209: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA209),2)
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46snd))
,	/* ST_v218: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,60)
,	/* ST_v221: (byte 2) */
  bytes2word(60,0,78,72)
, bytes2word(67,46,66,105)
, bytes2word(110,97,114,121)
, bytes2word(46,60,60,58)
, bytes2word(49,51,58,49)
, bytes2word(53,45,49,51)
,	/* ST_v213: (byte 4) */
  bytes2word(58,51,55,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,99)
, bytes2word(97,115,116,70)
, bytes2word(115,116,0,0)
,};
