#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+164)
#define FN_LAMBDA169	((void*)startLabel+216)
#define CT_v181	((void*)startLabel+284)
#define F0_LAMBDA169	((void*)startLabel+292)
#define ST_v172	((void*)startLabel+312)
#define PP_LAMBDA169	((void*)startLabel+328)
#define PC_LAMBDA169	((void*)startLabel+328)
#define ST_v179	((void*)startLabel+328)
#define PS_v176	((void*)startLabel+352)
#define PS_v174	((void*)startLabel+364)
#define PS_v175	((void*)startLabel+376)
#define PS_v171	((void*)startLabel+388)
#define PS_v173	((void*)startLabel+400)
#define PS_v180	((void*)startLabel+412)
#define PS_v178	((void*)startLabel+424)
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46foldl[];
extern Node PC_Prelude_46flip[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v177)
,};
Node FN_Prelude_46reverse[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(10,HEAP_CVAL_N1,17,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,16,HEAP_OFF_N1,11)
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
  HW(3,0)
, 0
,};
Node CF_Prelude_46reverse[] = {
  VAPTAG(useLabel(FN_Prelude_46reverse))
, useLabel(PS_v171)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA169),2)
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v181)
,	/* FN_LAMBDA169: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 40032
, useLabel(ST_v179)
,	/* CT_v181: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA169: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA169),2)
, useLabel(PS_v178)
, 0
, 0
, 0
,};
Node PP_Prelude_46reverse[] = {
 };
Node PC_Prelude_46reverse[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,118,101)
,	/* PP_LAMBDA169: (byte 4) */
 	/* PC_LAMBDA169: (byte 4) */
 	/* ST_v179: (byte 4) */
  bytes2word(114,115,101,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(114,101,118,101)
, bytes2word(114,115,101,58)
, bytes2word(52,58,51,50)
, bytes2word(0,0,0,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reverse)
, useLabel(PC_Prelude_46foldl)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reverse)
, useLabel(PC_Prelude_46flip)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reverse)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reverse)
, useLabel(PC_Prelude_46reverse)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46reverse)
, useLabel(PC_LAMBDA169)
,	/* PS_v180: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA169)
, useLabel(PC_Prelude_46_58)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA169)
, useLabel(PC_LAMBDA169)
,};
