#include "newmacros.h"
#include "runtime.h"

#define v197	((void*)startLabel+26)
#define v198	((void*)startLabel+30)
#define v203	((void*)startLabel+59)
#define v205	((void*)startLabel+73)
#define v199	((void*)startLabel+78)
#define v194	((void*)startLabel+83)
#define CT_v210	((void*)startLabel+120)
#define FN_LAMBDA192	((void*)startLabel+156)
#define CT_v213	((void*)startLabel+188)
#define CF_LAMBDA192	((void*)startLabel+196)
#define ST_v207	((void*)startLabel+200)
#define ST_v211	((void*)startLabel+215)
#define ST_v212	((void*)startLabel+239)
extern Node TM_Prelude[];
extern Node FN_Prelude_46_61_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v210)
,};
Node FN_Prelude_46lookup[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v197: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v198: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,2)
, bytes2word(PUSH_P1,0,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(7,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v203: (byte 3) */
  bytes2word(4,HEAP_I2,RETURN,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,JUMPFALSE,10)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_P1,4)
,	/* v205: (byte 1) */
  bytes2word(RETURN_EVAL,POP_P1,2,JUMP)
,	/* v199: (byte 2) */
  bytes2word(2,0,POP_P1,2)
,	/* v194: (byte 3) */
  bytes2word(JUMP,2,0,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 40001
, useLabel(ST_v207)
,	/* CT_v210: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46lookup[] = {
  CAPTAG(useLabel(FN_Prelude_46lookup),3)
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46lookup))
, VAPTAG(useLabel(FN_LAMBDA192))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v213)
,	/* FN_LAMBDA192: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v212)
, 40001
, useLabel(ST_v211)
,	/* CT_v213: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA192: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA192))
,	/* ST_v207: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(108,111,111,107)
,	/* ST_v211: (byte 3) */
  bytes2word(117,112,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,108)
, bytes2word(111,111,107,117)
, bytes2word(112,58,52,58)
, bytes2word(49,45,55,58)
,	/* ST_v212: (byte 3) */
  bytes2word(51,51,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,58,46)
, bytes2word(47,76,111,111)
, bytes2word(107,117,112,46)
, bytes2word(104,115,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,52,58,49)
, bytes2word(45,55,58,51)
, bytes2word(51,46,0,0)
,};
