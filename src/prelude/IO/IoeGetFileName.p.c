#include "newmacros.h"
#include "runtime.h"

#define v203	((void*)startLabel+22)
#define v193	((void*)startLabel+26)
#define v204	((void*)startLabel+38)
#define v197	((void*)startLabel+42)
#define v194	((void*)startLabel+47)
#define v190	((void*)startLabel+52)
#define v199	((void*)startLabel+72)
#define v200	((void*)startLabel+82)
#define CT_v209	((void*)startLabel+188)
#define ST_v202	((void*)startLabel+224)
#define PS_v205	((void*)startLabel+244)
#define PS_v208	((void*)startLabel+256)
#define PS_v207	((void*)startLabel+268)
#define PS_v201	((void*)startLabel+280)
extern Node FN_IO_46ioeGetHandle[];
extern Node FN_IO_46hGetFileName[];
extern Node PM_IO[];
extern Node PC_IO_46ioeGetHandle[];
extern Node PC_IO_46hGetFileName[];
extern Node PC_Prelude_46Nothing[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v209)
,};
Node FN_IO_46ioeGetFileName[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(8),BOT(8),TOP(8),BOT(8))
,	/* v203: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v193: (byte 2) */
  bytes2word(28,0,UNPACK,4)
, bytes2word(PUSH_I1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v204: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v197: (byte 2) */
  bytes2word(7,0,UNPACK,1)
,	/* v194: (byte 3) */
  bytes2word(PUSH_P1,2,RETURN,POP_P1)
,	/* v190: (byte 4) */
  bytes2word(4,JUMP,2,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v199: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
,	/* v200: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v208)
, 0
, 0
, 0
, 0
, useLabel(PS_v207)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v205)
, 0
, 0
, 0
, 0
, 90001
, useLabel(ST_v202)
,	/* CT_v209: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46ioeGetFileName[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetFileName),1)
, useLabel(PS_v201)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46ioeGetHandle))
, VAPTAG(useLabel(FN_IO_46hGetFileName))
,};
Node PP_IO_46ioeGetFileName[] = {
 };
Node PC_IO_46ioeGetFileName[] = {
 	/* ST_v202: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(111,101,71,101)
, bytes2word(116,70,105,108)
, bytes2word(101,78,97,109)
, bytes2word(101,0,0,0)
,	/* PS_v205: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetFileName)
, useLabel(PC_IO_46ioeGetHandle)
,	/* PS_v208: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetFileName)
, useLabel(PC_IO_46hGetFileName)
,	/* PS_v207: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetFileName)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v201: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetFileName)
, useLabel(PC_IO_46ioeGetFileName)
,};
