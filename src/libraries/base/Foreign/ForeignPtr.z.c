#include "newmacros.h"
#include "runtime.h"

#define CT_v320	((void*)startLabel+40)
#define FN_LAMBDA315	((void*)startLabel+72)
#define CT_v322	((void*)startLabel+104)
#define F0_LAMBDA315	((void*)startLabel+112)
#define CT_v324	((void*)startLabel+156)
#define FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+188)
#define CT_v326	((void*)startLabel+228)
#define F0_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+236)
#define CT_v328	((void*)startLabel+308)
#define CT_v330	((void*)startLabel+368)
#define FN_LAMBDA316	((void*)startLabel+400)
#define CT_v332	((void*)startLabel+432)
#define F0_LAMBDA316	((void*)startLabel+440)
#define ST_v318	((void*)startLabel+452)
#define ST_v329	((void*)startLabel+471)
#define ST_v331	((void*)startLabel+507)
#define ST_v323	((void*)startLabel+556)
#define ST_v327	((void*)startLabel+597)
#define ST_v325	((void*)startLabel+639)
#define ST_v319	((void*)startLabel+693)
#define ST_v321	((void*)startLabel+734)
extern Node TM_Foreign_46ForeignPtr[];
extern Node FN_NHC_46FFI_46mallocBytes[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Foreign_46ForeignPtr[];
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
, useLabel(CT_v320)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
  useLabel(TM_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1590001
, useLabel(ST_v319)
,	/* CT_v320: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46mallocBytes))
, CAPTAG(useLabel(FN_LAMBDA315),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v322)
,	/* FN_LAMBDA315: (byte 0) */
  useLabel(TMSUB_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1600008
, useLabel(ST_v321)
,	/* CT_v322: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA315),1)
, useLabel(CF_NHC_46FFI_46finalizerFree)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, bytes2word(1,0,0,1)
, useLabel(CT_v324)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
  useLabel(TM_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 1690001
, useLabel(ST_v323)
,	/* CT_v324: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray),1)
, CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc),1)
, useLabel(CF_Prelude_46undefined)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v326)
,	/* FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 0) */
  useLabel(TMSUB_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,3)
, bytes2word(HEAP_OFF_N1,5,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1720005
, useLabel(ST_v325)
,	/* CT_v326: (byte 0) */
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
, useLabel(CT_v328)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
  useLabel(TM_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_INT_P1,1,PUSH_P1)
, bytes2word(0,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 1790001
, useLabel(ST_v327)
,	/* CT_v328: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray0),2)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray))
, bytes2word(1,0,0,1)
, useLabel(CT_v330)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
  useLabel(TM_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1540001
, useLabel(ST_v329)
,	/* CT_v330: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtr),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46malloc))
, CAPTAG(useLabel(FN_LAMBDA316),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v332)
,	/* FN_LAMBDA316: (byte 0) */
  useLabel(TMSUB_Foreign_46ForeignPtr)
, bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1550008
, useLabel(ST_v331)
,	/* CT_v332: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA316),1)
, useLabel(CF_NHC_46FFI_46finalizerFree)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
,};
Node PM_Foreign_46ForeignPtr[] = {
 	/* ST_v318: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
,	/* ST_v329: (byte 3) */
  bytes2word(116,114,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,80,116)
, bytes2word(114,46,109,97)
, bytes2word(108,108,111,99)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
,	/* ST_v331: (byte 3) */
  bytes2word(116,114,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,80,116)
, bytes2word(114,46,109,97)
, bytes2word(108,108,111,99)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,58,49)
, bytes2word(53,53,58,56)
, bytes2word(45,49,53,53)
,	/* ST_v323: (byte 4) */
  bytes2word(58,49,51,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,65)
, bytes2word(114,114,97,121)
,	/* ST_v327: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,46)
, bytes2word(109,97,108,108)
, bytes2word(111,99,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,80,116,114)
, bytes2word(65,114,114,97)
,	/* ST_v325: (byte 3) */
  bytes2word(121,48,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,80,116)
, bytes2word(114,46,109,97)
, bytes2word(108,108,111,99)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,65,114)
, bytes2word(114,97,121,58)
, bytes2word(49,55,50,58)
, bytes2word(53,45,49,55)
, bytes2word(50,58,55,48)
,	/* ST_v319: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,46)
, bytes2word(109,97,108,108)
, bytes2word(111,99,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,80,116,114)
, bytes2word(66,121,116,101)
,	/* ST_v321: (byte 2) */
  bytes2word(115,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,80,116,114)
, bytes2word(46,109,97,108)
, bytes2word(108,111,99,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,80,116)
, bytes2word(114,66,121,116)
, bytes2word(101,115,58,49)
, bytes2word(54,48,58,56)
, bytes2word(45,49,54,48)
, bytes2word(58,50,48,0)
,};
