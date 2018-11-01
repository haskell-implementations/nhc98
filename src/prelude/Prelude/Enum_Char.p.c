#include "newmacros.h"
#include "runtime.h"

#define CT_v269	((void*)startLabel+24)
#define CT_v272	((void*)startLabel+76)
#define CT_v277	((void*)startLabel+196)
#define CT_v282	((void*)startLabel+316)
#define CT_v286	((void*)startLabel+420)
#define CT_v290	((void*)startLabel+520)
#define CT_v294	((void*)startLabel+616)
#define CT_v298	((void*)startLabel+712)
#define CT_v302	((void*)startLabel+836)
#define ST_v300	((void*)startLabel+896)
#define ST_v279	((void*)startLabel+924)
#define ST_v274	((void*)startLabel+960)
#define ST_v284	((void*)startLabel+1000)
#define ST_v288	((void*)startLabel+1044)
#define ST_v268	((void*)startLabel+1084)
#define ST_v296	((void*)startLabel+1120)
#define ST_v292	((void*)startLabel+1152)
#define ST_v271	((void*)startLabel+1184)
#define PS_v278	((void*)startLabel+1220)
#define PS_v280	((void*)startLabel+1232)
#define PS_v281	((void*)startLabel+1244)
#define PS_v273	((void*)startLabel+1256)
#define PS_v275	((void*)startLabel+1268)
#define PS_v276	((void*)startLabel+1280)
#define PS_v270	((void*)startLabel+1292)
#define PS_v267	((void*)startLabel+1304)
#define PS_v297	((void*)startLabel+1316)
#define PS_v295	((void*)startLabel+1328)
#define PS_v293	((void*)startLabel+1340)
#define PS_v291	((void*)startLabel+1352)
#define PS_v289	((void*)startLabel+1364)
#define PS_v287	((void*)startLabel+1376)
#define PS_v285	((void*)startLabel+1388)
#define PS_v283	((void*)startLabel+1400)
#define PS_v299	((void*)startLabel+1412)
#define PS_v301	((void*)startLabel+1424)
extern Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[];
extern Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46_95_46pred[];
extern Node PC_Prelude_46_95_46succ[];
extern Node PC_Prelude_46_95_46enumFromTo[];
extern Node PC_Prelude_46_95_46enumFromThenTo[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v269)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 90005
, useLabel(ST_v268)
,	/* CT_v269: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum),1)
, useLabel(PS_v267)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v272)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46toEnum[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 80005
, useLabel(ST_v271)
,	/* CT_v272: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46toEnum),1)
, useLabel(PS_v270)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromThen[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_INT_P1,255,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, useLabel(PS_v275)
, 0
, 0
, 0
, 0
, 60005
, useLabel(ST_v274)
,	/* CT_v277: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromThen),2)
, useLabel(PS_v273)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo))
, bytes2word(1,0,0,1)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFrom[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_INT_P1,255,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v281)
, 0
, 0
, 0
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, 50005
, useLabel(ST_v279)
,	/* CT_v282: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFrom),1)
, useLabel(PS_v278)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46toEnum))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v285)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v284)
,	/* CT_v286: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo),3)
, useLabel(PS_v283)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v290)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v289)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v288)
,	/* CT_v290: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46enumFromTo),2)
, useLabel(PS_v287)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(1,0,0,1)
, useLabel(CT_v294)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46succ[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v293)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v292)
,	/* CT_v294: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46succ),1)
, useLabel(PS_v291)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(1,0,0,1)
, useLabel(CT_v298)
,};
Node FN_Prelude_46Enum_46Prelude_46Char_46pred[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v297)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v296)
,	/* CT_v298: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Char_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46pred),1)
, useLabel(PS_v295)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v302)
,};
Node FN_Prelude_46Enum_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v301)
, 0
, 0
, 0
, 0
, CONSTR(0,8,0)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v300)
,	/* CT_v302: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char))
, useLabel(PS_v299)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46succ)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46pred)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46toEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo)
,};
Node PP_Prelude_46Enum_46Prelude_46Char[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char[] = {
 	/* ST_v300: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,0,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46enumFrom[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46enumFrom[] = {
 	/* ST_v279: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46enumFromThen[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46enumFromThen[] = {
 	/* ST_v274: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo[] = {
 	/* ST_v284: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,84,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46enumFromTo[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46enumFromTo[] = {
 	/* ST_v288: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,111)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46fromEnum[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46fromEnum[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,102,114)
, bytes2word(111,109,69,110)
, bytes2word(117,109,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46pred[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46pred[] = {
 	/* ST_v296: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,112,114)
, bytes2word(101,100,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46succ[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46succ[] = {
 	/* ST_v292: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,115,117)
, bytes2word(99,99,0,0)
,};
Node PP_Prelude_46Enum_46Prelude_46Char_46toEnum[] = {
 };
Node PC_Prelude_46Enum_46Prelude_46Char_46toEnum[] = {
 	/* ST_v271: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,67,104,97)
, bytes2word(114,46,116,111)
, bytes2word(69,110,117,109)
, bytes2word(0,0,0,0)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFrom)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46enumFrom)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFrom)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46toEnum)
,	/* PS_v281: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFrom)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46enumFromTo)
,	/* PS_v273: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46enumFromThen)
,	/* PS_v275: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46toEnum)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromThen)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo)
,	/* PS_v270: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46toEnum)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46toEnum)
,	/* PS_v267: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46fromEnum)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46fromEnum)
,	/* PS_v297: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46pred)
, useLabel(PC_Prelude_46_95_46pred)
,	/* PS_v295: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46pred)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46pred)
,	/* PS_v293: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46succ)
, useLabel(PC_Prelude_46_95_46succ)
,	/* PS_v291: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46succ)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46succ)
,	/* PS_v289: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromTo)
, useLabel(PC_Prelude_46_95_46enumFromTo)
,	/* PS_v287: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromTo)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46enumFromTo)
,	/* PS_v285: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo)
, useLabel(PC_Prelude_46_95_46enumFromThenTo)
,	/* PS_v283: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46enumFromThenTo)
,	/* PS_v299: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char)
,	/* PS_v301: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Enum_46Prelude_46Char)
, useLabel(PC_Prelude_468)
,};
