#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+84)
#define ST_v171	((void*)startLabel+124)
#define PS_v173	((void*)startLabel+140)
#define PS_v172	((void*)startLabel+152)
#define PS_v170	((void*)startLabel+164)
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];
extern Node FN_Prelude_46span[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46span[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_Prelude_46break[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
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
,	/* CT_v174: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46break[] = {
  CAPTAG(useLabel(FN_Prelude_46break),1)
, useLabel(PS_v170)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
, CAPTAG(useLabel(FN_Prelude_46span),1)
,};
Node PP_Prelude_46break[] = {
 };
Node PC_Prelude_46break[] = {
 	/* ST_v171: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(98,114,101,97)
, bytes2word(107,0,0,0)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46break)
, useLabel(PC_Prelude_46span)
,	/* PS_v172: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46break)
, useLabel(PC_Prelude_46_46)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46break)
, useLabel(PC_Prelude_46break)
,};
