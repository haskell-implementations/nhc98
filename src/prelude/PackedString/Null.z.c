#include "newmacros.h"
#include "runtime.h"

#define CT_v174	((void*)startLabel+36)
#define ST_v173	((void*)startLabel+52)
extern Node TM_NHC_46PackedString[];
extern Node FN_NHC_46PackedString_46length[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v174)
,};
Node FN_NHC_46PackedString_46null[] = {
  useLabel(TM_NHC_46PackedString)
, bytes2word(NEEDHEAP_I32,PUSH_INT_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,ZAP_ARG_I1)
, bytes2word(EVAL,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 80001
, useLabel(ST_v173)
,	/* CT_v174: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46PackedString_46null[] = {
  CAPTAG(useLabel(FN_NHC_46PackedString_46null),1)
, VAPTAG(useLabel(FN_NHC_46PackedString_46length))
,	/* ST_v173: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(46,110,117,108)
, bytes2word(108,0,0,0)
,};
