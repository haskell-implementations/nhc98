#include "newmacros.h"
#include "runtime.h"

#define CT_v168	((void*)startLabel+20)
extern Node F0_Prelude_46const[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v168)
,};
Node FN_Prelude_46asTypeOf[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v168: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46asTypeOf[] = {
  VAPTAG(useLabel(FN_Prelude_46asTypeOf))
, useLabel(F0_Prelude_46const)
,};
