#include "newmacros.h"
#include "runtime.h"

#define CT_v272	((void*)startLabel+60)
#define CT_v274	((void*)startLabel+136)
#define CT_v276	((void*)startLabel+188)
#define CT_v278	((void*)startLabel+236)
#define CT_v280	((void*)startLabel+292)
#define CT_v282	((void*)startLabel+348)
#define CT_v284	((void*)startLabel+400)
#define CT_v286	((void*)startLabel+452)
#define CT_v288	((void*)startLabel+524)
#define ST_v287	((void*)startLabel+568)
#define ST_v273	((void*)startLabel+593)
#define ST_v271	((void*)startLabel+627)
#define ST_v279	((void*)startLabel+665)
#define ST_v281	((void*)startLabel+705)
#define ST_v275	((void*)startLabel+741)
#define ST_v285	((void*)startLabel+775)
#define ST_v283	((void*)startLabel+805)
#define ST_v277	((void*)startLabel+835)
extern Node TM_Prelude[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_Prelude_46id[];
extern Node FN_Prelude_46_95_46enumFromThenTo[];
extern Node CF_Prelude_46Enum_46Prelude_46Int[];
extern Node FN_Prelude_46_95_46enumFromTo[];
extern Node FN_Prelude_46_95_46succ[];
extern Node FN_Prelude_46_95_46pred[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v272)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46enumFromThen[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_INT_P1,2)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,2,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,5,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 80003
, useLabel(ST_v271)
,	/* CT_v272: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46enumFromThen[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromThen),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromThen))
, bytes2word(1,0,0,1)
, useLabel(CT_v274)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46enumFrom[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_INT_P1,1,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
, 70003
, useLabel(ST_v273)
,	/* CT_v274: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46enumFrom[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFrom),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFrom))
, bytes2word(1,0,0,1)
, useLabel(CT_v276)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46fromEnum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 50003
, useLabel(ST_v275)
,	/* CT_v276: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46fromEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46fromEnum),1)
, VAPTAG(useLabel(FN_Prelude_46id))
, bytes2word(1,0,0,1)
, useLabel(CT_v278)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46toEnum[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 40003
, useLabel(ST_v277)
,	/* CT_v278: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46toEnum[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46toEnum),1)
, VAPTAG(useLabel(FN_Prelude_46id))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v280)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46enumFromThenTo[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v279)
,	/* CT_v280: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46enumFromThenTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromThenTo),3)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromThenTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v282)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46enumFromTo[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v281)
,	/* CT_v282: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46enumFromTo[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromTo),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46enumFromTo))
, useLabel(CF_Prelude_46Enum_46Prelude_46Int)
, bytes2word(1,0,0,1)
, useLabel(CT_v284)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46succ[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v283)
,	/* CT_v284: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46succ[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46succ),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46succ))
, useLabel(CF_Prelude_46Enum_46Prelude_46Int)
, bytes2word(1,0,0,1)
, useLabel(CT_v286)
,};
Node FN_Prelude_46Enum_46Prelude_46Int_46pred[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 30010
, useLabel(ST_v285)
,	/* CT_v286: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Enum_46Prelude_46Int_46pred[] = {
  CAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46pred),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46pred))
, useLabel(CF_Prelude_46Enum_46Prelude_46Int)
, bytes2word(0,0,0,0)
, useLabel(CT_v288)
,};
Node FN_Prelude_46Enum_46Prelude_46Int[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
, 30010
, useLabel(ST_v287)
,	/* CT_v288: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Enum_46Prelude_46Int[] = {
  VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int))
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46succ)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46pred)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46enumFrom)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46fromEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46toEnum)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46enumFromThen)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46enumFromTo)
, useLabel(F0_Prelude_46Enum_46Prelude_46Int_46enumFromThenTo)
,	/* ST_v287: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(69,110,117,109)
, bytes2word(46,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,73,110,116)
,	/* ST_v273: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,101,110)
, bytes2word(117,109,70,114)
,	/* ST_v271: (byte 3) */
  bytes2word(111,109,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(101,110,117,109)
, bytes2word(70,114,111,109)
, bytes2word(84,104,101,110)
,	/* ST_v279: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,104)
, bytes2word(101,110,84,111)
,	/* ST_v281: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,101,110)
, bytes2word(117,109,70,114)
, bytes2word(111,109,84,111)
,	/* ST_v275: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,102,114)
, bytes2word(111,109,69,110)
,	/* ST_v285: (byte 3) */
  bytes2word(117,109,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(112,114,101,100)
,	/* ST_v283: (byte 1) */
  bytes2word(0,80,114,101)
, bytes2word(108,117,100,101)
, bytes2word(46,69,110,117)
, bytes2word(109,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,73,110)
, bytes2word(116,46,115,117)
,	/* ST_v277: (byte 3) */
  bytes2word(99,99,0,80)
, bytes2word(114,101,108,117)
, bytes2word(100,101,46,69)
, bytes2word(110,117,109,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(73,110,116,46)
, bytes2word(116,111,69,110)
, bytes2word(117,109,0,0)
,};
