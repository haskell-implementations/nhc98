#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+108)
#define ST_v170	((void*)startLabel+140)
#define PS_v172	((void*)startLabel+156)
#define PS_v171	((void*)startLabel+168)
#define PS_v169	((void*)startLabel+180)
extern Node FN_Prelude_46const[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46const[];
extern Node PC_Prelude_46Left[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v173)
,};
Node FN_Prelude_46ioError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v172)
, 0
, 0
, 0
, 0
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v170)
,	/* CT_v173: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46ioError[] = {
  CAPTAG(useLabel(FN_Prelude_46ioError),1)
, useLabel(PS_v169)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46const),1)
,};
Node PP_Prelude_46ioError[] = {
 };
Node PC_Prelude_46ioError[] = {
 	/* ST_v170: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(105,111,69,114)
, bytes2word(114,111,114,0)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46ioError)
, useLabel(PC_Prelude_46const)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46ioError)
, useLabel(PC_Prelude_46Left)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46ioError)
, useLabel(PC_Prelude_46ioError)
,};
