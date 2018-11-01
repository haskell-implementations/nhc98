#include "newmacros.h"
#include "runtime.h"

#define CT_v160	((void*)startLabel+20)
extern Node F0_Prelude_46_43_43[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v160)
,};
Node FN_Prelude_46showString[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v160: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46showString[] = {
  VAPTAG(useLabel(FN_Prelude_46showString))
, useLabel(F0_Prelude_46_43_43)
,};
