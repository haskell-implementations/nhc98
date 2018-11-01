#include "newmacros.h"
#include "runtime.h"

#define CT_v165	((void*)startLabel+20)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v165)
,};
Node FN_Ratio_46prec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v165: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Ratio_46prec[] = {
  VAPTAG(useLabel(FN_Ratio_46prec))
,};
