#include "newmacros.h"
#include "runtime.h"

#define v193	((void*)startLabel+26)
#define v194	((void*)startLabel+31)
#define v195	((void*)startLabel+36)
#define v196	((void*)startLabel+41)
#define CT_v199	((void*)startLabel+60)
#define FN_LAMBDA190	((void*)startLabel+84)
#define CT_v202	((void*)startLabel+116)
#define CF_LAMBDA190	((void*)startLabel+124)
#define ST_v201	((void*)startLabel+128)
#define ST_v197	((void*)startLabel+132)
#define ST_v200	((void*)startLabel+153)
extern Node TM_IO[];
extern Node TMSUB_IO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v199)
,};
Node FN_IO_46ioeGetErrorString[] = {
  useLabel(TM_IO)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
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
, 80001
, useLabel(ST_v197)
,	/* CT_v199: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46ioeGetErrorString[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetErrorString),1)
, VAPTAG(useLabel(FN_LAMBDA190))
, bytes2word(0,0,0,0)
, useLabel(CT_v202)
,	/* FN_LAMBDA190: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v201)
, 90045
, useLabel(ST_v200)
,	/* CT_v202: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA190: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA190))
,	/* ST_v201: (byte 0) */
 	/* ST_v197: (byte 4) */
  bytes2word(69,79,70,0)
, bytes2word(73,79,46,105)
, bytes2word(111,101,71,101)
, bytes2word(116,69,114,114)
, bytes2word(111,114,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v200: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(105,111,101,71)
, bytes2word(101,116,69,114)
, bytes2word(114,111,114,83)
, bytes2word(116,114,105,110)
, bytes2word(103,58,57,58)
, bytes2word(52,53,45,57)
, bytes2word(58,52,57,0)
,};
