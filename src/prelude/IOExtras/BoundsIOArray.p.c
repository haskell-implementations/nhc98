#include "newmacros.h"
#include "runtime.h"

#define CT_v193	((void*)startLabel+36)
#define ST_v191	((void*)startLabel+64)
#define PS_v190	((void*)startLabel+92)
extern Node PM_NHC_46IOExtras[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v193)
,};
Node FN_NHC_46IOExtras_46boundsIOArray[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(UNPACK,2,PUSH_P1,0)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 90001
, useLabel(ST_v191)
,	/* CT_v193: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_NHC_46IOExtras_46boundsIOArray[] = {
  CAPTAG(useLabel(FN_NHC_46IOExtras_46boundsIOArray),2)
, useLabel(PS_v190)
, 0
, 0
, 0
,};
Node PP_NHC_46IOExtras_46boundsIOArray[] = {
 };
Node PC_NHC_46IOExtras_46boundsIOArray[] = {
 	/* ST_v191: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(73,79,69,120)
, bytes2word(116,114,97,115)
, bytes2word(46,98,111,117)
, bytes2word(110,100,115,73)
, bytes2word(79,65,114,114)
, bytes2word(97,121,0,0)
,	/* PS_v190: (byte 0) */
  useLabel(PM_NHC_46IOExtras)
, useLabel(PP_NHC_46IOExtras_46boundsIOArray)
, useLabel(PC_NHC_46IOExtras_46boundsIOArray)
,};
