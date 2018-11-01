#include "newmacros.h"
#include "runtime.h"

#define CT_v178	((void*)startLabel+36)
#define CT_v180	((void*)startLabel+80)
#define FN_LAMBDA175	((void*)startLabel+104)
#define CT_v182	((void*)startLabel+148)
#define F0_LAMBDA175	((void*)startLabel+156)
#define ST_v177	((void*)startLabel+176)
#define ST_v179	((void*)startLabel+192)
#define ST_v181	((void*)startLabel+211)
extern Node TM_System[];
extern void *cGetArgs();
extern Node TMSUB_System[];
extern Node FN_Prelude_46map[];
extern Node F0_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46seq[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v178)
,};
Node FN_System_46cGetArgs[] = {
  useLabel(TM_System)
, bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(cGetArgs)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 60001
, useLabel(ST_v177)
,	/* CT_v178: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_System_46cGetArgs[] = {
  VAPTAG(useLabel(FN_System_46cGetArgs))
, bytes2word(0,0,0,0)
, useLabel(CT_v180)
,};
Node FN_System_46primGetArgs[] = {
  useLabel(TM_System)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v179)
,	/* CT_v180: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_System_46primGetArgs[] = {
  VAPTAG(useLabel(FN_System_46primGetArgs))
, CAPTAG(useLabel(FN_LAMBDA175),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v182)
,	/* FN_LAMBDA175: (byte 0) */
  useLabel(TMSUB_System)
, bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1,0)
, bytes2word(HEAP_CVAL_IN3,HEAP_OFF_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,6,HEAP_I1,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
, 90008
, useLabel(ST_v181)
,	/* CT_v182: (byte 0) */
  HW(4,1)
, 0
,	/* F0_LAMBDA175: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA175),1)
, useLabel(CF_System_46cGetArgs)
, VAPTAG(useLabel(FN_Prelude_46map))
, useLabel(F0_NHC_46PackedString_46unpackPS)
, VAPTAG(useLabel(FN_Prelude_46seq))
,	/* ST_v177: (byte 0) */
  bytes2word(83,121,115,116)
, bytes2word(101,109,46,99)
, bytes2word(71,101,116,65)
,	/* ST_v179: (byte 4) */
  bytes2word(114,103,115,0)
, bytes2word(83,121,115,116)
, bytes2word(101,109,46,112)
, bytes2word(114,105,109,71)
, bytes2word(101,116,65,114)
,	/* ST_v181: (byte 3) */
  bytes2word(103,115,0,83)
, bytes2word(121,115,116,101)
, bytes2word(109,46,112,114)
, bytes2word(105,109,71,101)
, bytes2word(116,65,114,103)
, bytes2word(115,58,57,58)
, bytes2word(56,45,49,49)
, bytes2word(58,52,55,0)
,};
