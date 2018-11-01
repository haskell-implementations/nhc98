#include "newmacros.h"
#include "runtime.h"

#define CT_v212	((void*)startLabel+52)
#define FN_LAMBDA206	((void*)startLabel+92)
#define CT_v214	((void*)startLabel+128)
#define F0_LAMBDA206	((void*)startLabel+136)
#define ST_v210	((void*)startLabel+144)
#define ST_v213	((void*)startLabel+171)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Array_46primCopyVectorC[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46IOExtras[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v212)
,};
Node FN_NHC_46IOExtras_46freezeIOArray[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_I1)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 110001
, useLabel(ST_v210)
,	/* CT_v212: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_NHC_46IOExtras_46freezeIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46freezeIOArray),2)
, VAPTAG(useLabel(FN_Array_46primCopyVectorC))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA206),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v214)
,	/* FN_LAMBDA206: (byte 0) */
  useLabel(TMSUB_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 120010
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA206: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA206),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v210: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,102,114,101)
, bytes2word(101,122,101,73)
, bytes2word(79,65,114,114)
,	/* ST_v213: (byte 3) */
  bytes2word(97,121,0,78)
, bytes2word(72,67,46,73)
, bytes2word(79,69,120,116)
, bytes2word(114,97,115,46)
, bytes2word(102,114,101,101)
, bytes2word(122,101,73,79)
, bytes2word(65,114,114,97)
, bytes2word(121,58,49,50)
, bytes2word(58,49,48,45)
, bytes2word(49,50,58,50)
, bytes2word(55,0,0,0)
,};
