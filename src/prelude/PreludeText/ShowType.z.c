#include "newmacros.h"
#include "runtime.h"

#define CT_v173	((void*)startLabel+44)
#define FN_LAMBDA170	((void*)startLabel+72)
#define CT_v176	((void*)startLabel+104)
#define CF_LAMBDA170	((void*)startLabel+112)
#define ST_v175	((void*)startLabel+116)
#define ST_v172	((void*)startLabel+117)
#define ST_v174	((void*)startLabel+134)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showsType[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v173)
,};
Node FN_Prelude_46showType[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CVAL_P1,3,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v172)
,	/* CT_v173: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46showType[] = {
  CAPTAG(useLabel(FN_Prelude_46showType),2)
, useLabel(CF_LAMBDA170)
, VAPTAG(useLabel(FN_Prelude_46showsType))
, bytes2word(0,0,0,0)
, useLabel(CT_v176)
,	/* FN_LAMBDA170: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v175)
, 40040
, useLabel(ST_v174)
,	/* CT_v176: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA170: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA170))
,	/* ST_v175: (byte 0) */
 	/* ST_v172: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,115,104,111)
, bytes2word(119,84,121,112)
,	/* ST_v174: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,115,104)
, bytes2word(111,119,84,121)
, bytes2word(112,101,58,52)
, bytes2word(58,52,48,45)
, bytes2word(52,58,52,49)
, bytes2word(0,0,0,0)
,};
