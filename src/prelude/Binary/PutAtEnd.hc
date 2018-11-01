#include "newmacros.h"
#include "runtime.h"

#define CT_v202	((void*)startLabel+36)
#define FN_LAMBDA200	((void*)startLabel+76)
#define CT_v203	((void*)startLabel+104)
#define F0_LAMBDA200	((void*)startLabel+112)
extern Node FN_NHC_46Binary_46endBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46put[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v202)
,};
Node FN_NHC_46Binary_46putAtEnd[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v202: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46Binary_46putAtEnd[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46putAtEnd),3)
, VAPTAG(useLabel(FN_NHC_46Binary_46endBin))
, CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v203)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(4,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v203: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),4)
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46put))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
