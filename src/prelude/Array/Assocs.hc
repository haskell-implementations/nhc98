#include "newmacros.h"
#include "runtime.h"

#define CT_v232	((void*)startLabel+52)
#define FN_LAMBDA230	((void*)startLabel+96)
#define CT_v233	((void*)startLabel+132)
#define F0_LAMBDA230	((void*)startLabel+140)
extern Node FN_Array_46indices[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Array_46_33[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v232)
,};
Node FN_Array_46assocs[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,10)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v232: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Array_46assocs[] = {
  CAPTAG(useLabel(FN_Array_46assocs),2)
, CAPTAG(useLabel(FN_LAMBDA230),2)
, VAPTAG(useLabel(FN_Array_46indices))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v233)
,	/* FN_LAMBDA230: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_N1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
,	/* CT_v233: (byte 0) */
  HW(1,4)
, 0
,	/* F0_LAMBDA230: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA230),4)
, VAPTAG(useLabel(FN_Array_46_33))
,};
