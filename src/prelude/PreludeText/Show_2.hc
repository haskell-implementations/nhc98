#include "newmacros.h"
#include "runtime.h"

#define CT_v309	((void*)startLabel+100)
#define FN_LAMBDA302	((void*)startLabel+148)
#define CT_v310	((void*)startLabel+160)
#define F0_LAMBDA302	((void*)startLabel+168)
#define FN_LAMBDA301	((void*)startLabel+180)
#define CT_v311	((void*)startLabel+192)
#define F0_LAMBDA301	((void*)startLabel+200)
#define FN_LAMBDA300	((void*)startLabel+212)
#define CT_v315	((void*)startLabel+240)
#define F0_LAMBDA300	((void*)startLabel+248)
#define CT_v319	((void*)startLabel+344)
#define FN_LAMBDA303	((void*)startLabel+388)
#define CT_v321	((void*)startLabel+408)
#define CF_LAMBDA303	((void*)startLabel+416)
#define CT_v322	((void*)startLabel+452)
#define CT_v323	((void*)startLabel+504)
#define CT_v324	((void*)startLabel+584)
#define ST_v320	((void*)startLabel+612)
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46shows[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Show_46Prelude_462[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v309)
,};
Node FN_Prelude_46Show_46Prelude_462_46showsType[] = {
  bytes2word(NEEDHEAP_P1,44,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,40,HEAP_CVAL_P1,8)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_CHAR_P1,44)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(41,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(23,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,31)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v309: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showsType),3)
, VAPTAG(useLabel(FN_LAMBDA300))
, VAPTAG(useLabel(FN_LAMBDA301))
, VAPTAG(useLabel(FN_LAMBDA302))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(1,0,0,1)
, useLabel(CT_v310)
,	/* FN_LAMBDA302: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v310: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA302: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA302),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v311)
,	/* FN_LAMBDA301: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v311: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA301: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA301),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v315)
,	/* FN_LAMBDA300: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v315: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA300: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA300),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v319)
,};
Node FN_Prelude_46Show_46Prelude_462_46showsPrec[] = {
  bytes2word(ZAP_ARG_I3,NEEDSTACK_I16,PUSH_ZAP_ARG,4)
, bytes2word(EVAL,NEEDHEAP_P1,35,UNPACK)
, bytes2word(2,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,40,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,2,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(41,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(24,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,32)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v319: (byte 0) */
  HW(6,4)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showsPrec),4)
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46shows))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA303))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v321)
,	/* FN_LAMBDA303: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v320)
,	/* CT_v321: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA303: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA303))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v322)
,};
Node FN_Prelude_46Show_46Prelude_462_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v322: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46show),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v323)
,};
Node FN_Prelude_46Show_46Prelude_462_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v323: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showList),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v324)
,};
Node FN_Prelude_46Show_46Prelude_462[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v324: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46show),1)
,	/* ST_v320: (byte 0) */
  bytes2word(44,0,0,0)
,};
