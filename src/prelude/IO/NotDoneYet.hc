#include "newmacros.h"
#include "runtime.h"

#define CT_v222	((void*)startLabel+24)
#define FN_LAMBDA214	((void*)startLabel+52)
#define CT_v224	((void*)startLabel+72)
#define CF_LAMBDA214	((void*)startLabel+80)
#define CT_v225	((void*)startLabel+108)
#define FN_LAMBDA215	((void*)startLabel+136)
#define CT_v227	((void*)startLabel+156)
#define CF_LAMBDA215	((void*)startLabel+164)
#define CT_v228	((void*)startLabel+192)
#define FN_LAMBDA216	((void*)startLabel+220)
#define CT_v230	((void*)startLabel+240)
#define CF_LAMBDA216	((void*)startLabel+248)
#define CT_v231	((void*)startLabel+276)
#define FN_LAMBDA217	((void*)startLabel+304)
#define CT_v233	((void*)startLabel+324)
#define CF_LAMBDA217	((void*)startLabel+332)
#define CT_v234	((void*)startLabel+360)
#define FN_LAMBDA218	((void*)startLabel+388)
#define CT_v236	((void*)startLabel+408)
#define CF_LAMBDA218	((void*)startLabel+416)
#define CT_v237	((void*)startLabel+444)
#define FN_LAMBDA219	((void*)startLabel+472)
#define CT_v239	((void*)startLabel+492)
#define CF_LAMBDA219	((void*)startLabel+500)
#define CT_v240	((void*)startLabel+532)
#define FN_LAMBDA220	((void*)startLabel+560)
#define CT_v242	((void*)startLabel+580)
#define CF_LAMBDA220	((void*)startLabel+588)
#define CT_v243	((void*)startLabel+616)
#define ST_v232	((void*)startLabel+632)
#define ST_v235	((void*)startLabel+655)
#define ST_v229	((void*)startLabel+676)
#define ST_v223	((void*)startLabel+701)
#define ST_v226	((void*)startLabel+726)
#define ST_v238	((void*)startLabel+751)
#define ST_v241	((void*)startLabel+775)
extern Node FN_Prelude_46error[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v222)
,};
Node FN_IO_46hIsSeekable[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v222: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsSeekable[] = {
  CAPTAG(useLabel(FN_IO_46hIsSeekable),1)
, VAPTAG(useLabel(FN_LAMBDA214))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_LAMBDA214: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v223)
,	/* CT_v224: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA214: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA214))
, bytes2word(1,0,0,1)
, useLabel(CT_v225)
,};
Node FN_IO_46hIsWritable[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v225: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsWritable[] = {
  CAPTAG(useLabel(FN_IO_46hIsWritable),1)
, VAPTAG(useLabel(FN_LAMBDA215))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v227)
,	/* FN_LAMBDA215: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v226)
,	/* CT_v227: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA215: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA215))
, bytes2word(1,0,0,1)
, useLabel(CT_v228)
,};
Node FN_IO_46hIsReadable[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v228: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsReadable[] = {
  CAPTAG(useLabel(FN_IO_46hIsReadable),1)
, VAPTAG(useLabel(FN_LAMBDA216))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v230)
,	/* FN_LAMBDA216: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v229)
,	/* CT_v230: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA216: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA216))
, bytes2word(1,0,0,1)
, useLabel(CT_v231)
,};
Node FN_IO_46hIsClosed[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v231: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsClosed[] = {
  CAPTAG(useLabel(FN_IO_46hIsClosed),1)
, VAPTAG(useLabel(FN_LAMBDA217))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v233)
,	/* FN_LAMBDA217: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v232)
,	/* CT_v233: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA217: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA217))
, bytes2word(1,0,0,1)
, useLabel(CT_v234)
,};
Node FN_IO_46hIsOpen[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v234: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hIsOpen[] = {
  CAPTAG(useLabel(FN_IO_46hIsOpen),1)
, VAPTAG(useLabel(FN_LAMBDA218))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v236)
,	/* FN_LAMBDA218: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA218: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA218))
, bytes2word(1,0,0,1)
, useLabel(CT_v237)
,};
Node FN_IO_46hLookAhead[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v237: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_IO_46hLookAhead[] = {
  CAPTAG(useLabel(FN_IO_46hLookAhead),1)
, VAPTAG(useLabel(FN_LAMBDA219))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_LAMBDA219: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v238)
,	/* CT_v239: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA219: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA219))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v240)
,};
Node FN_IO_46hWaitForInput[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v240: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_IO_46hWaitForInput[] = {
  CAPTAG(useLabel(FN_IO_46hWaitForInput),2)
, VAPTAG(useLabel(FN_LAMBDA220))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v242)
,	/* FN_LAMBDA220: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA220: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA220))
, bytes2word(1,0,0,1)
, useLabel(CT_v243)
,};
Node FN_IO_46hReady[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_INT_P1,0,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v243: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_IO_46hReady[] = {
  CAPTAG(useLabel(FN_IO_46hReady),1)
, VAPTAG(useLabel(FN_IO_46hWaitForInput))
,	/* ST_v232: (byte 0) */
  bytes2word(78,111,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(32,104,73,115)
, bytes2word(67,108,111,115)
,	/* ST_v235: (byte 3) */
  bytes2word(101,100,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,73,115,79)
,	/* ST_v229: (byte 4) */
  bytes2word(112,101,110,0)
, bytes2word(78,111,116,32)
, bytes2word(100,101,102,105)
, bytes2word(110,101,100,58)
, bytes2word(32,104,73,115)
, bytes2word(82,101,97,100)
, bytes2word(97,98,108,101)
,	/* ST_v223: (byte 1) */
  bytes2word(0,78,111,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,101,100)
, bytes2word(58,32,104,73)
, bytes2word(115,83,101,101)
, bytes2word(107,97,98,108)
,	/* ST_v226: (byte 2) */
  bytes2word(101,0,78,111)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,101)
, bytes2word(100,58,32,104)
, bytes2word(73,115,87,114)
, bytes2word(105,116,97,98)
,	/* ST_v238: (byte 3) */
  bytes2word(108,101,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,76,111,111)
, bytes2word(107,65,104,101)
,	/* ST_v241: (byte 3) */
  bytes2word(97,100,0,78)
, bytes2word(111,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(101,100,58,32)
, bytes2word(104,87,97,105)
, bytes2word(116,70,111,114)
, bytes2word(73,110,112,117)
, bytes2word(116,0,0,0)
,};
