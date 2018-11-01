#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+40)
#define ST_v163	((void*)startLabel+52)
extern Node TM_Prelude[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v164)
,};
Node FN_Prelude_46otherwise[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
, 40001
, useLabel(ST_v163)
,	/* CT_v164: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46otherwise[] = {
  VAPTAG(useLabel(FN_Prelude_46otherwise))
,	/* ST_v163: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(111,116,104,101)
, bytes2word(114,119,105,115)
, bytes2word(101,0,0,0)
,};
