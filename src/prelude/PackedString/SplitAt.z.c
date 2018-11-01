#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+56)
#define ST_v174	((void*)startLabel+76)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46take[];
extern Node FN_NHC_46PackedString_46drop[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v175)
,};
Node FN_NHC_46PackedString_46splitAt[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
, 90001
, useLabel(ST_v174)
,	/* CT_v175: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46PackedString_46splitAt[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46splitAt),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46take))
, VAPTAG(useLabel(FN_NHC_46PackedString_46drop))
,	/* ST_v174: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,115,112,108)
, bytes2word(105,116,65,116)
, bytes2word(0,0,0,0)
,};
