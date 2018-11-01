#include "newmacros.h"
#include "runtime.h"

#define v226	((void*)startLabel+18)
#define v227	((void*)startLabel+31)
#define CT_v229	((void*)startLabel+64)
#define FN_LAMBDA223	((void*)startLabel+100)
#define CT_v230	((void*)startLabel+124)
#define F0_LAMBDA223	((void*)startLabel+132)
#define FN_LAMBDA222	((void*)startLabel+164)
#define CT_v231	((void*)startLabel+188)
#define F0_LAMBDA222	((void*)startLabel+196)
#define FN_List_46Prelude_46162_46interleave	((void*)startLabel+212)
#define v233	((void*)startLabel+222)
#define v234	((void*)startLabel+241)
#define CT_v236	((void*)startLabel+300)
#define F0_List_46Prelude_46162_46interleave	((void*)startLabel+308)
#define FN_LAMBDA221	((void*)startLabel+344)
#define CT_v237	((void*)startLabel+368)
#define F0_LAMBDA221	((void*)startLabel+376)
extern Node FN_Prelude_46_95foldr[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v229)
,};
Node FN_List_46permutations[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v226: (byte 2) */
  bytes2word(TOP(17),BOT(17),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,3)
,	/* v227: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_P1,0)
, bytes2word(HEAP_CVAL_I4,HEAP_I1,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v229: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46permutations[] = {
  CAPTAG(useLabel(FN_List_46permutations),1)
, CAPTAG(useLabel(FN_LAMBDA223),2)
, VAPTAG(useLabel(FN_List_46permutations))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v230)
,	/* FN_LAMBDA223: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_ARG,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v230: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA223: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA223),3)
, CAPTAG(useLabel(FN_LAMBDA222),2)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v231)
,	/* FN_LAMBDA222: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v231: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA222: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA222),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,	/* FN_List_46Prelude_46162_46interleave: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v233: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
,	/* v234: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(2,HEAP_P1,0,HEAP_I1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_I3,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v236: (byte 0) */
  HW(5,2)
, 0
,	/* F0_List_46Prelude_46162_46interleave: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, CAPTAG(useLabel(FN_LAMBDA221),1)
, CAPTAG(useLabel(FN_List_46Prelude_46162_46interleave),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v237)
,	/* FN_LAMBDA221: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v237: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA221: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA221),2)
,};
