#include "newmacros.h"
#include "runtime.h"

#define v182	((void*)startLabel+22)
#define v183	((void*)startLabel+41)
#define v193	((void*)startLabel+52)
#define v187	((void*)startLabel+56)
#define v184	((void*)startLabel+60)
#define CT_v194	((void*)startLabel+164)
#define FN_LAMBDA178	((void*)startLabel+212)
#define CT_v198	((void*)startLabel+256)
#define CF_LAMBDA178	((void*)startLabel+264)
#define ST_v189	((void*)startLabel+284)
#define PP_LAMBDA178	((void*)startLabel+299)
#define PC_LAMBDA178	((void*)startLabel+299)
#define ST_v196	((void*)startLabel+299)
#define ST_v197	((void*)startLabel+324)
#define PS_v192	((void*)startLabel+356)
#define PS_v188	((void*)startLabel+368)
#define PS_v191	((void*)startLabel+380)
#define PS_v195	((void*)startLabel+392)
extern Node FN_Prelude_46error[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Prelude_46foldr1[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v182: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v183: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v193: (byte 4) */
  bytes2word(TOP(8),BOT(8),TOP(4),BOT(4))
,	/* v187: (byte 4) */
  bytes2word(POP_I1,JUMP,6,0)
,	/* v184: (byte 4) */
  bytes2word(POP_I1,PUSH_P1,0,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_I2,PUSH_P1)
, bytes2word(0,PUSH_P1,2,PUSH_ZAP_ARG_I1)
, bytes2word(ZAP_STACK_P1,5,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v188)
, 0
, 0
, 0
, 0
, useLabel(PS_v192)
, 0
, 0
, 0
, 0
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v189)
,	/* CT_v194: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46foldr1[] = {
  CAPTAG(useLabel(FN_Prelude_46foldr1),2)
, useLabel(PS_v188)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA178))
, VAPTAG(useLabel(FN_Prelude_46error))
, VAPTAG(useLabel(FN_Prelude_46foldr1))
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,	/* FN_LAMBDA178: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v197)
, 60026
, useLabel(ST_v196)
,	/* CT_v198: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA178: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA178))
, useLabel(PS_v195)
, 0
, 0
, 0
,};
Node PP_Prelude_46foldr1[] = {
 };
Node PC_Prelude_46foldr1[] = {
 	/* ST_v189: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,111,108,100)
,	/* PP_LAMBDA178: (byte 3) */
 	/* PC_LAMBDA178: (byte 3) */
 	/* ST_v196: (byte 3) */
  bytes2word(114,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,102)
, bytes2word(111,108,100,114)
, bytes2word(49,58,54,58)
, bytes2word(50,54,45,54)
,	/* ST_v197: (byte 4) */
  bytes2word(58,53,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,76)
, bytes2word(105,115,116,46)
, bytes2word(102,111,108,100)
, bytes2word(114,49,58,32)
, bytes2word(101,109,112,116)
, bytes2word(121,32,108,105)
, bytes2word(115,116,0,0)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldr1)
, useLabel(PC_Prelude_46error)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldr1)
, useLabel(PC_Prelude_46foldr1)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldr1)
, useLabel(PC_LAMBDA178)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA178)
, useLabel(PC_LAMBDA178)
,};
