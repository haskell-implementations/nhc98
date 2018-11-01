#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+52)
#define ST_v161	((void*)startLabel+80)
#define PS_v160	((void*)startLabel+108)
extern Node PM_CPUTime[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v162)
,};
Node FN_CPUTime_46cpuTimePrecision[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,8,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 0
, 0
, 0
, 0
, 1000000
, 40001
, useLabel(ST_v161)
,	/* CT_v162: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_CPUTime_46cpuTimePrecision[] = {
  VAPTAG(useLabel(FN_CPUTime_46cpuTimePrecision))
, useLabel(PS_v160)
, 0
, 0
, 0
,};
Node PP_CPUTime_46cpuTimePrecision[] = {
 };
Node PC_CPUTime_46cpuTimePrecision[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(67,80,85,84)
, bytes2word(105,109,101,46)
, bytes2word(99,112,117,84)
, bytes2word(105,109,101,80)
, bytes2word(114,101,99,105)
, bytes2word(115,105,111,110)
, bytes2word(0,0,0,0)
,	/* PS_v160: (byte 0) */
  useLabel(PM_CPUTime)
, useLabel(PP_CPUTime_46cpuTimePrecision)
, useLabel(PC_CPUTime_46cpuTimePrecision)
,};
