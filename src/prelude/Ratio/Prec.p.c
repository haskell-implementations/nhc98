#include "newmacros.h"
#include "runtime.h"

#define CT_v167	((void*)startLabel+28)
#define ST_v166	((void*)startLabel+56)
#define PS_v165	((void*)startLabel+68)
extern Node PM_Ratio[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_Ratio_46prec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v166)
,	/* CT_v167: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Ratio_46prec[] = {
  VAPTAG(useLabel(FN_Ratio_46prec))
, useLabel(PS_v165)
, 0
, 0
, 0
,};
Node PP_Ratio_46prec[] = {
 };
Node PC_Ratio_46prec[] = {
 	/* ST_v166: (byte 0) */
  bytes2word(82,97,116,105)
, bytes2word(111,46,112,114)
, bytes2word(101,99,0,0)
,	/* PS_v165: (byte 0) */
  useLabel(PM_Ratio)
, useLabel(PP_Ratio_46prec)
, useLabel(PC_Ratio_46prec)
,};
