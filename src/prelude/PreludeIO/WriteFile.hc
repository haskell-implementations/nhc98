#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+44)
#define FN_LAMBDA196	((void*)startLabel+80)
#define CT_v199	((void*)startLabel+108)
#define F0_LAMBDA196	((void*)startLabel+116)
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_IO_46hPutChar[];
extern Node FN_Prelude_46mapM_95[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_IO_46hClose[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_Prelude_46writeFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v198: (byte 0) */
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
, useLabel(CT_v199)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v199: (byte 0) */
  HW(5,2)
, 0
,	/* F0_LAMBDA196: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA196),2)
, CAPTAG(useLabel(FN_IO_46hPutChar),1)
, VAPTAG(useLabel(FN_Prelude_46mapM_95))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_IO_46hClose))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,};
