#include "newmacros.h"
#include "runtime.h"

#define CT_v270	((void*)startLabel+100)
#define CT_v273	((void*)startLabel+168)
#define CT_v277	((void*)startLabel+260)
#define CT_v281	((void*)startLabel+360)
#define CT_v285	((void*)startLabel+460)
#define CT_v289	((void*)startLabel+560)
#define CT_v293	((void*)startLabel+660)
#define CT_v297	((void*)startLabel+784)
#define ST_v295	((void*)startLabel+844)
#define ST_v291	((void*)startLabel+872)
#define ST_v272	((void*)startLabel+900)
#define ST_v283	((void*)startLabel+928)
#define ST_v287	((void*)startLabel+956)
#define ST_v267	((void*)startLabel+984)
#define ST_v279	((void*)startLabel+1020)
#define ST_v275	((void*)startLabel+1052)
#define PS_v271	((void*)startLabel+1084)
#define PS_v266	((void*)startLabel+1096)
#define PS_v269	((void*)startLabel+1108)
#define PS_v268	((void*)startLabel+1120)
#define PS_v292	((void*)startLabel+1132)
#define PS_v290	((void*)startLabel+1144)
#define PS_v288	((void*)startLabel+1156)
#define PS_v286	((void*)startLabel+1168)
#define PS_v284	((void*)startLabel+1180)
#define PS_v282	((void*)startLabel+1192)
#define PS_v280	((void*)startLabel+1204)
#define PS_v278	((void*)startLabel+1216)
#define PS_v276	((void*)startLabel+1228)
#define PS_v274	((void*)startLabel+1240)
#define PS_v294	((void*)startLabel+1252)
#define PS_v296	((void*)startLabel+1264)
extern Node FN_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46Prelude_46Char[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node PC_Prelude_46Enum_46Prelude_46Char_46fromEnum[];
extern Node PC_Prelude_46_95_46_60[];
extern Node PC_Prelude_46_95_46_62_61[];
extern Node PC_Prelude_46_95_46_62[];
extern Node PC_Prelude_46_95_46max[];
extern Node PC_Prelude_46_95_46min[];
extern Node PC_Prelude_468[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v270)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(17,HEAP_OFF_N1,12,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, useLabel(PS_v268)
, 0
, 0
, 0
, 0
, 50003
, useLabel(ST_v267)
,	/* CT_v270: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46compare),2)
, useLabel(PS_v266)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Char_46fromEnum))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v273)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,PUSH_ZAP_ARG_I1)
, bytes2word(EVAL,LE_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v272)
,	/* CT_v273: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60_61),2)
, useLabel(PS_v271)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v277)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v276)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v275)
,	/* CT_v277: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46min),2)
, useLabel(PS_v274)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v281)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v280)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v279)
,	/* CT_v281: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46max),2)
, useLabel(PS_v278)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v285)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v284)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v283)
,	/* CT_v285: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62),2)
, useLabel(PS_v282)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v289)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v288)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v287)
,	/* CT_v289: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_62_61),2)
, useLabel(PS_v286)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v293)
,};
Node FN_Prelude_46Ord_46Prelude_46Char_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v292)
, 0
, 0
, 0
, 0
, 30010
, useLabel(ST_v291)
,	/* CT_v293: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46Prelude_46Char_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char_46_60),2)
, useLabel(PS_v290)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46Prelude_46Char)
, bytes2word(0,0,0,0)
, useLabel(CT_v297)
,};
Node FN_Prelude_46Ord_46Prelude_46Char[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,HEAP_CVAL_P1)
, bytes2word(12,HEAP_CVAL_P1,13,HEAP_CVAL_P1)
, bytes2word(14,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v296)
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
, useLabel(ST_v295)
,	/* CT_v297: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46Prelude_46Char[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Char))
, useLabel(PS_v294)
, 0
, 0
, 0
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_60)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_60_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_62_61)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46_62)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46compare)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46min)
, useLabel(F0_Prelude_46Ord_46Prelude_46Char_46max)
,};
Node PP_Prelude_46Ord_46Prelude_46Char[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char[] = {
 	/* ST_v295: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46_60[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46_60[] = {
 	/* ST_v291: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,60,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46_60_61[] = {
 	/* ST_v272: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,60,61,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46_62[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46_62[] = {
 	/* ST_v283: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,62,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46_62_61[] = {
 	/* ST_v287: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,62,61,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46compare[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46compare[] = {
 	/* ST_v267: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,99,111,109)
, bytes2word(112,97,114,101)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46max[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46max[] = {
 	/* ST_v279: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,109,97,120)
, bytes2word(0,0,0,0)
,};
Node PP_Prelude_46Ord_46Prelude_46Char_46min[] = {
 };
Node PC_Prelude_46Ord_46Prelude_46Char_46min[] = {
 	/* ST_v275: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(79,114,100,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(67,104,97,114)
, bytes2word(46,109,105,110)
, bytes2word(0,0,0,0)
,	/* PS_v271: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_60_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_60_61)
,	/* PS_v266: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46compare)
,	/* PS_v269: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46compare)
, useLabel(PC_Prelude_46Ord_46Prelude_46Int_46compare)
,	/* PS_v268: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46compare)
, useLabel(PC_Prelude_46Enum_46Prelude_46Char_46fromEnum)
,	/* PS_v292: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_60)
, useLabel(PC_Prelude_46_95_46_60)
,	/* PS_v290: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_60)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_60)
,	/* PS_v288: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_62_61)
, useLabel(PC_Prelude_46_95_46_62_61)
,	/* PS_v286: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_62_61)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_62_61)
,	/* PS_v284: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_62)
, useLabel(PC_Prelude_46_95_46_62)
,	/* PS_v282: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46_62)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46_62)
,	/* PS_v280: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46max)
, useLabel(PC_Prelude_46_95_46max)
,	/* PS_v278: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46max)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46max)
,	/* PS_v276: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46min)
, useLabel(PC_Prelude_46_95_46min)
,	/* PS_v274: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char_46min)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char_46min)
,	/* PS_v294: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char)
, useLabel(PC_Prelude_46Ord_46Prelude_46Char)
,	/* PS_v296: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Ord_46Prelude_46Char)
, useLabel(PC_Prelude_468)
,};
