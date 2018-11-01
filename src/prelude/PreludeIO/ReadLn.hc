#include "newmacros.h"
#include "runtime.h"

#define CT_v192	((void*)startLabel+24)
#define FN_LAMBDA190	((void*)startLabel+60)
#define CT_v193	((void*)startLabel+80)
#define F0_LAMBDA190	((void*)startLabel+88)
#define FN_LAMBDA189	((void*)startLabel+112)
#define CT_v194	((void*)startLabel+124)
#define F0_LAMBDA189	((void*)startLabel+132)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getLine[];
extern Node FN_Prelude_46readIO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v192)
,};
Node FN_Prelude_46readLn[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v192: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46readLn[] = {
  CAPTAG(useLabel(FN_Prelude_46readLn),1)
, CAPTAG(useLabel(FN_LAMBDA190),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Prelude_46getLine)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,	/* FN_LAMBDA190: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v193: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA190: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA190),2)
, VAPTAG(useLabel(FN_Prelude_46readIO))
, CAPTAG(useLabel(FN_LAMBDA189),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v194)
,	/* FN_LAMBDA189: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v194: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA189: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA189),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
