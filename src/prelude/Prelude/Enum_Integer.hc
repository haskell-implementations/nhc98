#include "newmacros.h"
#include "runtime.h"

#define CT_v278	((void*)startLabel+56)
#define CT_v279	((void*)startLabel+128)
#define CT_v280	((void*)startLabel+168)
#define CT_v281	((void*)startLabel+204)
#define CT_v282	((void*)startLabel+252)
#define CT_v283	((void*)startLabel+300)
#define CT_v284	((void*)startLabel+344)
#define CT_v285	((void*)startLabel+388)
#define CT_v286	((void*)startLabel+448)
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_42[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_45[];
extern Node FN_Prelude_46Num_46Prelude_46Integer_46_43[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46fromInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46enumFromTo[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CADR_N1,2)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 2
,	/* CT_v278: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_42))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v279)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v279: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFrom))
, bytes2word(1,0,0,1)
, useLabel(CT_v280)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v280: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46fromEnum),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46fromInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v281: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46toEnum),1)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, bytes2word(1,0,0,1)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v282: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_45))
, bytes2word(1,0,0,1)
, useLabel(CT_v283)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CADR_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v283: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Integer_46_43))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v284)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v284: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Integer)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v285: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Integer_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Enum_46Prelude_46Integer[] = {
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
Node CF_Prelude_46Enum_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Integer))
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46succ)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46pred)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46toEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Prelude_46Integer_46enumFromThenTo)
,};
