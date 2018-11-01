#include "newmacros.h"
#include "runtime.h"

#define CT_v205	((void*)startLabel+48)
#define FN_List_46Prelude_46160_46select	((void*)startLabel+80)
#define v206	((void*)startLabel+120)
#define v208	((void*)startLabel+139)
#define CT_v210	((void*)startLabel+160)
#define F0_List_46Prelude_46160_46select	((void*)startLabel+168)
#define FN_LAMBDA203	((void*)startLabel+204)
#define CT_v212	((void*)startLabel+224)
#define CF_LAMBDA203	((void*)startLabel+232)
#define FN_LAMBDA202	((void*)startLabel+244)
#define CT_v213	((void*)startLabel+256)
#define F0_LAMBDA202	((void*)startLabel+264)
#define FN_LAMBDA201	((void*)startLabel+276)
#define CT_v214	((void*)startLabel+288)
#define F0_LAMBDA201	((void*)startLabel+296)
#define FN_LAMBDA200	((void*)startLabel+308)
#define CT_v218	((void*)startLabel+336)
#define F0_LAMBDA200	((void*)startLabel+344)
#define ST_v211	((void*)startLabel+348)
extern Node FN_Prelude_46foldr[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v205)
,};
Node FN_List_46partition[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(0,0,0)
,	/* CT_v205: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_List_46partition[] = {
  CAPTAG(useLabel(FN_List_46partition),2)
, CAPTAG(useLabel(FN_List_46Prelude_46160_46select),2)
, VAPTAG(useLabel(FN_Prelude_46foldr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v210)
,	/* FN_List_46Prelude_46160_46select: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(5,PUSH_ARG_I2,PUSH_ZAP_ARG_I1,ZAP_ARG_I3)
, bytes2word(ZAP_STACK_P1,4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,15,0,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG,2,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,2)
,	/* v206: (byte 4) */
  bytes2word(HEAP_OFF_N1,4,HEAP_I2,RETURN)
, bytes2word(PUSH_CVAL_P1,6,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,14,0,HEAP_CVAL_N1)
, bytes2word(1,HEAP_ARG,2,HEAP_I1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,2,HEAP_I1)
,	/* v208: (byte 3) */
  bytes2word(HEAP_OFF_N1,5,RETURN,HEAP_CVAL_P1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,2,0)
, CONSTR(1,2,0)
,	/* CT_v210: (byte 0) */
  HW(6,3)
, 0
,	/* F0_List_46Prelude_46160_46select: (byte 0) */
  CAPTAG(useLabel(FN_List_46Prelude_46160_46select),3)
, VAPTAG(useLabel(FN_LAMBDA200))
, VAPTAG(useLabel(FN_LAMBDA201))
, VAPTAG(useLabel(FN_LAMBDA202))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_LAMBDA203))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA203: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA203))
, bytes2word(1,0,0,1)
, useLabel(CT_v213)
,	/* FN_LAMBDA202: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v213: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA202: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA202),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v214)
,	/* FN_LAMBDA201: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v214: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA201: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA201),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,	/* FN_LAMBDA200: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v218: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA200: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA200),1)
,	/* ST_v211: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(58,32,80,97)
, bytes2word(116,116,101,114)
, bytes2word(110,32,109,97)
, bytes2word(116,99,104,32)
, bytes2word(102,97,105,108)
, bytes2word(117,114,101,32)
, bytes2word(105,110,32,102)
, bytes2word(117,110,99,116)
, bytes2word(105,111,110,32)
, bytes2word(97,116,32,49)
, bytes2word(49,58,51,52)
, bytes2word(45,49,50,58)
, bytes2word(55,53,46,0)
,};
