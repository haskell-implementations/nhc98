#include "newmacros.h"
#include "runtime.h"

#define v172	((void*)startLabel+18)
#define v173	((void*)startLabel+28)
#define CT_v179	((void*)startLabel+136)
#define ST_v175	((void*)startLabel+164)
#define PS_v177	((void*)startLabel+184)
#define PS_v178	((void*)startLabel+196)
#define PS_v174	((void*)startLabel+208)
extern Node PM_Maybe[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v179)
,};
Node FN_Maybe_46listToMaybe[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v172: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v173: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v177)
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
, useLabel(ST_v175)
,	/* CT_v179: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46listToMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46listToMaybe),1)
, useLabel(PS_v174)
, 0
, 0
, 0
,};
Node PP_Maybe_46listToMaybe[] = {
 };
Node PC_Maybe_46listToMaybe[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,108,105)
, bytes2word(115,116,84,111)
, bytes2word(77,97,121,98)
, bytes2word(101,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46listToMaybe)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46listToMaybe)
, useLabel(PC_Prelude_46Just)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46listToMaybe)
, useLabel(PC_Maybe_46listToMaybe)
,};
