#include "newmacros.h"
#include "runtime.h"

#define CT_v165	((void*)startLabel+20)
extern Node FN_Numeric_46nonnull[];
extern Node F0_Char_46isDigit[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v165)
,};
Node FN_Numeric_46lexDigits[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v165: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Numeric_46lexDigits[] = {
  VAPTAG(useLabel(FN_Numeric_46lexDigits))
, CAPTAG(useLabel(FN_Numeric_46nonnull),1)
, useLabel(F0_Char_46isDigit)
,};
