#include "newmacros.h"
#include "runtime.h"

#define CT_v202	((void*)startLabel+44)
#define FN_LAMBDA200	((void*)startLabel+80)
#define CT_v203	((void*)startLabel+92)
#define F0_LAMBDA200	((void*)startLabel+100)
extern Node FN_Array_46primNewVectorC[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v202)
,};
Node FN_NHC_46IOExtras_46newIORef[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_INT_P1,1,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v202: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46IOExtras_46newIORef[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46newIORef),1)
, VAPTAG(useLabel(FN_Array_46primNewVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v203)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v203: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
