#include "newmacros.h"
#include "runtime.h"

#define CT_v203	((void*)startLabel+56)
#define FN_LAMBDA200	((void*)startLabel+92)
#define CT_v205	((void*)startLabel+116)
#define F0_LAMBDA200	((void*)startLabel+124)
#define ST_v202	((void*)startLabel+132)
#define ST_v204	((void*)startLabel+154)
extern Node TM_NHC_46IOExtras[];
extern Node FN_Array_46primNewVectorC[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46IOExtras[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v203)
,};
Node FN_NHC_46IOExtras_46newIORef[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,HEAP_OFF_N1,4)
, bytes2word(HEAP_INT_P1,1,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_I5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 100001
, useLabel(ST_v202)
,	/* CT_v203: (byte 0) */
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
, useLabel(CT_v205)
,	/* FN_LAMBDA200: (byte 0) */
  useLabel(TMSUB_NHC_46IOExtras)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 100022
, useLabel(ST_v204)
,	/* CT_v205: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v202: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,110,101,119)
, bytes2word(73,79,82,101)
,	/* ST_v204: (byte 2) */
  bytes2word(102,0,78,72)
, bytes2word(67,46,73,79)
, bytes2word(69,120,116,114)
, bytes2word(97,115,46,110)
, bytes2word(101,119,73,79)
, bytes2word(82,101,102,58)
, bytes2word(49,48,58,50)
, bytes2word(50,45,49,48)
, bytes2word(58,52,52,0)
,};
