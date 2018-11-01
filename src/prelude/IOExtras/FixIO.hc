#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+20)
#define FN_LAMBDA186	((void*)startLabel+48)
#define CT_v189	((void*)startLabel+96)
#define F0_LAMBDA186	((void*)startLabel+104)
#define FN_LAMBDA185	((void*)startLabel+132)
#define CT_v190	((void*)startLabel+144)
#define F0_LAMBDA185	((void*)startLabel+152)
#define FN_LAMBDA184	((void*)startLabel+164)
#define v195	((void*)startLabel+174)
#define v194	((void*)startLabel+178)
#define v191	((void*)startLabel+185)
#define CT_v196	((void*)startLabel+204)
#define F0_LAMBDA184	((void*)startLabel+212)
#define FN_LAMBDA183	((void*)startLabel+232)
#define CT_v198	((void*)startLabel+252)
#define CF_LAMBDA183	((void*)startLabel+260)
#define FN_LAMBDA182	((void*)startLabel+272)
#define CT_v199	((void*)startLabel+284)
#define F0_LAMBDA182	((void*)startLabel+292)
#define ST_v197	((void*)startLabel+296)
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v188)
,};
Node FN_NHC_46IOExtras_46fixIO[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v188: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46IOExtras_46fixIO[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46fixIO),1)
, CAPTAG(useLabel(FN_LAMBDA186),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v189)
,	/* FN_LAMBDA186: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_P1,10,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,PUSH_P1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v189: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA186: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA186),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA182))
, VAPTAG(useLabel(FN_LAMBDA184))
, VAPTAG(useLabel(FN_LAMBDA185))
, bytes2word(1,0,0,1)
, useLabel(CT_v190)
,	/* FN_LAMBDA185: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v190: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA185: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA185),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v196)
,	/* FN_LAMBDA184: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v195: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v194: (byte 2) */
  bytes2word(9,0,UNPACK,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_I1)
,	/* v191: (byte 1) */
  bytes2word(RETURN,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v196: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA184: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA184),1)
, VAPTAG(useLabel(FN_LAMBDA183))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,	/* FN_LAMBDA183: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v197)
,	/* CT_v198: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA183: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA183))
, bytes2word(1,0,0,1)
, useLabel(CT_v199)
,	/* FN_LAMBDA182: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v199: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA182: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA182),1)
,	/* ST_v197: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(58,32,78,111)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,105)
, bytes2word(110,32,112,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,101,120)
, bytes2word(112,114,101,115)
, bytes2word(115,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(54,58,53,48)
, bytes2word(45,54,58,53)
, bytes2word(54,46,0,0)
,};
