#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+168)
#define ST_v172	((void*)startLabel+212)
#define PS_v175	((void*)startLabel+228)
#define PS_v176	((void*)startLabel+240)
#define PS_v173	((void*)startLabel+252)
#define PS_v174	((void*)startLabel+264)
#define PS_v171	((void*)startLabel+276)
extern Node FN_Prelude_46_42[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldl[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46foldl[];
extern Node PC_Prelude_46_42[];
extern Node PC_Prelude_46fromInteger[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_Prelude_46product[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_CADR_N1,23,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,28,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,24)
, bytes2word(HEAP_OFF_N1,13,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1
, useLabel(PS_v175)
, 0
, 0
, 0
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
, 40001
, useLabel(ST_v172)
,	/* CT_v177: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46product[] = {
  CAPTAG(useLabel(FN_Prelude_46product),1)
, useLabel(PS_v171)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
,};
Node PP_Prelude_46product[] = {
 };
Node PC_Prelude_46product[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(112,114,111,100)
, bytes2word(117,99,116,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46product)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46product)
, useLabel(PC_Prelude_46foldl)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46product)
, useLabel(PC_Prelude_46_42)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46product)
, useLabel(PC_Prelude_46fromInteger)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46product)
, useLabel(PC_Prelude_46product)
,};
