#include "newmacros.h"
#include "runtime.h"

#define CT_v338	((void*)startLabel+112)
#define FN_LAMBDA329	((void*)startLabel+164)
#define CT_v341	((void*)startLabel+196)
#define CF_LAMBDA329	((void*)startLabel+204)
#define FN_Prelude_46Prelude_46166_46getLeft	((void*)startLabel+216)
#define v347	((void*)startLabel+230)
#define v345	((void*)startLabel+234)
#define v342	((void*)startLabel+239)
#define CT_v348	((void*)startLabel+260)
#define F0_Prelude_46Prelude_46166_46getLeft	((void*)startLabel+268)
#define FN_LAMBDA328	((void*)startLabel+288)
#define CT_v350	((void*)startLabel+320)
#define CF_LAMBDA328	((void*)startLabel+328)
#define FN_Prelude_46Prelude_46167_46getRight	((void*)startLabel+340)
#define v356	((void*)startLabel+354)
#define v354	((void*)startLabel+358)
#define v351	((void*)startLabel+363)
#define CT_v357	((void*)startLabel+384)
#define F0_Prelude_46Prelude_46167_46getRight	((void*)startLabel+392)
#define FN_LAMBDA327	((void*)startLabel+412)
#define CT_v359	((void*)startLabel+444)
#define CF_LAMBDA327	((void*)startLabel+452)
#define v361	((void*)startLabel+488)
#define v362	((void*)startLabel+529)
#define CT_v365	((void*)startLabel+584)
#define FN_LAMBDA331	((void*)startLabel+640)
#define CT_v368	((void*)startLabel+672)
#define CF_LAMBDA331	((void*)startLabel+680)
#define FN_LAMBDA330	((void*)startLabel+692)
#define CT_v371	((void*)startLabel+724)
#define CF_LAMBDA330	((void*)startLabel+732)
#define CT_v373	((void*)startLabel+780)
#define CT_v375	((void*)startLabel+844)
#define CT_v377	((void*)startLabel+932)
#define ST_v340	((void*)startLabel+960)
#define ST_v370	((void*)startLabel+969)
#define ST_v376	((void*)startLabel+975)
#define ST_v372	((void*)startLabel+1003)
#define ST_v374	((void*)startLabel+1036)
#define ST_v363	((void*)startLabel+1073)
#define ST_v369	((void*)startLabel+1111)
#define ST_v366	((void*)startLabel+1159)
#define ST_v337	((void*)startLabel+1207)
#define ST_v355	((void*)startLabel+1245)
#define ST_v339	((void*)startLabel+1295)
#define ST_v346	((void*)startLabel+1343)
#define ST_v358	((void*)startLabel+1391)
#define ST_v349	((void*)startLabel+1467)
#define ST_v367	((void*)startLabel+1541)
extern Node TM_Prelude[];
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46showsType[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46showChar[];
extern Node TMSUB_Prelude[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46showsPrec[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46showParen[];
extern Node FN_Prelude_46Show_46Prelude_46Either[];
extern Node FN_Prelude_46_95_46show[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v338)
,};
Node FN_Prelude_46Show_46Prelude_46Either_46showsType[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_P1,44,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(32,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,10,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,2,HEAP_CHAR_P1)
, bytes2word(41,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,20,HEAP_OFF_N1)
, bytes2word(5,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(27,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,39)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 70003
, useLabel(ST_v337)
,	/* CT_v338: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Either_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46showsType),3)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA329))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsType))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46166_46getLeft),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showChar))
, CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46getRight),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v341)
,	/* FN_LAMBDA329: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v340)
, 70028
, useLabel(ST_v339)
,	/* CT_v341: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA329: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA329))
, bytes2word(1,0,0,1)
, useLabel(CT_v348)
,	/* FN_Prelude_46Prelude_46166_46getLeft: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(8),BOT(8))
,	/* v347: (byte 2) */
  bytes2word(TOP(4),BOT(4),POP_I1,JUMP)
,	/* v345: (byte 2) */
  bytes2word(7,0,UNPACK,1)
,	/* v342: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90015
, useLabel(ST_v346)
,	/* CT_v348: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Prelude_46Prelude_46166_46getLeft: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46166_46getLeft),1)
, VAPTAG(useLabel(FN_LAMBDA328))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v350)
,	/* FN_LAMBDA328: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v349)
, 90015
, useLabel(ST_v346)
,	/* CT_v350: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA328: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA328))
, bytes2word(1,0,0,1)
, useLabel(CT_v357)
,	/* FN_Prelude_46Prelude_46167_46getRight: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v356: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v354: (byte 2) */
  bytes2word(7,0,UNPACK,1)
,	/* v351: (byte 3) */
  bytes2word(PUSH_P1,0,RETURN_EVAL,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 100015
, useLabel(ST_v355)
,	/* CT_v357: (byte 0) */
  HW(2,1)
, 0
,	/* F0_Prelude_46Prelude_46167_46getRight: (byte 0) */
  CAPTAG(useLabel(FN_Prelude_46Prelude_46167_46getRight),1)
, VAPTAG(useLabel(FN_LAMBDA327))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v359)
,	/* FN_LAMBDA327: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v358)
, 100015
, useLabel(ST_v355)
,	/* CT_v359: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA327: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA327))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v365)
,};
Node FN_Prelude_46Show_46Prelude_46Either_46showsPrec[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG,4,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v361: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(45),BOT(45))
, bytes2word(UNPACK,1,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(3,HEAP_INT_P1,10,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(3,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(7,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,3,HEAP_INT_P1)
, bytes2word(10,HEAP_P1,0,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,10,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,18,HEAP_OFF_N1,5)
,	/* v362: (byte 1) */
  bytes2word(RETURN_EVAL,UNPACK,1,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,3,HEAP_INT_P1,10)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,7,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(3,HEAP_INT_P1,10,HEAP_P1)
, bytes2word(0,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(10,HEAP_OFF_N1,6,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,18)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v363)
,	/* CT_v365: (byte 0) */
  HW(9,4)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Either_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46showsPrec),4)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA330))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46showsPrec))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46showParen))
, VAPTAG(useLabel(FN_LAMBDA331))
, bytes2word(0,0,0,0)
, useLabel(CT_v368)
,	/* FN_LAMBDA331: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v367)
, 50059
, useLabel(ST_v366)
,	/* CT_v368: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA331: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA331))
, bytes2word(0,0,0,0)
, useLabel(CT_v371)
,	/* FN_LAMBDA330: (byte 0) */
  useLabel(TMSUB_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v370)
, 40058
, useLabel(ST_v369)
,	/* CT_v371: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA330: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA330))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v373)
,};
Node FN_Prelude_46Show_46Prelude_46Either_46show[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30031
, useLabel(ST_v372)
,	/* CT_v373: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Either_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46show),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v375)
,};
Node FN_Prelude_46Show_46Prelude_46Either_46showList[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 30031
, useLabel(ST_v374)
,	/* CT_v375: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Either_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46showList),3)
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either))
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v377)
,};
Node FN_Prelude_46Show_46Prelude_46Either[] = {
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
, useLabel(ST_v376)
,	/* CT_v377: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Either[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46showsPrec),2)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46showsType),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46showList),1)
, CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Either_46show),1)
,	/* ST_v340: (byte 0) */
  bytes2word(40,69,105,116)
, bytes2word(104,101,114,32)
,	/* ST_v370: (byte 1) */
  bytes2word(0,76,101,102)
,	/* ST_v376: (byte 3) */
  bytes2word(116,32,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
,	/* ST_v372: (byte 3) */
  bytes2word(101,114,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,115)
,	/* ST_v374: (byte 4) */
  bytes2word(104,111,119,0)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(83,104,111,119)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,105,116)
, bytes2word(104,101,114,46)
, bytes2word(115,104,111,119)
, bytes2word(76,105,115,116)
,	/* ST_v363: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,105)
, bytes2word(116,104,101,114)
, bytes2word(46,115,104,111)
, bytes2word(119,115,80,114)
,	/* ST_v369: (byte 3) */
  bytes2word(101,99,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
, bytes2word(58,52,58,53)
, bytes2word(56,45,52,58)
,	/* ST_v366: (byte 3) */
  bytes2word(54,52,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
, bytes2word(58,53,58,53)
, bytes2word(57,45,53,58)
,	/* ST_v337: (byte 3) */
  bytes2word(54,54,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
,	/* ST_v355: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,83,104,111)
, bytes2word(119,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,69,105)
, bytes2word(116,104,101,114)
, bytes2word(46,115,104,111)
, bytes2word(119,115,84,121)
, bytes2word(112,101,58,49)
, bytes2word(48,58,49,53)
, bytes2word(45,49,48,58)
,	/* ST_v339: (byte 3) */
  bytes2word(51,54,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(58,55,58,50)
, bytes2word(56,45,55,58)
,	/* ST_v346: (byte 3) */
  bytes2word(51,55,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,83)
, bytes2word(104,111,119,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,105,116,104)
, bytes2word(101,114,46,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(58,57,58,49)
, bytes2word(53,45,57,58)
,	/* ST_v358: (byte 3) */
  bytes2word(51,54,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,58,46)
, bytes2word(47,83,104,111)
, bytes2word(119,95,69,105)
, bytes2word(116,104,101,114)
, bytes2word(46,104,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,49,48)
, bytes2word(58,49,53,45)
, bytes2word(49,48,58,51)
,	/* ST_v349: (byte 3) */
  bytes2word(54,46,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,58,46)
, bytes2word(47,83,104,111)
, bytes2word(119,95,69,105)
, bytes2word(116,104,101,114)
, bytes2word(46,104,115,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,57,58)
, bytes2word(49,53,45,57)
, bytes2word(58,51,54,46)
,	/* ST_v367: (byte 1) */
  bytes2word(0,82,105,103)
, bytes2word(104,116,32,0)
,};
