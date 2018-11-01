#include "newmacros.h"
#include "runtime.h"

#define v243	((void*)startLabel+26)
#define v264	((void*)startLabel+42)
#define v247	((void*)startLabel+46)
#define v244	((void*)startLabel+55)
#define v248	((void*)startLabel+60)
#define v265	((void*)startLabel+76)
#define v252	((void*)startLabel+80)
#define v249	((void*)startLabel+89)
#define v253	((void*)startLabel+94)
#define v266	((void*)startLabel+110)
#define v257	((void*)startLabel+114)
#define v254	((void*)startLabel+122)
#define v258	((void*)startLabel+126)
#define v267	((void*)startLabel+142)
#define v262	((void*)startLabel+146)
#define v259	((void*)startLabel+155)
#define v240	((void*)startLabel+160)
#define CT_v268	((void*)startLabel+180)
#define CT_v269	((void*)startLabel+228)
#define CT_v270	((void*)startLabel+276)
extern Node FN_Prelude_46Eq_46NHC_46DErrNo_46ErrNo_46_61_61[];
extern Node FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Prelude_46IOError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Eq_46Prelude_46IOError_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(4,NOP,TOP(8),BOT(8))
, bytes2word(TOP(42),BOT(42),TOP(76),BOT(76))
,	/* v243: (byte 2) */
  bytes2word(TOP(108),BOT(108),UNPACK,4)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(4,NOP,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v264: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v247: (byte 2) */
  bytes2word(11,0,UNPACK,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_P1,8)
,	/* v244: (byte 3) */
  bytes2word(HEAP_P1,4,RETURN_EVAL,POP_P1)
,	/* v248: (byte 4) */
  bytes2word(4,JUMP,102,0)
, bytes2word(UNPACK,2,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,4,NOP)
, bytes2word(TOP(8),BOT(8),TOP(12),BOT(12))
,	/* v265: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v252: (byte 4) */
  bytes2word(POP_I1,JUMP,11,0)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_P1,3,HEAP_I1)
,	/* v249: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v253: (byte 2) */
  bytes2word(68,0,UNPACK,1)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(4,NOP,TOP(8),BOT(8))
, bytes2word(TOP(8),BOT(8),TOP(12),BOT(12))
,	/* v266: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v257: (byte 2) */
  bytes2word(10,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_I2)
,	/* v254: (byte 2) */
  bytes2word(HEAP_I1,RETURN_EVAL,POP_I1,JUMP)
,	/* v258: (byte 2) */
  bytes2word(36,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(4,NOP,TOP(8),BOT(8))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v267: (byte 2) */
  bytes2word(TOP(12),BOT(12),POP_I1,JUMP)
,	/* v262: (byte 2) */
  bytes2word(11,0,UNPACK,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1)
,	/* v259: (byte 3) */
  bytes2word(4,HEAP_I2,RETURN_EVAL,POP_P1)
,	/* v240: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v268: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46IOError_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46IOError_46_61_61),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46DErrNo_46ErrNo_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46_91_93_46_61_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Eq_46Prelude_46IOError_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v269: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Prelude_46IOError_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46IOError_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Prelude_46IOError)
, bytes2word(0,0,0,0)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Eq_46Prelude_46IOError[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v270: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Prelude_46IOError[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46IOError))
, useLabel(F0_Prelude_46Eq_46Prelude_46IOError_46_47_61)
, useLabel(F0_Prelude_46Eq_46Prelude_46IOError_46_61_61)
,};
