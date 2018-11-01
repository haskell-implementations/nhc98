#include "newmacros.h"
#include "runtime.h"

#define CT_v215	((void*)startLabel+84)
#define FN_LAMBDA209	((void*)startLabel+132)
#define CT_v219	((void*)startLabel+176)
#define CF_LAMBDA209	((void*)startLabel+184)
#define ST_v218	((void*)startLabel+204)
#define ST_v212	((void*)startLabel+208)
#define PP_LAMBDA209	((void*)startLabel+234)
#define PC_LAMBDA209	((void*)startLabel+234)
#define ST_v217	((void*)startLabel+234)
#define PS_v214	((void*)startLabel+272)
#define PS_v211	((void*)startLabel+284)
#define PS_v213	((void*)startLabel+296)
#define PS_v216	((void*)startLabel+308)
extern Node FN_Time_46formatCalendarTime[];
extern Node CF_Locale_46defaultTimeLocale[];
extern Node PM_Time[];
extern Node PC_Time_46formatCalendarTime[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v215)
,};
Node FN_Time_46calendarTimeToString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v214)
, 0
, 0
, 0
, 0
, useLabel(PS_v213)
, 0
, 0
, 0
, 0
, 80001
, useLabel(ST_v212)
,	/* CT_v215: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Time_46calendarTimeToString[] = {
  VAPTAG(useLabel(FN_Time_46calendarTimeToString))
, useLabel(PS_v211)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_LAMBDA209))
, CAPTAG(useLabel(FN_Time_46formatCalendarTime),1)
, useLabel(CF_Locale_46defaultTimeLocale)
, bytes2word(0,0,0,0)
, useLabel(CT_v219)
,	/* FN_LAMBDA209: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,8,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, useLabel(ST_v218)
, 80061
, useLabel(ST_v217)
,	/* CT_v219: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA209: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA209))
, useLabel(PS_v216)
, 0
, 0
, 0
,	/* ST_v218: (byte 0) */
  bytes2word(37,99,0,0)
,};
Node PP_Time_46calendarTimeToString[] = {
 };
Node PC_Time_46calendarTimeToString[] = {
 	/* ST_v212: (byte 0) */
  bytes2word(84,105,109,101)
, bytes2word(46,99,97,108)
, bytes2word(101,110,100,97)
, bytes2word(114,84,105,109)
, bytes2word(101,84,111,83)
, bytes2word(116,114,105,110)
,	/* PP_LAMBDA209: (byte 2) */
 	/* PC_LAMBDA209: (byte 2) */
 	/* ST_v217: (byte 2) */
  bytes2word(103,0,84,105)
, bytes2word(109,101,46,99)
, bytes2word(97,108,101,110)
, bytes2word(100,97,114,84)
, bytes2word(105,109,101,84)
, bytes2word(111,83,116,114)
, bytes2word(105,110,103,58)
, bytes2word(56,58,54,49)
, bytes2word(45,56,58,54)
, bytes2word(52,0,0,0)
,	/* PS_v214: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46calendarTimeToString)
, useLabel(PC_Time_46formatCalendarTime)
,	/* PS_v211: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46calendarTimeToString)
, useLabel(PC_Time_46calendarTimeToString)
,	/* PS_v213: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_Time_46calendarTimeToString)
, useLabel(PC_LAMBDA209)
,	/* PS_v216: (byte 0) */
  useLabel(PM_Time)
, useLabel(PP_LAMBDA209)
, useLabel(PC_LAMBDA209)
,};
