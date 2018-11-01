#include "newmacros.h"
#include "runtime.h"

#define CT_v160	((void*)startLabel+28)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v160)
,};
Node FN_CPUTime_46cpuTimePrecision[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1000000
,	/* CT_v160: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_CPUTime_46cpuTimePrecision[] = {
  VAPTAG(useLabel(FN_CPUTime_46cpuTimePrecision))
,};
