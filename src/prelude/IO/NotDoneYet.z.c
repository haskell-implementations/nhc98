#include "newmacros.h"
#include "runtime.h"

#define CT_v223	((void*)startLabel+36)
#define FN_LAMBDA214	((void*)startLabel+64)
#define CT_v226	((void*)startLabel+96)
#define CF_LAMBDA214	((void*)startLabel+104)
#define CT_v228	((void*)startLabel+144)
#define FN_LAMBDA215	((void*)startLabel+172)
#define CT_v231	((void*)startLabel+204)
#define CF_LAMBDA215	((void*)startLabel+212)
#define CT_v233	((void*)startLabel+252)
#define FN_LAMBDA216	((void*)startLabel+280)
#define CT_v236	((void*)startLabel+312)
#define CF_LAMBDA216	((void*)startLabel+320)
#define CT_v238	((void*)startLabel+360)
#define FN_LAMBDA217	((void*)startLabel+388)
#define CT_v241	((void*)startLabel+420)
#define CF_LAMBDA217	((void*)startLabel+428)
#define CT_v243	((void*)startLabel+468)
#define FN_LAMBDA218	((void*)startLabel+496)
#define CT_v246	((void*)startLabel+528)
#define CF_LAMBDA218	((void*)startLabel+536)
#define CT_v248	((void*)startLabel+576)
#define FN_LAMBDA219	((void*)startLabel+604)
#define CT_v251	((void*)startLabel+636)
#define CF_LAMBDA219	((void*)startLabel+644)
#define CT_v253	((void*)startLabel+688)
#define FN_LAMBDA220	((void*)startLabel+716)
#define CT_v256	((void*)startLabel+748)
#define CF_LAMBDA220	((void*)startLabel+756)
#define CT_v258	((void*)startLabel+796)
#define ST_v237	((void*)startLabel+812)
#define ST_v239	((void*)startLabel+825)
#define ST_v242	((void*)startLabel+850)
#define ST_v244	((void*)startLabel+861)
#define ST_v232	((void*)startLabel+884)
#define ST_v234	((void*)startLabel+899)
#define ST_v222	((void*)startLabel+926)
#define ST_v224	((void*)startLabel+941)
#define ST_v227	((void*)startLabel+968)
#define ST_v229	((void*)startLabel+983)
#define ST_v247	((void*)startLabel+1010)
#define ST_v249	((void*)startLabel+1024)
#define ST_v257	((void*)startLabel+1050)
#define ST_v252	((void*)startLabel+1060)
#define ST_v254	((void*)startLabel+1077)
#define ST_v240	((void*)startLabel+1104)
#define ST_v245	((void*)startLabel+1127)
#define ST_v235	((void*)startLabel+1148)
#define ST_v225	((void*)startLabel+1173)
#define ST_v230	((void*)startLabel+1198)
#define ST_v250	((void*)startLabel+1223)
#define ST_v255	((void*)startLabel+1247)
extern Node TM_IO[];
extern Node FN_Prelude_46error[];
extern Node TMSUB_IO[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v223)
,};
Node FN_IO_46hIsSeekable[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 280001
, useLabel(ST_v222)
,	/* CT_v223: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsSeekable[] = {
  CAPTAG(useLabel(FN_IO_46hIsSeekable),1)
, VAPTAG(useLabel(FN_LAMBDA214))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v226)
,	/* FN_LAMBDA214: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v225)
, 280032
, useLabel(ST_v224)
,	/* CT_v226: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA214: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA214))
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,};
Node FN_IO_46hIsWritable[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 250001
, useLabel(ST_v227)
,	/* CT_v228: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsWritable[] = {
  CAPTAG(useLabel(FN_IO_46hIsWritable),1)
, VAPTAG(useLabel(FN_LAMBDA215))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v231)
,	/* FN_LAMBDA215: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v230)
, 250032
, useLabel(ST_v229)
,	/* CT_v231: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA215: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA215))
, bytes2word(1,0,0,1)
, useLabel(CT_v233)
,};
Node FN_IO_46hIsReadable[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 220001
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsReadable[] = {
  CAPTAG(useLabel(FN_IO_46hIsReadable),1)
, VAPTAG(useLabel(FN_LAMBDA216))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v236)
,	/* FN_LAMBDA216: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v235)
, 220032
, useLabel(ST_v234)
,	/* CT_v236: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA216: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA216))
, bytes2word(1,0,0,1)
, useLabel(CT_v238)
,};
Node FN_IO_46hIsClosed[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsClosed[] = {
  CAPTAG(useLabel(FN_IO_46hIsClosed),1)
, VAPTAG(useLabel(FN_LAMBDA217))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v241)
,	/* FN_LAMBDA217: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v240)
, 190032
, useLabel(ST_v239)
,	/* CT_v241: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA217: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA217))
, bytes2word(1,0,0,1)
, useLabel(CT_v243)
,};
Node FN_IO_46hIsOpen[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v242)
,	/* CT_v243: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsOpen[] = {
  CAPTAG(useLabel(FN_IO_46hIsOpen),1)
, VAPTAG(useLabel(FN_LAMBDA218))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v246)
,	/* FN_LAMBDA218: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v245)
, 160032
, useLabel(ST_v244)
,	/* CT_v246: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA218: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA218))
, bytes2word(1,0,0,1)
, useLabel(CT_v248)
,};
Node FN_IO_46hLookAhead[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 130001
, useLabel(ST_v247)
,	/* CT_v248: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hLookAhead[] = {
  CAPTAG(useLabel(FN_IO_46hLookAhead),1)
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v251)
,	/* FN_LAMBDA219: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v250)
, 130032
, useLabel(ST_v249)
,	/* CT_v251: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA219: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA219))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v253)
,};
Node FN_IO_46hWaitForInput[] = {
  useLabel(TM_IO)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v252)
,	/* CT_v253: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_IO_46hWaitForInput[] = {
  CAPTAG(useLabel(FN_IO_46hWaitForInput),2)
, VAPTAG(useLabel(FN_LAMBDA220))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v256)
,	/* FN_LAMBDA220: (byte 0) */
  useLabel(TMSUB_IO)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v255)
, 70032
, useLabel(ST_v254)
,	/* CT_v256: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA220: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA220))
, bytes2word(1,0,0,1)
, useLabel(CT_v258)
,};
Node FN_IO_46hReady[] = {
  useLabel(TM_IO)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 100001
, useLabel(ST_v257)
,	/* CT_v258: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hReady[] = {
  CAPTAG(useLabel(FN_IO_46hReady),1)
, VAPTAG(useLabel(FN_IO_46hWaitForInput))
,	/* ST_v237: (byte 0) */
  bytes2word(73,79,46,104)
, bytes2word(73,115,67,108)
, bytes2word(111,115,101,100)
,	/* ST_v239: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,73,115,67)
, bytes2word(108,111,115,101)
, bytes2word(100,58,49,57)
, bytes2word(58,51,50,45)
, bytes2word(49,57,58,53)
,	/* ST_v242: (byte 2) */
  bytes2word(53,0,73,79)
, bytes2word(46,104,73,115)
, bytes2word(79,112,101,110)
,	/* ST_v244: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,73,115,79)
, bytes2word(112,101,110,58)
, bytes2word(49,54,58,51)
, bytes2word(50,45,49,54)
,	/* ST_v232: (byte 4) */
  bytes2word(58,53,51,0)
, bytes2word(73,79,46,104)
, bytes2word(73,115,82,101)
, bytes2word(97,100,97,98)
,	/* ST_v234: (byte 3) */
  bytes2word(108,101,0,73)
, bytes2word(79,46,104,73)
, bytes2word(115,82,101,97)
, bytes2word(100,97,98,108)
, bytes2word(101,58,50,50)
, bytes2word(58,51,50,45)
, bytes2word(50,50,58,53)
,	/* ST_v222: (byte 2) */
  bytes2word(55,0,73,79)
, bytes2word(46,104,73,115)
, bytes2word(83,101,101,107)
, bytes2word(97,98,108,101)
,	/* ST_v224: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,73,115,83)
, bytes2word(101,101,107,97)
, bytes2word(98,108,101,58)
, bytes2word(50,56,58,51)
, bytes2word(50,45,50,56)
,	/* ST_v227: (byte 4) */
  bytes2word(58,53,55,0)
, bytes2word(73,79,46,104)
, bytes2word(73,115,87,114)
, bytes2word(105,116,97,98)
,	/* ST_v229: (byte 3) */
  bytes2word(108,101,0,73)
, bytes2word(79,46,104,73)
, bytes2word(115,87,114,105)
, bytes2word(116,97,98,108)
, bytes2word(101,58,50,53)
, bytes2word(58,51,50,45)
, bytes2word(50,53,58,53)
,	/* ST_v247: (byte 2) */
  bytes2word(55,0,73,79)
, bytes2word(46,104,76,111)
, bytes2word(111,107,65,104)
,	/* ST_v249: (byte 4) */
  bytes2word(101,97,100,0)
, bytes2word(73,79,46,104)
, bytes2word(76,111,111,107)
, bytes2word(65,104,101,97)
, bytes2word(100,58,49,51)
, bytes2word(58,51,50,45)
, bytes2word(49,51,58,53)
,	/* ST_v257: (byte 2) */
  bytes2word(54,0,73,79)
, bytes2word(46,104,82,101)
,	/* ST_v252: (byte 4) */
  bytes2word(97,100,121,0)
, bytes2word(73,79,46,104)
, bytes2word(87,97,105,116)
, bytes2word(70,111,114,73)
, bytes2word(110,112,117,116)
,	/* ST_v254: (byte 1) */
  bytes2word(0,73,79,46)
, bytes2word(104,87,97,105)
, bytes2word(116,70,111,114)
, bytes2word(73,110,112,117)
, bytes2word(116,58,55,58)
, bytes2word(51,50,45,55)
,	/* ST_v240: (byte 4) */
  bytes2word(58,53,57,0)
, bytes2word(78,111,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(32,104,73,115)
, bytes2word(67,108,111,115)
,	/* ST_v245: (byte 3) */
  bytes2word(101,100,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,73,115,79)
,	/* ST_v235: (byte 4) */
  bytes2word(112,101,110,0)
, bytes2word(78,111,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(32,104,73,115)
, bytes2word(82,101,97,100)
, bytes2word(97,98,108,101)
,	/* ST_v225: (byte 1) */
  bytes2word(0,78,111,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,101,100)
, bytes2word(58,32,104,73)
, bytes2word(115,83,101,101)
, bytes2word(107,97,98,108)
,	/* ST_v230: (byte 2) */
  bytes2word(101,0,78,111)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,101)
, bytes2word(100,58,32,104)
, bytes2word(73,115,87,114)
, bytes2word(105,116,97,98)
,	/* ST_v250: (byte 3) */
  bytes2word(108,101,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,76,111,111)
, bytes2word(107,65,104,101)
,	/* ST_v255: (byte 3) */
  bytes2word(97,100,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,87,97,105)
, bytes2word(116,70,111,114)
, bytes2word(73,110,112,117)
, bytes2word(116,0,0,0)
,};
