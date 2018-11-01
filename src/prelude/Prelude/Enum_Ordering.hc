#include "newmacros.h"
#include "runtime.h"

#define CT_v264	((void*)startLabel+28)
#define CT_v265	((void*)startLabel+68)
#define v272	((void*)startLabel+112)
#define v269	((void*)startLabel+116)
#define v270	((void*)startLabel+121)
#define v271	((void*)startLabel+126)
#define v266	((void*)startLabel+130)
#define CT_v273	((void*)startLabel+160)
#define FN_LAMBDA262	((void*)startLabel+188)
#define CT_v275	((void*)startLabel+208)
#define CF_LAMBDA262	((void*)startLabel+216)
#define v277	((void*)startLabel+240)
#define v278	((void*)startLabel+244)
#define v279	((void*)startLabel+248)
#define CT_v281	((void*)startLabel+260)
#define CT_v282	((void*)startLabel+300)
#define CT_v283	((void*)startLabel+344)
#define CT_v284	((void*)startLabel+384)
#define CT_v285	((void*)startLabel+424)
#define CT_v286	((void*)startLabel+484)
#define ST_v274	((void*)startLabel+528)
extern Node FN_Prelude_46_95enumFromThen[];
extern Node FN_Prelude_46_95enumFromTo[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46Prelude_46Ordering[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v264)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_INT_P1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,3,TOP(0),BOT(0))
, bytes2word(TOP(18),BOT(18),TOP(1),BOT(1))
, bytes2word(TOP(23),BOT(23),TOP(2),BOT(2))
,	/* v272: (byte 4) */
  bytes2word(TOP(28),BOT(28),TOP(14),BOT(14))
,	/* v269: (byte 4) */
  bytes2word(POP_I1,JUMP,16,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v270: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v271: (byte 2) */
  bytes2word(2,RETURN,POP_I1,PUSH_HEAP)
,	/* v266: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(2,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
,	/* CT_v273: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46toEnum),1)
, VAPTAG(useLabel(FN_LAMBDA262))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v275)
,	/* FN_LAMBDA262: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v274)
,	/* CT_v275: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA262: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA262))
, bytes2word(1,0,0,1)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(3,NOP,TOP(6),BOT(6))
,	/* v277: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(14),BOT(14))
,	/* v278: (byte 4) */
  bytes2word(POP_I1,PUSH_INT_P1,0,RETURN)
,	/* v279: (byte 4) */
  bytes2word(POP_I1,PUSH_INT_P1,1,RETURN)
, bytes2word(POP_I1,PUSH_INT_P1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v281: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46fromEnum),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v282: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Ordering)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v283: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Ordering)
, bytes2word(1,0,0,1)
, useLabel(CT_v284)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v284: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46Prelude_46Ordering)
, bytes2word(1,0,0,1)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v285: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Ordering_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46Prelude_46Ordering)
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Enum_46Prelude_46Ordering[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v286: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Prelude_46Ordering[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Ordering))
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46succ)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46pred)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46toEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Prelude_46Ordering_46enumFromThenTo)
,	/* ST_v274: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,58)
, bytes2word(46,47,69,110)
, bytes2word(117,109,95,79)
, bytes2word(114,100,101,114)
, bytes2word(105,110,103,46)
, bytes2word(104,115,58,32)
, bytes2word(80,97,116,116)
, bytes2word(101,114,110,32)
, bytes2word(109,97,116,99)
, bytes2word(104,32,102,97)
, bytes2word(105,108,117,114)
, bytes2word(101,32,105,110)
, bytes2word(32,102,117,110)
, bytes2word(99,116,105,111)
, bytes2word(110,32,97,116)
, bytes2word(32,49,49,58)
, bytes2word(53,45,49,51)
, bytes2word(58,49,57,46)
, bytes2word(0,0,0,0)
,};
