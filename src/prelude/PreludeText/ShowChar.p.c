#include "newmacros.h"
#include "runtime.h"

#define CT_v165	((void*)startLabel+56)
#define FN_LAMBDA160	((void*)startLabel+100)
#define CT_v169	((void*)startLabel+168)
#define F0_LAMBDA160	((void*)startLabel+176)
#define ST_v163	((void*)startLabel+196)
#define PP_LAMBDA160	((void*)startLabel+213)
#define PC_LAMBDA160	((void*)startLabel+213)
#define ST_v167	((void*)startLabel+213)
#define PS_v162	((void*)startLabel+236)
#define PS_v164	((void*)startLabel+248)
#define PS_v168	((void*)startLabel+260)
#define PS_v166	((void*)startLabel+272)
extern Node PM_Prelude[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v165)
,};
Node FN_Prelude_46showChar[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v164)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v163)
,	/* CT_v165: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46showChar[] = {
  VAPTAG(useLabel(FN_Prelude_46showChar))
, useLabel(PS_v162)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA160),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v169)
,	/* FN_LAMBDA160: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, 40020
, useLabel(ST_v167)
,	/* CT_v169: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA160: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA160),2)
, useLabel(PS_v166)
, 0
, 0
, 0
,};
Node PP_Prelude_46showChar[] = {
 };
Node PC_Prelude_46showChar[] = {
 	/* ST_v163: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,104,111,119)
, bytes2word(67,104,97,114)
,	/* PP_LAMBDA160: (byte 1) */
 	/* PC_LAMBDA160: (byte 1) */
 	/* ST_v167: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,115,104,111)
, bytes2word(119,67,104,97)
, bytes2word(114,58,52,58)
, bytes2word(50,48,0,0)
,	/* PS_v162: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showChar)
, useLabel(PC_Prelude_46showChar)
,	/* PS_v164: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46showChar)
, useLabel(PC_LAMBDA160)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA160)
, useLabel(PC_Prelude_46_58)
,	/* PS_v166: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA160)
, useLabel(PC_LAMBDA160)
,};
