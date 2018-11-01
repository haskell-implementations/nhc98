#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+32)
#define ST_v165	((void*)startLabel+52)
extern Node TM_Numeric[];
extern Node FN_Numeric_46nonnull[];
extern Node F0_Char_46isDigit[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v166)
,};
Node FN_Numeric_46lexDigits[] = {
  useLabel(TM_Numeric)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v165)
,	/* CT_v166: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Numeric_46lexDigits[] = {
  VAPTAG(useLabel(FN_Numeric_46lexDigits))
, CAPTAG(useLabel(FN_Numeric_46nonnull),1)
, useLabel(F0_Char_46isDigit)
,	/* ST_v165: (byte 0) */
  bytes2word(78,117,109,101)
, bytes2word(114,105,99,46)
, bytes2word(108,101,120,68)
, bytes2word(105,103,105,116)
, bytes2word(115,0,0,0)
,};
