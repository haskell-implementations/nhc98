#include "newmacros.h"
#include "runtime.h"

#define v193	((void*)startLabel+22)
#define v194	((void*)startLabel+27)
#define v195	((void*)startLabel+38)
#define v196	((void*)startLabel+43)
#define CT_v201	((void*)startLabel+84)
#define FN_LAMBDA190	((void*)startLabel+124)
#define CT_v205	((void*)startLabel+168)
#define CF_LAMBDA190	((void*)startLabel+176)
#define ST_v204	((void*)startLabel+196)
#define ST_v198	((void*)startLabel+200)
#define PP_LAMBDA190	((void*)startLabel+221)
#define PC_LAMBDA190	((void*)startLabel+221)
#define ST_v203	((void*)startLabel+221)
#define PS_v197	((void*)startLabel+252)
#define PS_v200	((void*)startLabel+264)
#define PS_v202	((void*)startLabel+276)
extern Node PM_IO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v201)
,};
Node FN_IO_46ioeGetErrorString[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(8),BOT(8))
, bytes2word(TOP(13),BOT(13),TOP(24),BOT(24))
,	/* v193: (byte 2) */
  bytes2word(TOP(29),BOT(29),UNPACK,4)
,	/* v194: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
,	/* v195: (byte 2) */
  bytes2word(HEAP_SPACE,RETURN_EVAL,UNPACK,1)
,	/* v196: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,UNPACK)
, bytes2word(2,PUSH_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v200)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v198)
,	/* CT_v201: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46ioeGetErrorString[] = {
  CAPTAG(useLabel(FN_IO_46ioeGetErrorString),1)
, useLabel(PS_v197)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA190))
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,	/* FN_LAMBDA190: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v204)
, 90045
, useLabel(ST_v203)
,	/* CT_v205: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA190: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA190))
, useLabel(PS_v202)
, 0
, 0
, 0
,	/* ST_v204: (byte 0) */
  bytes2word(69,79,70,0)
,};
Node PP_IO_46ioeGetErrorString[] = {
 };
Node PC_IO_46ioeGetErrorString[] = {
 	/* ST_v198: (byte 0) */
  bytes2word(73,79,46,105)
, bytes2word(111,101,71,101)
, bytes2word(116,69,114,114)
, bytes2word(111,114,83,116)
, bytes2word(114,105,110,103)
,	/* PP_LAMBDA190: (byte 1) */
 	/* PC_LAMBDA190: (byte 1) */
 	/* ST_v203: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(105,111,101,71)
, bytes2word(101,116,69,114)
, bytes2word(114,111,114,83)
, bytes2word(116,114,105,110)
, bytes2word(103,58,57,58)
, bytes2word(52,53,45,57)
, bytes2word(58,52,57,0)
,	/* PS_v197: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetErrorString)
, useLabel(PC_IO_46ioeGetErrorString)
,	/* PS_v200: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46ioeGetErrorString)
, useLabel(PC_LAMBDA190)
,	/* PS_v202: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA190)
, useLabel(PC_LAMBDA190)
,};
