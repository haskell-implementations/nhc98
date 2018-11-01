#include "newmacros.h"
#include "runtime.h"

#define CT_v160	((void*)startLabel+20)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v160)
,};
Node FN_Array_46arrPrec[] = {
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,10,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v160: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Array_46arrPrec[] = {
  VAPTAG(useLabel(FN_Array_46arrPrec))
,};
