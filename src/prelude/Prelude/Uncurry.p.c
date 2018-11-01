#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+104)
#define ST_v184	((void*)startLabel+140)
#define PS_v185	((void*)startLabel+156)
#define PS_v186	((void*)startLabel+168)
#define PS_v183	((void*)startLabel+180)
extern Node FN_Prelude_46fst[];
extern Node FN_Prelude_46snd[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46fst[];
extern Node PC_Prelude_46snd[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Prelude_46uncurry[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(2,PUSH_P1,0,PUSH_P1)
, bytes2word(2,PUSH_ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(4,ZAP_STACK_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
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
, 40001
, useLabel(ST_v184)
,	/* CT_v187: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46uncurry[] = {
  CAPTAG(useLabel(FN_Prelude_46uncurry),2)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46fst))
, VAPTAG(useLabel(FN_Prelude_46snd))
,};
Node PP_Prelude_46uncurry[] = {
 };
Node PC_Prelude_46uncurry[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,110,99,117)
, bytes2word(114,114,121,0)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46uncurry)
, useLabel(PC_Prelude_46fst)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46uncurry)
, useLabel(PC_Prelude_46snd)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46uncurry)
, useLabel(PC_Prelude_46uncurry)
,};
