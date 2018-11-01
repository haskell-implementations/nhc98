#include "newmacros.h"
#include "runtime.h"

#define CT_v228	((void*)startLabel+44)
#define FN_LAMBDA226	((void*)startLabel+88)
#define CT_v229	((void*)startLabel+112)
#define F0_LAMBDA226	((void*)startLabel+120)
extern Node FN_Ix_46range[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46zipWith[];
extern Node FN_Array_46array[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v228)
,};
Node FN_Array_46listArray[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_OFF_N1,7,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Array_46listArray[] = {
  CAPTAG(useLabel(FN_Array_46listArray),3)
, CAPTAG(useLabel(FN_LAMBDA226),2)
, VAPTAG(useLabel(FN_Ix_46range))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46zipWith))
, VAPTAG(useLabel(FN_Array_46array))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v229)
,	/* FN_LAMBDA226: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v229: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA226: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA226),2)
,};
