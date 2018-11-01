#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+80)
#define FN_LAMBDA181	((void*)startLabel+128)
#define CT_v191	((void*)startLabel+196)
#define F0_LAMBDA181	((void*)startLabel+204)
#define ST_v184	((void*)startLabel+224)
#define PP_LAMBDA181	((void*)startLabel+237)
#define PC_LAMBDA181	((void*)startLabel+237)
#define ST_v189	((void*)startLabel+237)
#define PS_v186	((void*)startLabel+260)
#define PS_v183	((void*)startLabel+272)
#define PS_v185	((void*)startLabel+284)
#define PS_v190	((void*)startLabel+296)
#define PS_v188	((void*)startLabel+308)
extern Node FN_Prelude_46zipWith3[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46zipWith3[];
extern Node PC_Prelude_463[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v187)
,};
Node FN_Prelude_46zip3[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,RETURN,ENDCODE)
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
, 60001
, useLabel(ST_v184)
,	/* CT_v187: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46zip3[] = {
  VAPTAG(useLabel(FN_Prelude_46zip3))
, useLabel(PS_v183)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_LAMBDA181),3)
, CAPTAG(useLabel(FN_Prelude_46zipWith3),3)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v191)
,	/* FN_LAMBDA181: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v190)
, 0
, 0
, 0
, 0
, CONSTR(0,3,0)
, 0
, 0
, 0
, 0
, 60023
, useLabel(ST_v189)
,	/* CT_v191: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA181: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA181),3)
, useLabel(PS_v188)
, 0
, 0
, 0
,};
Node PP_Prelude_46zip3[] = {
 };
Node PC_Prelude_46zip3[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(122,105,112,51)
,	/* PP_LAMBDA181: (byte 1) */
 	/* PC_LAMBDA181: (byte 1) */
 	/* ST_v189: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,122,105,112)
, bytes2word(51,58,54,58)
, bytes2word(50,51,45,54)
, bytes2word(58,50,54,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zip3)
, useLabel(PC_Prelude_46zipWith3)
,	/* PS_v183: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zip3)
, useLabel(PC_Prelude_46zip3)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46zip3)
, useLabel(PC_LAMBDA181)
,	/* PS_v190: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA181)
, useLabel(PC_Prelude_463)
,	/* PS_v188: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA181)
, useLabel(PC_LAMBDA181)
,};
