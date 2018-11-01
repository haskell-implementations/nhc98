#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+31)
#define v193	((void*)startLabel+40)
#define v194	((void*)startLabel+50)
#define CT_v201	((void*)startLabel+220)
#define ST_v196	((void*)startLabel+256)
#define PS_v197	((void*)startLabel+272)
#define PS_v200	((void*)startLabel+284)
#define PS_v195	((void*)startLabel+296)
#define PS_v199	((void*)startLabel+308)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46_58[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v201)
,};
Node FN_Prelude_46take[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,LE_W,JUMPFALSE)
, bytes2word(11,0,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CVAL_N1,12,HEAP_CREATE)
,	/* v190: (byte 3) */
  bytes2word(HEAP_SPACE,HEAP_SPACE,RETURN,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v193: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v194: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,12)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_N1,27)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_I1,HEAP_OFF_N1,13)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, CONSTR(1,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v199)
, 0
, 0
, 0
, 0
, useLabel(PS_v197)
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
, useLabel(ST_v196)
,	/* CT_v201: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46take[] = {
  CAPTAG(useLabel(FN_Prelude_46take),2)
, useLabel(PS_v195)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46take))
,};
Node PP_Prelude_46take[] = {
 };
Node PC_Prelude_46take[] = {
 	/* ST_v196: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,97,107,101)
, bytes2word(0,0,0,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46take)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v200: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46take)
, useLabel(PC_Prelude_46_58)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46take)
, useLabel(PC_Prelude_46take)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46take)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,};
