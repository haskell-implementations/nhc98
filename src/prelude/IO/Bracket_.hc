#include "newmacros.h"
#include "runtime.h"

#define CT_v217	((void*)startLabel+32)
#define FN_LAMBDA215	((void*)startLabel+64)
#define CT_v218	((void*)startLabel+84)
#define F0_LAMBDA215	((void*)startLabel+92)
#define FN_LAMBDA214	((void*)startLabel+120)
#define CT_v219	((void*)startLabel+140)
#define F0_LAMBDA214	((void*)startLabel+148)
#define FN_LAMBDA213	((void*)startLabel+172)
#define v221	((void*)startLabel+182)
#define v222	((void*)startLabel+188)
#define CT_v224	((void*)startLabel+200)
#define F0_LAMBDA213	((void*)startLabel+208)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_IO_46try[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46ioError[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v217)
,};
Node FN_IO_46bracket_95[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,3)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v217: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_IO_46bracket_95[] = {
  CAPTAG(useLabel(FN_IO_46bracket_95),3)
, CAPTAG(useLabel(FN_LAMBDA215),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v218)
,	/* FN_LAMBDA215: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,3,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v218: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA215: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA215),3)
, VAPTAG(useLabel(FN_IO_46try))
, CAPTAG(useLabel(FN_LAMBDA214),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v219)
,	/* FN_LAMBDA214: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v219: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA214: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA214),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA213))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v224)
,	/* FN_LAMBDA213: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v221: (byte 2) */
  bytes2word(TOP(10),BOT(10),UNPACK,1)
,	/* v222: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v224: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA213: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA213),1)
, VAPTAG(useLabel(FN_Prelude_46ioError))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,};
