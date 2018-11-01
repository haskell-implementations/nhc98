#include "newmacros.h"
#include "runtime.h"

#define CT_v261	((void*)startLabel+40)
#define CT_v262	((void*)startLabel+88)
#define v263	((void*)startLabel+122)
#define CT_v267	((void*)startLabel+152)
#define FN_LAMBDA259	((void*)startLabel+188)
#define CT_v269	((void*)startLabel+208)
#define CF_LAMBDA259	((void*)startLabel+216)
#define CT_v273	((void*)startLabel+240)
#define CT_v274	((void*)startLabel+280)
#define CT_v275	((void*)startLabel+324)
#define CT_v276	((void*)startLabel+364)
#define CT_v277	((void*)startLabel+404)
#define CT_v278	((void*)startLabel+464)
#define ST_v268	((void*)startLabel+508)
extern Node FN_Prelude_46Show_46Prelude_46Int_46show[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46error[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46_40_41[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v261)
,};
Node FN_Prelude_46Enum_46_40_41_46enumFromThen[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,HEAP_OFF_N1,3)
, bytes2word(HEAP_OFF_N1,3,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v261: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46enumFromThen),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v262)
,};
Node FN_Prelude_46Enum_46_40_41_46enumFrom[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(2,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
,	/* CT_v262: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46enumFrom),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Enum_46_40_41_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,PUSH_ARG_I1)
, bytes2word(EVAL,NEEDHEAP_I32,EQ_W,JUMPFALSE)
, bytes2word(6,0,PUSH_HEAP,HEAP_CVAL_N1)
,	/* v263: (byte 2) */
  bytes2word(1,RETURN,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v267: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46toEnum),1)
, VAPTAG(useLabel(FN_LAMBDA259))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v269)
,	/* FN_LAMBDA259: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA259: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA259))
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Enum_46_40_41_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,POP_I1)
, bytes2word(PUSH_INT_P1,0,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v273: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46fromEnum),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Enum_46_40_41_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v274: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46_40_41)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v275)
,};
Node FN_Prelude_46Enum_46_40_41_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v275: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46_40_41)
, bytes2word(1,0,0,1)
, useLabel(CT_v276)
,};
Node FN_Prelude_46Enum_46_40_41_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v276: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46_40_41)
, bytes2word(1,0,0,1)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Enum_46_40_41_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v277: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46_40_41_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46_40_41_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Enum_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v278: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46_40_41))
, useLabel(F0_Prelude_46Enum_46_40_41_46succ)
, useLabel(F0_Prelude_46Enum_46_40_41_46pred)
, useLabel(F0_Prelude_46Enum_46_40_41_46enumFrom)
, useLabel(F0_Prelude_46Enum_46_40_41_46fromEnum)
, useLabel(F0_Prelude_46Enum_46_40_41_46toEnum)
, useLabel(F0_Prelude_46Enum_46_40_41_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46_40_41_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46_40_41_46enumFromThenTo)
,	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(95,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,85,110,105)
, bytes2word(116,95,116,111)
, bytes2word(69,110,117,109)
, bytes2word(32,111,110,32)
, bytes2word(0,0,0,0)
,};
