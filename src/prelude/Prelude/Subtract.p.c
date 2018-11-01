#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+84)
#define ST_v175	((void*)startLabel+120)
#define PS_v177	((void*)startLabel+140)
#define PS_v176	((void*)startLabel+152)
#define PS_v174	((void*)startLabel+164)
extern Node FN_Prelude_46_45[];
extern Node FN_Prelude_46flip[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46flip[];
extern Node PC_Prelude_46_45[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v178)
,};
Node FN_Prelude_46subtract[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v177)
, 0
, 0
, 0
, 0
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v175)
,	/* CT_v178: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46subtract[] = {
  CAPTAG(useLabel(FN_Prelude_46subtract),1)
, useLabel(PS_v174)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_45))
, CAPTAG(useLabel(FN_Prelude_46flip),2)
,};
Node PP_Prelude_46subtract[] = {
 };
Node PC_Prelude_46subtract[] = {
 	/* ST_v175: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,117,98,116)
, bytes2word(114,97,99,116)
, bytes2word(0,0,0,0)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46subtract)
, useLabel(PC_Prelude_46flip)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46subtract)
, useLabel(PC_Prelude_46_45)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46subtract)
, useLabel(PC_Prelude_46subtract)
,};
