#include "newmacros.h"
#include "runtime.h"

#define CT_v198	((void*)startLabel+24)
#define FN_LAMBDA195	((void*)startLabel+52)
#define CT_v200	((void*)startLabel+72)
#define CF_LAMBDA195	((void*)startLabel+80)
#define CT_v204	((void*)startLabel+116)
#define FN_LAMBDA196	((void*)startLabel+144)
#define CT_v205	((void*)startLabel+164)
#define CF_LAMBDA196	((void*)startLabel+172)
#define CT_v206	((void*)startLabel+196)
#define CT_v207	((void*)startLabel+236)
#define CT_v208	((void*)startLabel+288)
#define ST_v199	((void*)startLabel+316)
extern Node FN_Prelude_46showString[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46_40_41[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Show_46_40_41_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v198: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showsType),1)
, useLabel(CF_LAMBDA195)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v200)
,	/* FN_LAMBDA195: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v199)
,	/* CT_v200: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA195: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA195))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v204)
,};
Node FN_Prelude_46Show_46_40_41_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL)
, bytes2word(NEEDHEAP_I32,POP_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v204: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showsPrec),2)
, useLabel(CF_LAMBDA196)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v205)
,	/* FN_LAMBDA196: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v199)
,	/* CT_v205: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA196: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA196))
, bytes2word(1,0,0,1)
, useLabel(CT_v206)
,};
Node FN_Prelude_46Show_46_40_41_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v206: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(1,0,0,1)
, useLabel(CT_v207)
,};
Node FN_Prelude_46Show_46_40_41_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v207: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46_40_41_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46_40_41_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46_40_41)
, bytes2word(0,0,0,0)
, useLabel(CT_v208)
,};
Node FN_Prelude_46Show_46_40_41[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v208: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46_40_41[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46_40_41))
, useLabel(F0_Prelude_46Show_46_40_41_46showsPrec)
, useLabel(F0_Prelude_46Show_46_40_41_46showsType)
, useLabel(F0_Prelude_46Show_46_40_41_46showList)
, useLabel(F0_Prelude_46Show_46_40_41_46show)
,	/* ST_v199: (byte 0) */
  bytes2word(40,41,0,0)
,};
