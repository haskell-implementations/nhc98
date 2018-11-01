#include "newmacros.h"
#include "runtime.h"

#define CT_v207	((void*)startLabel+20)
#define CT_v208	((void*)startLabel+60)
#define v210	((void*)startLabel+98)
#define v211	((void*)startLabel+102)
#define CT_v213	((void*)startLabel+128)
extern Node F0_Prelude_46id[];
extern Node FN_Prelude_46_46[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v207)
,};
Node FN_Reduce_46unitR[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v207: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Reduce_46unitR[] = {
  VAPTAG(useLabel(FN_Reduce_46unitR))
, useLabel(F0_Prelude_46id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v208)
,};
Node FN_Reduce_46_62_62_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(2,1,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v208: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Reduce_46_62_62_62[] = {
  CAPTAG(useLabel(FN_Reduce_46_62_62_62),2)
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v213)
,};
Node FN_Reduce_46mapR[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v210: (byte 2) */
  bytes2word(TOP(8),BOT(8),POP_I1,PUSH_CVAL_P1)
,	/* v211: (byte 2) */
  bytes2word(3,RETURN_EVAL,UNPACK,2)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_P1)
, bytes2word(0,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_I1,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v213: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Reduce_46mapR[] = {
  CAPTAG(useLabel(FN_Reduce_46mapR),2)
, useLabel(CF_Reduce_46unitR)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Reduce_46mapR))
, VAPTAG(useLabel(FN_Reduce_46_62_62_62))
,};
