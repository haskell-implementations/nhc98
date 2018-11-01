#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+22)
#define v185	((void*)startLabel+32)
#define CT_v191	((void*)startLabel+124)
#define ST_v187	((void*)startLabel+156)
#define PS_v190	((void*)startLabel+172)
#define PS_v189	((void*)startLabel+184)
#define PS_v186	((void*)startLabel+196)
extern Node FN_Prelude_46scanl[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46scanl[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v191)
,};
Node FN_Prelude_46scanl1[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v185: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
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
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v187)
,	/* CT_v191: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46scanl1[] = {
  CAPTAG(useLabel(FN_Prelude_46scanl1),2)
, useLabel(PS_v186)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46scanl))
,};
Node PP_Prelude_46scanl1[] = {
 };
Node PC_Prelude_46scanl1[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,99,97,110)
, bytes2word(108,49,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46scanl1)
, useLabel(PC_Prelude_46scanl)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46scanl1)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46scanl1)
, useLabel(PC_Prelude_46scanl1)
,};
