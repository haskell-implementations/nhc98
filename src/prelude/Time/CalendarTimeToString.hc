#include "newmacros.h"
#include "runtime.h"

#define CT_v211	((void*)startLabel+24)
#define FN_LAMBDA209	((void*)startLabel+56)
#define CT_v213	((void*)startLabel+76)
#define CF_LAMBDA209	((void*)startLabel+84)
#define ST_v212	((void*)startLabel+88)
extern Node FN_Time_46formatCalendarTime[];
extern Node CF_Locale_46defaultTimeLocale[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v211)
,};
Node FN_Time_46calendarTimeToString[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Time_46calendarTimeToString[] = {
  VAPTAG(useLabel(FN_Time_46calendarTimeToString))
, VAPTAG(useLabel(FN_LAMBDA209))
, CAPTAG(useLabel(FN_Time_46formatCalendarTime),1)
, useLabel(CF_Locale_46defaultTimeLocale)
, bytes2word(0,0,0,0)
, useLabel(CT_v213)
,	/* FN_LAMBDA209: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v212)
,	/* CT_v213: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA209: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA209))
,	/* ST_v212: (byte 0) */
  bytes2word(37,99,0,0)
,};
