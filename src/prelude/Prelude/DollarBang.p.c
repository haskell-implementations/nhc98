#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+92)
#define ST_v177	((void*)startLabel+128)
#define PS_v179	((void*)startLabel+140)
#define PS_v178	((void*)startLabel+152)
#define PS_v176	((void*)startLabel+164)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46seq[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46seq[];
extern Node PC_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_Prelude_46_36_33[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v177)
,	/* CT_v180: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_36_33[] = {
  CAPTAG(useLabel(FN_Prelude_46_36_33),2)
, useLabel(PS_v176)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46seq))
,};
Node PP_Prelude_46_36_33[] = {
 };
Node PC_Prelude_46_36_33[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(36,33,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_36_33)
, useLabel(PC_Prelude_46seq)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_36_33)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_36_33)
, useLabel(PC_Prelude_46_36_33)
,};
