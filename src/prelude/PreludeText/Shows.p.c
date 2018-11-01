#include "newmacros.h"
#include "runtime.h"

#define CT_v171	((void*)startLabel+64)
#define ST_v169	((void*)startLabel+96)
#define PS_v170	((void*)startLabel+112)
#define PS_v168	((void*)startLabel+124)
extern Node FN_Prelude_46showsPrec[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46showsPrec[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v171)
,};
Node FN_Prelude_46shows[] = {
  bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v170)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v169)
,	/* CT_v171: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46shows[] = {
  CAPTAG(useLabel(FN_Prelude_46shows),1)
, useLabel(PS_v168)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46showsPrec))
,};
Node PP_Prelude_46shows[] = {
 };
Node PC_Prelude_46shows[] = {
 	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(115,0,0,0)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46shows)
, useLabel(PC_Prelude_46showsPrec)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46shows)
, useLabel(PC_Prelude_46shows)
,};
