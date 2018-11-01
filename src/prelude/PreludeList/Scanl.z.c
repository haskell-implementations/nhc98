#include "newmacros.h"
#include "runtime.h"

#define CT_v185	((void*)startLabel+52)
#define FN_LAMBDA182	((void*)startLabel+80)
#define v187	((void*)startLabel+94)
#define v188	((void*)startLabel+98)
#define CT_v191	((void*)startLabel+136)
#define F0_LAMBDA182	((void*)startLabel+144)
#define ST_v184	((void*)startLabel+156)
#define ST_v189	((void*)startLabel+170)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
extern Node FN_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v185)
,};
Node FN_Prelude_46scanl[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,2)
, bytes2word(1,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,2,HEAP_OFF_N1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 40001
, useLabel(ST_v184)
,	/* CT_v185: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46scanl[] = {
  CAPTAG(useLabel(FN_Prelude_46scanl),3)
, VAPTAG(useLabel(FN_LAMBDA182))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,	/* FN_LAMBDA182: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v187: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v188: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,2,1)
, bytes2word(HEAP_P1,0,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,6)
, bytes2word(HEAP_I2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
, 40030
, useLabel(ST_v189)
,	/* CT_v191: (byte 0) */
  HW(2,3)
, 0
,	/* F0_LAMBDA182: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA182),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46scanl))
,	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,99,97,110)
,	/* ST_v189: (byte 2) */
  bytes2word(108,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,115,99)
, bytes2word(97,110,108,58)
, bytes2word(52,58,51,48)
, bytes2word(45,52,58,51)
, bytes2word(49,0,0,0)
,};
