#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+48)
#define FN_LAMBDA180	((void*)startLabel+80)
#define CT_v185	((void*)startLabel+104)
#define F0_LAMBDA180	((void*)startLabel+112)
#define ST_v182	((void*)startLabel+120)
#define ST_v184	((void*)startLabel+137)
extern Node TM_Prelude[];
extern Node FN_IO_46openFile[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Prelude[];
extern Node FN_IO_46hGetContents[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_Prelude_46readFile[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_IN3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_I4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v182)
,	/* CT_v183: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46readFile[] = {
  CAPTAG(useLabel(FN_Prelude_46readFile),1)
, VAPTAG(useLabel(FN_IO_46openFile))
, CAPTAG(useLabel(FN_LAMBDA180),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v185)
,	/* FN_LAMBDA180: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 70029
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA180: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA180),1)
, VAPTAG(useLabel(FN_IO_46hGetContents))
,	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(70,105,108,101)
,	/* ST_v184: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,114,101,97)
, bytes2word(100,70,105,108)
, bytes2word(101,58,55,58)
, bytes2word(50,57,45,56)
, bytes2word(58,50,50,0)
,};
