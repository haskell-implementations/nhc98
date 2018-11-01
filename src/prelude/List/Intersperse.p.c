#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v184	((void*)startLabel+32)
#define v193	((void*)startLabel+44)
#define v188	((void*)startLabel+48)
#define v185	((void*)startLabel+68)
#define CT_v195	((void*)startLabel+220)
#define ST_v190	((void*)startLabel+252)
#define PS_v192	((void*)startLabel+272)
#define PS_v194	((void*)startLabel+284)
#define PS_v189	((void*)startLabel+296)
extern Node PM_List[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v195)
,};
Node FN_List_46intersperse[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v184: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v193: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v188: (byte 4) */
  bytes2word(POP_I1,JUMP,22,0)
, bytes2word(POP_I1,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v185: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,11,RETURN)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(13,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,13)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v192)
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
, useLabel(ST_v190)
,	/* CT_v195: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_List_46intersperse[] = {
  CAPTAG(useLabel(FN_List_46intersperse),2)
, useLabel(PS_v189)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_List_46intersperse))
,};
Node PP_List_46intersperse[] = {
 };
Node PC_List_46intersperse[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,110,116)
, bytes2word(101,114,115,112)
, bytes2word(101,114,115,101)
, bytes2word(0,0,0,0)
,	/* PS_v192: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46intersperse)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v194: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46intersperse)
, useLabel(PC_Prelude_46_58)
,	/* PS_v189: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46intersperse)
, useLabel(PC_List_46intersperse)
,};
