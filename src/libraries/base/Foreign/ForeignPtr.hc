#include "newmacros.h"
#include "runtime.h"

#define CT_v319	((void*)startLabel+28)
#define FN_LAMBDA315	((void*)startLabel+60)
#define CT_v320	((void*)startLabel+80)
#define F0_LAMBDA315	((void*)startLabel+88)
#define CT_v321	((void*)startLabel+120)
#define FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+152)
#define CT_v322	((void*)startLabel+180)
#define F0_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+188)
#define CT_v323	((void*)startLabel+248)
#define CT_v324	((void*)startLabel+296)
#define FN_LAMBDA316	((void*)startLabel+328)
#define CT_v325	((void*)startLabel+348)
#define F0_LAMBDA316	((void*)startLabel+356)
extern Node FN_NHC_46FFI_46mallocBytes[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46finalizerFree[];
extern Node FN_NHC_46FFI_46newForeignPtr[];
extern Node CF_Prelude_46undefined[];
extern Node FN_NHC_46FFI_46sizeOf[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node FN_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node FN_NHC_46FFI_46malloc[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v319)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v319: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46mallocBytes))
, CAPTAG(useLabel(FN_LAMBDA315),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v320)
,	/* FN_LAMBDA315: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v320: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA315),1)
, useLabel(CF_NHC_46FFI_46finalizerFree)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, bytes2word(1,0,0,1)
, useLabel(CT_v321)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v321: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray),1)
, CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc),1)
, useLabel(CF_Prelude_46undefined)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v322)
,	/* FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v322: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, VAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v323)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,1,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v323: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray0),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray))
, bytes2word(1,0,0,1)
, useLabel(CT_v324)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v324: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtr),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46malloc))
, CAPTAG(useLabel(FN_LAMBDA316),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v325)
,	/* FN_LAMBDA316: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v325: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA316),1)
, useLabel(CF_NHC_46FFI_46finalizerFree)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
,};
