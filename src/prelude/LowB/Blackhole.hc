#include "newmacros.h"
#include "runtime.h"

#define CT_v165	((void*)startLabel+24)
#define FN_LAMBDA163	((void*)startLabel+52)
#define CT_v167	((void*)startLabel+72)
#define CF_LAMBDA163	((void*)startLabel+80)
#define ST_v166	((void*)startLabel+84)
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v165)
,};
Node FN_Prelude_46blackhole[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v165: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46blackhole[] = {
  CAPTAG(useLabel(FN_Prelude_46blackhole),1)
, VAPTAG(useLabel(FN_LAMBDA163))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v167)
,	/* FN_LAMBDA163: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA163: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA163))
,	/* ST_v166: (byte 0) */
  bytes2word(66,108,97,99)
, bytes2word(107,104,111,108)
, bytes2word(101,58,32,63)
, bytes2word(0,0,0,0)
,};
