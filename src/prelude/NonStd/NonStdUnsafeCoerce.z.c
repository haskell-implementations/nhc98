#include "newmacros.h"
#include "runtime.h"

#define CT_v163	((void*)startLabel+28)
#define ST_v161	((void*)startLabel+40)
#define ST_v162	((void*)startLabel+59)
extern Node TM_NonStdUnsafeCoerce[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v163)
,};
Node FN_NonStdUnsafeCoerce_46unsafeCoerce[] = {
  useLabel(TM_NonStdUnsafeCoerce)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v162)
,	/* CT_v163: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NonStdUnsafeCoerce_46unsafeCoerce[] = {
  CAPTAG(useLabel(FN_NonStdUnsafeCoerce_46unsafeCoerce),1)
,};
Node PM_NonStdUnsafeCoerce[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,85,110)
, bytes2word(115,97,102,101)
, bytes2word(67,111,101,114)
,	/* ST_v162: (byte 3) */
  bytes2word(99,101,0,78)
, bytes2word(111,110,83,116)
, bytes2word(100,85,110,115)
, bytes2word(97,102,101,67)
, bytes2word(111,101,114,99)
, bytes2word(101,46,117,110)
, bytes2word(115,97,102,101)
, bytes2word(67,111,101,114)
, bytes2word(99,101,0,0)
,};
