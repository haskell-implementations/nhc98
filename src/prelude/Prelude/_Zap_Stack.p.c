#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+80)
#define FN_LAMBDA164	((void*)startLabel+124)
#define CT_v174	((void*)startLabel+168)
#define CF_LAMBDA164	((void*)startLabel+176)
#define ST_v173	((void*)startLabel+196)
#define ST_v167	((void*)startLabel+232)
#define PP_LAMBDA164	((void*)startLabel+251)
#define PC_LAMBDA164	((void*)startLabel+251)
#define ST_v172	((void*)startLabel+251)
#define PS_v169	((void*)startLabel+280)
#define PS_v166	((void*)startLabel+292)
#define PS_v168	((void*)startLabel+304)
#define PS_v171	((void*)startLabel+316)
extern Node FN_Prelude_46error[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v170)
,};
Node FN_Prelude_46_95zap_95stack[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, 30001
, useLabel(ST_v167)
,	/* CT_v170: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46_95zap_95stack[] = {
  VAPTAG(useLabel(FN_Prelude_46_95zap_95stack))
, useLabel(PS_v166)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v174)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v173)
, 30020
, useLabel(ST_v172)
,	/* CT_v174: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
, useLabel(PS_v171)
, 0
, 0
, 0
,	/* ST_v173: (byte 0) */
  bytes2word(69,118,97,108)
, bytes2word(117,97,116,105)
, bytes2word(110,103,32,122)
, bytes2word(97,112,112,101)
, bytes2word(100,32,112,97)
, bytes2word(114,116,32,111)
, bytes2word(102,32,116,104)
, bytes2word(101,32,115,116)
, bytes2word(97,99,107,0)
,};
Node PP_Prelude_46_95zap_95stack[] = {
 };
Node PC_Prelude_46_95zap_95stack[] = {
 	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,122,97,112)
, bytes2word(95,115,116,97)
,	/* PP_LAMBDA164: (byte 3) */
 	/* PC_LAMBDA164: (byte 3) */
 	/* ST_v172: (byte 3) */
  bytes2word(99,107,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(122,97,112,95)
, bytes2word(115,116,97,99)
, bytes2word(107,58,51,58)
, bytes2word(50,48,45,51)
, bytes2word(58,53,54,0)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95zap_95stack)
, useLabel(PC_Prelude_46error)
,	/* PS_v166: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95zap_95stack)
, useLabel(PC_Prelude_46_95zap_95stack)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_95zap_95stack)
, useLabel(PC_LAMBDA164)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA164)
, useLabel(PC_LAMBDA164)
,};
