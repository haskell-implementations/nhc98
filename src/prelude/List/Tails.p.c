#include "newmacros.h"
#include "runtime.h"

#define v174	((void*)startLabel+18)
#define v175	((void*)startLabel+46)
#define CT_v181	((void*)startLabel+188)
#define ST_v177	((void*)startLabel+220)
#define PS_v179	((void*)startLabel+232)
#define PS_v180	((void*)startLabel+244)
#define PS_v176	((void*)startLabel+256)
extern Node PM_List[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v181)
,};
Node FN_List_46tails[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v174: (byte 2) */
  bytes2word(TOP(32),BOT(32),POP_I1,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,15,HEAP_OFF_N1)
,	/* v175: (byte 2) */
  bytes2word(11,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,12)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v177)
,	/* CT_v181: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_List_46tails[] = {
  CAPTAG(useLabel(FN_List_46tails),1)
, useLabel(PS_v176)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_List_46tails))
,};
Node PP_List_46tails[] = {
 };
Node PC_List_46tails[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,116,97,105)
, bytes2word(108,115,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46tails)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v180: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46tails)
, useLabel(PC_Prelude_46_58)
,	/* PS_v176: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46tails)
, useLabel(PC_List_46tails)
,};
