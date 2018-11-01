#include "newmacros.h"
#include "runtime.h"

#define CT_v162	((void*)startLabel+32)
extern Node FN_Prelude_46foldr[];
extern Node F0_Prelude_46_38_38[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v162)
,};
Node FN_Prelude_46and[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v162: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46and[] = {
  VAPTAG(useLabel(FN_Prelude_46and))
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, useLabel(F0_Prelude_46_38_38)
,};
