#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+140)
#define ST_v169	((void*)startLabel+176)
#define PS_v170	((void*)startLabel+192)
#define PS_v171	((void*)startLabel+204)
#define PS_v168	((void*)startLabel+216)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v172)
,};
Node FN_Prelude_46iterate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,13,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,13,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, useLabel(PS_v170)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v169)
,	/* CT_v172: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46iterate[] = {
  CAPTAG(useLabel(FN_Prelude_46iterate),2)
, useLabel(PS_v168)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46iterate))
,};
Node PP_Prelude_46iterate[] = {
 };
Node PC_Prelude_46iterate[] = {
 	/* ST_v169: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,116,101,114)
, bytes2word(97,116,101,0)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46iterate)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46iterate)
, useLabel(PC_Prelude_46_58)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46iterate)
, useLabel(PC_Prelude_46iterate)
,};
