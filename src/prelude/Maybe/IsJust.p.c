#include "newmacros.h"
#include "runtime.h"

#define v167	((void*)startLabel+18)
#define v168	((void*)startLabel+28)
#define CT_v174	((void*)startLabel+132)
#define ST_v170	((void*)startLabel+160)
#define PS_v172	((void*)startLabel+176)
#define PS_v173	((void*)startLabel+188)
#define PS_v169	((void*)startLabel+200)
extern Node PM_Maybe[];
extern Node PC_Prelude_46False[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Maybe_46isJust[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v167: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v168: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v172)
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
, useLabel(ST_v170)
,	/* CT_v174: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Maybe_46isJust[] = {
  CAPTAG(useLabel(FN_Maybe_46isJust),1)
, useLabel(PS_v169)
, 0
, 0
, 0
,};
Node PP_Maybe_46isJust[] = {
 };
Node PC_Maybe_46isJust[] = {
 	/* ST_v170: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,105,115)
, bytes2word(74,117,115,116)
, bytes2word(0,0,0,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46isJust)
, useLabel(PC_Prelude_46False)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46isJust)
, useLabel(PC_Prelude_46True)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46isJust)
, useLabel(PC_Maybe_46isJust)
,};
