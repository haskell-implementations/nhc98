#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+18)
#define v166	((void*)startLabel+22)
#define v163	((void*)startLabel+32)
#define CT_v172	((void*)startLabel+136)
#define ST_v168	((void*)startLabel+164)
#define PS_v171	((void*)startLabel+180)
#define PS_v170	((void*)startLabel+192)
#define PS_v167	((void*)startLabel+204)
extern Node PM_Maybe[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Maybe_46isNothing[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v169: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v166: (byte 2) */
  bytes2word(12,0,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v163: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(RETURN,ENDCODE,0,0)
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
Node F0_Maybe_46isNothing[] = {
  CAPTAG(useLabel(FN_Maybe_46isNothing),1)
, useLabel(PS_v167)
, 0
, 0
, 0
,};
Node PP_Maybe_46isNothing[] = {
 };
Node PC_Maybe_46isNothing[] = {
 	/* ST_v168: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,105,115)
, bytes2word(78,111,116,104)
, bytes2word(105,110,103,0)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46isNothing)
, useLabel(PC_Prelude_46False)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46isNothing)
, useLabel(PC_Prelude_46True)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46isNothing)
, useLabel(PC_Maybe_46isNothing)
,};
