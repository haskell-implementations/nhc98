#include "newmacros.h"
#include "runtime.h"

#define CT_v243	((void*)startLabel+60)
#define CT_v244	((void*)startLabel+124)
#define CT_v245	((void*)startLabel+168)
#define CT_v246	((void*)startLabel+216)
#define CT_v247	((void*)startLabel+288)
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46head[];
extern Node FN_Prelude_46showList[];
extern Node FN_Prelude_46Show_46Prelude_46_91_93[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v243)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46showsType[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,91,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,93,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v243: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsType),2)
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46head)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v244)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec[] = {
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v244: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46showList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v245)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v245: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46show),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v246)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v246: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showList),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(1,0,0,1)
, useLabel(CT_v247)
,};
Node FN_Prelude_46Show_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_P1,4,HEAP_P1)
, bytes2word(3,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v247: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46_91_93[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46_91_93_46show),1)
,};
