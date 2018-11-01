#include "newmacros.h"
#include "runtime.h"

#define CT_v199	((void*)startLabel+56)
#define FN_LAMBDA196	((void*)startLabel+92)
#define CT_v201	((void*)startLabel+132)
#define F0_LAMBDA196	((void*)startLabel+140)
#define ST_v198	((void*)startLabel+164)
#define ST_v200	((void*)startLabel+182)
extern Node TM_Prelude[];
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Prelude[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46mapM_95[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_IO_46hClose[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v199)
,};
Node FN_Prelude_46writeFile[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 70001
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46writeFile[] = {
  CAPTAG(useLabel(FN_Prelude_46writeFile),2)
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA196),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,	/* FN_LAMBDA196: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 80029
, useLabel(ST_v200)
,	/* CT_v201: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),2)
, CAPTAG(useLabel(FN_IO_46hPutChar),1)
, VAPTAG(useLabel(FN_Prelude_46mapM_95))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_IO_46hClose))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v198: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(119,114,105,116)
, bytes2word(101,70,105,108)
,	/* ST_v200: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,119,114)
, bytes2word(105,116,101,70)
, bytes2word(105,108,101,58)
, bytes2word(56,58,50,57)
, bytes2word(45,49,48,58)
, bytes2word(49,53,0,0)
,};
