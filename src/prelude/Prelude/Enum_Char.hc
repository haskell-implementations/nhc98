#include "newmacros.h"
#include "runtime.h"

#define CT_v267	((void*)startLabel+16)
#define CT_v268	((void*)startLabel+44)
#define CT_v269	((void*)startLabel+88)
#define CT_v270	((void*)startLabel+132)
#define CT_v271	((void*)startLabel+180)
#define CT_v272	((void*)startLabel+224)
#define CT_v273	((void*)startLabel+264)
#define CT_v274	((void*)startLabel+304)
#define CT_v275	((void*)startLabel+364)
extern Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[];
extern Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v267)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v267: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v268)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v268: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46toEnum),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_INT_P1,255)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v269: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_INT_P1,255)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v270: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v271)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v271: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v272: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(1,0,0,1)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v273: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(1,0,0,1)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v274: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v275)
,};
Node FN_Prelude_46Enum_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v275: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char))
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46succ)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46pred)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46toEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo)
,};
