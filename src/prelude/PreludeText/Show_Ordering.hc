#include "newmacros.h"
#include "runtime.h"

#define CT_v204	((void*)startLabel+24)
#define FN_LAMBDA199	((void*)startLabel+52)
#define CT_v206	((void*)startLabel+72)
#define CF_LAMBDA199	((void*)startLabel+80)
#define v208	((void*)startLabel+110)
#define v209	((void*)startLabel+120)
#define v210	((void*)startLabel+130)
#define CT_v212	((void*)startLabel+148)
#define FN_LAMBDA202	((void*)startLabel+184)
#define CT_v214	((void*)startLabel+204)
#define CF_LAMBDA202	((void*)startLabel+212)
#define FN_LAMBDA201	((void*)startLabel+224)
#define CT_v216	((void*)startLabel+244)
#define CF_LAMBDA201	((void*)startLabel+252)
#define FN_LAMBDA200	((void*)startLabel+264)
#define CT_v218	((void*)startLabel+284)
#define CF_LAMBDA200	((void*)startLabel+292)
#define CT_v219	((void*)startLabel+316)
#define CT_v220	((void*)startLabel+356)
#define CT_v221	((void*)startLabel+408)
#define ST_v215	((void*)startLabel+436)
#define ST_v213	((void*)startLabel+439)
#define ST_v217	((void*)startLabel+442)
#define ST_v205	((void*)startLabel+445)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Prelude_46Ordering[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v204)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v204: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showsType),1)
, useLabel(CF_LAMBDA199)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v206)
,	/* FN_LAMBDA199: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v205)
,	/* CT_v206: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA199: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA199))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v212)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,3,NOP)
, bytes2word(TOP(6),BOT(6),TOP(16),BOT(16))
,	/* v208: (byte 2) */
  bytes2word(TOP(26),BOT(26),POP_I1,PUSH_CVAL_P1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,EVAL)
,	/* v209: (byte 4) */
  bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(POP_I1,PUSH_CVAL_P1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,EVAL,NEEDHEAP_I32,APPLY)
,	/* v210: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CVAL_P1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_I4,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v212: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showsPrec),2)
, useLabel(CF_LAMBDA200)
, VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(CF_LAMBDA201)
, useLabel(CF_LAMBDA202)
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v213)
,	/* CT_v214: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, bytes2word(0,0,0,0)
, useLabel(CT_v216)
,	/* FN_LAMBDA201: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA201: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA201))
, bytes2word(0,0,0,0)
, useLabel(CT_v218)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v217)
,	/* CT_v218: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA200: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA200))
, bytes2word(1,0,0,1)
, useLabel(CT_v219)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v219: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Ordering)
, bytes2word(1,0,0,1)
, useLabel(CT_v220)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v220: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Ordering_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v221)
,};
Node FN_Prelude_46Show_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v221: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Ordering))
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showsPrec)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showsType)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46showList)
, useLabel(F0_Prelude_46Show_46Prelude_46Ordering_46show)
,	/* ST_v215: (byte 0) */
 	/* ST_v213: (byte 3) */
  bytes2word(69,81,0,71)
,	/* ST_v217: (byte 2) */
  bytes2word(84,0,76,84)
,	/* ST_v205: (byte 1) */
  bytes2word(0,79,114,100)
, bytes2word(101,114,105,110)
, bytes2word(103,0,0,0)
,};
