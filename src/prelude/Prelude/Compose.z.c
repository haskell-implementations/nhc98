#include "newmacros.h"
#include "runtime.h"

#define CT_v180	((void*)startLabel+36)
#define FN_LAMBDA176	((void*)startLabel+64)
#define CT_v182	((void*)startLabel+100)
#define F0_LAMBDA176	((void*)startLabel+108)
#define ST_v179	((void*)startLabel+116)
#define ST_v181	((void*)startLabel+126)
extern Node TM_Prelude[];
extern Node TMSUB_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v180)
,};
Node FN_Prelude_46_46[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46_46[] = {
  CAPTAG(useLabel(FN_Prelude_46_46),2)
, CAPTAG(useLabel(FN_LAMBDA176),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v182)
,	/* FN_LAMBDA176: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_P1,0)
, bytes2word(PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 60009
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA176: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA176),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
,	/* ST_v179: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
,	/* ST_v181: (byte 2) */
  bytes2word(46,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,46,58)
, bytes2word(54,58,57,45)
, bytes2word(54,58,50,50)
, bytes2word(0,0,0,0)
,};
