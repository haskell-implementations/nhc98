#include "newmacros.h"
#include "runtime.h"

#define v193	((void*)startLabel+22)
#define v194	((void*)startLabel+27)
#define v195	((void*)startLabel+32)
#define v196	((void*)startLabel+37)
#define CT_v198	((void*)startLabel+48)
#define FN_LAMBDA190	((void*)startLabel+72)
#define CT_v200	((void*)startLabel+92)
#define CF_LAMBDA190	((void*)startLabel+100)
#define ST_v199	((void*)startLabel+104)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v198)
,};
Node FN_IO_46ioeGetErrorString[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(13),BOT(13),TOP(18),BOT(18))
,	/* v193: (byte 2) */
  bytes2word(TOP(23),BOT(23),UNPACK,4)
,	/* v194: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
,	/* v195: (byte 4) */
  bytes2word(2,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(UNPACK,1,PUSH_P1,0)
,	/* v196: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,2,PUSH_I1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v198: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46ioeGetErrorString[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetErrorString),1)
, VAPTAG(useLabel(FN_LAMBDA190))
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,	/* FN_LAMBDA190: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA190: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA190))
,	/* ST_v199: (byte 0) */
  bytes2word(69,79,70,0)
,};
