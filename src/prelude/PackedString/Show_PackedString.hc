#include "newmacros.h"
#include "runtime.h"

#define CT_v206	((void*)startLabel+24)
#define FN_LAMBDA203	((void*)startLabel+52)
#define CT_v208	((void*)startLabel+72)
#define CF_LAMBDA203	((void*)startLabel+80)
#define CT_v209	((void*)startLabel+120)
#define CT_v210	((void*)startLabel+160)
#define CT_v211	((void*)startLabel+200)
#define CT_v212	((void*)startLabel+252)
#define ST_v207	((void*)startLabel+280)
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46PackedString_46unpackPS[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46NHC_46PackedString_46PackedString[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v206)
,};
Node FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsType),1)
, useLabel(CF_LAMBDA203)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v208)
,	/* FN_LAMBDA203: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v207)
,	/* CT_v208: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA203: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA203))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v209)
,};
Node FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,2,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v209: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsPrec),2)
, VAPTAG(useLabel(FN_NHC_46PackedString_46unpackPS))
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(1,0,0,1)
, useLabel(CT_v210)
,};
Node FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v210: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46PackedString_46PackedString)
, bytes2word(1,0,0,1)
, useLabel(CT_v211)
,};
Node FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v211: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46PackedString_46PackedString_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46PackedString_46PackedString)
, bytes2word(0,0,0,0)
, useLabel(CT_v212)
,};
Node FN_Prelude_46Show_46NHC_46PackedString_46PackedString[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v212: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46PackedString_46PackedString[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46PackedString_46PackedString))
, useLabel(F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46PackedString_46PackedString_46show)
,	/* ST_v207: (byte 0) */
  bytes2word(80,97,99,107)
, bytes2word(101,100,83,116)
, bytes2word(114,105,110,103)
, bytes2word(0,0,0,0)
,};
