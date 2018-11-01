#include "newmacros.h"
#include "runtime.h"

#define CT_v195	((void*)startLabel+40)
#define CT_v196	((void*)startLabel+80)
#define CT_v197	((void*)startLabel+116)
#define CT_v198	((void*)startLabel+164)
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46Building_46Compiler[];

static Node startLabel[] = {
  42
,};
Node C0_Building_46Nhc98[] = {
  CONSTR(1,0,0)
,};
Node C0_Building_46Yhc[] = {
  CONSTR(0,0,0)
, bytes2word(0,0,0,0)
, useLabel(CT_v195)
,};
Node FN_Building_46compiler[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v195: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Building_46compiler[] = {
  VAPTAG(useLabel(FN_Building_46compiler))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v196)
,};
Node FN_Prelude_46Eq_46Building_46Compiler_46_61_61[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(ORD,EQ_W,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v196: (byte 0) */
  HW(0,2)
, 0
,};
Node F0_Prelude_46Eq_46Building_46Compiler_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Building_46Compiler_46_61_61),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v197)
,};
Node FN_Prelude_46Eq_46Building_46Compiler_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v197: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46Building_46Compiler_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46Building_46Compiler_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46Building_46Compiler)
, bytes2word(0,0,0,0)
, useLabel(CT_v198)
,};
Node FN_Prelude_46Eq_46Building_46Compiler[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v198: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46Building_46Compiler[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46Building_46Compiler))
, useLabel(F0_Prelude_46Eq_46Building_46Compiler_46_47_61)
, useLabel(F0_Prelude_46Eq_46Building_46Compiler_46_61_61)
,};
