#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+32)
#define FN_LAMBDA164	((void*)startLabel+60)
#define CT_v170	((void*)startLabel+92)
#define CF_LAMBDA164	((void*)startLabel+100)
#define ST_v169	((void*)startLabel+104)
#define ST_v166	((void*)startLabel+131)
#define ST_v168	((void*)startLabel+148)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_Prelude_46_95zap_95arg[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30001
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46_95zap_95arg[] = {
  VAPTAG(useLabel(FN_Prelude_46_95zap_95arg))
, VAPTAG(useLabel(FN_LAMBDA164))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v170)
,	/* FN_LAMBDA164: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v169)
, 30018
, useLabel(ST_v168)
,	/* CT_v170: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA164: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA164))
,	/* ST_v169: (byte 0) */
  bytes2word(69,118,97,108)
, bytes2word(117,97,116,105)
, bytes2word(110,103,32,122)
, bytes2word(97,112,112,101)
, bytes2word(100,32,97,114)
, bytes2word(103,117,109,101)
,	/* ST_v166: (byte 3) */
  bytes2word(110,116,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,95)
, bytes2word(122,97,112,95)
,	/* ST_v168: (byte 4) */
  bytes2word(97,114,103,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(95,122,97,112)
, bytes2word(95,97,114,103)
, bytes2word(58,51,58,49)
, bytes2word(56,45,51,58)
, bytes2word(52,53,0,0)
,};
