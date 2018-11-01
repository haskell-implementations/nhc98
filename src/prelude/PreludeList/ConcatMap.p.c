#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+84)
#define ST_v180	((void*)startLabel+124)
#define PS_v181	((void*)startLabel+144)
#define PS_v182	((void*)startLabel+156)
#define PS_v179	((void*)startLabel+168)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node CF_Prelude_46concat[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_Prelude_46concatMap[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v180)
,	/* CT_v183: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46concatMap[] = {
  CAPTAG(useLabel(FN_Prelude_46concatMap),1)
, useLabel(PS_v179)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(CF_Prelude_46concat)
,};
Node PP_Prelude_46concatMap[] = {
 };
Node PC_Prelude_46concatMap[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,111,110,99)
, bytes2word(97,116,77,97)
, bytes2word(112,0,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46concatMap)
, useLabel(PC_Prelude_46map)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46concatMap)
, useLabel(PC_Prelude_46_46)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46concatMap)
, useLabel(PC_Prelude_46concatMap)
,};
