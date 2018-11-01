#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+192)
#define ST_v182	((void*)startLabel+236)
#define PS_v186	((void*)startLabel+256)
#define PS_v187	((void*)startLabel+268)
#define PS_v183	((void*)startLabel+280)
#define PS_v184	((void*)startLabel+292)
#define PS_v185	((void*)startLabel+304)
#define PS_v181	((void*)startLabel+316)
extern Node FN_Prelude_46_62_62[];
extern Node FN_Prelude_46return[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46foldr[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46foldr[];
extern Node PC_Prelude_46_62_62[];
extern Node PC_Prelude_46return[];
extern Node PC__40_41[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_Prelude_46sequence_95[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CVAL_N1,22,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(11,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_N1,32,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,29,HEAP_OFF_N1)
, bytes2word(13,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
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
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v182)
,	/* CT_v188: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46sequence_95[] = {
  CAPTAG(useLabel(FN_Prelude_46sequence_95),1)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_62_62))
, VAPTAG(useLabel(FN_Prelude_46return))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
,};
Node PP_Prelude_46sequence_95[] = {
 };
Node PC_Prelude_46sequence_95[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(115,101,113,117)
, bytes2word(101,110,99,101)
, bytes2word(95,0,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46sequence_95)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46sequence_95)
, useLabel(PC_Prelude_46foldr)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46sequence_95)
, useLabel(PC_Prelude_46_62_62)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46sequence_95)
, useLabel(PC_Prelude_46return)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46sequence_95)
, useLabel(PC__40_41)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46sequence_95)
, useLabel(PC_Prelude_46sequence_95)
,};
