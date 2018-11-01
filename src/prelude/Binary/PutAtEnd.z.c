#include "newmacros.h"
#include "runtime.h"

#define CT_v203	((void*)startLabel+48)
#define FN_LAMBDA200	((void*)startLabel+88)
#define CT_v205	((void*)startLabel+128)
#define F0_LAMBDA200	((void*)startLabel+136)
#define ST_v202	((void*)startLabel+156)
#define ST_v204	((void*)startLabel+176)
extern Node TM_NHC_46Binary[];
extern Node FN_NHC_46Binary_46endBin[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46Binary[];
extern Node FN_NHC_46Binary_46seekBin[];
extern Node FN_NHC_46Binary_46put[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v203)
,};
Node FN_NHC_46Binary_46putAtEnd[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 120001
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
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
, useLabel(CT_v205)
,	/* FN_LAMBDA200: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(4,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 130008
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(4,4)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),4)
, VAPTAG(useLabel(FN_NHC_46Binary_46seekBin))
, VAPTAG(useLabel(FN_NHC_46Binary_46put))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v202: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,112)
, bytes2word(117,116,65,116)
,	/* ST_v204: (byte 4) */
  bytes2word(69,110,100,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,112)
, bytes2word(117,116,65,116)
, bytes2word(69,110,100,58)
, bytes2word(49,51,58,56)
, bytes2word(45,49,51,58)
, bytes2word(49,53,0,0)
,};
