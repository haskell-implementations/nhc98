#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+24)
#define ST_v161	((void*)startLabel+52)
#define ST_v163	((void*)startLabel+72)
#define PS_v162	((void*)startLabel+104)

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v164)
,};
Node FN_NonStdUnsafeCoerce_46unsafeCoerce[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 40001
, useLabel(ST_v163)
,	/* CT_v164: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NonStdUnsafeCoerce_46unsafeCoerce[] = {
  CAPTAG(useLabel(FN_NonStdUnsafeCoerce_46unsafeCoerce),1)
, useLabel(PS_v162)
, 0
, 0
, 0
,};
Node PM_NonStdUnsafeCoerce[] = {
 	/* ST_v161: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,85,110)
, bytes2word(115,97,102,101)
, bytes2word(67,111,101,114)
, bytes2word(99,101,0,0)
,};
Node PP_NonStdUnsafeCoerce_46unsafeCoerce[] = {
 };
Node PC_NonStdUnsafeCoerce_46unsafeCoerce[] = {
 	/* ST_v163: (byte 0) */
  bytes2word(78,111,110,83)
, bytes2word(116,100,85,110)
, bytes2word(115,97,102,101)
, bytes2word(67,111,101,114)
, bytes2word(99,101,46,117)
, bytes2word(110,115,97,102)
, bytes2word(101,67,111,101)
, bytes2word(114,99,101,0)
,	/* PS_v162: (byte 0) */
  useLabel(PM_NonStdUnsafeCoerce)
, useLabel(PP_NonStdUnsafeCoerce_46unsafeCoerce)
, useLabel(PC_NonStdUnsafeCoerce_46unsafeCoerce)
,};
