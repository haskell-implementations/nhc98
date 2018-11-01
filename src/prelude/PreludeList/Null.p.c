#include "newmacros.h"
#include "runtime.h"

#define v168	((void*)startLabel+18)
#define v169	((void*)startLabel+28)
#define CT_v175	((void*)startLabel+132)
#define ST_v171	((void*)startLabel+160)
#define PS_v174	((void*)startLabel+176)
#define PS_v173	((void*)startLabel+188)
#define PS_v170	((void*)startLabel+200)
extern Node PM_Prelude[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_Prelude_46null[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v168: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v169: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v171)
,	/* CT_v175: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46null[] = {
  CAPTAG(useLabel(FN_Prelude_46null),1)
, useLabel(PS_v170)
, 0
, 0
, 0
,};
Node PP_Prelude_46null[] = {
 };
Node PC_Prelude_46null[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(110,117,108,108)
, bytes2word(0,0,0,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46null)
, useLabel(PC_Prelude_46False)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46null)
, useLabel(PC_Prelude_46True)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46null)
, useLabel(PC_Prelude_46null)
,};
