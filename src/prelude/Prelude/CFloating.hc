#include "newmacros.h"
#include "runtime.h"

#define CT_v497	((void*)startLabel+32)
#define FN_LAMBDA475	((void*)startLabel+60)
#define CT_v499	((void*)startLabel+80)
#define CF_LAMBDA475	((void*)startLabel+88)
#define CT_v500	((void*)startLabel+124)
#define FN_LAMBDA476	((void*)startLabel+152)
#define CT_v502	((void*)startLabel+172)
#define CF_LAMBDA476	((void*)startLabel+180)
#define CT_v503	((void*)startLabel+216)
#define FN_LAMBDA477	((void*)startLabel+244)
#define CT_v505	((void*)startLabel+264)
#define CF_LAMBDA477	((void*)startLabel+272)
#define CT_v506	((void*)startLabel+308)
#define FN_LAMBDA478	((void*)startLabel+336)
#define CT_v508	((void*)startLabel+356)
#define CF_LAMBDA478	((void*)startLabel+364)
#define CT_v509	((void*)startLabel+400)
#define FN_LAMBDA479	((void*)startLabel+428)
#define CT_v511	((void*)startLabel+448)
#define CF_LAMBDA479	((void*)startLabel+456)
#define CT_v512	((void*)startLabel+492)
#define FN_LAMBDA480	((void*)startLabel+520)
#define CT_v514	((void*)startLabel+540)
#define CF_LAMBDA480	((void*)startLabel+548)
#define CT_v515	((void*)startLabel+584)
#define FN_LAMBDA481	((void*)startLabel+612)
#define CT_v517	((void*)startLabel+632)
#define CF_LAMBDA481	((void*)startLabel+640)
#define CT_v518	((void*)startLabel+676)
#define FN_LAMBDA482	((void*)startLabel+704)
#define CT_v520	((void*)startLabel+724)
#define CF_LAMBDA482	((void*)startLabel+732)
#define CT_v521	((void*)startLabel+768)
#define FN_LAMBDA483	((void*)startLabel+796)
#define CT_v523	((void*)startLabel+816)
#define CF_LAMBDA483	((void*)startLabel+824)
#define CT_v524	((void*)startLabel+860)
#define FN_LAMBDA484	((void*)startLabel+888)
#define CT_v526	((void*)startLabel+908)
#define CF_LAMBDA484	((void*)startLabel+916)
#define CT_v527	((void*)startLabel+952)
#define FN_LAMBDA485	((void*)startLabel+980)
#define CT_v529	((void*)startLabel+1000)
#define CF_LAMBDA485	((void*)startLabel+1008)
#define CT_v530	((void*)startLabel+1044)
#define FN_LAMBDA486	((void*)startLabel+1072)
#define CT_v532	((void*)startLabel+1092)
#define CF_LAMBDA486	((void*)startLabel+1100)
#define CT_v533	((void*)startLabel+1128)
#define FN_LAMBDA487	((void*)startLabel+1156)
#define CT_v535	((void*)startLabel+1176)
#define CF_LAMBDA487	((void*)startLabel+1184)
#define CT_v536	((void*)startLabel+1248)
#define CT_v537	((void*)startLabel+1340)
#define CT_v538	((void*)startLabel+1444)
#define CT_v539	((void*)startLabel+1540)
#define CT_v540	((void*)startLabel+1632)
#define CT_v541	((void*)startLabel+1692)
#define CT_v542	((void*)startLabel+1724)
#define CT_v543	((void*)startLabel+1756)
#define CT_v544	((void*)startLabel+1788)
#define CT_v545	((void*)startLabel+1820)
#define CT_v546	((void*)startLabel+1852)
#define CT_v547	((void*)startLabel+1884)
#define CT_v548	((void*)startLabel+1916)
#define CT_v549	((void*)startLabel+1948)
#define CT_v550	((void*)startLabel+1980)
#define CT_v551	((void*)startLabel+2012)
#define CT_v552	((void*)startLabel+2044)
#define CT_v553	((void*)startLabel+2076)
#define CT_v554	((void*)startLabel+2108)
#define CT_v555	((void*)startLabel+2140)
#define CT_v556	((void*)startLabel+2172)
#define CT_v557	((void*)startLabel+2204)
#define CT_v558	((void*)startLabel+2236)
#define CT_v559	((void*)startLabel+2268)
#define ST_v516	((void*)startLabel+2280)
#define ST_v501	((void*)startLabel+2324)
#define ST_v519	((void*)startLabel+2369)
#define ST_v504	((void*)startLabel+2413)
#define ST_v513	((void*)startLabel+2458)
#define ST_v498	((void*)startLabel+2502)
#define ST_v522	((void*)startLabel+2547)
#define ST_v507	((void*)startLabel+2590)
#define ST_v531	((void*)startLabel+2634)
#define ST_v528	((void*)startLabel+2677)
#define ST_v534	((void*)startLabel+2720)
#define ST_v525	((void*)startLabel+2762)
#define ST_v510	((void*)startLabel+2805)
extern Node FN_NHC_46Internal_46_95noMethodError[];
extern Node FN_Prelude_46sinh[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46cosh[];
extern Node FN_Prelude_46Floating_46Prelude_46Fractional[];
extern Node FN_Prelude_46_47[];
extern Node FN_Prelude_46sin[];
extern Node FN_Prelude_46cos[];
extern Node FN_Prelude_46fromRational[];
extern Node FN_Ratio_46_37[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Prelude_46_42_42[];
extern Node FN_Prelude_46log[];
extern Node FN_Prelude_46Fractional_46Prelude_46Num[];
extern Node FN_Prelude_46_42[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46exp[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v497)
,};
Node FN_Prelude_46_95_46atanh[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v497: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46atanh[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46atanh),2)
, VAPTAG(useLabel(FN_LAMBDA475))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v499)
,	/* FN_LAMBDA475: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v498)
,	/* CT_v499: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA475: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA475))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v500)
,};
Node FN_Prelude_46_95_46acosh[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v500: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46acosh[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46acosh),2)
, VAPTAG(useLabel(FN_LAMBDA476))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v502)
,	/* FN_LAMBDA476: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v501)
,	/* CT_v502: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA476: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA476))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v503)
,};
Node FN_Prelude_46_95_46asinh[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v503: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46asinh[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46asinh),2)
, VAPTAG(useLabel(FN_LAMBDA477))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v505)
,	/* FN_LAMBDA477: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v504)
,	/* CT_v505: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA477: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA477))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v506)
,};
Node FN_Prelude_46_95_46cosh[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v506: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46cosh[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46cosh),2)
, VAPTAG(useLabel(FN_LAMBDA478))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v508)
,	/* FN_LAMBDA478: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v507)
,	/* CT_v508: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA478: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA478))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v509)
,};
Node FN_Prelude_46_95_46sinh[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v509: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46sinh[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46sinh),2)
, VAPTAG(useLabel(FN_LAMBDA479))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v511)
,	/* FN_LAMBDA479: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v510)
,	/* CT_v511: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA479: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA479))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v512)
,};
Node FN_Prelude_46_95_46atan[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v512: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46atan[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46atan),2)
, VAPTAG(useLabel(FN_LAMBDA480))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v514)
,	/* FN_LAMBDA480: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v513)
,	/* CT_v514: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA480: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA480))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v515)
,};
Node FN_Prelude_46_95_46acos[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v515: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46acos[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46acos),2)
, VAPTAG(useLabel(FN_LAMBDA481))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v517)
,	/* FN_LAMBDA481: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v516)
,	/* CT_v517: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA481: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA481))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v518)
,};
Node FN_Prelude_46_95_46asin[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v518: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46asin[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46asin),2)
, VAPTAG(useLabel(FN_LAMBDA482))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v520)
,	/* FN_LAMBDA482: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v519)
,	/* CT_v520: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA482: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA482))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v521)
,};
Node FN_Prelude_46_95_46cos[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v521: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46cos[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46cos),2)
, VAPTAG(useLabel(FN_LAMBDA483))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v523)
,	/* FN_LAMBDA483: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v522)
,	/* CT_v523: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA483: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA483))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v524)
,};
Node FN_Prelude_46_95_46sin[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v524: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46sin[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46sin),2)
, VAPTAG(useLabel(FN_LAMBDA484))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v526)
,	/* FN_LAMBDA484: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v525)
,	/* CT_v526: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA484: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA484))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v527)
,};
Node FN_Prelude_46_95_46log[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v527: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46log[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46log),2)
, VAPTAG(useLabel(FN_LAMBDA485))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v529)
,	/* FN_LAMBDA485: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v528)
,	/* CT_v529: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA485: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA485))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v530)
,};
Node FN_Prelude_46_95_46exp[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v530: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46_95_46exp[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46exp),2)
, VAPTAG(useLabel(FN_LAMBDA486))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v532)
,	/* FN_LAMBDA486: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v531)
,	/* CT_v532: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA486: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA486))
, bytes2word(1,0,0,1)
, useLabel(CT_v533)
,};
Node FN_Prelude_46_95_46pi[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v533: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46_95_46pi[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46pi),1)
, VAPTAG(useLabel(FN_LAMBDA487))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v535)
,	/* FN_LAMBDA487: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v534)
,	/* CT_v535: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA487: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA487))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v536)
,};
Node FN_Prelude_46_95_46tanh[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,PUSH_P1)
, bytes2word(0,PUSH_P1,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v536: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46_95_46tanh[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46tanh),2)
, VAPTAG(useLabel(FN_Prelude_46sinh))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46cosh))
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v537)
,};
Node FN_Prelude_46_95_46tan[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,PUSH_P1)
, bytes2word(0,PUSH_P1,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_ARG,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,3)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v537: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Prelude_46_95_46tan[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46tan),2)
, VAPTAG(useLabel(FN_Prelude_46sin))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46cos))
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v538)
,};
Node FN_Prelude_46_95_46sqrt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CADR_N1,2)
, bytes2word(HEAP_CADR_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(6,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2
, CONSTRW(1,0)
, 1
,	/* CT_v538: (byte 0) */
  HW(6,2)
, 0
,};
Node F0_Prelude_46_95_46sqrt[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46sqrt),2)
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46fromRational))
, VAPTAG(useLabel(FN_Ratio_46_37))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46_42_42))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v539)
,};
Node FN_Prelude_46_95_46logBase[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(3,HEAP_ARG,2,PUSH_P1)
, bytes2word(0,PUSH_P1,2,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,3,ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1,4)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v539: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Prelude_46_95_46logBase[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46logBase),3)
, VAPTAG(useLabel(FN_Prelude_46log))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46_47))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v540)
,};
Node FN_Prelude_46_95_46_42_42[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,HEAP_ARG)
, bytes2word(3,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v540: (byte 0) */
  HW(7,3)
, 0
,};
Node F0_Prelude_46_95_46_42_42[] = {
  CAPTAG(useLabel(FN_Prelude_46_95_46_42_42),3)
, VAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Fractional))
, VAPTAG(useLabel(FN_Prelude_46Fractional_46Prelude_46Num))
, VAPTAG(useLabel(FN_Prelude_46_42))
, VAPTAG(useLabel(FN_Prelude_46log))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46exp))
, bytes2word(1,0,0,1)
, useLabel(CT_v541)
,};
Node FN_Prelude_46Floating_46Prelude_46Fractional[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v541: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46Floating_46Prelude_46Fractional[] = {
  CAPTAG(useLabel(FN_Prelude_46Floating_46Prelude_46Fractional),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v542)
,};
Node FN_Prelude_46_42_42[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v542: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46_42_42[] = {
  CAPTAG(useLabel(FN_Prelude_46_42_42),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v543)
,};
Node FN_Prelude_46logBase[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v543: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46logBase[] = {
  CAPTAG(useLabel(FN_Prelude_46logBase),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v544)
,};
Node FN_Prelude_46log[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v544: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46log[] = {
  CAPTAG(useLabel(FN_Prelude_46log),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v545)
,};
Node FN_Prelude_46tanh[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,5)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v545: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46tanh[] = {
  CAPTAG(useLabel(FN_Prelude_46tanh),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v546)
,};
Node FN_Prelude_46atanh[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,6)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v546: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46atanh[] = {
  CAPTAG(useLabel(FN_Prelude_46atanh),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v547)
,};
Node FN_Prelude_46sinh[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,7)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v547: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46sinh[] = {
  CAPTAG(useLabel(FN_Prelude_46sinh),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v548)
,};
Node FN_Prelude_46asinh[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,8)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v548: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46asinh[] = {
  CAPTAG(useLabel(FN_Prelude_46asinh),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v549)
,};
Node FN_Prelude_46cosh[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,9)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v549: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46cosh[] = {
  CAPTAG(useLabel(FN_Prelude_46cosh),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v550)
,};
Node FN_Prelude_46acosh[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,10)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v550: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46acosh[] = {
  CAPTAG(useLabel(FN_Prelude_46acosh),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v551)
,};
Node FN_Prelude_46pi[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,11)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v551: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46pi[] = {
  CAPTAG(useLabel(FN_Prelude_46pi),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v552)
,};
Node FN_Prelude_46tan[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,12)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v552: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46tan[] = {
  CAPTAG(useLabel(FN_Prelude_46tan),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v553)
,};
Node FN_Prelude_46atan[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,13)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v553: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46atan[] = {
  CAPTAG(useLabel(FN_Prelude_46atan),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v554)
,};
Node FN_Prelude_46sin[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,14)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v554: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46sin[] = {
  CAPTAG(useLabel(FN_Prelude_46sin),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v555)
,};
Node FN_Prelude_46asin[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,15)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v555: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46asin[] = {
  CAPTAG(useLabel(FN_Prelude_46asin),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v556)
,};
Node FN_Prelude_46exp[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,16)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v556: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46exp[] = {
  CAPTAG(useLabel(FN_Prelude_46exp),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v557)
,};
Node FN_Prelude_46cos[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,17)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v557: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46cos[] = {
  CAPTAG(useLabel(FN_Prelude_46cos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v558)
,};
Node FN_Prelude_46acos[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,18)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v558: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46acos[] = {
  CAPTAG(useLabel(FN_Prelude_46acos),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v559)
,};
Node FN_Prelude_46sqrt[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,19)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v559: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_Prelude_46sqrt[] = {
  CAPTAG(useLabel(FN_Prelude_46sqrt),1)
,	/* ST_v516: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,97)
,	/* ST_v501: (byte 4) */
  bytes2word(99,111,115,0)
, bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,97)
, bytes2word(99,111,115,104)
,	/* ST_v519: (byte 1) */
  bytes2word(0,78,111,32)
, bytes2word(100,101,102,97)
, bytes2word(117,108,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,105,116,105)
, bytes2word(111,110,32,102)
, bytes2word(111,114,32,99)
, bytes2word(108,97,115,115)
, bytes2word(32,109,101,116)
, bytes2word(104,111,100,32)
, bytes2word(97,115,105,110)
,	/* ST_v504: (byte 1) */
  bytes2word(0,78,111,32)
, bytes2word(100,101,102,97)
, bytes2word(117,108,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,105,116,105)
, bytes2word(111,110,32,102)
, bytes2word(111,114,32,99)
, bytes2word(108,97,115,115)
, bytes2word(32,109,101,116)
, bytes2word(104,111,100,32)
, bytes2word(97,115,105,110)
,	/* ST_v513: (byte 2) */
  bytes2word(104,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,97,116,97)
,	/* ST_v498: (byte 2) */
  bytes2word(110,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,97,116,97)
,	/* ST_v522: (byte 3) */
  bytes2word(110,104,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,99,111)
,	/* ST_v507: (byte 2) */
  bytes2word(115,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,99,111,115)
,	/* ST_v531: (byte 2) */
  bytes2word(104,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,101,120,112)
,	/* ST_v528: (byte 1) */
  bytes2word(0,78,111,32)
, bytes2word(100,101,102,97)
, bytes2word(117,108,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,105,116,105)
, bytes2word(111,110,32,102)
, bytes2word(111,114,32,99)
, bytes2word(108,97,115,115)
, bytes2word(32,109,101,116)
, bytes2word(104,111,100,32)
,	/* ST_v534: (byte 4) */
  bytes2word(108,111,103,0)
, bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,112)
,	/* ST_v525: (byte 2) */
  bytes2word(105,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,115,105,110)
,	/* ST_v510: (byte 1) */
  bytes2word(0,78,111,32)
, bytes2word(100,101,102,97)
, bytes2word(117,108,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,105,116,105)
, bytes2word(111,110,32,102)
, bytes2word(111,114,32,99)
, bytes2word(108,97,115,115)
, bytes2word(32,109,101,116)
, bytes2word(104,111,100,32)
, bytes2word(115,105,110,104)
, bytes2word(0,0,0,0)
,};
