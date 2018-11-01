#include "newmacros.h"
#include "runtime.h"

#define CT_v214	((void*)startLabel+32)
#define CT_v216	((void*)startLabel+104)
#define CT_v218	((void*)startLabel+172)
#define ST_v212	((void*)startLabel+196)
#define ST_v213	((void*)startLabel+208)
#define ST_v215	((void*)startLabel+232)
#define ST_v217	((void*)startLabel+250)
extern Node TM_Debug_46Trace[];
extern Node FN_IO_46hPutStrLn[];
extern Node CF_IO_46stderr[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46_36[];
extern Node F0_NHC_46Internal_46unsafePerformIO[];
extern Node FN_Prelude_46show[];
extern Node FN_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v214)
,};
Node FN_Debug_46Trace_46putTraceMsg[] = {
  useLabel(TM_Debug_46Trace)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 360001
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Debug_46Trace_46putTraceMsg[] = {
  CAPTAG(useLabel(FN_Debug_46Trace_46putTraceMsg),1)
, VAPTAG(useLabel(FN_IO_46hPutStrLn))
, useLabel(CF_IO_46stderr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v216)
,};
Node FN_Debug_46Trace_46trace[] = {
  useLabel(TM_Debug_46Trace)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 600001
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Debug_46Trace_46trace[] = {
  CAPTAG(useLabel(FN_Debug_46Trace_46trace),2)
, VAPTAG(useLabel(FN_Debug_46Trace_46putTraceMsg))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,};
Node FN_Debug_46Trace_46traceShow[] = {
  useLabel(TM_Debug_46Trace)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 700001
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Debug_46Trace_46traceShow[] = {
  CAPTAG(useLabel(FN_Debug_46Trace_46traceShow),1)
, VAPTAG(useLabel(FN_Prelude_46show))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Debug_46Trace_46trace)
,};
Node PM_Debug_46Trace[] = {
 	/* ST_v212: (byte 0) */
  bytes2word(68,101,98,117)
, bytes2word(103,46,84,114)
,	/* ST_v213: (byte 4) */
  bytes2word(97,99,101,0)
, bytes2word(68,101,98,117)
, bytes2word(103,46,84,114)
, bytes2word(97,99,101,46)
, bytes2word(112,117,116,84)
, bytes2word(114,97,99,101)
,	/* ST_v215: (byte 4) */
  bytes2word(77,115,103,0)
, bytes2word(68,101,98,117)
, bytes2word(103,46,84,114)
, bytes2word(97,99,101,46)
, bytes2word(116,114,97,99)
,	/* ST_v217: (byte 2) */
  bytes2word(101,0,68,101)
, bytes2word(98,117,103,46)
, bytes2word(84,114,97,99)
, bytes2word(101,46,116,114)
, bytes2word(97,99,101,83)
, bytes2word(104,111,119,0)
,};
