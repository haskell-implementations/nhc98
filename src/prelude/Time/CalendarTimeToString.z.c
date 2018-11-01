#include "newmacros.h"
#include "runtime.h"

#define CT_v212	((void*)startLabel+36)
#define FN_LAMBDA209	((void*)startLabel+68)
#define CT_v215	((void*)startLabel+100)
#define CF_LAMBDA209	((void*)startLabel+108)
#define ST_v214	((void*)startLabel+112)
#define ST_v211	((void*)startLabel+115)
#define ST_v213	((void*)startLabel+141)
extern Node TM_Time[];
extern Node FN_Time_46formatCalendarTime[];
extern Node CF_Locale_46defaultTimeLocale[];
extern Node TMSUB_Time[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v212)
,};
Node FN_Time_46calendarTimeToString[] = {
  useLabel(TM_Time)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v211)
,	/* CT_v212: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Time_46calendarTimeToString[] = {
  VAPTAG(useLabel(FN_Time_46calendarTimeToString))
, VAPTAG(useLabel(FN_LAMBDA209))
, CAPTAG(useLabel(FN_Time_46formatCalendarTime),1)
, useLabel(CF_Locale_46defaultTimeLocale)
, bytes2word(0,0,0,0)
, useLabel(CT_v215)
,	/* FN_LAMBDA209: (byte 0) */
  useLabel(TMSUB_Time)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v214)
, 80061
, useLabel(ST_v213)
,	/* CT_v215: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA209: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA209))
,	/* ST_v214: (byte 0) */
 	/* ST_v211: (byte 3) */
  bytes2word(37,99,0,84)
, bytes2word(105,109,101,46)
, bytes2word(99,97,108,101)
, bytes2word(110,100,97,114)
, bytes2word(84,105,109,101)
, bytes2word(84,111,83,116)
, bytes2word(114,105,110,103)
,	/* ST_v213: (byte 1) */
  bytes2word(0,84,105,109)
, bytes2word(101,46,99,97)
, bytes2word(108,101,110,100)
, bytes2word(97,114,84,105)
, bytes2word(109,101,84,111)
, bytes2word(83,116,114,105)
, bytes2word(110,103,58,56)
, bytes2word(58,54,49,45)
, bytes2word(56,58,54,52)
, bytes2word(0,0,0,0)
,};
