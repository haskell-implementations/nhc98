#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v184	((void*)startLabel+32)
#define v185	((void*)startLabel+49)
#define CT_v192	((void*)startLabel+192)
#define ST_v188	((void*)startLabel+224)
#define PS_v190	((void*)startLabel+240)
#define PS_v191	((void*)startLabel+252)
#define PS_v187	((void*)startLabel+264)
extern Node PM_List[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v192)
,};
Node FN_List_46deleteBy[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v184: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,4,0,PUSH_I1)
,	/* v185: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,HEAP_OFF_N1,14,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v188)
,	/* CT_v192: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_List_46deleteBy[] = {
  CAPTAG(useLabel(FN_List_46deleteBy),3)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_List_46deleteBy))
,};
Node PP_List_46deleteBy[] = {
 };
Node PC_List_46deleteBy[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,100,101,108)
, bytes2word(101,116,101,66)
, bytes2word(121,0,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteBy)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v191: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteBy)
, useLabel(PC_Prelude_46_58)
,	/* PS_v187: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteBy)
, useLabel(PC_List_46deleteBy)
,};
