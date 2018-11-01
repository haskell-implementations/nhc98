#include "newmacros.h"
#include "runtime.h"

#define FN_QSort_46qsort	((void*)startLabel+12)
#define v360	((void*)startLabel+22)
#define v361	((void*)startLabel+25)
#define v367	((void*)startLabel+36)
#define v365	((void*)startLabel+40)
#define v362	((void*)startLabel+48)
#define CT_v368	((void*)startLabel+80)
#define F0_QSort_46qsort	((void*)startLabel+88)
#define FN_QSort_46qpart	((void*)startLabel+116)
#define v370	((void*)startLabel+126)
#define v371	((void*)startLabel+147)
#define v372	((void*)startLabel+181)
#define CT_v375	((void*)startLabel+212)
#define F0_QSort_46qpart	((void*)startLabel+220)
#define FN_QSort_46rqsort	((void*)startLabel+244)
#define v377	((void*)startLabel+254)
#define v378	((void*)startLabel+257)
#define v384	((void*)startLabel+268)
#define v382	((void*)startLabel+272)
#define v379	((void*)startLabel+280)
#define CT_v385	((void*)startLabel+312)
#define F0_QSort_46rqsort	((void*)startLabel+320)
#define FN_QSort_46rqpart	((void*)startLabel+348)
#define v387	((void*)startLabel+358)
#define v388	((void*)startLabel+379)
#define v389	((void*)startLabel+410)
#define CT_v392	((void*)startLabel+444)
#define F0_QSort_46rqpart	((void*)startLabel+452)
#define CT_v393	((void*)startLabel+504)
#define CT_v394	((void*)startLabel+560)
extern Node FN_Prelude_46_60_61[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v368)
,	/* FN_QSort_46qsort: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v360: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v361: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v367: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v365: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v362: (byte 4) */
  bytes2word(HEAP_I1,HEAP_ARG,3,RETURN)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_I2,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v368: (byte 0) */
  HW(1,3)
, 0
,	/* F0_QSort_46qsort: (byte 0) */
  CAPTAG(useLabel(FN_QSort_46qsort),3)
, VAPTAG(useLabel(FN_QSort_46qpart))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v375)
,	/* FN_QSort_46qpart: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v370: (byte 2) */
  bytes2word(TOP(25),BOT(25),POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,5,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,4)
,	/* v371: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(21,0,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_ARG,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_I2,HEAP_ARG,4)
, bytes2word(HEAP_OFF_N1,8,HEAP_ARG,6)
,	/* v372: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(0,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I2,HEAP_OFF_N1,7,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(5,6,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v375: (byte 0) */
  HW(2,6)
, 0
,	/* F0_QSort_46qpart: (byte 0) */
  CAPTAG(useLabel(FN_QSort_46qpart),6)
, VAPTAG(useLabel(FN_QSort_46rqsort))
, VAPTAG(useLabel(FN_QSort_46qpart))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v385)
,	/* FN_QSort_46rqsort: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v377: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I3)
,	/* v378: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v384: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v382: (byte 4) */
  bytes2word(POP_I1,JUMP,10,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v379: (byte 4) */
  bytes2word(HEAP_I1,HEAP_ARG,3,RETURN)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CVAL_N1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_I2,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v385: (byte 0) */
  HW(1,3)
, 0
,	/* F0_QSort_46rqsort: (byte 0) */
  CAPTAG(useLabel(FN_QSort_46rqsort),3)
, VAPTAG(useLabel(FN_QSort_46rqpart))
, bytes2word(0,0,6,0)
, bytes2word(5,1,4,2)
, bytes2word(3,3,2,4)
, bytes2word(1,5,0,6)
, useLabel(CT_v392)
,	/* FN_QSort_46rqpart: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v387: (byte 2) */
  bytes2word(TOP(25),BOT(25),POP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG_ARG,1,5,HEAP_ARG)
, bytes2word(6,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,4)
,	/* v388: (byte 3) */
  bytes2word(HEAP_OFF_N1,6,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_ARG_I2,PUSH_I1,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,2)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,19)
, bytes2word(0,HEAP_CVAL_N1,1,HEAP_P1)
, bytes2word(0,HEAP_ARG,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_I2,HEAP_OFF_N1,7,HEAP_ARG_ARG_RET_EVAL)
,	/* v389: (byte 2) */
  bytes2word(5,6,HEAP_CVAL_N1,1)
, bytes2word(HEAP_P1,0,HEAP_ARG,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_I2,HEAP_ARG,4)
, bytes2word(HEAP_OFF_N1,8,HEAP_ARG,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v392: (byte 0) */
  HW(2,6)
, 0
,	/* F0_QSort_46rqpart: (byte 0) */
  CAPTAG(useLabel(FN_QSort_46rqpart),6)
, VAPTAG(useLabel(FN_QSort_46qsort))
, VAPTAG(useLabel(FN_QSort_46rqpart))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v393)
,};
Node FN_QSort_46sort[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v393: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_QSort_46sort[] = {
  CAPTAG(useLabel(FN_QSort_46sort),2)
, VAPTAG(useLabel(FN_Prelude_46_60_61))
, VAPTAG(useLabel(FN_QSort_46qsort))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v394)
,};
Node FN_QSort_46sortLe[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v394: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_QSort_46sortLe[] = {
  CAPTAG(useLabel(FN_QSort_46sortLe),2)
, VAPTAG(useLabel(FN_QSort_46qsort))
,};
