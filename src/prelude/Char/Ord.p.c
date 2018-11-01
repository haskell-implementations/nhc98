#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+28)
#define ST_v162	((void*)startLabel+60)
#define PS_v161	((void*)startLabel+72)
extern Node F0_NHC_46Internal_46_95id[];
extern Node PM_Char[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v163)
,};
Node FN_Char_46ord[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,7,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v162)
,	/* CT_v163: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Char_46ord[] = {
  VAPTAG(useLabel(FN_Char_46ord))
, useLabel(PS_v161)
, 0
, 0
, 0
, useLabel(F0_NHC_46Internal_46_95id)
,};
Node PP_Char_46ord[] = {
 };
Node PC_Char_46ord[] = {
 	/* ST_v162: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,111,114,100)
, bytes2word(0,0,0,0)
,	/* PS_v161: (byte 0) */
  useLabel(PM_Char)
, useLabel(PP_Char_46ord)
, useLabel(PC_Char_46ord)
,};
