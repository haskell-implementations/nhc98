#include "newmacros.h"
#include "runtime.h"

#define CT_v192	((void*)startLabel+40)
#define ST_v190	((void*)startLabel+52)
extern Node TM_Array[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_Array_46bounds[] = {
  useLabel(TM_Array)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 70001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Array_46bounds[] = {
  CAPTAG(useLabel(FN_Array_46bounds),2)
,	/* ST_v190: (byte 0) */
  bytes2word(65,114,114,97)
, bytes2word(121,46,98,111)
, bytes2word(117,110,100,115)
, bytes2word(0,0,0,0)
,};
