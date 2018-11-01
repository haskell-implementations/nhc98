#include "newmacros.h"
#include "runtime.h"

#define CT_v282	((void*)startLabel+84)
#define FN_LAMBDA275	((void*)startLabel+148)
#define CT_v284	((void*)startLabel+168)
#define CF_LAMBDA275	((void*)startLabel+176)
#define CT_v288	((void*)startLabel+292)
#define FN_LAMBDA276	((void*)startLabel+360)
#define CT_v290	((void*)startLabel+380)
#define CF_LAMBDA276	((void*)startLabel+388)
#define CT_v291	((void*)startLabel+420)
#define CT_v292	((void*)startLabel+468)
#define CT_v293	((void*)startLabel+540)
#define ST_v283	((void*)startLabel+568)
#define ST_v289	((void*)startLabel+579)
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46RealFloat_46Prelude_46RealFrac[];
extern Node FN_Prelude_46RealFrac_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Show[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Complex_46realPart[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46showsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46Show_46Complex_46Complex[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Show_46Complex_46Complex_46showsType[] = {
  bytes2word(NEEDHEAP_P1,34,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,11,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(5,HEAP_OFF_N1,4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,13,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(2,HEAP_CHAR_P1,41,HEAP_CVAL_P1)
, bytes2word(12,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,29,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v282: (byte 0) */
  HW(11,2)
, 0
,};
Node F0_Prelude_46Show_46Complex_46Complex_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46showsType),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA275))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Show))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, CAPTAG(useLabel(FN_Complex_46realPart),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, bytes2word(0,0,0,0)
, useLabel(CT_v284)
,	/* FN_LAMBDA275: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v283)
,	/* CT_v284: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA275: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA275))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Show_46Complex_46Complex_46showsPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(45,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_INT_P1,6)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,6)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,3,HEAP_INT_P1,6)
, bytes2word(HEAP_I1,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,6,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,27,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,43,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v288: (byte 0) */
  HW(12,3)
, 0
,};
Node F0_Prelude_46Show_46Complex_46Complex_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46showsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46RealFloat_46Prelude_46RealFrac))
, VAPTAG(useLabel(FN_Prelude_46RealFrac_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Show))
, VAPTAG(useLabel(FN_Prelude_46showsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA276))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, bytes2word(0,0,0,0)
, useLabel(CT_v290)
,	/* FN_LAMBDA276: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v289)
,	/* CT_v290: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA276: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA276))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v291)
,};
Node FN_Prelude_46Show_46Complex_46Complex_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v291: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Complex_46Complex_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46show),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v292)
,};
Node FN_Prelude_46Show_46Complex_46Complex_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v292: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Complex_46Complex_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46showList),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(1,0,0,1)
, useLabel(CT_v293)
,};
Node FN_Prelude_46Show_46Complex_46Complex[] = {
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
,	/* CT_v293: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Complex_46Complex[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Complex_46Complex_46show),1)
,	/* ST_v283: (byte 0) */
  bytes2word(32,40,67,111)
, bytes2word(109,112,108,101)
,	/* ST_v289: (byte 3) */
  bytes2word(120,32,0,58)
, bytes2word(43,0,0,0)
,};
