#include "newmacros.h"
#include "runtime.h"

#define CT_v208	((void*)startLabel+72)
#define FN_LAMBDA205	((void*)startLabel+120)
#define CT_v210	((void*)startLabel+156)
#define F0_LAMBDA205	((void*)startLabel+164)
#define ST_v207	((void*)startLabel+172)
#define ST_v209	((void*)startLabel+196)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Array_46primNewVectorC[];
extern Node FN_Ix_46rangeSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46IOExtras[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v208)
,};
Node FN_NHC_46IOExtras_46newIOArray[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(9,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 110001
, useLabel(ST_v207)
,	/* CT_v208: (byte 0) */
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
, useLabel(CT_v210)
,	/* FN_LAMBDA205: (byte 0) */
  useLabel(TMSUB_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 120010
, useLabel(ST_v209)
,	/* CT_v210: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA205: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA205),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v207: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,110,101,119)
, bytes2word(73,79,65,114)
,	/* ST_v209: (byte 4) */
  bytes2word(114,97,121,0)
, bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,110,101,119)
, bytes2word(73,79,65,114)
, bytes2word(114,97,121,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
, bytes2word(58,53,49,0)
,};
