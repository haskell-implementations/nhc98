#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+92)
#define ST_v180	((void*)startLabel+128)
#define PS_v182	((void*)startLabel+144)
#define PS_v181	((void*)startLabel+156)
#define PS_v179	((void*)startLabel+168)
extern Node FN_Prelude_46not[];
extern Node FN_Monad_46when[];
extern Node PM_Monad[];
extern Node PC_Monad_46when[];
extern Node PC_Prelude_46not[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v183)
,};
Node FN_Monad_46unless[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
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
  HW(2,3)
, 0
,};
Node F0_Monad_46unless[] = {
  CAPTAG(useLabel(FN_Monad_46unless),3)
, useLabel(PS_v179)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46not))
, VAPTAG(useLabel(FN_Monad_46when))
,};
Node PP_Monad_46unless[] = {
 };
Node PC_Monad_46unless[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(77,111,110,97)
, bytes2word(100,46,117,110)
, bytes2word(108,101,115,115)
, bytes2word(0,0,0,0)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46unless)
, useLabel(PC_Monad_46when)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46unless)
, useLabel(PC_Prelude_46not)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Monad)
, useLabel(PP_Monad_46unless)
, useLabel(PC_Monad_46unless)
,};
