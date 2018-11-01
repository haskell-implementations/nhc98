#include "newmacros.h"
#include "runtime.h"

#define CT_v294	((void*)startLabel+100)
#define FN_LAMBDA286	((void*)startLabel+168)
#define CT_v297	((void*)startLabel+200)
#define CF_LAMBDA286	((void*)startLabel+208)
#define FN_LAMBDA285	((void*)startLabel+220)
#define CT_v299	((void*)startLabel+244)
#define F0_LAMBDA285	((void*)startLabel+252)
#define FN_LAMBDA284	((void*)startLabel+264)
#define CT_v301	((void*)startLabel+288)
#define F0_LAMBDA284	((void*)startLabel+296)
#define FN_LAMBDA283	((void*)startLabel+308)
#define CT_v306	((void*)startLabel+344)
#define F0_LAMBDA283	((void*)startLabel+352)
#define CT_v311	((void*)startLabel+484)
#define FN_LAMBDA287	((void*)startLabel+556)
#define CT_v314	((void*)startLabel+588)
#define CF_LAMBDA287	((void*)startLabel+596)
#define CT_v316	((void*)startLabel+640)
#define CT_v318	((void*)startLabel+700)
#define CT_v320	((void*)startLabel+780)
#define ST_v313	((void*)startLabel+808)
#define ST_v296	((void*)startLabel+812)
#define ST_v319	((void*)startLabel+820)
#define ST_v315	((void*)startLabel+845)
#define ST_v317	((void*)startLabel+875)
#define ST_v309	((void*)startLabel+909)
#define ST_v312	((void*)startLabel+944)
#define ST_v293	((void*)startLabel+991)
#define ST_v304	((void*)startLabel+1026)
#define ST_v298	((void*)startLabel+1067)
#define ST_v300	((void*)startLabel+1108)
#define ST_v295	((void*)startLabel+1149)
extern Node TM_Ratio[];
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Integral_46Prelude_46Real[];
extern Node FN_Prelude_46Real_46Prelude_46Num[];
extern Node FN_Prelude_46Num_46Prelude_46Show[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46showChar[];
extern Node FN_Prelude_46_46[];
extern Node TMSUB_Ratio[];
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
, useLabel(CT_v294)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46showsType[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_P1,36,PUSH_HEAP,HEAP_CVAL_I3)
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
, 130005
, useLabel(ST_v293)
,	/* CT_v294: (byte 0) */
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
, useLabel(CT_v297)
,	/* FN_LAMBDA286: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v296)
, 130036
, useLabel(ST_v295)
,	/* CT_v297: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA286: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA286))
, bytes2word(1,0,0,1)
, useLabel(CT_v299)
,	/* FN_LAMBDA285: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130017
, useLabel(ST_v298)
,	/* CT_v299: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA285: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA285),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v301)
,	/* FN_LAMBDA284: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130020
, useLabel(ST_v300)
,	/* CT_v301: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA284: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA284),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v306)
,	/* FN_LAMBDA283: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 130015
, useLabel(ST_v304)
,	/* CT_v306: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA283: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA283),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v311)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46showsPrec[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_P1)
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
, 80005
, useLabel(ST_v309)
,	/* CT_v311: (byte 0) */
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
, useLabel(CT_v314)
,	/* FN_LAMBDA287: (byte 0) */
  useLabel(TMSUB_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v313)
, 100047
, useLabel(ST_v312)
,	/* CT_v314: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA287: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA287))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v316)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46show[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70027
, useLabel(ST_v315)
,	/* CT_v316: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46show),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v318)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio_46showList[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70027
, useLabel(ST_v317)
,	/* CT_v318: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showList),2)
, VAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(1,0,0,1)
, useLabel(CT_v320)
,};
Node FN_Prelude_46Show_46Ratio_46Ratio[] = {
  useLabel(TM_Ratio)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 70027
, useLabel(ST_v319)
,	/* CT_v320: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_Prelude_46Show_46Ratio_46Ratio[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Ratio_46Ratio_46show),1)
,	/* ST_v313: (byte 0) */
 	/* ST_v296: (byte 4) */
  bytes2word(32,37,32,0)
, bytes2word(40,82,97,116)
,	/* ST_v319: (byte 4) */
  bytes2word(105,111,32,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
,	/* ST_v315: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,115,104)
,	/* ST_v317: (byte 3) */
  bytes2word(111,119,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
,	/* ST_v309: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,115,104)
, bytes2word(111,119,115,80)
,	/* ST_v312: (byte 4) */
  bytes2word(114,101,99,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,115,104,111)
, bytes2word(119,115,80,114)
, bytes2word(101,99,58,49)
, bytes2word(48,58,52,55)
, bytes2word(45,49,48,58)
,	/* ST_v293: (byte 3) */
  bytes2word(53,49,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
,	/* ST_v304: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(58,49,51,58)
,	/* ST_v298: (byte 3) */
  bytes2word(49,53,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
, bytes2word(101,58,49,51)
,	/* ST_v300: (byte 4) */
  bytes2word(58,49,55,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,82,97,116)
, bytes2word(105,111,46,82)
, bytes2word(97,116,105,111)
, bytes2word(46,115,104,111)
, bytes2word(119,115,84,121)
, bytes2word(112,101,58,49)
, bytes2word(51,58,50,48)
,	/* ST_v295: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,82,97)
, bytes2word(116,105,111,46)
, bytes2word(82,97,116,105)
, bytes2word(111,46,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,58)
, bytes2word(49,51,58,51)
, bytes2word(54,45,49,51)
, bytes2word(58,52,52,0)
,};
