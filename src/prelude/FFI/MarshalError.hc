#include "newmacros.h"
#include "runtime.h"

#define CT_v289	((void*)startLabel+36)
#define CT_v290	((void*)startLabel+88)
#define FN_LAMBDA287	((void*)startLabel+120)
#define v291	((void*)startLabel+146)
#define v292	((void*)startLabel+148)
#define CT_v293	((void*)startLabel+160)
#define F0_LAMBDA287	((void*)startLabel+168)
#define CT_v294	((void*)startLabel+220)
#define CT_v295	((void*)startLabel+288)
#define CT_v296	((void*)startLabel+364)
#define CT_v297	((void*)startLabel+448)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46_46[];
extern Node F0_Prelude_46userError[];
extern Node F0_Prelude_46ioError[];
extern Node F0_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node F0_Prelude_46const[];
extern Node FN_Prelude_46_36[];
extern Node FN_Prelude_46_60[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v289)
,};
Node FN_NHC_46FFI_46void[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v289: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46void[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46void),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v290)
,};
Node FN_NHC_46FFI_46throwIf[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(3,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v290: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46throwIf[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIf),3)
, CAPTAG(useLabel(FN_LAMBDA287),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v293)
,	/* FN_LAMBDA287: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I3,PUSH_ARG_I3,PUSH_ZAP_ARG_I1)
, bytes2word(ZAP_ARG_I3,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(14,0,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,JUMP)
,	/* v291: (byte 2) */
 	/* v292: (byte 4) */
  bytes2word(4,0,PUSH_CVAL_P1,6)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v293: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA287: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA287),3)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46userError)
, useLabel(F0_Prelude_46ioError)
, useLabel(F0_Prelude_46Monad_46NHC_46Internal_46IO_46return)
, bytes2word(0,0,0,0)
, useLabel(CT_v294)
,};
Node FN_NHC_46FFI_46throwIfNull[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,4)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,8,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v294: (byte 0) */
  HW(6,0)
, 0
,};
Node CF_NHC_46FFI_46throwIfNull[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46throwIfNull))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61)
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_NHC_46FFI_46throwIf),2)
, VAPTAG(useLabel(FN_Prelude_46_46))
, useLabel(F0_Prelude_46const)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v295)
,};
Node FN_NHC_46FFI_46throwIf_95[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_ARG,3,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v295: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46FFI_46throwIf_95[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIf_95),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIf))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46FFI_46void)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v296)
,};
Node FN_NHC_46FFI_46throwIfNeg_95[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v296: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_NHC_46FFI_46throwIfNeg_95[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIfNeg_95),2)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, CAPTAG(useLabel(FN_NHC_46FFI_46throwIf_95),2)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v297)
,};
Node FN_NHC_46FFI_46throwIfNeg[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,1)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,8)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v297: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_NHC_46FFI_46throwIfNeg[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46throwIfNeg),2)
, VAPTAG(useLabel(FN_Prelude_46_60))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, CAPTAG(useLabel(FN_NHC_46FFI_46throwIf),2)
,};
