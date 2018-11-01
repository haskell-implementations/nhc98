#include "newmacros.h"
#include "runtime.h"

#define v194	((void*)startLabel+22)
#define v190	((void*)startLabel+26)
#define v191	((void*)startLabel+31)
#define v187	((void*)startLabel+43)
#define CT_v197	((void*)startLabel+148)
#define ST_v193	((void*)startLabel+176)
#define PS_v196	((void*)startLabel+192)
#define PS_v195	((void*)startLabel+204)
#define PS_v192	((void*)startLabel+216)
extern Node PM_IO[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_IO_46ioeGetHandle[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(17),BOT(17),TOP(8),BOT(8))
,	/* v194: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v190: (byte 2) */
  bytes2word(19,0,UNPACK,4)
,	/* v191: (byte 3) */
  bytes2word(PUSH_P1,2,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v187: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_I2,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v193)
,	/* CT_v197: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_IO_46ioeGetHandle[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetHandle),1)
, useLabel(PS_v192)
, 0
, 0
, 0
,};
Node PP_IO_46ioeGetHandle[] = {
 };
Node PC_IO_46ioeGetHandle[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(111,101,71,101)
, bytes2word(116,72,97,110)
, bytes2word(100,108,101,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetHandle)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v195: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetHandle)
, useLabel(PC_Prelude_46Just)
,	/* PS_v192: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetHandle)
, useLabel(PC_IO_46ioeGetHandle)
,};
