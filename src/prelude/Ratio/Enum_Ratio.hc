#include "newmacros.h"
#include "runtime.h"

#define CT_v350	((void*)startLabel+40)
#define CT_v351	((void*)startLabel+92)
#define CT_v352	((void*)startLabel+148)
#define CT_v353	((void*)startLabel+200)
#define CT_v354	((void*)startLabel+256)
#define CT_v355	((void*)startLabel+372)
#define CT_v356	((void*)startLabel+444)
#define CT_v357	((void*)startLabel+504)
#define CT_v358	((void*)startLabel+604)
extern Node FN_Prelude_46Fractional_46Ratio_46Ratio[];
extern Node FN_Prelude_46Ord_46Ratio_46Ratio[];
extern Node FN_Prelude_46numericEnumFromThenTo[];
extern Node FN_Prelude_46numericEnumFromThen[];
extern Node FN_Prelude_46numericEnumFromTo[];
extern Node FN_Prelude_46numericEnumFrom[];
extern Node FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46Num_46Prelude_46Int_46fromInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Prelude_46Integral_46Prelude_46Int_46toInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_45[];
extern Node FN_Prelude_46Num_46Ratio_46Ratio_46_43[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v350)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_ARG,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v350: (byte 0) */
  HW(3,4)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo),4)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFromThenTo))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v351)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,2,3,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v351: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen),3)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFromThen))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v352)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,2,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v352: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo),3)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFromTo))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v353)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v353: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFrom),2)
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46numericEnumFrom))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v354)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46fromEnum[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,5)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v354: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46fromEnum),2)
, CAPTAG(useLabel(FN_Prelude_46RealFrac_46Ratio_46Ratio_46truncate),1)
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46Num_46Prelude_46Int_46fromInteger)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v355)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46toEnum[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,3,HEAP_CADR_N1)
, bytes2word(2,PUSH_I1,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_P1,0)
, bytes2word(EVAL,NEEDHEAP_I32,POP_I1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_IN3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 1
,	/* CT_v355: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46toEnum),2)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Int_46toInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v356)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46pred[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v356: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46pred),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_45))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v357)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio_46succ[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1
,	/* CT_v357: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46succ),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46fromInteger))
, VAPTAG(useLabel(FN_Prelude_46Num_46Ratio_46Ratio_46_43))
, bytes2word(1,0,0,1)
, useLabel(CT_v358)
,};
Node FN_Prelude_46Enum_46Ratio_46Ratio[] = {
  bytes2word(NEEDHEAP_P1,34,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,1,HEAP_P1,8)
, bytes2word(HEAP_P1,7,HEAP_P1,6)
, bytes2word(HEAP_P1,5,HEAP_P1,4)
, bytes2word(HEAP_P1,3,HEAP_I2,HEAP_I1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v358: (byte 0) */
  HW(8,1)
, 0
,};
Node F0_Prelude_46Enum_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46succ),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46pred),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFrom),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46fromEnum),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46toEnum),1)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThen),2)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromTo),2)
, CAPTAG(useLabel(FN_Prelude_46Enum_46Ratio_46Ratio_46enumFromThenTo),3)
,};
