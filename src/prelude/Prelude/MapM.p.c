#include "newmacros.h"
#include "runtime.h"

#define CT_v191	((void*)startLabel+100)
#define ST_v188	((void*)startLabel+136)
#define PS_v190	((void*)startLabel+152)
#define PS_v189	((void*)startLabel+164)
#define PS_v187	((void*)startLabel+176)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46sequence[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46sequence[];
extern Node PC_Prelude_46map[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,};
Node FN_Prelude_46mapM[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,3)
, bytes2word(PUSH_P1,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v188)
,	/* CT_v191: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46mapM[] = {
  CAPTAG(useLabel(FN_Prelude_46mapM),3)
, useLabel(PS_v187)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46map))
, VAPTAG(useLabel(FN_Prelude_46sequence))
,};
Node PP_Prelude_46mapM[] = {
 };
Node PC_Prelude_46mapM[] = {
 	/* ST_v188: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,112,77)
, bytes2word(0,0,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46mapM)
, useLabel(PC_Prelude_46sequence)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46mapM)
, useLabel(PC_Prelude_46map)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46mapM)
, useLabel(PC_Prelude_46mapM)
,};
