#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+80)
#define FN_LAMBDA169	((void*)startLabel+128)
#define CT_v179	((void*)startLabel+196)
#define F0_LAMBDA169	((void*)startLabel+204)
#define ST_v172	((void*)startLabel+224)
#define PP_LAMBDA169	((void*)startLabel+236)
#define PC_LAMBDA169	((void*)startLabel+236)
#define ST_v177	((void*)startLabel+236)
#define PS_v174	((void*)startLabel+260)
#define PS_v171	((void*)startLabel+272)
#define PS_v173	((void*)startLabel+284)
#define PS_v178	((void*)startLabel+296)
#define PS_v176	((void*)startLabel+308)
extern Node FN_Prelude_46zipWith[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46zipWith[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v175)
,};
Node FN_Prelude_46zip[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
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
,	/* CT_v175: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46zip[] = {
  VAPTAG(useLabel(FN_Prelude_46zip))
, useLabel(PS_v171)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA169),2)
, CAPTAG(useLabel(FN_Prelude_46zipWith),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v179)
,	/* FN_LAMBDA169: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, 40019
, useLabel(ST_v177)
,	/* CT_v179: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA169: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA169),2)
, useLabel(PS_v176)
, 0
, 0
, 0
,};
Node PP_Prelude_46zip[] = {
 };
Node PC_Prelude_46zip[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* PP_LAMBDA169: (byte 4) */
 	/* PC_LAMBDA169: (byte 4) */
 	/* ST_v177: (byte 4) */
  bytes2word(122,105,112,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,58)
, bytes2word(52,58,49,57)
, bytes2word(45,52,58,50)
, bytes2word(49,0,0,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zip)
, useLabel(PC_Prelude_46zipWith)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zip)
, useLabel(PC_Prelude_46zip)
,	/* PS_v173: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zip)
, useLabel(PC_LAMBDA169)
,	/* PS_v178: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA169)
, useLabel(PC_Prelude_462)
,	/* PS_v176: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA169)
, useLabel(PC_LAMBDA169)
,};
