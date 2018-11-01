#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+26)
#define v184	((void*)startLabel+30)
#define v185	((void*)startLabel+47)
#define CT_v189	((void*)startLabel+80)
#define ST_v187	((void*)startLabel+96)
extern Node TM_List[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v189)
,};
Node FN_List_46deleteBy[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v184: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,PUSH_ARG_I2,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,4)
,	/* v185: (byte 3) */
  bytes2word(0,PUSH_I1,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_I1)
, bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v187)
,	/* CT_v189: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_List_46deleteBy[] = {
  CAPTAG(useLabel(FN_List_46deleteBy),3)
, VAPTAG(useLabel(FN_List_46deleteBy))
,	/* ST_v187: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,100,101,108)
, bytes2word(101,116,101,66)
, bytes2word(121,0,0,0)
,};
