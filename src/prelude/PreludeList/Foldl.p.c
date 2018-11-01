#include "newmacros.h"
#include "runtime.h"

#define v184	((void*)startLabel+22)
#define v185	((void*)startLabel+25)
#define CT_v190	((void*)startLabel+108)
#define ST_v187	((void*)startLabel+144)
#define PS_v189	((void*)startLabel+160)
#define PS_v186	((void*)startLabel+172)
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply2[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v190)
,};
Node FN_Prelude_46foldl[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v184: (byte 2) */
  bytes2word(TOP(7),BOT(7),POP_I1,PUSH_ARG_I2)
,	/* v185: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,14,HEAP_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, useLabel(PS_v189)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v187)
,	/* CT_v190: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46foldl[] = {
  CAPTAG(useLabel(FN_Prelude_46foldl),3)
, useLabel(PS_v186)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46foldl))
,};
Node PP_Prelude_46foldl[] = {
 };
Node PC_Prelude_46foldl[] = {
 	/* ST_v187: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(102,111,108,100)
, bytes2word(108,0,0,0)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldl)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46foldl)
, useLabel(PC_Prelude_46foldl)
,};
