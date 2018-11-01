#include "newmacros.h"
#include "runtime.h"

#define v185	((void*)startLabel+22)
#define v182	((void*)startLabel+26)
#define v179	((void*)startLabel+45)
#define CT_v190	((void*)startLabel+160)
#define FN_LAMBDA177	((void*)startLabel+212)
#define CT_v194	((void*)startLabel+256)
#define CF_LAMBDA177	((void*)startLabel+264)
#define ST_v184	((void*)startLabel+284)
#define PP_LAMBDA177	((void*)startLabel+300)
#define PC_LAMBDA177	((void*)startLabel+300)
#define ST_v192	((void*)startLabel+300)
#define ST_v193	((void*)startLabel+326)
#define PS_v189	((void*)startLabel+360)
#define PS_v187	((void*)startLabel+372)
#define PS_v188	((void*)startLabel+384)
#define PS_v183	((void*)startLabel+396)
#define PS_v186	((void*)startLabel+408)
#define PS_v191	((void*)startLabel+420)
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46max[];
extern Node FN_Prelude_46foldl1[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46foldl1[];
extern Node PC_Prelude_46error[];
extern Node PC_Prelude_46max[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v190)
,};
Node FN_Prelude_46maximum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v185: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v182: (byte 2) */
  bytes2word(21,0,POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v179: (byte 1) */
  bytes2word(RETURN_EVAL,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v184)
,	/* CT_v190: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46maximum[] = {
  CAPTAG(useLabel(FN_Prelude_46maximum),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA177))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46max))
, VAPTAG(useLabel(FN_Prelude_46foldl1))
, bytes2word(0,0,0,0)
, useLabel(CT_v194)
,	/* FN_LAMBDA177: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v193)
, 60020
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA177: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA177))
, useLabel(PS_v191)
, 0
, 0
, 0
,};
Node PP_Prelude_46maximum[] = {
 };
Node PC_Prelude_46maximum[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,120,105)
,	/* PP_LAMBDA177: (byte 4) */
 	/* PC_LAMBDA177: (byte 4) */
 	/* ST_v192: (byte 4) */
  bytes2word(109,117,109,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(109,97,120,105)
, bytes2word(109,117,109,58)
, bytes2word(54,58,50,48)
, bytes2word(45,54,58,53)
,	/* ST_v193: (byte 2) */
  bytes2word(50,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,76,105,115)
, bytes2word(116,46,109,97)
, bytes2word(120,105,109,117)
, bytes2word(109,58,32,101)
, bytes2word(109,112,116,121)
, bytes2word(32,108,105,115)
, bytes2word(116,0,0,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46maximum)
, useLabel(PC_Prelude_46foldl1)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46maximum)
, useLabel(PC_Prelude_46error)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46maximum)
, useLabel(PC_Prelude_46max)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46maximum)
, useLabel(PC_Prelude_46maximum)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46maximum)
, useLabel(PC_LAMBDA177)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA177)
, useLabel(PC_LAMBDA177)
,};
