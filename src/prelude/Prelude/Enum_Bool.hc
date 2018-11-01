#include "newmacros.h"
#include "runtime.h"

#define CT_v270	((void*)startLabel+28)
#define CT_v271	((void*)startLabel+68)
#define v277	((void*)startLabel+108)
#define v275	((void*)startLabel+112)
#define v276	((void*)startLabel+117)
#define v272	((void*)startLabel+122)
#define CT_v278	((void*)startLabel+160)
#define FN_LAMBDA268	((void*)startLabel+200)
#define CT_v280	((void*)startLabel+220)
#define CF_LAMBDA268	((void*)startLabel+228)
#define FN_LAMBDA267	((void*)startLabel+240)
#define CT_v282	((void*)startLabel+260)
#define CF_LAMBDA267	((void*)startLabel+268)
#define v284	((void*)startLabel+290)
#define v285	((void*)startLabel+294)
#define CT_v287	((void*)startLabel+304)
#define CT_v288	((void*)startLabel+344)
#define CT_v289	((void*)startLabel+388)
#define CT_v290	((void*)startLabel+428)
#define CT_v291	((void*)startLabel+468)
#define CT_v292	((void*)startLabel+528)
#define ST_v279	((void*)startLabel+572)
#define ST_v281	((void*)startLabel+591)
extern Node FN_Prelude_46_95enumFromThen[];
extern Node FN_Prelude_46_95enumFromTo[];
extern Node FN_Prelude_46Show_46Prelude_46Int_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46Prelude_46Bool[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_INT_P1,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v270: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46_95enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v271: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46_95enumFromTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,2,TOP(0),BOT(0))
, bytes2word(TOP(14),BOT(14),TOP(1),BOT(1))
,	/* v277: (byte 4) */
  bytes2word(TOP(19),BOT(19),TOP(10),BOT(10))
,	/* v275: (byte 4) */
  bytes2word(POP_I1,JUMP,12,0)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,1)
,	/* v276: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v272: (byte 2) */
  bytes2word(2,RETURN,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,0,0)
, CONSTR(0,0,0)
,	/* CT_v278: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46toEnum),1)
, VAPTAG(useLabel(FN_LAMBDA267))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_LAMBDA268))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v280)
,	/* FN_LAMBDA268: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v279)
,	/* CT_v280: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA268: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA268))
, bytes2word(0,0,0,0)
, useLabel(CT_v282)
,	/* FN_LAMBDA267: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v281)
,	/* CT_v282: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA267: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA267))
, bytes2word(1,0,0,1)
, useLabel(CT_v287)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,TABLESWITCH)
, bytes2word(2,NOP,TOP(4),BOT(4))
,	/* v284: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_INT_P1)
,	/* v285: (byte 2) */
  bytes2word(0,RETURN,POP_I1,PUSH_INT_P1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v287: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46fromEnum),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v288: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Bool)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v289: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Bool)
, bytes2word(1,0,0,1)
, useLabel(CT_v290)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v290: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46Prelude_46Bool)
, bytes2word(1,0,0,1)
, useLabel(CT_v291)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v291: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Bool_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46Prelude_46Bool)
, bytes2word(0,0,0,0)
, useLabel(CT_v292)
,};
Node FN_Prelude_46Enum_46Prelude_46Bool[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v292: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Prelude_46Bool[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Bool))
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46succ)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46pred)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46toEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Prelude_46Bool_46enumFromThenTo)
,	/* ST_v279: (byte 0) */
  bytes2word(32,58,58,32)
, bytes2word(66,111,111,108)
, bytes2word(41,32,105,115)
, bytes2word(32,119,114,111)
,	/* ST_v281: (byte 3) */
  bytes2word(110,103,0,40)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(116,111,69,110)
, bytes2word(117,109,32,0)
,};
