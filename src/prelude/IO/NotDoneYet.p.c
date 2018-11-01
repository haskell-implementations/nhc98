#include "newmacros.h"
#include "runtime.h"

#define CT_v226	((void*)startLabel+84)
#define FN_LAMBDA214	((void*)startLabel+128)
#define CT_v230	((void*)startLabel+172)
#define CF_LAMBDA214	((void*)startLabel+180)
#define CT_v235	((void*)startLabel+284)
#define FN_LAMBDA215	((void*)startLabel+328)
#define CT_v239	((void*)startLabel+372)
#define CF_LAMBDA215	((void*)startLabel+380)
#define CT_v244	((void*)startLabel+484)
#define FN_LAMBDA216	((void*)startLabel+528)
#define CT_v248	((void*)startLabel+572)
#define CF_LAMBDA216	((void*)startLabel+580)
#define CT_v253	((void*)startLabel+684)
#define FN_LAMBDA217	((void*)startLabel+728)
#define CT_v257	((void*)startLabel+772)
#define CF_LAMBDA217	((void*)startLabel+780)
#define CT_v262	((void*)startLabel+884)
#define FN_LAMBDA218	((void*)startLabel+928)
#define CT_v266	((void*)startLabel+972)
#define CF_LAMBDA218	((void*)startLabel+980)
#define CT_v271	((void*)startLabel+1084)
#define FN_LAMBDA219	((void*)startLabel+1128)
#define CT_v275	((void*)startLabel+1172)
#define CF_LAMBDA219	((void*)startLabel+1180)
#define CT_v280	((void*)startLabel+1288)
#define FN_LAMBDA220	((void*)startLabel+1332)
#define CT_v284	((void*)startLabel+1376)
#define CF_LAMBDA220	((void*)startLabel+1384)
#define CT_v288	((void*)startLabel+1464)
#define ST_v250	((void*)startLabel+1496)
#define PP_LAMBDA217	((void*)startLabel+1509)
#define PC_LAMBDA217	((void*)startLabel+1509)
#define ST_v255	((void*)startLabel+1509)
#define ST_v259	((void*)startLabel+1536)
#define PP_LAMBDA218	((void*)startLabel+1547)
#define PC_LAMBDA218	((void*)startLabel+1547)
#define ST_v264	((void*)startLabel+1547)
#define ST_v241	((void*)startLabel+1572)
#define PP_LAMBDA216	((void*)startLabel+1587)
#define PC_LAMBDA216	((void*)startLabel+1587)
#define ST_v246	((void*)startLabel+1587)
#define ST_v223	((void*)startLabel+1616)
#define PP_LAMBDA214	((void*)startLabel+1631)
#define PC_LAMBDA214	((void*)startLabel+1631)
#define ST_v228	((void*)startLabel+1631)
#define ST_v232	((void*)startLabel+1660)
#define PP_LAMBDA215	((void*)startLabel+1675)
#define PC_LAMBDA215	((void*)startLabel+1675)
#define ST_v237	((void*)startLabel+1675)
#define ST_v268	((void*)startLabel+1704)
#define PP_LAMBDA219	((void*)startLabel+1718)
#define PC_LAMBDA219	((void*)startLabel+1718)
#define ST_v273	((void*)startLabel+1718)
#define ST_v286	((void*)startLabel+1744)
#define ST_v277	((void*)startLabel+1756)
#define PP_LAMBDA220	((void*)startLabel+1773)
#define PC_LAMBDA220	((void*)startLabel+1773)
#define ST_v282	((void*)startLabel+1773)
#define ST_v256	((void*)startLabel+1800)
#define ST_v265	((void*)startLabel+1823)
#define ST_v247	((void*)startLabel+1844)
#define ST_v229	((void*)startLabel+1869)
#define ST_v238	((void*)startLabel+1894)
#define ST_v274	((void*)startLabel+1919)
#define ST_v283	((void*)startLabel+1943)
#define PS_v279	((void*)startLabel+1972)
#define PS_v276	((void*)startLabel+1984)
#define PS_v278	((void*)startLabel+1996)
#define PS_v287	((void*)startLabel+2008)
#define PS_v285	((void*)startLabel+2020)
#define PS_v270	((void*)startLabel+2032)
#define PS_v267	((void*)startLabel+2044)
#define PS_v269	((void*)startLabel+2056)
#define PS_v261	((void*)startLabel+2068)
#define PS_v258	((void*)startLabel+2080)
#define PS_v260	((void*)startLabel+2092)
#define PS_v252	((void*)startLabel+2104)
#define PS_v249	((void*)startLabel+2116)
#define PS_v251	((void*)startLabel+2128)
#define PS_v243	((void*)startLabel+2140)
#define PS_v240	((void*)startLabel+2152)
#define PS_v242	((void*)startLabel+2164)
#define PS_v234	((void*)startLabel+2176)
#define PS_v231	((void*)startLabel+2188)
#define PS_v233	((void*)startLabel+2200)
#define PS_v225	((void*)startLabel+2212)
#define PS_v222	((void*)startLabel+2224)
#define PS_v224	((void*)startLabel+2236)
#define PS_v227	((void*)startLabel+2248)
#define PS_v236	((void*)startLabel+2260)
#define PS_v245	((void*)startLabel+2272)
#define PS_v254	((void*)startLabel+2284)
#define PS_v263	((void*)startLabel+2296)
#define PS_v272	((void*)startLabel+2308)
#define PS_v281	((void*)startLabel+2320)
extern Node FN_Prelude_46error[];
extern Node PM_IO[];
extern Node PC_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v226)
,};
Node FN_IO_46hIsSeekable[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v225)
, 0
, 0
, 0
, 0
, useLabel(PS_v224)
, 0
, 0
, 0
, 0
, 280001
, useLabel(ST_v223)
,	/* CT_v226: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsSeekable[] = {
  CAPTAG(useLabel(FN_IO_46hIsSeekable),1)
, useLabel(PS_v222)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA214))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v230)
,	/* FN_LAMBDA214: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v229)
, 280032
, useLabel(ST_v228)
,	/* CT_v230: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA214: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA214))
, useLabel(PS_v227)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v235)
,};
Node FN_IO_46hIsWritable[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v234)
, 0
, 0
, 0
, 0
, useLabel(PS_v233)
, 0
, 0
, 0
, 0
, 250001
, useLabel(ST_v232)
,	/* CT_v235: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsWritable[] = {
  CAPTAG(useLabel(FN_IO_46hIsWritable),1)
, useLabel(PS_v231)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA215))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_LAMBDA215: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v238)
, 250032
, useLabel(ST_v237)
,	/* CT_v239: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA215: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA215))
, useLabel(PS_v236)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v244)
,};
Node FN_IO_46hIsReadable[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v243)
, 0
, 0
, 0
, 0
, useLabel(PS_v242)
, 0
, 0
, 0
, 0
, 220001
, useLabel(ST_v241)
,	/* CT_v244: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsReadable[] = {
  CAPTAG(useLabel(FN_IO_46hIsReadable),1)
, useLabel(PS_v240)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA216))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v248)
,	/* FN_LAMBDA216: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v247)
, 220032
, useLabel(ST_v246)
,	/* CT_v248: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA216: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA216))
, useLabel(PS_v245)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v253)
,};
Node FN_IO_46hIsClosed[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v252)
, 0
, 0
, 0
, 0
, useLabel(PS_v251)
, 0
, 0
, 0
, 0
, 190001
, useLabel(ST_v250)
,	/* CT_v253: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsClosed[] = {
  CAPTAG(useLabel(FN_IO_46hIsClosed),1)
, useLabel(PS_v249)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA217))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v257)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v256)
, 190032
, useLabel(ST_v255)
,	/* CT_v257: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA217: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA217))
, useLabel(PS_v254)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v262)
,};
Node FN_IO_46hIsOpen[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v261)
, 0
, 0
, 0
, 0
, useLabel(PS_v260)
, 0
, 0
, 0
, 0
, 160001
, useLabel(ST_v259)
,	/* CT_v262: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsOpen[] = {
  CAPTAG(useLabel(FN_IO_46hIsOpen),1)
, useLabel(PS_v258)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA218))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v266)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v265)
, 160032
, useLabel(ST_v264)
,	/* CT_v266: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA218: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA218))
, useLabel(PS_v263)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v271)
,};
Node FN_IO_46hLookAhead[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,10,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v270)
, 0
, 0
, 0
, 0
, useLabel(PS_v269)
, 0
, 0
, 0
, 0
, 130001
, useLabel(ST_v268)
,	/* CT_v271: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hLookAhead[] = {
  CAPTAG(useLabel(FN_IO_46hLookAhead),1)
, useLabel(PS_v267)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v275)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v274)
, 130032
, useLabel(ST_v273)
,	/* CT_v275: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA219: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA219))
, useLabel(PS_v272)
, 0
, 0
, 0
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v280)
,};
Node FN_IO_46hWaitForInput[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_N1,7,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v279)
, 0
, 0
, 0
, 0
, useLabel(PS_v278)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v277)
,	/* CT_v280: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_IO_46hWaitForInput[] = {
  CAPTAG(useLabel(FN_IO_46hWaitForInput),2)
, useLabel(PS_v276)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA220))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v284)
,	/* FN_LAMBDA220: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v283)
, 70032
, useLabel(ST_v282)
,	/* CT_v284: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA220: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA220))
, useLabel(PS_v281)
, 0
, 0
, 0
, bytes2word(1,0,0,1)
, useLabel(CT_v288)
,};
Node FN_IO_46hReady[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_INT_P1)
, bytes2word(0,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v287)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v286)
,	/* CT_v288: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hReady[] = {
  CAPTAG(useLabel(FN_IO_46hReady),1)
, useLabel(PS_v285)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_IO_46hWaitForInput))
,};
Node PP_IO_46hIsClosed[] = {
 };
Node PC_IO_46hIsClosed[] = {
 	/* ST_v250: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,67,108)
, bytes2word(111,115,101,100)
,	/* PP_LAMBDA217: (byte 1) */
 	/* PC_LAMBDA217: (byte 1) */
 	/* ST_v255: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,73,115,67)
, bytes2word(108,111,115,101)
, bytes2word(100,58,49,57)
, bytes2word(58,51,50,45)
, bytes2word(49,57,58,53)
, bytes2word(53,0,0,0)
,};
Node PP_IO_46hIsOpen[] = {
 };
Node PC_IO_46hIsOpen[] = {
 	/* ST_v259: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,79,112)
,	/* PP_LAMBDA218: (byte 3) */
 	/* PC_LAMBDA218: (byte 3) */
 	/* ST_v264: (byte 3) */
  bytes2word(101,110,0,73)
, bytes2word(79,46,104,73)
, bytes2word(115,79,112,101)
, bytes2word(110,58,49,54)
, bytes2word(58,51,50,45)
, bytes2word(49,54,58,53)
, bytes2word(51,0,0,0)
,};
Node PP_IO_46hIsReadable[] = {
 };
Node PC_IO_46hIsReadable[] = {
 	/* ST_v241: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,82,101)
, bytes2word(97,100,97,98)
,	/* PP_LAMBDA216: (byte 3) */
 	/* PC_LAMBDA216: (byte 3) */
 	/* ST_v246: (byte 3) */
  bytes2word(108,101,0,73)
, bytes2word(79,46,104,73)
, bytes2word(115,82,101,97)
, bytes2word(100,97,98,108)
, bytes2word(101,58,50,50)
, bytes2word(58,51,50,45)
, bytes2word(50,50,58,53)
, bytes2word(55,0,0,0)
,};
Node PP_IO_46hIsSeekable[] = {
 };
Node PC_IO_46hIsSeekable[] = {
 	/* ST_v223: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,83,101)
, bytes2word(101,107,97,98)
,	/* PP_LAMBDA214: (byte 3) */
 	/* PC_LAMBDA214: (byte 3) */
 	/* ST_v228: (byte 3) */
  bytes2word(108,101,0,73)
, bytes2word(79,46,104,73)
, bytes2word(115,83,101,101)
, bytes2word(107,97,98,108)
, bytes2word(101,58,50,56)
, bytes2word(58,51,50,45)
, bytes2word(50,56,58,53)
, bytes2word(55,0,0,0)
,};
Node PP_IO_46hIsWritable[] = {
 };
Node PC_IO_46hIsWritable[] = {
 	/* ST_v232: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,87,114)
, bytes2word(105,116,97,98)
,	/* PP_LAMBDA215: (byte 3) */
 	/* PC_LAMBDA215: (byte 3) */
 	/* ST_v237: (byte 3) */
  bytes2word(108,101,0,73)
, bytes2word(79,46,104,73)
, bytes2word(115,87,114,105)
, bytes2word(116,97,98,108)
, bytes2word(101,58,50,53)
, bytes2word(58,51,50,45)
, bytes2word(50,53,58,53)
, bytes2word(55,0,0,0)
,};
Node PP_IO_46hLookAhead[] = {
 };
Node PC_IO_46hLookAhead[] = {
 	/* ST_v268: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(76,111,111,107)
, bytes2word(65,104,101,97)
,	/* PP_LAMBDA219: (byte 2) */
 	/* PC_LAMBDA219: (byte 2) */
 	/* ST_v273: (byte 2) */
  bytes2word(100,0,73,79)
, bytes2word(46,104,76,111)
, bytes2word(111,107,65,104)
, bytes2word(101,97,100,58)
, bytes2word(49,51,58,51)
, bytes2word(50,45,49,51)
, bytes2word(58,53,54,0)
,};
Node PP_IO_46hReady[] = {
 };
Node PC_IO_46hReady[] = {
 	/* ST_v286: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(82,101,97,100)
, bytes2word(121,0,0,0)
,};
Node PP_IO_46hWaitForInput[] = {
 };
Node PC_IO_46hWaitForInput[] = {
 	/* ST_v277: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(87,97,105,116)
, bytes2word(70,111,114,73)
, bytes2word(110,112,117,116)
,	/* PP_LAMBDA220: (byte 1) */
 	/* PC_LAMBDA220: (byte 1) */
 	/* ST_v282: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,87,97,105)
, bytes2word(116,70,111,114)
, bytes2word(73,110,112,117)
, bytes2word(116,58,55,58)
, bytes2word(51,50,45,55)
,	/* ST_v256: (byte 4) */
  bytes2word(58,53,57,0)
, bytes2word(78,111,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(32,104,73,115)
, bytes2word(67,108,111,115)
,	/* ST_v265: (byte 3) */
  bytes2word(101,100,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,73,115,79)
,	/* ST_v247: (byte 4) */
  bytes2word(112,101,110,0)
, bytes2word(78,111,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(32,104,73,115)
, bytes2word(82,101,97,100)
, bytes2word(97,98,108,101)
,	/* ST_v229: (byte 1) */
  bytes2word(0,78,111,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,101,100)
, bytes2word(58,32,104,73)
, bytes2word(115,83,101,101)
, bytes2word(107,97,98,108)
,	/* ST_v238: (byte 2) */
  bytes2word(101,0,78,111)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,101)
, bytes2word(100,58,32,104)
, bytes2word(73,115,87,114)
, bytes2word(105,116,97,98)
,	/* ST_v274: (byte 3) */
  bytes2word(108,101,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,76,111,111)
, bytes2word(107,65,104,101)
,	/* ST_v283: (byte 3) */
  bytes2word(97,100,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,87,97,105)
, bytes2word(116,70,111,114)
, bytes2word(73,110,112,117)
, bytes2word(116,0,0,0)
,	/* PS_v279: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hWaitForInput)
, useLabel(PC_Prelude_46error)
,	/* PS_v276: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hWaitForInput)
, useLabel(PC_IO_46hWaitForInput)
,	/* PS_v278: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hWaitForInput)
, useLabel(PC_LAMBDA220)
,	/* PS_v287: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hReady)
, useLabel(PC_IO_46hWaitForInput)
,	/* PS_v285: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hReady)
, useLabel(PC_IO_46hReady)
,	/* PS_v270: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hLookAhead)
, useLabel(PC_Prelude_46error)
,	/* PS_v267: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hLookAhead)
, useLabel(PC_IO_46hLookAhead)
,	/* PS_v269: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hLookAhead)
, useLabel(PC_LAMBDA219)
,	/* PS_v261: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsOpen)
, useLabel(PC_Prelude_46error)
,	/* PS_v258: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsOpen)
, useLabel(PC_IO_46hIsOpen)
,	/* PS_v260: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsOpen)
, useLabel(PC_LAMBDA218)
,	/* PS_v252: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsClosed)
, useLabel(PC_Prelude_46error)
,	/* PS_v249: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsClosed)
, useLabel(PC_IO_46hIsClosed)
,	/* PS_v251: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsClosed)
, useLabel(PC_LAMBDA217)
,	/* PS_v243: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsReadable)
, useLabel(PC_Prelude_46error)
,	/* PS_v240: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsReadable)
, useLabel(PC_IO_46hIsReadable)
,	/* PS_v242: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsReadable)
, useLabel(PC_LAMBDA216)
,	/* PS_v234: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsWritable)
, useLabel(PC_Prelude_46error)
,	/* PS_v231: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsWritable)
, useLabel(PC_IO_46hIsWritable)
,	/* PS_v233: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsWritable)
, useLabel(PC_LAMBDA215)
,	/* PS_v225: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsSeekable)
, useLabel(PC_Prelude_46error)
,	/* PS_v222: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsSeekable)
, useLabel(PC_IO_46hIsSeekable)
,	/* PS_v224: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_IO_46hIsSeekable)
, useLabel(PC_LAMBDA214)
,	/* PS_v227: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA214)
, useLabel(PC_LAMBDA214)
,	/* PS_v236: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA215)
, useLabel(PC_LAMBDA215)
,	/* PS_v245: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA216)
, useLabel(PC_LAMBDA216)
,	/* PS_v254: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA217)
, useLabel(PC_LAMBDA217)
,	/* PS_v263: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA218)
, useLabel(PC_LAMBDA218)
,	/* PS_v272: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA219)
, useLabel(PC_LAMBDA219)
,	/* PS_v281: (byte 0) */
  useLabel(PM_IO)
, useLabel(PP_LAMBDA220)
, useLabel(PC_LAMBDA220)
,};
