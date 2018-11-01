#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+80)
#define FN_LAMBDA164	((void*)startLabel+124)
#define CT_v173	((void*)startLabel+168)
#define CF_LAMBDA164	((void*)startLabel+176)
#define ST_v167	((void*)startLabel+196)
#define PP_LAMBDA164	((void*)startLabel+214)
#define PC_LAMBDA164	((void*)startLabel+214)
#define ST_v172	((void*)startLabel+214)
#define PS_v169	((void*)startLabel+244)
#define PS_v166	((void*)startLabel+256)
#define PS_v168	((void*)startLabel+268)
#define PS_v171	((void*)startLabel+280)
extern Node FN_Prelude_46error[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v170)
,};
Node FN_Prelude_46undefined[] = {
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
, 40001
, useLabel(ST_v167)
,	/* CT_v170: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46undefined[] = {
  VAPTAG(useLabel(FN_Prelude_46undefined))
, useLabel(PS_v166)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v173)
,	/* FN_LAMBDA164: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v167)
, 40019
, useLabel(ST_v172)
,	/* CT_v173: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
, useLabel(PS_v171)
, 0
, 0
, 0
,};
Node PP_Prelude_46undefined[] = {
 };
Node PC_Prelude_46undefined[] = {
 	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(117,110,100,101)
, bytes2word(102,105,110,101)
,	/* PP_LAMBDA164: (byte 2) */
 	/* PC_LAMBDA164: (byte 2) */
 	/* ST_v172: (byte 2) */
  bytes2word(100,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,117,110)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(52,58,49,57)
, bytes2word(45,52,58,51)
, bytes2word(55,0,0,0)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46undefined)
, useLabel(PC_Prelude_46error)
,	/* PS_v166: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46undefined)
, useLabel(PC_Prelude_46undefined)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46undefined)
, useLabel(PC_LAMBDA164)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_LAMBDA164)
, useLabel(PC_LAMBDA164)
,};
