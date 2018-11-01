#include "newmacros.h"
#include "runtime.h"

#define CT_v176	((void*)startLabel+64)
#define ST_v174	((void*)startLabel+96)
#define PS_v175	((void*)startLabel+112)
#define PS_v173	((void*)startLabel+124)
extern Node FN_Prelude_46readsPrec[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46readsPrec[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Prelude_46reads[] = {
  bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46reads[] = {
  CAPTAG(useLabel(FN_Prelude_46reads),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46readsPrec))
,};
Node PP_Prelude_46reads[] = {
 };
Node PC_Prelude_46reads[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,100)
, bytes2word(115,0,0,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reads)
, useLabel(PC_Prelude_46readsPrec)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reads)
, useLabel(PC_Prelude_46reads)
,};
