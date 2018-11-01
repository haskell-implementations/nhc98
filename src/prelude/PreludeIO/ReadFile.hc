#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+40)
#define FN_LAMBDA180	((void*)startLabel+72)
#define CT_v183	((void*)startLabel+84)
#define F0_LAMBDA180	((void*)startLabel+92)
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_IO_46hGetContents[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v182)
,};
Node FN_Prelude_46readFile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v182: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46readFile[] = {
  CAPTAG(useLabel(FN_Prelude_46readFile),1)
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA180),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v183)
,	/* FN_LAMBDA180: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v183: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA180: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA180),1)
, VAPTAG(useLabel(FN_IO_46hGetContents))
,};
