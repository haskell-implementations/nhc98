#include "newmacros.h"
#include "runtime.h"

#define v232	((void*)startLabel+30)
#define v218	((void*)startLabel+34)
#define v233	((void*)startLabel+46)
#define v222	((void*)startLabel+50)
#define v234	((void*)startLabel+62)
#define v226	((void*)startLabel+66)
#define v235	((void*)startLabel+78)
#define v230	((void*)startLabel+82)
#define v227	((void*)startLabel+111)
#define v223	((void*)startLabel+116)
#define v219	((void*)startLabel+121)
#define v215	((void*)startLabel+126)
#define CT_v236	((void*)startLabel+152)
#define ST_v231	((void*)startLabel+172)
extern Node TM_List[];
extern Node FN_NHC_46Internal_46_95apply4[];

static Node startLabel[] = {
  bytes2word(5,0,4,1)
, bytes2word(3,2,2,3)
, bytes2word(1,4,0,5)
, useLabel(CT_v236)
,};
Node FN_List_46zipWith4[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v232: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v218: (byte 2) */
  bytes2word(94,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v233: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v222: (byte 2) */
  bytes2word(73,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,4,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v234: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v226: (byte 2) */
  bytes2word(52,0,UNPACK,2)
, bytes2word(PUSH_ZAP_ARG,5,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v235: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v230: (byte 2) */
  bytes2word(31,0,UNPACK,2)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(6,HEAP_P1,4,HEAP_I2)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_P1,7,HEAP_P1)
, bytes2word(5,HEAP_P1,3,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1,13)
,	/* v227: (byte 3) */
  bytes2word(HEAP_OFF_N1,8,RETURN,POP_P1)
,	/* v223: (byte 4) */
  bytes2word(2,JUMP,2,0)
, bytes2word(POP_P1,2,JUMP,2)
,	/* v219: (byte 1) */
  bytes2word(0,POP_P1,2,JUMP)
,	/* v215: (byte 2) */
  bytes2word(2,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
, 40001
, useLabel(ST_v231)
,	/* CT_v236: (byte 0) */
  HW(2,5)
, 0
,};
Node F0_List_46zipWith4[] = {
  CAPTAG(useLabel(FN_List_46zipWith4),5)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply4))
, VAPTAG(useLabel(FN_List_46zipWith4))
,	/* ST_v231: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,122,105,112)
, bytes2word(87,105,116,104)
, bytes2word(52,0,0,0)
,};
