#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+124)
#define ST_v184	((void*)startLabel+164)
#define PS_v187	((void*)startLabel+184)
#define PS_v185	((void*)startLabel+196)
#define PS_v186	((void*)startLabel+208)
#define PS_v183	((void*)startLabel+220)
extern Node FN_Prelude_46fromRational[];
extern Node FN_Prelude_46toRational[];
extern Node FN_Prelude_46_46[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46fromRational[];
extern Node PC_Prelude_46toRational[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46realToFrac[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v184)
,	/* CT_v188: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46realToFrac[] = {
  CAPTAG(useLabel(FN_Prelude_46realToFrac),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_Prelude_46toRational))
, VAPTAG(useLabel(FN_Prelude_46_46))
,};
Node PP_Prelude_46realToFrac[] = {
 };
Node PC_Prelude_46realToFrac[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,97,108)
, bytes2word(84,111,70,114)
, bytes2word(97,99,0,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46realToFrac)
, useLabel(PC_Prelude_46_46)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46realToFrac)
, useLabel(PC_Prelude_46fromRational)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46realToFrac)
, useLabel(PC_Prelude_46toRational)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46realToFrac)
, useLabel(PC_Prelude_46realToFrac)
,};
