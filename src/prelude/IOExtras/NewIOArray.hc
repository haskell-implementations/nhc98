#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+60)
#define FN_LAMBDA205	((void*)startLabel+108)
#define CT_v208	((void*)startLabel+132)
#define F0_LAMBDA205	((void*)startLabel+140)
extern Node FN_Array_46primNewVectorC[];
extern Node FN_Ix_46rangeSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v207)
,};
Node FN_NHC_46IOExtras_46newIOArray[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,7)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v207: (byte 0) */
  HW(6,3)
, 0
,};
Node F0_NHC_46IOExtras_46newIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46newIOArray),3)
, VAPTAG(useLabel(FN_Array_46primNewVectorC))
, VAPTAG(useLabel(FN_Ix_46rangeSize))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA205),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v208)
,	/* FN_LAMBDA205: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v208: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA205: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA205),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
