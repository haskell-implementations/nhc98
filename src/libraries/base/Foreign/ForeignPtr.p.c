#include "newmacros.h"
#include "runtime.h"

#define CT_v324	((void*)startLabel+116)
#define FN_LAMBDA315	((void*)startLabel+164)
#define CT_v328	((void*)startLabel+220)
#define F0_LAMBDA315	((void*)startLabel+228)
#define CT_v332	((void*)startLabel+316)
#define FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+364)
#define CT_v339	((void*)startLabel+500)
#define F0_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+508)
#define CT_v344	((void*)startLabel+644)
#define CT_v350	((void*)startLabel+796)
#define FN_LAMBDA316	((void*)startLabel+844)
#define CT_v354	((void*)startLabel+900)
#define F0_LAMBDA316	((void*)startLabel+908)
#define ST_v318	((void*)startLabel+936)
#define ST_v346	((void*)startLabel+956)
#define PP_LAMBDA316	((void*)startLabel+992)
#define PC_LAMBDA316	((void*)startLabel+992)
#define ST_v352	((void*)startLabel+992)
#define ST_v330	((void*)startLabel+1044)
#define ST_v341	((void*)startLabel+1088)
#define PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+1130)
#define PC_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc	((void*)startLabel+1130)
#define ST_v334	((void*)startLabel+1130)
#define ST_v320	((void*)startLabel+1184)
#define PP_LAMBDA315	((void*)startLabel+1225)
#define PC_LAMBDA315	((void*)startLabel+1225)
#define ST_v326	((void*)startLabel+1225)
#define PS_v347	((void*)startLabel+1280)
#define PS_v345	((void*)startLabel+1292)
#define PS_v349	((void*)startLabel+1304)
#define PS_v348	((void*)startLabel+1316)
#define PS_v321	((void*)startLabel+1328)
#define PS_v319	((void*)startLabel+1340)
#define PS_v323	((void*)startLabel+1352)
#define PS_v322	((void*)startLabel+1364)
#define PS_v329	((void*)startLabel+1376)
#define PS_v331	((void*)startLabel+1388)
#define PS_v343	((void*)startLabel+1400)
#define PS_v340	((void*)startLabel+1412)
#define PS_v342	((void*)startLabel+1424)
#define PS_v335	((void*)startLabel+1436)
#define PS_v336	((void*)startLabel+1448)
#define PS_v338	((void*)startLabel+1460)
#define PS_v333	((void*)startLabel+1472)
#define PS_v337	((void*)startLabel+1484)
#define PS_v327	((void*)startLabel+1496)
#define PS_v325	((void*)startLabel+1508)
#define PS_v353	((void*)startLabel+1520)
#define PS_v351	((void*)startLabel+1532)
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
extern Node PC_NHC_46FFI_46malloc[];
extern Node PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node PC_NHC_46FFI_46mallocBytes[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_43[];
extern Node PC_NHC_46FFI_46sizeOf[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46Num_46Prelude_46Int_46_42[];
extern Node PC_NHC_46FFI_46newForeignPtr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v324)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v323)
, 0
, 0
, 0
, 0
, useLabel(PS_v322)
, 0
, 0
, 0
, 0
, useLabel(PS_v321)
, 0
, 0
, 0
, 0
, 1590001
, useLabel(ST_v320)
,	/* CT_v324: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes),1)
, useLabel(PS_v319)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46mallocBytes))
, CAPTAG(useLabel(FN_LAMBDA315),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v328)
,	/* FN_LAMBDA315: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v327)
, 0
, 0
, 0
, 0
, 1600008
, useLabel(ST_v326)
,	/* CT_v328: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA315: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA315),1)
, useLabel(PS_v325)
, 0
, 0
, 0
, useLabel(CF_NHC_46FFI_46finalizerFree)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, bytes2word(1,0,0,1)
, useLabel(CT_v332)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,HEAP_CVAL_P1)
, bytes2word(8,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v331)
, 0
, 0
, 0
, 0
, 1690001
, useLabel(ST_v330)
,	/* CT_v332: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray),1)
, useLabel(PS_v329)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc),1)
, useLabel(CF_Prelude_46undefined)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v339)
,	/* FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,9,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,HEAP_OFF_N1,13)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,10,HEAP_CVAL_N1)
, bytes2word(22,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,12,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, useLabel(PS_v338)
, 0
, 0
, 0
, 0
, useLabel(PS_v337)
, 0
, 0
, 0
, 0
, useLabel(PS_v336)
, 0
, 0
, 0
, 0
, useLabel(PS_v335)
, 0
, 0
, 0
, 0
, 1720005
, useLabel(ST_v334)
,	/* CT_v339: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc),3)
, useLabel(PS_v333)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_42))
, VAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrBytes))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v344)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,2,HEAP_INT_P1)
, bytes2word(1,PUSH_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_CVAL_N1,12)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1)
, bytes2word(2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v343)
, 0
, 0
, 0
, 0
, useLabel(PS_v342)
, 0
, 0
, 0
, 0
, 1790001
, useLabel(ST_v341)
,	/* CT_v344: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray0),2)
, useLabel(PS_v340)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Int_46_43))
, VAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtrArray))
, bytes2word(1,0,0,1)
, useLabel(CT_v350)
,};
Node FN_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_CVAL_N1,17,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,16,HEAP_OFF_N1)
, bytes2word(11,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v349)
, 0
, 0
, 0
, 0
, useLabel(PS_v348)
, 0
, 0
, 0
, 0
, useLabel(PS_v347)
, 0
, 0
, 0
, 0
, 1540001
, useLabel(ST_v346)
,	/* CT_v350: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
  CAPTAG(useLabel(FN_Foreign_46ForeignPtr_46mallocForeignPtr),1)
, useLabel(PS_v345)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46FFI_46malloc))
, CAPTAG(useLabel(FN_LAMBDA316),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v354)
,	/* FN_LAMBDA316: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,7)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(ZAP_ARG_I1,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v353)
, 0
, 0
, 0
, 0
, 1550008
, useLabel(ST_v352)
,	/* CT_v354: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA316: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA316),1)
, useLabel(PS_v351)
, 0
, 0
, 0
, useLabel(CF_NHC_46FFI_46finalizerFree)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
,};
Node PM_Foreign_46ForeignPtr[] = {
 	/* ST_v318: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,0,0)
,};
Node PP_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
 };
Node PC_Foreign_46ForeignPtr_46mallocForeignPtr[] = {
 	/* ST_v346: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,70,111,114)
, bytes2word(101,105,103,110)
,	/* PP_LAMBDA316: (byte 4) */
 	/* PC_LAMBDA316: (byte 4) */
 	/* ST_v352: (byte 4) */
  bytes2word(80,116,114,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,58)
, bytes2word(49,53,53,58)
, bytes2word(56,45,49,53)
, bytes2word(53,58,49,51)
, bytes2word(0,0,0,0)
,};
Node PP_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
 };
Node PC_Foreign_46ForeignPtr_46mallocForeignPtrArray[] = {
 	/* ST_v330: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,65)
, bytes2word(114,114,97,121)
, bytes2word(0,0,0,0)
,};
Node PP_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
 };
Node PC_Foreign_46ForeignPtr_46mallocForeignPtrArray0[] = {
 	/* ST_v341: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,65)
, bytes2word(114,114,97,121)
,	/* PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 2) */
 	/* PC_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc: (byte 2) */
 	/* ST_v334: (byte 2) */
  bytes2word(48,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,80,116,114)
, bytes2word(46,109,97,108)
, bytes2word(108,111,99,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,80,116)
, bytes2word(114,65,114,114)
, bytes2word(97,121,58,49)
, bytes2word(55,50,58,53)
, bytes2word(45,49,55,50)
, bytes2word(58,55,48,0)
,};
Node PP_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
 };
Node PC_Foreign_46ForeignPtr_46mallocForeignPtrBytes[] = {
 	/* ST_v320: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,80)
, bytes2word(116,114,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(80,116,114,66)
, bytes2word(121,116,101,115)
,	/* PP_LAMBDA315: (byte 1) */
 	/* PC_LAMBDA315: (byte 1) */
 	/* ST_v326: (byte 1) */
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
, bytes2word(115,58,49,54)
, bytes2word(48,58,56,45)
, bytes2word(49,54,48,58)
, bytes2word(50,48,0,0)
,	/* PS_v347: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtr)
, useLabel(PC_NHC_46FFI_46malloc)
,	/* PS_v345: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtr)
, useLabel(PC_Foreign_46ForeignPtr_46mallocForeignPtr)
,	/* PS_v349: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtr)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v348: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtr)
, useLabel(PC_LAMBDA316)
,	/* PS_v321: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrBytes)
, useLabel(PC_NHC_46FFI_46mallocBytes)
,	/* PS_v319: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrBytes)
, useLabel(PC_Foreign_46ForeignPtr_46mallocForeignPtrBytes)
,	/* PS_v323: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrBytes)
, useLabel(PC_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61)
,	/* PS_v322: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrBytes)
, useLabel(PC_LAMBDA315)
,	/* PS_v329: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrArray)
, useLabel(PC_Foreign_46ForeignPtr_46mallocForeignPtrArray)
,	/* PS_v331: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrArray)
, useLabel(PC_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
,	/* PS_v343: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrArray0)
, useLabel(PC_Foreign_46ForeignPtr_46mallocForeignPtrArray)
,	/* PS_v340: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrArray0)
, useLabel(PC_Foreign_46ForeignPtr_46mallocForeignPtrArray0)
,	/* PS_v342: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46mallocForeignPtrArray0)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_43)
,	/* PS_v335: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
, useLabel(PC_NHC_46FFI_46sizeOf)
,	/* PS_v336: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v338: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
, useLabel(PC_Foreign_46ForeignPtr_46mallocForeignPtrBytes)
,	/* PS_v333: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
, useLabel(PC_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
,	/* PS_v337: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_Foreign_46ForeignPtr_46Prelude_46238_46doMalloc)
, useLabel(PC_Prelude_46Num_46Prelude_46Int_46_42)
,	/* PS_v327: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_LAMBDA315)
, useLabel(PC_NHC_46FFI_46newForeignPtr)
,	/* PS_v325: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_LAMBDA315)
, useLabel(PC_LAMBDA315)
,	/* PS_v353: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_LAMBDA316)
, useLabel(PC_NHC_46FFI_46newForeignPtr)
,	/* PS_v351: (byte 0) */
  useLabel(PM_Foreign_46ForeignPtr)
, useLabel(PP_LAMBDA316)
, useLabel(PC_LAMBDA316)
,};
