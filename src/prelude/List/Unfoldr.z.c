#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+32)
#define v185	((void*)startLabel+36)
#define CT_v191	((void*)startLabel+80)
#define ST_v188	((void*)startLabel+96)
extern Node TM_List[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_List_46unfoldr[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,PUSH_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v184: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v185: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(UNPACK,1,PUSH_P1,0)
, bytes2word(ZAP_STACK_P1,1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v188)
,	/* CT_v191: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_List_46unfoldr[] = {
  CAPTAG(useLabel(FN_List_46unfoldr),2)
, VAPTAG(useLabel(FN_List_46unfoldr))
,	/* ST_v188: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,117,110,102)
, bytes2word(111,108,100,114)
, bytes2word(0,0,0,0)
,};
