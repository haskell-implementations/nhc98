#include "newmacros.h"
#include "runtime.h"

#define v231	((void*)startLabel+26)
#define v218	((void*)startLabel+30)
#define v232	((void*)startLabel+42)
#define v222	((void*)startLabel+46)
#define v233	((void*)startLabel+58)
#define v226	((void*)startLabel+62)
#define v234	((void*)startLabel+74)
#define v230	((void*)startLabel+78)
#define v227	((void*)startLabel+108)
#define v223	((void*)startLabel+113)
#define v219	((void*)startLabel+118)
#define v215	((void*)startLabel+123)
#define CT_v235	((void*)startLabel+140)
extern Node FN_NHC_46Internal_46_95apply4[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v235)
,};
Node FN_List_46zipWith4[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v231: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v218: (byte 2) */
  bytes2word(95,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v232: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v222: (byte 2) */
  bytes2word(74,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v233: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v226: (byte 2) */
  bytes2word(53,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,5,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v234: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v230: (byte 2) */
  bytes2word(32,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(6,HEAP_P1,4,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,7,HEAP_P1)
, bytes2word(5,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
,	/* v227: (byte 4) */
  bytes2word(13,HEAP_OFF_N1,8,RETURN)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v223: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v219: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v215: (byte 3) */
  bytes2word(JUMP,2,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v235: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_List_46zipWith4[] = {
  CAPTAG(useLabel(FN_List_46zipWith4),5)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, VAPTAG(useLabel(FN_List_46zipWith4))
,};
