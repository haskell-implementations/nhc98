#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+22)
#define v191	((void*)startLabel+32)
#define CT_v198	((void*)startLabel+176)
#define CT_v202	((void*)startLabel+284)
#define ST_v200	((void*)startLabel+316)
#define ST_v193	((void*)startLabel+348)
#define PS_v196	((void*)startLabel+384)
#define PS_v195	((void*)startLabel+396)
#define PS_v197	((void*)startLabel+408)
#define PS_v192	((void*)startLabel+420)
#define PS_v199	((void*)startLabel+432)
#define PS_v201	((void*)startLabel+444)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node PM_Prelude[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Nothing[];
extern Node PC_Prelude_46Just[];
extern Node PC_Prelude_461[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(14),BOT(14),POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CVAL_N1,12)
,	/* v191: (byte 4) */
  bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,RETURN)
, bytes2word(UNPACK,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,22)
, bytes2word(HEAP_CVAL_N1,27,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,12,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v197)
, 0
, 0
, 0
, 0
, CONSTR(1,1,0)
, 0
, 0
, 0
, 0
, useLabel(PS_v196)
, 0
, 0
, 0
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 60005
, useLabel(ST_v193)
,	/* CT_v198: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46Maybe_46fmap),2)
, useLabel(PS_v192)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v202)
,};
Node FN_Prelude_46Functor_46Prelude_46Maybe[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v201)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 50011
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46Maybe))
, useLabel(PS_v199)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Functor_46Prelude_46Maybe_46fmap)
,};
Node PP_Prelude_46Functor_46Prelude_46Maybe[] = {
 };
Node PC_Prelude_46Functor_46Prelude_46Maybe[] = {
 	/* ST_v200: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,0,0,0)
,};
Node PP_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
 };
Node PC_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
 	/* ST_v193: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
, bytes2word(101,46,102,109)
, bytes2word(97,112,0,0)
,	/* PS_v196: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46Maybe_46fmap)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v195: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46Maybe_46fmap)
, useLabel(PC_Prelude_46Nothing)
,	/* PS_v197: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46Maybe_46fmap)
, useLabel(PC_Prelude_46Just)
,	/* PS_v192: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46Maybe_46fmap)
, useLabel(PC_Prelude_46Functor_46Prelude_46Maybe_46fmap)
,	/* PS_v199: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46Maybe)
, useLabel(PC_Prelude_46Functor_46Prelude_46Maybe)
,	/* PS_v201: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46Maybe)
, useLabel(PC_Prelude_461)
,};
