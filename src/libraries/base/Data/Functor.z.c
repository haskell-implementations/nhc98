#include "newmacros.h"
#include "runtime.h"

#define CT_v197	((void*)startLabel+32)
#define CT_v199	((void*)startLabel+84)
#define ST_v195	((void*)startLabel+108)
#define ST_v198	((void*)startLabel+121)
#define ST_v196	((void*)startLabel+137)
extern Node TM_Data_46Functor[];
extern Node FN_Prelude_46fmap[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46const[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v197)
,};
Node FN_Data_46Functor_46_60_36_62[] = {
  useLabel(TM_Data_46Functor)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 320002
, useLabel(ST_v196)
,	/* CT_v197: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_Data_46Functor_46_60_36_62[] = {
  CAPTAG(useLabel(FN_Data_46Functor_46_60_36_62),1)
, VAPTAG(useLabel(FN_Prelude_46fmap))
, bytes2word(1,0,0,1)
, useLabel(CT_v199)
,};
Node FN_Data_46Functor_46_60_36[] = {
  useLabel(TM_Data_46Functor)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 250002
, useLabel(ST_v198)
,	/* CT_v199: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Data_46Functor_46_60_36[] = {
  CAPTAG(useLabel(FN_Data_46Functor_46_60_36),1)
, VAPTAG(useLabel(FN_Prelude_46fmap))
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46const)
,};
Node PM_Data_46Functor[] = {
 	/* ST_v195: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,70,117,110)
, bytes2word(99,116,111,114)
,	/* ST_v198: (byte 1) */
  bytes2word(0,68,97,116)
, bytes2word(97,46,70,117)
, bytes2word(110,99,116,111)
, bytes2word(114,46,60,36)
,	/* ST_v196: (byte 1) */
  bytes2word(0,68,97,116)
, bytes2word(97,46,70,117)
, bytes2word(110,99,116,111)
, bytes2word(114,46,60,36)
, bytes2word(62,0,0,0)
,};
