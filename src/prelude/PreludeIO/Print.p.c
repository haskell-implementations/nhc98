#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+124)
#define ST_v171	((void*)startLabel+164)
#define PS_v173	((void*)startLabel+180)
#define PS_v174	((void*)startLabel+192)
#define PS_v172	((void*)startLabel+204)
#define PS_v170	((void*)startLabel+216)
extern Node FN_Prelude_46show[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46putStrLn[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46putStrLn[];
extern Node PC_Prelude_46show[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_Prelude_46print[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, useLabel(PS_v173)
, 0
, 0
, 0
, 0
, useLabel(PS_v172)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v171)
,	/* CT_v175: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46print[] = {
  CAPTAG(useLabel(FN_Prelude_46print),2)
, useLabel(PS_v170)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46putStrLn))
,};
Node PP_Prelude_46print[] = {
 };
Node PC_Prelude_46print[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,105,110)
, bytes2word(116,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46print)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46print)
, useLabel(PC_Prelude_46putStrLn)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46print)
, useLabel(PC_Prelude_46show)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46print)
, useLabel(PC_Prelude_46print)
,};
