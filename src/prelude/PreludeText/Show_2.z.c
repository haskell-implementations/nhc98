#include "newmacros.h"
#include "runtime.h"

#define CT_v310	((void*)startLabel+112)
#define FN_LAMBDA302	((void*)startLabel+160)
#define CT_v312	((void*)startLabel+184)
#define F0_LAMBDA302	((void*)startLabel+192)
#define FN_LAMBDA301	((void*)startLabel+204)
#define CT_v314	((void*)startLabel+228)
#define F0_LAMBDA301	((void*)startLabel+236)
#define FN_LAMBDA300	((void*)startLabel+248)
#define CT_v319	((void*)startLabel+284)
#define F0_LAMBDA300	((void*)startLabel+292)
#define CT_v324	((void*)startLabel+400)
#define FN_LAMBDA303	((void*)startLabel+444)
#define CT_v327	((void*)startLabel+476)
#define CF_LAMBDA303	((void*)startLabel+484)
#define CT_v329	((void*)startLabel+532)
#define CT_v331	((void*)startLabel+596)
#define CT_v333	((void*)startLabel+684)
#define ST_v326	((void*)startLabel+712)
#define ST_v332	((void*)startLabel+714)
#define ST_v328	((void*)startLabel+737)
#define ST_v330	((void*)startLabel+765)
#define ST_v322	((void*)startLabel+797)
#define ST_v325	((void*)startLabel+830)
#define ST_v309	((void*)startLabel+873)
#define ST_v317	((void*)startLabel+906)
#define ST_v311	((void*)startLabel+944)
#define ST_v313	((void*)startLabel+982)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showChar[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node TMSUB_Prelude[];
extern Node FN_Prelude_46shows[];
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46Show_46Prelude_462[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v310)
,};
Node FN_Prelude_46Show_46Prelude_462_46showsType[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,44,PUSH_HEAP,HEAP_CVAL_I3)
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
, 70005
, useLabel(ST_v309)
,	/* CT_v310: (byte 0) */
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
, useLabel(CT_v312)
,	/* FN_LAMBDA302: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70018
, useLabel(ST_v311)
,	/* CT_v312: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA302: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA302),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v314)
,	/* FN_LAMBDA301: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 70020
, useLabel(ST_v313)
,	/* CT_v314: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA301: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA301),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v319)
,	/* FN_LAMBDA300: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 70016
, useLabel(ST_v317)
,	/* CT_v319: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA300: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA300),1)
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v324)
,};
Node FN_Prelude_46Show_46Prelude_462_46showsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(ZAP_ARG_I3,NEEDSTACK_I16,PUSH_ZAP_ARG,4)
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
, 40005
, useLabel(ST_v322)
,	/* CT_v324: (byte 0) */
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
, useLabel(CT_v327)
,	/* FN_LAMBDA303: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v326)
, 40061
, useLabel(ST_v325)
,	/* CT_v327: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA303: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA303))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v329)
,};
Node FN_Prelude_46Show_46Prelude_462_46show[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30031
, useLabel(ST_v328)
,	/* CT_v329: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46show),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v331)
,};
Node FN_Prelude_46Show_46Prelude_462_46showList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30031
, useLabel(ST_v330)
,	/* CT_v331: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showList),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v333)
,};
Node FN_Prelude_46Show_46Prelude_462[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_IN3)
, bytes2word(HEAP_P1,4,HEAP_P1,3)
, bytes2word(HEAP_I2,HEAP_I1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
, 30031
, useLabel(ST_v332)
,	/* CT_v333: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_462[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_462_46show),1)
,	/* ST_v326: (byte 0) */
 	/* ST_v332: (byte 2) */
  bytes2word(44,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
,	/* ST_v328: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
, bytes2word(115,104,111,119)
,	/* ST_v330: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
,	/* ST_v322: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,80,114,101)
,	/* ST_v325: (byte 2) */
  bytes2word(99,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
, bytes2word(46,115,104,111)
, bytes2word(119,115,80,114)
, bytes2word(101,99,58,52)
, bytes2word(58,54,49,45)
, bytes2word(52,58,54,51)
,	/* ST_v309: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,50,46)
, bytes2word(115,104,111,119)
, bytes2word(115,84,121,112)
,	/* ST_v317: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
, bytes2word(46,115,104,111)
, bytes2word(119,115,84,121)
, bytes2word(112,101,58,55)
,	/* ST_v311: (byte 4) */
  bytes2word(58,49,54,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,50,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(58,55,58,49)
,	/* ST_v313: (byte 2) */
  bytes2word(56,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,83,104)
, bytes2word(111,119,46,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,50)
, bytes2word(46,115,104,111)
, bytes2word(119,115,84,121)
, bytes2word(112,101,58,55)
, bytes2word(58,50,48,0)
,};
