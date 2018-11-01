#include "newmacros.h"
#include "runtime.h"

#define v186	((void*)startLabel+26)
#define v187	((void*)startLabel+36)
#define v194	((void*)startLabel+56)
#define v191	((void*)startLabel+60)
#define v188	((void*)startLabel+73)
#define CT_v195	((void*)startLabel+104)
#define ST_v192	((void*)startLabel+120)
extern Node TM_List[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v195)
,};
Node FN_List_46insertBy[] = {
  useLabel(TM_List)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v186: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,HEAP_CVAL_IN3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,4,HEAP_ARG)
,	/* v187: (byte 4) */
  bytes2word(2,HEAP_OFF_N1,3,RETURN)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,3,TOP(6),BOT(6))
,	/* v194: (byte 4) */
  bytes2word(TOP(6),BOT(6),TOP(10),BOT(10))
,	/* v191: (byte 4) */
  bytes2word(POP_I1,JUMP,15,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(4,HEAP_I1,HEAP_OFF_N1,6)
,	/* v188: (byte 1) */
  bytes2word(RETURN,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_ARG_ARG,2,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v192)
,	/* CT_v195: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_List_46insertBy[] = {
  CAPTAG(useLabel(FN_List_46insertBy),3)
, VAPTAG(useLabel(FN_List_46insertBy))
,	/* ST_v192: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,110,115)
, bytes2word(101,114,116,66)
, bytes2word(121,0,0,0)
,};
