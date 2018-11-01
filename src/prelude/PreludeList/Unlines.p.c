#include "newmacros.h"
#include "runtime.h"

#define CT_v172	((void*)startLabel+116)
#define FN_LAMBDA165	((void*)startLabel+168)
#define CT_v176	((void*)startLabel+212)
#define CF_LAMBDA165	((void*)startLabel+220)
#define ST_v175	((void*)startLabel+240)
#define ST_v168	((void*)startLabel+244)
#define PP_LAMBDA165	((void*)startLabel+260)
#define PC_LAMBDA165	((void*)startLabel+260)
#define ST_v174	((void*)startLabel+260)
#define PS_v171	((void*)startLabel+288)
#define PS_v170	((void*)startLabel+300)
#define PS_v167	((void*)startLabel+312)
#define PS_v169	((void*)startLabel+324)
#define PS_v173	((void*)startLabel+336)
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46_43_43[];
extern Node FN_Prelude_46concatMap[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46concatMap[];
extern Node PC_Prelude_46flip[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v172)
,};
Node FN_Prelude_46unlines[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v171)
, 0
, 0
, 0
, 0
, useLabel(PS_v170)
, 0
, 0
, 0
, 0
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v168)
,	/* CT_v172: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46unlines[] = {
  VAPTAG(useLabel(FN_Prelude_46unlines))
, useLabel(PS_v167)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA165))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46_43_43)
, VAPTAG(useLabel(FN_Prelude_46concatMap))
, bytes2word(0,0,0,0)
, useLabel(CT_v176)
,	/* FN_LAMBDA165: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v175)
, 40033
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA165: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA165))
, useLabel(PS_v173)
, 0
, 0
, 0
,	/* ST_v175: (byte 0) */
  bytes2word(10,0,0,0)
,};
Node PP_Prelude_46unlines[] = {
 };
Node PC_Prelude_46unlines[] = {
 	/* ST_v168: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,110,108,105)
,	/* PP_LAMBDA165: (byte 4) */
 	/* PC_LAMBDA165: (byte 4) */
 	/* ST_v174: (byte 4) */
  bytes2word(110,101,115,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,110,108,105)
, bytes2word(110,101,115,58)
, bytes2word(52,58,51,51)
, bytes2word(45,52,58,51)
, bytes2word(54,0,0,0)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46unlines)
, useLabel(PC_Prelude_46concatMap)
,	/* PS_v170: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46unlines)
, useLabel(PC_Prelude_46flip)
,	/* PS_v167: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46unlines)
, useLabel(PC_Prelude_46unlines)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46unlines)
, useLabel(PC_LAMBDA165)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA165)
, useLabel(PC_LAMBDA165)
,};
