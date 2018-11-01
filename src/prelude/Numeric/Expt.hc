#include "newmacros.h"
#include "runtime.h"

#define FN_Numeric_46minExpt	((void*)startLabel+8)
#define CT_v238	((void*)startLabel+20)
#define CF_Numeric_46minExpt	((void*)startLabel+28)
#define FN_Numeric_46maxExpt	((void*)startLabel+40)
#define CT_v239	((void*)startLabel+60)
#define CF_Numeric_46maxExpt	((void*)startLabel+68)
#define FN_Numeric_46expts	((void*)startLabel+80)
#define CT_v240	((void*)startLabel+124)
#define CF_Numeric_46expts	((void*)startLabel+132)
#define FN_LAMBDA236	((void*)startLabel+176)
#define CT_v241	((void*)startLabel+220)
#define F0_LAMBDA236	((void*)startLabel+228)
#define v242	((void*)startLabel+300)
#define CT_v244	((void*)startLabel+324)
extern Node FN_Prelude_46Enum_46Prelude_46Int_46enumFromTo[];
extern Node FN_Prelude_46_95foldr[];
extern Node FN_Array_46array[];
extern Node CF_Ix_46Ix_46Prelude_46Int[];
extern Node FN_Prelude_46_94[];
extern Node CF_Prelude_46Num_46Prelude_46Integer[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46Eq_46Prelude_46Integer_46_61_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_62_61[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46_60_61[];
extern Node FN_Prelude_46_38_38[];
extern Node FN_Array_46_33[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v238)
,	/* FN_Numeric_46minExpt: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_P1,0,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v238: (byte 0) */
  HW(0,0)
, 0
,	/* CF_Numeric_46minExpt: (byte 0) */
  VAPTAG(useLabel(FN_Numeric_46minExpt))
, bytes2word(0,0,0,0)
, useLabel(CT_v239)
,	/* FN_Numeric_46maxExpt: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CADR_N1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 1100
,	/* CT_v239: (byte 0) */
  HW(0,0)
, 0
,	/* CF_Numeric_46maxExpt: (byte 0) */
  VAPTAG(useLabel(FN_Numeric_46maxExpt))
, bytes2word(0,0,0,0)
, useLabel(CT_v240)
,	/* FN_Numeric_46expts: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_N1,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,14,HEAP_OFF_N1)
, bytes2word(7,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(0,2,0)
,	/* CT_v240: (byte 0) */
  HW(7,0)
, 0
,	/* CF_Numeric_46expts: (byte 0) */
  VAPTAG(useLabel(FN_Numeric_46expts))
, useLabel(CF_Numeric_46minExpt)
, useLabel(CF_Numeric_46maxExpt)
, CAPTAG(useLabel(FN_LAMBDA236),2)
, VAPTAG(useLabel(FN_Prelude_46Enum_46Prelude_46Int_46enumFromTo))
, VAPTAG(useLabel(FN_Prelude_46_95foldr))
, VAPTAG(useLabel(FN_Array_46array))
, useLabel(CF_Ix_46Ix_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v241)
,	/* FN_LAMBDA236: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CADR_N1,2,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_IN3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(7,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,2,0)
, CONSTRW(1,0)
, 2
,	/* CT_v241: (byte 0) */
  HW(3,2)
, 0
,	/* F0_LAMBDA236: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA236),2)
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v244)
,};
Node FN_Numeric_46expt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CADR_N1,2,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(5,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(12,0,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_P1,10,HEAP_CVAL_P1)
,	/* v242: (byte 4) */
  bytes2word(11,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_CVAL_P1)
, bytes2word(13,HEAP_CVAL_P1,14,HEAP_ARG_ARG_RET_EVAL)
, bytes2word(1,2,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, 2
,	/* CT_v244: (byte 0) */
  HW(12,2)
, 0
,};
Node F0_Numeric_46expt[] = {
  CAPTAG(useLabel(FN_Numeric_46expt),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46Prelude_46Integer_46_61_61))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_62_61))
, useLabel(CF_Numeric_46minExpt)
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46_60_61))
, useLabel(CF_Numeric_46maxExpt)
, VAPTAG(useLabel(FN_Prelude_46_38_38))
, VAPTAG(useLabel(FN_Array_46_33))
, useLabel(CF_Ix_46Ix_46Prelude_46Int)
, useLabel(CF_Numeric_46expts)
, VAPTAG(useLabel(FN_Prelude_46_94))
, useLabel(CF_Prelude_46Num_46Prelude_46Integer)
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
,};
