#include "newmacros.h"
#include "runtime.h"

#define v183	((void*)startLabel+22)
#define v184	((void*)startLabel+32)
#define v185	((void*)startLabel+68)
#define v187	((void*)startLabel+85)
#define v180	((void*)startLabel+90)
#define CT_v196	((void*)startLabel+268)
#define FN_LAMBDA178	((void*)startLabel+320)
#define CT_v200	((void*)startLabel+364)
#define CF_LAMBDA178	((void*)startLabel+372)
#define ST_v190	((void*)startLabel+392)
#define PP_LAMBDA178	((void*)startLabel+410)
#define PC_LAMBDA178	((void*)startLabel+410)
#define ST_v198	((void*)startLabel+410)
#define ST_v199	((void*)startLabel+437)
#define PS_v195	((void*)startLabel+508)
#define PS_v192	((void*)startLabel+520)
#define PS_v193	((void*)startLabel+532)
#define PS_v189	((void*)startLabel+544)
#define PS_v194	((void*)startLabel+556)
#define PS_v197	((void*)startLabel+568)
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95patternMatchFail[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46takeWhile[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v183: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v184: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(24,0,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,22,HEAP_CVAL_N1)
, bytes2word(27,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v185: (byte 4) */
  bytes2word(HEAP_I1,HEAP_OFF_N1,13,RETURN)
, bytes2word(PUSH_CVAL_P1,8,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,11,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
,	/* v187: (byte 1) */
  bytes2word(RETURN,POP_P1,2,JUMP)
,	/* v180: (byte 2) */
  bytes2word(2,0,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,37,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v190)
,	/* CT_v196: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46takeWhile[] = {
  CAPTAG(useLabel(FN_Prelude_46takeWhile),2)
, useLabel(PS_v189)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46takeWhile))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA178))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,	/* FN_LAMBDA178: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v199)
, 40001
, useLabel(ST_v198)
,	/* CT_v200: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA178: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA178))
, useLabel(PS_v197)
, 0
, 0
, 0
,};
Node PP_Prelude_46takeWhile[] = {
 };
Node PC_Prelude_46takeWhile[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,97,107,101)
, bytes2word(87,104,105,108)
,	/* PP_LAMBDA178: (byte 2) */
 	/* PC_LAMBDA178: (byte 2) */
 	/* ST_v198: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,116,97)
, bytes2word(107,101,87,104)
, bytes2word(105,108,101,58)
, bytes2word(52,58,49,45)
, bytes2word(54,58,51,53)
,	/* ST_v199: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(58,46,47,84)
, bytes2word(97,107,101,87)
, bytes2word(104,105,108,101)
, bytes2word(46,104,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,52,58)
, bytes2word(49,45,54,58)
, bytes2word(51,53,46,0)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46takeWhile)
, useLabel(PC_NHC_46Internal_46_95patternMatchFail)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46takeWhile)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v193: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46takeWhile)
, useLabel(PC_Prelude_46_58)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46takeWhile)
, useLabel(PC_Prelude_46takeWhile)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46takeWhile)
, useLabel(PC_LAMBDA178)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA178)
, useLabel(PC_LAMBDA178)
,};
