#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+36)
#define FN_LAMBDA193	((void*)startLabel+80)
#define CT_v196	((void*)startLabel+100)
#define F0_LAMBDA193	((void*)startLabel+108)
#define FN_LAMBDA192	((void*)startLabel+120)
#define CT_v197	((void*)startLabel+144)
#define F0_LAMBDA192	((void*)startLabel+152)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46catch[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v195)
,};
Node FN_IO_46try[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v195: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_IO_46try[] = {
  CAPTAG(useLabel(FN_IO_46try),1)
, CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, CAPTAG(useLabel(FN_LAMBDA193),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, VAPTAG(useLabel(FN_Prelude_46catch))
, bytes2word(1,0,0,1)
, useLabel(CT_v196)
,	/* FN_LAMBDA193: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v196: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA193: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA193),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v197)
,	/* FN_LAMBDA192: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v197: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA192: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA192),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
