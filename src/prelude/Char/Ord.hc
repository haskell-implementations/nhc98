#include "newmacros.h"
#include "runtime.h"

#define CT_v161	((void*)startLabel+20)
extern Node F0_NHC_46Internal_46_95id[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v161)
,};
Node FN_Char_46ord[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v161: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Char_46ord[] = {
  VAPTAG(useLabel(FN_Char_46ord))
, useLabel(F0_NHC_46Internal_46_95id)
,};
