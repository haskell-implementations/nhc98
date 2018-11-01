#include "newmacros.h"
#include "runtime.h"

#define CT_v220	((void*)startLabel+120)
#define ST_v216	((void*)startLabel+160)
#define PS_v218	((void*)startLabel+176)
#define PS_v217	((void*)startLabel+188)
#define PS_v219	((void*)startLabel+200)
#define PS_v215	((void*)startLabel+212)
extern Node FN_Ix_46range[];
extern Node FN_Array_46bounds[];
extern Node FN_Prelude_46_46[];
extern Node PM_Array[];
extern Node PC_Array_46bounds[];
extern Node PC_Ix_46range[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v220)
,};
Node FN_Array_46indices[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v219)
, 0
, 0
, 0
, 0
, useLabel(PS_v218)
, 0
, 0
, 0
, 0
, useLabel(PS_v217)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v216)
,	/* CT_v220: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Array_46indices[] = {
  CAPTAG(useLabel(FN_Array_46indices),1)
, useLabel(PS_v215)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Ix_46range))
, CAPTAG(useLabel(FN_Array_46bounds),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
,};
Node PP_Array_46indices[] = {
 };
Node PC_Array_46indices[] = {
 	/* ST_v216: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,105,110)
, bytes2word(100,105,99,101)
, bytes2word(115,0,0,0)
,	/* PS_v218: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46indices)
, useLabel(PC_Array_46bounds)
,	/* PS_v217: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46indices)
, useLabel(PC_Ix_46range)
,	/* PS_v219: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46indices)
, useLabel(PC_Prelude_46_46)
,	/* PS_v215: (byte 0) */
  useLabel(PM_Array)
, useLabel(PP_Array_46indices)
, useLabel(PC_Array_46indices)
,};
