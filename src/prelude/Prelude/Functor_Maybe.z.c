#include "newmacros.h"
#include "runtime.h"

#define v190	((void*)startLabel+26)
#define v191	((void*)startLabel+30)
#define CT_v194	((void*)startLabel+64)
#define CT_v196	((void*)startLabel+120)
#define ST_v195	((void*)startLabel+136)
#define ST_v192	((void*)startLabel+166)
extern Node TM_Prelude[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v194)
,};
Node FN_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v190: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_HEAP)
,	/* v191: (byte 2) */
  bytes2word(HEAP_CVAL_IN3,RETURN,UNPACK,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, CONSTR(1,1,0)
, CONSTR(0,0,0)
, 60005
, useLabel(ST_v192)
,	/* CT_v194: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46Prelude_46Maybe_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46Maybe_46fmap),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, bytes2word(0,0,0,0)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Functor_46Prelude_46Maybe[] = {
  useLabel(TM_Prelude)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
, 50011
, useLabel(ST_v195)
,	/* CT_v196: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46Prelude_46Maybe[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46Maybe))
, useLabel(F0_Prelude_46Functor_46Prelude_46Maybe_46fmap)
,	/* ST_v195: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(77,97,121,98)
,	/* ST_v192: (byte 2) */
  bytes2word(101,0,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,70,117)
, bytes2word(110,99,116,111)
, bytes2word(114,46,80,114)
, bytes2word(101,108,117,100)
, bytes2word(101,46,77,97)
, bytes2word(121,98,101,46)
, bytes2word(102,109,97,112)
, bytes2word(0,0,0,0)
,};
