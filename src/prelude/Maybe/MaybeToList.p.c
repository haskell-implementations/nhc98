#include "newmacros.h"
#include "runtime.h"

#define v168	((void*)startLabel+18)
#define v169	((void*)startLabel+28)
#define CT_v175	((void*)startLabel+144)
#define ST_v171	((void*)startLabel+172)
#define PS_v173	((void*)startLabel+192)
#define PS_v174	((void*)startLabel+204)
#define PS_v170	((void*)startLabel+216)
extern Node PM_Maybe[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_Maybe_46maybeToList[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v168: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v169: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,1,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v173)
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
, useLabel(ST_v171)
,	/* CT_v175: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46maybeToList[] = {
  CAPTAG(useLabel(FN_Maybe_46maybeToList),1)
, useLabel(PS_v170)
, 0
, 0
, 0
,};
Node PP_Maybe_46maybeToList[] = {
 };
Node PC_Maybe_46maybeToList[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,109,97)
, bytes2word(121,98,101,84)
, bytes2word(111,76,105,115)
, bytes2word(116,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46maybeToList)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46maybeToList)
, useLabel(PC_Prelude_46_58)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46maybeToList)
, useLabel(PC_Maybe_46maybeToList)
,};
