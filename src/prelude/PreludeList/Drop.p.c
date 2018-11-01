#include "newmacros.h"
#include "runtime.h"

#define v189	((void*)startLabel+23)
#define v192	((void*)startLabel+32)
#define v193	((void*)startLabel+42)
#define CT_v199	((void*)startLabel+160)
#define ST_v195	((void*)startLabel+196)
#define PS_v197	((void*)startLabel+212)
#define PS_v194	((void*)startLabel+224)
#define PS_v198	((void*)startLabel+236)
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_91_93[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_45[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v199)
,};
Node FN_Prelude_46drop[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,LE_W,JUMPFALSE,4)
,	/* v189: (byte 3) */
  bytes2word(0,PUSH_ARG_I2,RETURN_EVAL,PUSH_ZAP_ARG_I2)
, bytes2word(EVAL,NEEDHEAP_I32,TABLESWITCH,2)
,	/* v192: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(14),BOT(14))
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
,	/* v193: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN,UNPACK,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(12,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, useLabel(PS_v198)
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
, useLabel(ST_v195)
,	/* CT_v199: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46drop[] = {
  CAPTAG(useLabel(FN_Prelude_46drop),2)
, useLabel(PS_v194)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46drop))
,};
Node PP_Prelude_46drop[] = {
 };
Node PC_Prelude_46drop[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(100,114,111,112)
, bytes2word(0,0,0,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46drop)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v194: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46drop)
, useLabel(PC_Prelude_46drop)
,	/* PS_v198: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46drop)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_45)
,};
