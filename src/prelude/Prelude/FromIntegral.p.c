#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+124)
#define ST_v184	((void*)startLabel+164)
#define PS_v187	((void*)startLabel+188)
#define PS_v186	((void*)startLabel+200)
#define PS_v185	((void*)startLabel+212)
#define PS_v183	((void*)startLabel+224)
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46toInteger[];
extern Node FN_Prelude_46_46[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_46[];
extern Node PC_Prelude_46toInteger[];
extern Node PC_Prelude_46fromInteger[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46fromIntegral[] = {
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
Node F0_Prelude_46fromIntegral[] = {
  CAPTAG(useLabel(FN_Prelude_46fromIntegral),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46toInteger))
, VAPTAG(useLabel(FN_Prelude_46_46))
,};
Node PP_Prelude_46fromIntegral[] = {
 };
Node PC_Prelude_46fromIntegral[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,114,111,109)
, bytes2word(73,110,116,101)
, bytes2word(103,114,97,108)
, bytes2word(0,0,0,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46fromIntegral)
, useLabel(PC_Prelude_46_46)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46fromIntegral)
, useLabel(PC_Prelude_46toInteger)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46fromIntegral)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46fromIntegral)
, useLabel(PC_Prelude_46fromIntegral)
,};
