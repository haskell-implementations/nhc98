#include "newmacros.h"
#include "runtime.h"

#define CT_v293	((void*)startLabel+88)
#define FN_LAMBDA286	((void*)startLabel+156)
#define CT_v295	((void*)startLabel+176)
#define CF_LAMBDA286	((void*)startLabel+184)
#define FN_LAMBDA285	((void*)startLabel+196)
#define CT_v296	((void*)startLabel+208)
#define F0_LAMBDA285	((void*)startLabel+216)
#define FN_LAMBDA284	((void*)startLabel+228)
#define CT_v297	((void*)startLabel+240)
#define F0_LAMBDA284	((void*)startLabel+248)
#define FN_LAMBDA283	((void*)startLabel+260)
#define CT_v301	((void*)startLabel+288)
#define F0_LAMBDA283	((void*)startLabel+296)
#define CT_v305	((void*)startLabel+416)
#define FN_LAMBDA287	((void*)startLabel+488)
#define CT_v307	((void*)startLabel+508)
#define CF_LAMBDA287	((void*)startLabel+516)
#define CT_v308	((void*)startLabel+548)
#define CT_v309	((void*)startLabel+596)
#define CT_v310	((void*)startLabel+668)
#define ST_v306	((void*)startLabel+696)
#define ST_v294	((void*)startLabel+700)
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Show[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62[];
extern Node CF_Ratio_46prec[];
extern Node FN_Prelude_46showsPrec[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46Show_46Ratio_46Ratio[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v293)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46showsType[] = {
  bytes2word(NEEDHEAP_P1,36,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,11,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,12,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,13)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,2)
, bytes2word(HEAP_CHAR_P1,41,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_OFF_N1)
, bytes2word(22,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v293: (byte 0) */
  HW(12,2)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showsType),2)
, VAPTAG(useLabel(FN_LAMBDA283))
, VAPTAG(useLabel(FN_LAMBDA284))
, VAPTAG(useLabel(FN_LAMBDA285))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA286))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Show))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v295)
,	/* FN_LAMBDA286: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v294)
,	/* CT_v295: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA286: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA286))
, bytes2word(1,0,0,1)
, useLabel(CT_v296)
,	/* FN_LAMBDA285: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v296: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA285: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA285),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v297)
,	/* FN_LAMBDA284: (byte 0) */
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v297: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA284: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA284),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v301)
,	/* FN_LAMBDA283: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,HEAP_I2,HEAP_I1,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v301: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA283: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA283),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v305)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46showsPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
, bytes2word(47,UNPACK,2,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_I4,HEAP_INT_P1,1,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(11,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(13,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_I4,HEAP_INT_P1)
, bytes2word(1,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,5,HEAP_I1)
, bytes2word(HEAP_CVAL_P1,14,HEAP_OFF_N1,19)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,28,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,15,HEAP_OFF_N1)
, bytes2word(45,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v305: (byte 0) */
  HW(13,3)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showsPrec),3)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62))
, useLabel(CF_Ratio_46prec)
, VAPTAG(useLabel(FN_Prelude_46Integral_46Prelude_46Real))
, VAPTAG(useLabel(FN_Prelude_46Real_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Show))
, VAPTAG(useLabel(FN_Prelude_46showsPrec))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA287))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, bytes2word(0,0,0,0)
, useLabel(CT_v307)
,	/* FN_LAMBDA287: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v306)
,	/* CT_v307: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA287: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA287))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v308)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46show[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v308: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46show),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v309)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46showList[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v309: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showList),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(1,0,0,1)
, useLabel(CT_v310)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio[] = {
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
,	/* CT_v310: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46show),1)
,	/* ST_v306: (byte 0) */
 	/* ST_v294: (byte 4) */
  bytes2word(32,37,32,0)
, bytes2word(40,82,97,116)
, bytes2word(105,111,32,0)
,};
