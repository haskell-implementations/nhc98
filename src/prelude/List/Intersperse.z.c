#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+26)
#define v184	((void*)startLabel+30)
#define v191	((void*)startLabel+42)
#define v188	((void*)startLabel+46)
#define v185	((void*)startLabel+55)
#define CT_v192	((void*)startLabel+96)
#define ST_v189	((void*)startLabel+112)
extern Node TM_List[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_List_46intersperse[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v184: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(8),BOT(8))
,	/* v191: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v188: (byte 2) */
  bytes2word(11,0,POP_I1,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_I1)
,	/* v185: (byte 3) */
  bytes2word(HEAP_OFF_N1,3,RETURN,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_I1,HEAP_CVAL_N1)
, bytes2word(4,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I1,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 60001
, useLabel(ST_v189)
,	/* CT_v192: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_List_46intersperse[] = {
  CAPTAG(useLabel(FN_List_46intersperse),2)
, VAPTAG(useLabel(FN_List_46intersperse))
,	/* ST_v189: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,110,116)
, bytes2word(101,114,115,112)
, bytes2word(101,114,115,101)
, bytes2word(0,0,0,0)
,};
