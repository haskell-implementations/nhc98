#include "newmacros.h"
#include "runtime.h"

#define v165	((void*)startLabel+18)
#define v166	((void*)startLabel+28)
#define CT_v172	((void*)startLabel+132)
#define ST_v168	((void*)startLabel+160)
#define PS_v171	((void*)startLabel+172)
#define PS_v170	((void*)startLabel+184)
#define PS_v167	((void*)startLabel+196)
extern Node PM_Prelude[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Prelude_46not[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v165: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v166: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v170)
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
, useLabel(ST_v168)
,	/* CT_v172: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46not[] = {
  CAPTAG(useLabel(FN_Prelude_46not),1)
, useLabel(PS_v167)
, 0
, 0
, 0
,};
Node PP_Prelude_46not[] = {
 };
Node PC_Prelude_46not[] = {
 	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(110,111,116,0)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46not)
, useLabel(PC_Prelude_46False)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46not)
, useLabel(PC_Prelude_46True)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46not)
, useLabel(PC_Prelude_46not)
,};
