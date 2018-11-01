#include "newmacros.h"
#include "runtime.h"

#define FN_System_46CPUTime_46realToInteger	((void*)startLabel+12)
#define CT_v191	((void*)startLabel+128)
#define F0_System_46CPUTime_46realToInteger	((void*)startLabel+136)
#define ST_v185	((void*)startLabel+176)
#define PP_System_46CPUTime_46realToInteger	((void*)startLabel+191)
#define PC_System_46CPUTime_46realToInteger	((void*)startLabel+191)
#define ST_v187	((void*)startLabel+191)
#define PS_v189	((void*)startLabel+220)
#define PS_v188	((void*)startLabel+232)
#define PS_v186	((void*)startLabel+244)
#define PS_v190	((void*)startLabel+256)
extern Node FN_Prelude_46realToFrac[];
extern Node CF_Prelude_46Fractional_46Prelude_46Double[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Double_46round[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46realToFrac[];
extern Node PC_Prelude_46RealFrac_46Prelude_46Double_46round[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,	/* FN_System_46CPUTime_46realToInteger: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
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
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, 420001
, useLabel(ST_v187)
,	/* CT_v191: (byte 0) */
  HW(5,2)
, 0
,	/* F0_System_46CPUTime_46realToInteger: (byte 0) */
  CAPTAG(useLabel(FN_System_46CPUTime_46realToInteger),2)
, useLabel(PS_v186)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46realToFrac))
, useLabel(CF_Prelude_46Fractional_46Prelude_46Double)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Double_46round))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
,};
Node PM_System_46CPUTime[] = {
 	/* ST_v185: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,67)
, bytes2word(80,85,84,105)
,	/* PP_System_46CPUTime_46realToInteger: (byte 3) */
 	/* PC_System_46CPUTime_46realToInteger: (byte 3) */
 	/* ST_v187: (byte 3) */
  bytes2word(109,101,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,67,80)
, bytes2word(85,84,105,109)
, bytes2word(101,46,114,101)
, bytes2word(97,108,84,111)
, bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_System_46CPUTime)
, useLabel(PP_System_46CPUTime_46realToInteger)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v188: (byte 0) */
  useLabel(PM_System_46CPUTime)
, useLabel(PP_System_46CPUTime_46realToInteger)
, useLabel(PC_Prelude_46realToFrac)
,	/* PS_v186: (byte 0) */
  useLabel(PM_System_46CPUTime)
, useLabel(PP_System_46CPUTime_46realToInteger)
, useLabel(PC_System_46CPUTime_46realToInteger)
,	/* PS_v190: (byte 0) */
  useLabel(PM_System_46CPUTime)
, useLabel(PP_System_46CPUTime_46realToInteger)
, useLabel(PC_Prelude_46RealFrac_46Prelude_46Double_46round)
,};
