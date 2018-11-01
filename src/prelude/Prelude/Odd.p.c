#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+84)
#define ST_v178	((void*)startLabel+124)
#define PS_v179	((void*)startLabel+136)
#define PS_v180	((void*)startLabel+148)
#define PS_v177	((void*)startLabel+160)
extern Node FN_Prelude_46even[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46not[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46even[];
extern Node PC_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v181)
,};
Node FN_Prelude_46odd[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v178)
,	/* CT_v181: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Prelude_46odd[] = {
  CAPTAG(useLabel(FN_Prelude_46odd),1)
, useLabel(PS_v177)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46even),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46not)
,};
Node PP_Prelude_46odd[] = {
 };
Node PC_Prelude_46odd[] = {
 	/* ST_v178: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(111,100,100,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46odd)
, useLabel(PC_Prelude_46even)
,	/* PS_v180: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46odd)
, useLabel(PC_Prelude_46_46)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46odd)
, useLabel(PC_Prelude_46odd)
,};
