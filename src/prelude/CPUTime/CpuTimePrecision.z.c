#include "newmacros.h"
#include "runtime.h"

#define CT_v161	((void*)startLabel+40)
#define ST_v160	((void*)startLabel+52)
extern Node TM_CPUTime[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v161)
,};
Node FN_CPUTime_46cpuTimePrecision[] = {
  useLabel(TM_CPUTime)
, bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1000000
, 40001
, useLabel(ST_v160)
,	/* CT_v161: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_CPUTime_46cpuTimePrecision[] = {
  VAPTAG(useLabel(FN_CPUTime_46cpuTimePrecision))
,	/* ST_v160: (byte 0) */
  bytes2word(67,80,85,84)
, bytes2word(105,109,101,46)
, bytes2word(99,112,117,84)
, bytes2word(105,109,101,80)
, bytes2word(114,101,99,105)
, bytes2word(115,105,111,110)
, bytes2word(0,0,0,0)
,};
