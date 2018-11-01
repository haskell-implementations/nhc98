#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+32)
#define ST_v161	((void*)startLabel+48)
extern Node TM_Char[];
extern Node F0_NHC_46Internal_46_95id[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v162)
,};
Node FN_Char_46chr[] = {
  useLabel(TM_Char)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v161)
,	/* CT_v162: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Char_46chr[] = {
  VAPTAG(useLabel(FN_Char_46chr))
, useLabel(F0_NHC_46Internal_46_95id)
,	/* ST_v161: (byte 0) */
  bytes2word(67,104,97,114)
, bytes2word(46,99,104,114)
, bytes2word(0,0,0,0)
,};
