#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+60)
#define ST_v170	((void*)startLabel+92)
#define PS_v171	((void*)startLabel+108)
#define PS_v169	((void*)startLabel+120)
extern Node FN_Prelude_46primError[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46primError[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v172)
,};
Node FN_Prelude_46error[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v170)
,	/* CT_v172: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46error[] = {
  CAPTAG(useLabel(FN_Prelude_46error),1)
, useLabel(PS_v169)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46primError))
,};
Node PP_Prelude_46error[] = {
 };
Node PC_Prelude_46error[] = {
 	/* ST_v170: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(101,114,114,111)
, bytes2word(114,0,0,0)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46error)
, useLabel(PC_Prelude_46primError)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46error)
, useLabel(PC_Prelude_46error)
,};
