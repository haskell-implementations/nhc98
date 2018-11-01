#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+140)
#define ST_v183	((void*)startLabel+176)
#define PS_v184	((void*)startLabel+192)
#define PS_v185	((void*)startLabel+204)
#define PS_v186	((void*)startLabel+216)
#define PS_v182	((void*)startLabel+228)
extern Node FN_Complex_46magnitude[];
extern Node FN_Complex_46phase[];
extern Node PM_Complex[];
extern Node PC_Complex_46magnitude[];
extern Node PC_Complex_46phase[];
extern Node PC_Prelude_462[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v187)
,};
Node FN_Complex_46polar[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CVAL_N1,22,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,19,HEAP_OFF_N1)
, bytes2word(13,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, CONSTR(0,2,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v183)
,	/* CT_v187: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Complex_46polar[] = {
  CAPTAG(useLabel(FN_Complex_46polar),2)
, useLabel(PS_v182)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Complex_46magnitude))
, VAPTAG(useLabel(FN_Complex_46phase))
,};
Node PP_Complex_46polar[] = {
 };
Node PC_Complex_46polar[] = {
 	/* ST_v183: (byte 0) */
  bytes2word(67,111,109,112)
, bytes2word(108,101,120,46)
, bytes2word(112,111,108,97)
, bytes2word(114,0,0,0)
,	/* PS_v184: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46polar)
, useLabel(PC_Complex_46magnitude)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46polar)
, useLabel(PC_Complex_46phase)
,	/* PS_v186: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46polar)
, useLabel(PC_Prelude_462)
,	/* PS_v182: (byte 0) */
  useLabel(PM_Complex)
, useLabel(PP_Complex_46polar)
, useLabel(PC_Complex_46polar)
,};
