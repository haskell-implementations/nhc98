#include "newmacros.h"
#include "runtime.h"

#define v169	((void*)startLabel+18)
#define v170	((void*)startLabel+37)
#define CT_v176	((void*)startLabel+96)
#define FN_LAMBDA166	((void*)startLabel+140)
#define CT_v180	((void*)startLabel+184)
#define CF_LAMBDA166	((void*)startLabel+192)
#define ST_v172	((void*)startLabel+212)
#define ST_v179	((void*)startLabel+227)
#define PP_LAMBDA166	((void*)startLabel+251)
#define PC_LAMBDA166	((void*)startLabel+251)
#define ST_v178	((void*)startLabel+251)
#define PS_v175	((void*)startLabel+276)
#define PS_v171	((void*)startLabel+288)
#define PS_v174	((void*)startLabel+300)
#define PS_v177	((void*)startLabel+312)
extern Node FN_Prelude_46error[];
extern Node PM_Maybe[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v176)
,};
Node FN_Maybe_46fromJust[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v169: (byte 2) */
  bytes2word(TOP(23),BOT(23),POP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
,	/* v170: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,PUSH_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v172)
,	/* CT_v176: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Maybe_46fromJust[] = {
  CAPTAG(useLabel(FN_Maybe_46fromJust),1)
, useLabel(PS_v171)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA166))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,	/* FN_LAMBDA166: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v179)
, 50033
, useLabel(ST_v178)
,	/* CT_v180: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA166: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA166))
, useLabel(PS_v177)
, 0
, 0
, 0
,};
Node PP_Maybe_46fromJust[] = {
 };
Node PC_Maybe_46fromJust[] = {
 	/* ST_v172: (byte 0) */
  bytes2word(77,97,121,98)
, bytes2word(101,46,102,114)
, bytes2word(111,109,74,117)
,	/* ST_v179: (byte 3) */
  bytes2word(115,116,0,77)
, bytes2word(97,121,98,101)
, bytes2word(46,102,114,111)
, bytes2word(109,74,117,115)
, bytes2word(116,58,32,78)
, bytes2word(111,116,104,105)
,	/* PP_LAMBDA166: (byte 3) */
 	/* PC_LAMBDA166: (byte 3) */
 	/* ST_v178: (byte 3) */
  bytes2word(110,103,0,77)
, bytes2word(97,121,98,101)
, bytes2word(46,102,114,111)
, bytes2word(109,74,117,115)
, bytes2word(116,58,53,58)
, bytes2word(51,51,45,53)
, bytes2word(58,53,55,0)
,	/* PS_v175: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46fromJust)
, useLabel(PC_Prelude_46error)
,	/* PS_v171: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46fromJust)
, useLabel(PC_Maybe_46fromJust)
,	/* PS_v174: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_Maybe_46fromJust)
, useLabel(PC_LAMBDA166)
,	/* PS_v177: (byte 0) */
  useLabel(PM_Maybe)
, useLabel(PP_LAMBDA166)
, useLabel(PC_LAMBDA166)
,};
