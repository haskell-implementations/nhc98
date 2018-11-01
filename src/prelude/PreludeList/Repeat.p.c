#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+80)
#define ST_v168	((void*)startLabel+108)
#define PS_v169	((void*)startLabel+124)
#define PS_v167	((void*)startLabel+136)
extern Node PM_Prelude[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v170)
,};
Node FN_Prelude_46repeat[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(6,PUSH_P1,0,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v168)
,	/* CT_v170: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46repeat[] = {
  CAPTAG(useLabel(FN_Prelude_46repeat),1)
, useLabel(PS_v167)
, 0
, 0
, 0
,};
Node PP_Prelude_46repeat[] = {
 };
Node PC_Prelude_46repeat[] = {
 	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,112,101)
, bytes2word(97,116,0,0)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46repeat)
, useLabel(PC_Prelude_46_58)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46repeat)
, useLabel(PC_Prelude_46repeat)
,};
