#include "newmacros.h"
#include "runtime.h"

#define CT_v192	((void*)startLabel+40)
#define ST_v190	((void*)startLabel+52)
extern Node TM_NHC_46IOExtras[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v192)
,};
Node FN_NHC_46IOExtras_46boundsIOArray[] = {
  useLabel(TM_NHC_46IOExtras)
, bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46IOExtras_46boundsIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46boundsIOArray),2)
,	/* ST_v190: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,98,111,117)
, bytes2word(110,100,115,73)
, bytes2word(79,65,114,114)
, bytes2word(97,121,0,0)
,};
