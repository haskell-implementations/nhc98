#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+36)
#define FN_LAMBDA163	((void*)startLabel+64)
#define CT_v169	((void*)startLabel+96)
#define CF_LAMBDA163	((void*)startLabel+104)
#define ST_v168	((void*)startLabel+108)
#define ST_v165	((void*)startLabel+121)
#define ST_v167	((void*)startLabel+139)
extern Node TM_Prelude[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_Prelude[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v166)
,};
Node FN_Prelude_46blackhole[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v165)
,	/* CT_v166: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46blackhole[] = {
  CAPTAG(useLabel(FN_Prelude_46blackhole),1)
, VAPTAG(useLabel(FN_LAMBDA163))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v169)
,	/* FN_LAMBDA163: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v168)
, 80023
, useLabel(ST_v167)
,	/* CT_v169: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA163: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA163))
,	/* ST_v168: (byte 0) */
  bytes2word(66,108,97,99)
, bytes2word(107,104,111,108)
, bytes2word(101,58,32,63)
,	/* ST_v165: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,98,108,97)
, bytes2word(99,107,104,111)
,	/* ST_v167: (byte 3) */
  bytes2word(108,101,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,98)
, bytes2word(108,97,99,107)
, bytes2word(104,111,108,101)
, bytes2word(58,56,58,50)
, bytes2word(51,45,56,58)
, bytes2word(51,54,0,0)
,};
