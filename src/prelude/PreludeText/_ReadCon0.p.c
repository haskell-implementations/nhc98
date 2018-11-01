#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+92)
#define ST_v179	((void*)startLabel+128)
#define PS_v180	((void*)startLabel+148)
#define PS_v181	((void*)startLabel+160)
#define PS_v178	((void*)startLabel+172)
extern Node FN_Prelude_46_95readCon[];
extern Node FN_Prelude_46readParen[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95readCon[];
extern Node PC_Prelude_46readParen[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v182)
,};
Node FN_Prelude_46_95readCon0[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,2,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v179)
,	/* CT_v182: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46_95readCon0[] = {
  CAPTAG(useLabel(FN_Prelude_46_95readCon0),3)
, useLabel(PS_v178)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95readCon))
, VAPTAG(useLabel(FN_Prelude_46readParen))
,};
Node PP_Prelude_46_95readCon0[] = {
 };
Node PC_Prelude_46_95readCon0[] = {
 	/* ST_v179: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,114,101,97)
, bytes2word(100,67,111,110)
, bytes2word(48,0,0,0)
,	/* PS_v180: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95readCon0)
, useLabel(PC_Prelude_46_95readCon)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95readCon0)
, useLabel(PC_Prelude_46readParen)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95readCon0)
, useLabel(PC_Prelude_46_95readCon0)
,};
