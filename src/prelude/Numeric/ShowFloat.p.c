#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+108)
#define ST_v174	((void*)startLabel+140)
#define PS_v176	((void*)startLabel+160)
#define PS_v175	((void*)startLabel+172)
#define PS_v173	((void*)startLabel+184)
extern Node FN_Numeric_46showGFloat[];
extern Node PM_Numeric[];
extern Node PC_Numeric_46showGFloat[];
extern Node PC_Prelude_46Nothing[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Numeric_46showFloat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, useLabel(PS_v175)
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
, useLabel(ST_v174)
,	/* CT_v177: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Numeric_46showFloat[] = {
  CAPTAG(useLabel(FN_Numeric_46showFloat),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Numeric_46showGFloat),1)
,};
Node PP_Numeric_46showFloat[] = {
 };
Node PC_Numeric_46showFloat[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(115,104,111,119)
, bytes2word(70,108,111,97)
, bytes2word(116,0,0,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showFloat)
, useLabel(PC_Numeric_46showGFloat)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showFloat)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Numeric)
, useLabel(PP_Numeric_46showFloat)
, useLabel(PC_Numeric_46showFloat)
,};
