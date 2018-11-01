#include "newmacros.h"
#include "runtime.h"

#define FN_System_46Info_46compilerVersionRaw	((void*)startLabel+8)
#define CT_v207	((void*)startLabel+20)
#define CF_System_46Info_46compilerVersionRaw	((void*)startLabel+28)
#define CT_v208	((void*)startLabel+52)
#define FN_LAMBDA201	((void*)startLabel+76)
#define CT_v210	((void*)startLabel+96)
#define CF_LAMBDA201	((void*)startLabel+104)
#define CT_v211	((void*)startLabel+128)
#define FN_LAMBDA202	((void*)startLabel+152)
#define CT_v213	((void*)startLabel+172)
#define CF_LAMBDA202	((void*)startLabel+180)
#define CT_v214	((void*)startLabel+204)
#define FN_LAMBDA203	((void*)startLabel+228)
#define CT_v216	((void*)startLabel+248)
#define CF_LAMBDA203	((void*)startLabel+256)
#define CT_v217	((void*)startLabel+328)
#define FN_LAMBDA205	((void*)startLabel+364)
#define CT_v218	((void*)startLabel+376)
#define F0_LAMBDA205	((void*)startLabel+384)
#define FN_LAMBDA204	((void*)startLabel+396)
#define CT_v219	((void*)startLabel+408)
#define F0_LAMBDA204	((void*)startLabel+416)
#define ST_v215	((void*)startLabel+420)
#define ST_v212	((void*)startLabel+428)
#define ST_v209	((void*)startLabel+433)
extern Node FN_Prelude_46Integral_46Prelude_46Int_46divMod[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v207)
,	/* FN_System_46Info_46compilerVersionRaw: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,121,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v207: (byte 0) */
  HW(0,0)
, 0
,	/* CF_System_46Info_46compilerVersionRaw: (byte 0) */
  VAPTAG(useLabel(FN_System_46Info_46compilerVersionRaw))
, bytes2word(0,0,0,0)
, useLabel(CT_v208)
,};
Node FN_System_46Info_46compilerName[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v208: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Info_46compilerName[] = {
  VAPTAG(useLabel(FN_System_46Info_46compilerName))
, VAPTAG(useLabel(FN_LAMBDA201))
, bytes2word(0,0,0,0)
, useLabel(CT_v210)
,	/* FN_LAMBDA201: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v209)
,	/* CT_v210: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA201: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA201))
, bytes2word(0,0,0,0)
, useLabel(CT_v211)
,};
Node FN_System_46Info_46arch[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Info_46arch[] = {
  VAPTAG(useLabel(FN_System_46Info_46arch))
, VAPTAG(useLabel(FN_LAMBDA202))
, bytes2word(0,0,0,0)
, useLabel(CT_v213)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA202: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA202))
, bytes2word(0,0,0,0)
, useLabel(CT_v214)
,};
Node FN_System_46Info_46os[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46Info_46os[] = {
  VAPTAG(useLabel(FN_System_46Info_46os))
, VAPTAG(useLabel(FN_LAMBDA203))
, bytes2word(0,0,0,0)
, useLabel(CT_v216)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v215)
,	/* CT_v216: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA203: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA203))
, bytes2word(0,0,0,0)
, useLabel(CT_v217)
,};
Node FN_System_46Info_46compilerVersion[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_INT_P1,100,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,6,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,2,HEAP_P1)
, bytes2word(0,HEAP_OFF_N1,3,HEAP_CVAL_N1)
, bytes2word(2,HEAP_I1,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v217: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_System_46Info_46compilerVersion[] = {
  VAPTAG(useLabel(FN_System_46Info_46compilerVersion))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46divMod))
, useLabel(CF_System_46Info_46compilerVersionRaw)
, VAPTAG(useLabel(FN_LAMBDA204))
, VAPTAG(useLabel(FN_LAMBDA205))
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,	/* FN_LAMBDA205: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v218: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA205: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA205),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v219)
,	/* FN_LAMBDA204: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v219: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA204: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA204),1)
,	/* ST_v215: (byte 0) */
  bytes2word(68,97,114,119)
,	/* ST_v212: (byte 4) */
  bytes2word(105,110,57,0)
, bytes2word(105,120,56,54)
,	/* ST_v209: (byte 1) */
  bytes2word(0,110,104,99)
, bytes2word(57,56,0,0)
,};
