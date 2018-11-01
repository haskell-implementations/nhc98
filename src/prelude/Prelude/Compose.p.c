#include "newmacros.h"
#include "runtime.h"

#define CT_v182	((void*)startLabel+64)
#define FN_LAMBDA176	((void*)startLabel+108)
#define CT_v186	((void*)startLabel+172)
#define F0_LAMBDA176	((void*)startLabel+180)
#define ST_v180	((void*)startLabel+204)
#define PP_LAMBDA176	((void*)startLabel+214)
#define PC_LAMBDA176	((void*)startLabel+214)
#define ST_v184	((void*)startLabel+214)
#define PS_v179	((void*)startLabel+236)
#define PS_v181	((void*)startLabel+248)
#define PS_v185	((void*)startLabel+260)
#define PS_v183	((void*)startLabel+272)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v182)
,};
Node FN_Prelude_46_46[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,2,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v180)
,	/* CT_v182: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_46[] = {
  CAPTAG(useLabel(FN_Prelude_46_46),2)
, useLabel(PS_v179)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA176),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v186)
,	/* FN_LAMBDA176: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,3)
, bytes2word(PUSH_P1,0,PUSH_ARG_I2,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, 60009
, useLabel(ST_v184)
,	/* CT_v186: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA176: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA176),3)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,};
Node PP_Prelude_46_46[] = {
 };
Node PC_Prelude_46_46[] = {
 	/* ST_v180: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* PP_LAMBDA176: (byte 2) */
 	/* PC_LAMBDA176: (byte 2) */
 	/* ST_v184: (byte 2) */
  bytes2word(46,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,46,58)
, bytes2word(54,58,57,45)
, bytes2word(54,58,50,50)
, bytes2word(0,0,0,0)
,	/* PS_v179: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_46)
, useLabel(PC_Prelude_46_46)
,	/* PS_v181: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46_46)
, useLabel(PC_LAMBDA176)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA176)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA176)
, useLabel(PC_LAMBDA176)
,};
