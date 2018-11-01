#include "newmacros.h"
#include "runtime.h"

#define v340	((void*)startLabel+26)
#define v337	((void*)startLabel+30)
#define v338	((void*)startLabel+36)
#define v339	((void*)startLabel+57)
#define v334	((void*)startLabel+63)
#define CT_v341	((void*)startLabel+80)
#define FN_LAMBDA305	((void*)startLabel+116)
#define CT_v343	((void*)startLabel+136)
#define CF_LAMBDA305	((void*)startLabel+144)
#define FN_LAMBDA304	((void*)startLabel+156)
#define CT_v345	((void*)startLabel+176)
#define CF_LAMBDA304	((void*)startLabel+184)
#define v352	((void*)startLabel+210)
#define v349	((void*)startLabel+214)
#define v350	((void*)startLabel+218)
#define v351	((void*)startLabel+222)
#define v346	((void*)startLabel+226)
#define CT_v353	((void*)startLabel+236)
#define FN_LAMBDA309	((void*)startLabel+272)
#define CT_v355	((void*)startLabel+292)
#define CF_LAMBDA309	((void*)startLabel+300)
#define FN_LAMBDA308	((void*)startLabel+312)
#define CT_v357	((void*)startLabel+332)
#define CF_LAMBDA308	((void*)startLabel+340)
#define FN_LAMBDA307	((void*)startLabel+352)
#define CT_v358	((void*)startLabel+372)
#define CF_LAMBDA307	((void*)startLabel+380)
#define FN_LAMBDA306	((void*)startLabel+392)
#define CT_v360	((void*)startLabel+412)
#define CF_LAMBDA306	((void*)startLabel+420)
#define v367	((void*)startLabel+446)
#define v364	((void*)startLabel+450)
#define v365	((void*)startLabel+454)
#define v366	((void*)startLabel+458)
#define v361	((void*)startLabel+462)
#define CT_v368	((void*)startLabel+472)
#define FN_LAMBDA313	((void*)startLabel+508)
#define CT_v369	((void*)startLabel+528)
#define CF_LAMBDA313	((void*)startLabel+536)
#define FN_LAMBDA312	((void*)startLabel+548)
#define CT_v371	((void*)startLabel+568)
#define CF_LAMBDA312	((void*)startLabel+576)
#define FN_LAMBDA311	((void*)startLabel+588)
#define CT_v372	((void*)startLabel+608)
#define CF_LAMBDA311	((void*)startLabel+616)
#define FN_LAMBDA310	((void*)startLabel+628)
#define CT_v373	((void*)startLabel+648)
#define CF_LAMBDA310	((void*)startLabel+656)
#define v380	((void*)startLabel+682)
#define v377	((void*)startLabel+686)
#define v378	((void*)startLabel+690)
#define v379	((void*)startLabel+694)
#define v374	((void*)startLabel+698)
#define CT_v381	((void*)startLabel+708)
#define FN_LAMBDA317	((void*)startLabel+744)
#define CT_v382	((void*)startLabel+764)
#define CF_LAMBDA317	((void*)startLabel+772)
#define FN_LAMBDA316	((void*)startLabel+784)
#define CT_v384	((void*)startLabel+804)
#define CF_LAMBDA316	((void*)startLabel+812)
#define FN_LAMBDA315	((void*)startLabel+824)
#define CT_v386	((void*)startLabel+844)
#define CF_LAMBDA315	((void*)startLabel+852)
#define FN_LAMBDA314	((void*)startLabel+864)
#define CT_v388	((void*)startLabel+884)
#define CF_LAMBDA314	((void*)startLabel+892)
#define v395	((void*)startLabel+918)
#define v392	((void*)startLabel+922)
#define v393	((void*)startLabel+926)
#define v394	((void*)startLabel+930)
#define v389	((void*)startLabel+934)
#define CT_v396	((void*)startLabel+944)
#define FN_LAMBDA321	((void*)startLabel+980)
#define CT_v397	((void*)startLabel+1000)
#define CF_LAMBDA321	((void*)startLabel+1008)
#define FN_LAMBDA320	((void*)startLabel+1020)
#define CT_v398	((void*)startLabel+1040)
#define CF_LAMBDA320	((void*)startLabel+1048)
#define FN_LAMBDA319	((void*)startLabel+1060)
#define CT_v400	((void*)startLabel+1080)
#define CF_LAMBDA319	((void*)startLabel+1088)
#define FN_LAMBDA318	((void*)startLabel+1100)
#define CT_v402	((void*)startLabel+1120)
#define CF_LAMBDA318	((void*)startLabel+1128)
#define CT_v403	((void*)startLabel+1168)
#define FN_LAMBDA324	((void*)startLabel+1212)
#define CT_v404	((void*)startLabel+1232)
#define F0_LAMBDA324	((void*)startLabel+1240)
#define FN_LAMBDA323	((void*)startLabel+1264)
#define CT_v406	((void*)startLabel+1284)
#define CF_LAMBDA323	((void*)startLabel+1292)
#define FN_LAMBDA322	((void*)startLabel+1304)
#define CT_v408	((void*)startLabel+1324)
#define CF_LAMBDA322	((void*)startLabel+1332)
#define v409	((void*)startLabel+1367)
#define v411	((void*)startLabel+1394)
#define CT_v413	((void*)startLabel+1408)
#define FN_LAMBDA325	((void*)startLabel+1460)
#define CT_v415	((void*)startLabel+1480)
#define CF_LAMBDA325	((void*)startLabel+1488)
#define CT_v416	((void*)startLabel+1524)
#define FN_LAMBDA327	((void*)startLabel+1560)
#define CT_v418	((void*)startLabel+1580)
#define CF_LAMBDA327	((void*)startLabel+1588)
#define FN_LAMBDA326	((void*)startLabel+1600)
#define CT_v420	((void*)startLabel+1620)
#define CF_LAMBDA326	((void*)startLabel+1628)
#define v421	((void*)startLabel+1674)
#define CT_v423	((void*)startLabel+1700)
#define FN_LAMBDA332	((void*)startLabel+1776)
#define CT_v424	((void*)startLabel+1804)
#define F0_LAMBDA332	((void*)startLabel+1812)
#define FN_LAMBDA331	((void*)startLabel+1840)
#define CT_v426	((void*)startLabel+1860)
#define CF_LAMBDA331	((void*)startLabel+1868)
#define FN_LAMBDA330	((void*)startLabel+1880)
#define CT_v427	((void*)startLabel+1900)
#define CF_LAMBDA330	((void*)startLabel+1908)
#define FN_LAMBDA329	((void*)startLabel+1920)
#define CT_v429	((void*)startLabel+1940)
#define CF_LAMBDA329	((void*)startLabel+1948)
#define FN_LAMBDA328	((void*)startLabel+1960)
#define CT_v431	((void*)startLabel+1980)
#define CF_LAMBDA328	((void*)startLabel+1988)
#define ST_v354	((void*)startLabel+1992)
#define ST_v385	((void*)startLabel+1993)
#define ST_v383	((void*)startLabel+2035)
#define ST_v387	((void*)startLabel+2058)
#define ST_v399	((void*)startLabel+2080)
#define ST_v344	((void*)startLabel+2186)
#define ST_v342	((void*)startLabel+2201)
#define ST_v425	((void*)startLabel+2215)
#define ST_v405	((void*)startLabel+2221)
#define ST_v428	((void*)startLabel+2228)
#define ST_v417	((void*)startLabel+2233)
#define ST_v414	((void*)startLabel+2247)
#define ST_v419	((void*)startLabel+2306)
#define ST_v356	((void*)startLabel+2317)
#define ST_v407	((void*)startLabel+2345)
#define ST_v430	((void*)startLabel+2355)
#define ST_v401	((void*)startLabel+2360)
#define ST_v370	((void*)startLabel+2386)
#define ST_v359	((void*)startLabel+2458)
extern Node FN_Config_46compilerStyle[];
extern Node FN_Config_46extraCompilerFlags[];
extern Node FN_System_46getEnv[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46_36[];
extern Node F0_NHC_46Internal_46unsafePerformIO[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46length[];
extern Node FN_Prelude_46take[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_45[];
extern Node FN_Prelude_46replicate[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Platform_46withDefault[];
extern Node CF_Platform_46windows[];
extern Node FN_Platform_46escape[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node CF_Platform_46getProcessID[];
extern Node FN_Prelude_46Show_46Prelude_46Int_46show[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v341)
,};
Node FN_HiConfig_46extraHiOptions[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,TABLESWITCH)
, bytes2word(4,NOP,TOP(12),BOT(12))
, bytes2word(TOP(18),BOT(18),TOP(39),BOT(39))
,	/* v340: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v337: (byte 2) */
  bytes2word(35,0,POP_I1,PUSH_HEAP)
,	/* v338: (byte 4) */
  bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(POP_I1,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_N1)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_OFF_N1)
, bytes2word(4,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
,	/* v339: (byte 1) */
  bytes2word(RETURN,POP_I1,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v334: (byte 3) */
  bytes2word(HEAP_ARG,1,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,2,0)
,	/* CT_v341: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_HiConfig_46extraHiOptions[] = {
  CAPTAG(useLabel(FN_HiConfig_46extraHiOptions),1)
, VAPTAG(useLabel(FN_Config_46compilerStyle))
, VAPTAG(useLabel(FN_Config_46extraCompilerFlags))
, VAPTAG(useLabel(FN_LAMBDA304))
, VAPTAG(useLabel(FN_LAMBDA305))
, bytes2word(0,0,0,0)
, useLabel(CT_v343)
,	/* FN_LAMBDA305: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v342)
,	/* CT_v343: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA305: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA305))
, bytes2word(0,0,0,0)
, useLabel(CT_v345)
,	/* FN_LAMBDA304: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v344)
,	/* CT_v345: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA304: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA304))
, bytes2word(1,0,0,1)
, useLabel(CT_v353)
,};
Node FN_HiConfig_46nonstdShowsType[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(16),BOT(16),TOP(20),BOT(20))
,	/* v352: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v349: (byte 2) */
  bytes2word(14,0,POP_I1,PUSH_HEAP)
,	/* v350: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v351: (byte 2) */
  bytes2word(HEAP_CVAL_I4,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v346: (byte 2) */
  bytes2word(HEAP_CVAL_I5,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v353: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_HiConfig_46nonstdShowsType[] = {
  CAPTAG(useLabel(FN_HiConfig_46nonstdShowsType),1)
, VAPTAG(useLabel(FN_LAMBDA306))
, VAPTAG(useLabel(FN_LAMBDA307))
, VAPTAG(useLabel(FN_LAMBDA308))
, VAPTAG(useLabel(FN_LAMBDA309))
, bytes2word(0,0,0,0)
, useLabel(CT_v355)
,	/* FN_LAMBDA309: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v354)
,	/* CT_v355: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA309: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA309))
, bytes2word(0,0,0,0)
, useLabel(CT_v357)
,	/* FN_LAMBDA308: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v356)
,	/* CT_v357: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA308: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA308))
, bytes2word(0,0,0,0)
, useLabel(CT_v358)
,	/* FN_LAMBDA307: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v356)
,	/* CT_v358: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA307: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA307))
, bytes2word(0,0,0,0)
, useLabel(CT_v360)
,	/* FN_LAMBDA306: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v359)
,	/* CT_v360: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA306: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA306))
, bytes2word(1,0,0,1)
, useLabel(CT_v368)
,};
Node FN_HiConfig_46nonstdShow[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(16),BOT(16),TOP(20),BOT(20))
,	/* v367: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v364: (byte 2) */
  bytes2word(14,0,POP_I1,PUSH_HEAP)
,	/* v365: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v366: (byte 2) */
  bytes2word(HEAP_CVAL_I4,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v361: (byte 2) */
  bytes2word(HEAP_CVAL_I5,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v368: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_HiConfig_46nonstdShow[] = {
  CAPTAG(useLabel(FN_HiConfig_46nonstdShow),1)
, VAPTAG(useLabel(FN_LAMBDA310))
, VAPTAG(useLabel(FN_LAMBDA311))
, VAPTAG(useLabel(FN_LAMBDA312))
, VAPTAG(useLabel(FN_LAMBDA313))
, bytes2word(0,0,0,0)
, useLabel(CT_v369)
,	/* FN_LAMBDA313: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v354)
,	/* CT_v369: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA313: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA313))
, bytes2word(0,0,0,0)
, useLabel(CT_v371)
,	/* FN_LAMBDA312: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v370)
,	/* CT_v371: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA312: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA312))
, bytes2word(0,0,0,0)
, useLabel(CT_v372)
,	/* FN_LAMBDA311: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v370)
,	/* CT_v372: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA311: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA311))
, bytes2word(0,0,0,0)
, useLabel(CT_v373)
,	/* FN_LAMBDA310: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v354)
,	/* CT_v373: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA310: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA310))
, bytes2word(1,0,0,1)
, useLabel(CT_v381)
,};
Node FN_HiConfig_46nonstdCoerce[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(16),BOT(16),TOP(20),BOT(20))
,	/* v380: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v377: (byte 2) */
  bytes2word(14,0,POP_I1,PUSH_HEAP)
,	/* v378: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v379: (byte 2) */
  bytes2word(HEAP_CVAL_I4,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v374: (byte 2) */
  bytes2word(HEAP_CVAL_I5,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v381: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_HiConfig_46nonstdCoerce[] = {
  CAPTAG(useLabel(FN_HiConfig_46nonstdCoerce),1)
, VAPTAG(useLabel(FN_LAMBDA314))
, VAPTAG(useLabel(FN_LAMBDA315))
, VAPTAG(useLabel(FN_LAMBDA316))
, VAPTAG(useLabel(FN_LAMBDA317))
, bytes2word(0,0,0,0)
, useLabel(CT_v382)
,	/* FN_LAMBDA317: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v354)
,	/* CT_v382: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA317: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA317))
, bytes2word(0,0,0,0)
, useLabel(CT_v384)
,	/* FN_LAMBDA316: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v383)
,	/* CT_v384: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA316: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA316))
, bytes2word(0,0,0,0)
, useLabel(CT_v386)
,	/* FN_LAMBDA315: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v385)
,	/* CT_v386: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA315: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA315))
, bytes2word(0,0,0,0)
, useLabel(CT_v388)
,	/* FN_LAMBDA314: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v387)
,	/* CT_v388: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA314: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA314))
, bytes2word(1,0,0,1)
, useLabel(CT_v396)
,};
Node FN_HiConfig_46nonstdCoerceImport[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,4,TOP(12),BOT(12))
, bytes2word(TOP(16),BOT(16),TOP(20),BOT(20))
,	/* v395: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,JUMP)
,	/* v392: (byte 2) */
  bytes2word(14,0,POP_I1,PUSH_HEAP)
,	/* v393: (byte 2) */
  bytes2word(HEAP_CVAL_I3,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v394: (byte 2) */
  bytes2word(HEAP_CVAL_I4,RETURN_EVAL,POP_I1,PUSH_HEAP)
,	/* v389: (byte 2) */
  bytes2word(HEAP_CVAL_I5,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v396: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_HiConfig_46nonstdCoerceImport[] = {
  CAPTAG(useLabel(FN_HiConfig_46nonstdCoerceImport),1)
, VAPTAG(useLabel(FN_LAMBDA318))
, VAPTAG(useLabel(FN_LAMBDA319))
, VAPTAG(useLabel(FN_LAMBDA320))
, VAPTAG(useLabel(FN_LAMBDA321))
, bytes2word(0,0,0,0)
, useLabel(CT_v397)
,	/* FN_LAMBDA321: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v354)
,	/* CT_v397: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA321: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA321))
, bytes2word(0,0,0,0)
, useLabel(CT_v398)
,	/* FN_LAMBDA320: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v354)
,	/* CT_v398: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA320: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA320))
, bytes2word(0,0,0,0)
, useLabel(CT_v400)
,	/* FN_LAMBDA319: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v399)
,	/* CT_v400: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA319: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA319))
, bytes2word(0,0,0,0)
, useLabel(CT_v402)
,	/* FN_LAMBDA318: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v401)
,	/* CT_v402: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA318: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA318))
, bytes2word(0,0,0,0)
, useLabel(CT_v403)
,};
Node FN_HiConfig_46hmake[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v403: (byte 0) */
  HW(6,0)
, 0
,};
Node CF_HiConfig_46hmake[] = {
  VAPTAG(useLabel(FN_HiConfig_46hmake))
, VAPTAG(useLabel(FN_LAMBDA322))
, VAPTAG(useLabel(FN_System_46getEnv))
, CAPTAG(useLabel(FN_LAMBDA324),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(1,0,0,1)
, useLabel(CT_v404)
,	/* FN_LAMBDA324: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v404: (byte 0) */
  HW(3,1)
, 0
,	/* F0_LAMBDA324: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA324),1)
, VAPTAG(useLabel(FN_LAMBDA323))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v406)
,	/* FN_LAMBDA323: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v405)
,	/* CT_v406: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA323: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA323))
, bytes2word(0,0,0,0)
, useLabel(CT_v408)
,	/* FN_LAMBDA322: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v407)
,	/* CT_v408: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA322: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA322))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v413)
,};
Node FN_HiConfig_46fixlength[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,PUSH_ARG_I1,EVAL,PUSH_I1)
, bytes2word(EVAL,NEEDHEAP_I32,GT_W,JUMPFALSE)
, bytes2word(7,0,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v409: (byte 3) */
  bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,PUSH_CVAL_P1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(22,0,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,4)
, bytes2word(HEAP_CHAR_P1,32,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,2,HEAP_OFF_N1)
,	/* v411: (byte 2) */
  bytes2word(5,RETURN_EVAL,HEAP_CVAL_P1,9)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v413: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_HiConfig_46fixlength[] = {
  CAPTAG(useLabel(FN_HiConfig_46fixlength),2)
, VAPTAG(useLabel(FN_Prelude_46length))
, VAPTAG(useLabel(FN_Prelude_46take))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_45))
, VAPTAG(useLabel(FN_Prelude_46replicate))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_LAMBDA325))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v415)
,	/* FN_LAMBDA325: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v414)
,	/* CT_v415: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA325: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA325))
, bytes2word(0,0,0,0)
, useLabel(CT_v416)
,};
Node FN_HiConfig_46hmakeVersion[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_OFF_N1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_INT_P1)
, bytes2word(18,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v416: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_HiConfig_46hmakeVersion[] = {
  VAPTAG(useLabel(FN_HiConfig_46hmakeVersion))
, VAPTAG(useLabel(FN_LAMBDA326))
, VAPTAG(useLabel(FN_LAMBDA327))
, VAPTAG(useLabel(FN_Platform_46withDefault))
, VAPTAG(useLabel(FN_HiConfig_46fixlength))
, bytes2word(0,0,0,0)
, useLabel(CT_v418)
,	/* FN_LAMBDA327: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v417)
,	/* CT_v418: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA327: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA327))
, bytes2word(0,0,0,0)
, useLabel(CT_v420)
,	/* FN_LAMBDA326: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v419)
,	/* CT_v420: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA326: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA326))
, bytes2word(0,0,0,0)
, useLabel(CT_v423)
,};
Node FN_HiConfig_46tmpfile[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,PUSH_CVAL_P1,6,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,20,0)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,2,HEAP_P1,0)
, bytes2word(HEAP_CVAL_P1,9,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,5,HEAP_OFF_N1)
,	/* v421: (byte 2) */
  bytes2word(3,RETURN_EVAL,HEAP_CVAL_P1,11)
, bytes2word(HEAP_P1,0,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_P1,13,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,14,HEAP_CVAL_P1)
, bytes2word(15,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v423: (byte 0) */
  HW(13,0)
, 0
,};
Node CF_HiConfig_46tmpfile[] = {
  VAPTAG(useLabel(FN_HiConfig_46tmpfile))
, VAPTAG(useLabel(FN_LAMBDA328))
, VAPTAG(useLabel(FN_LAMBDA329))
, VAPTAG(useLabel(FN_Platform_46withDefault))
, useLabel(CF_Platform_46windows)
, VAPTAG(useLabel(FN_Platform_46escape))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA330))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, CAPTAG(useLabel(FN_LAMBDA332),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_Platform_46getProcessID)
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v424)
,	/* FN_LAMBDA332: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,5,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v424: (byte 0) */
  HW(4,2)
, 0
,	/* F0_LAMBDA332: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA332),2)
, VAPTAG(useLabel(FN_LAMBDA331))
, VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Int_46show))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v426)
,	/* FN_LAMBDA331: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v425)
,	/* CT_v426: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA331: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA331))
, bytes2word(0,0,0,0)
, useLabel(CT_v427)
,	/* FN_LAMBDA330: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v425)
,	/* CT_v427: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA330: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA330))
, bytes2word(0,0,0,0)
, useLabel(CT_v429)
,	/* FN_LAMBDA329: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v428)
,	/* CT_v429: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA329: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA329))
, bytes2word(0,0,0,0)
, useLabel(CT_v431)
,	/* FN_LAMBDA328: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v430)
,	/* CT_v431: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA328: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA328))
,	/* ST_v354: (byte 0) */
 	/* ST_v385: (byte 1) */
  bytes2word(0,10,99,111)
, bytes2word(101,114,99,101)
, bytes2word(32,58,58,32)
, bytes2word(97,32,45,62)
, bytes2word(32,98,10,99)
, bytes2word(111,101,114,99)
, bytes2word(101,32,61,32)
, bytes2word(117,110,115,97)
, bytes2word(102,101,67,111)
, bytes2word(101,114,99,101)
,	/* ST_v383: (byte 3) */
  bytes2word(35,10,0,10)
, bytes2word(99,111,101,114)
, bytes2word(99,101,32,61)
, bytes2word(32,105,100,9)
, bytes2word(45,45,32,119)
, bytes2word(114,111,110,103)
,	/* ST_v387: (byte 2) */
  bytes2word(10,0,10,99)
, bytes2word(111,101,114,99)
, bytes2word(101,61,117,110)
, bytes2word(115,97,102,101)
, bytes2word(67,111,101,114)
,	/* ST_v399: (byte 4) */
  bytes2word(99,101,10,0)
, bytes2word(35,105,102,32)
, bytes2word(95,95,71,76)
, bytes2word(65,83,71,79)
, bytes2word(87,95,72,65)
, bytes2word(83,75,69,76)
, bytes2word(76,95,95,32)
, bytes2word(60,61,32,53)
, bytes2word(48,50,10,105)
, bytes2word(109,112,111,114)
, bytes2word(116,32,80,114)
, bytes2word(101,108,71,72)
, bytes2word(67,32,40,117)
, bytes2word(110,115,97,102)
, bytes2word(101,67,111,101)
, bytes2word(114,99,101,35)
, bytes2word(41,10,35,101)
, bytes2word(108,115,101,10)
, bytes2word(105,109,112,111)
, bytes2word(114,116,32,71)
, bytes2word(72,67,46,66)
, bytes2word(97,115,101,40)
, bytes2word(117,110,115,97)
, bytes2word(102,101,67,111)
, bytes2word(101,114,99,101)
, bytes2word(35,41,10,35)
, bytes2word(101,110,100,105)
,	/* ST_v344: (byte 2) */
  bytes2word(102,0,45,102)
, bytes2word(103,108,97,115)
, bytes2word(103,111,119,45)
, bytes2word(101,120,116,115)
,	/* ST_v342: (byte 1) */
  bytes2word(0,45,112,97)
, bytes2word(99,107,97,103)
, bytes2word(101,32,108,97)
,	/* ST_v425: (byte 3) */
  bytes2word(110,103,0,47)
, bytes2word(77,97,105,110)
,	/* ST_v405: (byte 1) */
  bytes2word(0,47,104,109)
,	/* ST_v428: (byte 4) */
  bytes2word(97,107,101,0)
, bytes2word(47,116,109,112)
,	/* ST_v417: (byte 1) */
  bytes2word(0,49,46,56)
, bytes2word(32,111,114,32)
, bytes2word(98,101,116,116)
,	/* ST_v414: (byte 3) */
  bytes2word(101,114,0,72)
, bytes2word(105,67,111,110)
, bytes2word(102,105,103,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,50,56)
, bytes2word(58,49,45,51)
, bytes2word(48,58,50,50)
,	/* ST_v419: (byte 2) */
  bytes2word(46,0,73,78)
, bytes2word(83,84,65,76)
, bytes2word(76,86,69,82)
,	/* ST_v356: (byte 1) */
  bytes2word(0,79,112,101)
, bytes2word(114,97,116,105)
, bytes2word(111,110,39,115)
, bytes2word(104,111,119,115)
, bytes2word(84,121,112,101)
, bytes2word(39,85,110,107)
, bytes2word(110,111,119,110)
,	/* ST_v407: (byte 1) */
  bytes2word(0,83,67,82)
, bytes2word(73,80,84,68)
,	/* ST_v430: (byte 3) */
  bytes2word(73,82,0,84)
,	/* ST_v401: (byte 4) */
  bytes2word(69,77,80,0)
, bytes2word(105,109,112,111)
, bytes2word(114,116,32,78)
, bytes2word(111,110,83,116)
, bytes2word(100,85,110,115)
, bytes2word(97,102,101,67)
, bytes2word(111,101,114,99)
,	/* ST_v370: (byte 2) */
  bytes2word(101,0,105,110)
, bytes2word(115,116,97,110)
, bytes2word(99,101,32,83)
, bytes2word(104,111,119,32)
, bytes2word(40,73,79,32)
, bytes2word(97,41,32,119)
, bytes2word(104,101,114,101)
, bytes2word(10,32,32,115)
, bytes2word(104,111,119,115)
, bytes2word(80,114,101,99)
, bytes2word(32,112,32,120)
, bytes2word(32,61,32,115)
, bytes2word(104,111,119,83)
, bytes2word(116,114,105,110)
, bytes2word(103,32,34,60)
, bytes2word(60,73,79,32)
, bytes2word(97,99,116,105)
, bytes2word(111,110,62,62)
,	/* ST_v359: (byte 2) */
  bytes2word(34,0,115,104)
, bytes2word(111,119,115,84)
, bytes2word(121,112,101,0)
,};
