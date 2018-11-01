#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+84)
#define ST_v172	((void*)startLabel+124)
#define PS_v173	((void*)startLabel+136)
#define PS_v174	((void*)startLabel+148)
#define PS_v171	((void*)startLabel+160)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46or[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_Prelude_46any[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
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
, 40001
, useLabel(ST_v172)
,	/* CT_v175: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46any[] = {
  CAPTAG(useLabel(FN_Prelude_46any),1)
, useLabel(PS_v171)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46or)
,};
Node PP_Prelude_46any[] = {
 };
Node PC_Prelude_46any[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(97,110,121,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46any)
, useLabel(PC_Prelude_46map)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46any)
, useLabel(PC_Prelude_46_46)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46any)
, useLabel(PC_Prelude_46any)
,};
