#include "newmacros.h"
#include "runtime.h"

#define CT_v218	((void*)startLabel+44)
#define FN_LAMBDA215	((void*)startLabel+76)
#define CT_v220	((void*)startLabel+108)
#define F0_LAMBDA215	((void*)startLabel+116)
#define FN_LAMBDA214	((void*)startLabel+144)
#define CT_v222	((void*)startLabel+176)
#define F0_LAMBDA214	((void*)startLabel+184)
#define FN_LAMBDA213	((void*)startLabel+208)
#define v224	((void*)startLabel+222)
#define v225	((void*)startLabel+228)
#define CT_v228	((void*)startLabel+248)
#define F0_LAMBDA213	((void*)startLabel+256)
#define ST_v217	((void*)startLabel+268)
#define ST_v221	((void*)startLabel+280)
#define ST_v226	((void*)startLabel+304)
#define ST_v219	((void*)startLabel+328)
extern Node TM_IO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_IO[];
extern Node FN_IO_46try[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46ioError[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v218)
,};
Node FN_IO_46bracket_95[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,3)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_IO_46bracket_95[] = {
  CAPTAG(useLabel(FN_IO_46bracket_95),3)
, CAPTAG(useLabel(FN_LAMBDA215),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v220)
,	/* FN_LAMBDA215: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,3,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 90010
, useLabel(ST_v219)
,	/* CT_v220: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA215: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA215),3)
, VAPTAG(useLabel(FN_IO_46try))
, CAPTAG(useLabel(FN_LAMBDA214),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v222)
,	/* FN_LAMBDA214: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_CVAL_I4,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 100011
, useLabel(ST_v221)
,	/* CT_v222: (byte 0) */
  HW(3,3)
, 0
,	/* F0_LAMBDA214: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA214),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA213))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,	/* FN_LAMBDA213: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v224: (byte 2) */
  bytes2word(TOP(10),BOT(10),UNPACK,1)
,	/* v225: (byte 4) */
  bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_I1,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 120010
, useLabel(ST_v226)
,	/* CT_v228: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA213: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA213),1)
, VAPTAG(useLabel(FN_Prelude_46ioError))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
,	/* ST_v217: (byte 0) */
  bytes2word(73,79,46,98)
, bytes2word(114,97,99,107)
,	/* ST_v221: (byte 4) */
  bytes2word(101,116,95,0)
, bytes2word(73,79,46,98)
, bytes2word(114,97,99,107)
, bytes2word(101,116,95,58)
, bytes2word(49,48,58,49)
, bytes2word(49,45,49,48)
,	/* ST_v226: (byte 4) */
  bytes2word(58,49,53,0)
, bytes2word(73,79,46,98)
, bytes2word(114,97,99,107)
, bytes2word(101,116,95,58)
, bytes2word(49,50,58,49)
, bytes2word(48,45,49,50)
,	/* ST_v219: (byte 4) */
  bytes2word(58,49,49,0)
, bytes2word(73,79,46,98)
, bytes2word(114,97,99,107)
, bytes2word(101,116,95,58)
, bytes2word(57,58,49,48)
, bytes2word(45,57,58,49)
, bytes2word(53,0,0,0)
,};
