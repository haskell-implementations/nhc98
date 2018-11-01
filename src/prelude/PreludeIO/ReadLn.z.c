#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+36)
#define FN_LAMBDA190	((void*)startLabel+72)
#define CT_v195	((void*)startLabel+104)
#define F0_LAMBDA190	((void*)startLabel+112)
#define FN_LAMBDA189	((void*)startLabel+136)
#define CT_v197	((void*)startLabel+160)
#define F0_LAMBDA189	((void*)startLabel+168)
#define ST_v192	((void*)startLabel+176)
#define ST_v194	((void*)startLabel+191)
#define ST_v196	((void*)startLabel+216)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_Prelude_46getLine[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46readIO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v193)
,};
Node FN_Prelude_46readLn[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v192)
,	/* CT_v193: (byte 0) */
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
, useLabel(CT_v195)
,	/* FN_LAMBDA190: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60028
, useLabel(ST_v194)
,	/* CT_v195: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA190: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA190),2)
, VAPTAG(useLabel(FN_Prelude_46readIO))
, CAPTAG(useLabel(FN_LAMBDA189),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,	/* FN_LAMBDA189: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70028
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA189: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA189),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v192: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
,	/* ST_v194: (byte 3) */
  bytes2word(76,110,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,114)
, bytes2word(101,97,100,76)
, bytes2word(110,58,54,58)
, bytes2word(50,56,45,54)
,	/* ST_v196: (byte 4) */
  bytes2word(58,51,52,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(76,110,58,55)
, bytes2word(58,50,56,45)
, bytes2word(55,58,51,53)
, bytes2word(0,0,0,0)
,};
