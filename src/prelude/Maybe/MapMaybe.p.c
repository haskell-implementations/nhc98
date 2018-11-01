#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+84)
#define ST_v180	((void*)startLabel+124)
#define PS_v181	((void*)startLabel+140)
#define PS_v182	((void*)startLabel+152)
#define PS_v179	((void*)startLabel+164)
extern Node FN_Prelude_46map[];
extern Node FN_Prelude_46_46[];
extern Node F0_Maybe_46catMaybes[];
extern Node PM_Maybe[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_Maybe_46mapMaybe[] = {
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
, 60001
, useLabel(ST_v180)
,	/* CT_v183: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Maybe_46mapMaybe[] = {
  CAPTAG(useLabel(FN_Maybe_46mapMaybe),1)
, useLabel(PS_v179)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46map),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Maybe_46catMaybes)
,};
Node PP_Maybe_46mapMaybe[] = {
 };
Node PC_Maybe_46mapMaybe[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,109,97)
, bytes2word(112,77,97,121)
, bytes2word(98,101,0,0)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46mapMaybe)
, useLabel(PC_Prelude_46map)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46mapMaybe)
, useLabel(PC_Prelude_46_46)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46mapMaybe)
, useLabel(PC_Maybe_46mapMaybe)
,};
