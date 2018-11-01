#include "newmacros.h"
#include "runtime.h"

#define CT_v236	((void*)startLabel+52)
#define FN_LAMBDA233	((void*)startLabel+96)
#define CT_v238	((void*)startLabel+144)
#define F0_LAMBDA233	((void*)startLabel+152)
#define FN_LAMBDA232	((void*)startLabel+188)
#define CT_v240	((void*)startLabel+212)
#define F0_LAMBDA232	((void*)startLabel+220)
#define FN_LAMBDA231	((void*)startLabel+232)
#define CT_v242	((void*)startLabel+256)
#define F0_LAMBDA231	((void*)startLabel+264)
#define CT_v244	((void*)startLabel+320)
#define ST_v234	((void*)startLabel+348)
#define ST_v235	((void*)startLabel+359)
#define ST_v237	((void*)startLabel+388)
#define ST_v241	((void*)startLabel+429)
#define ST_v239	((void*)startLabel+470)
#define ST_v243	((void*)startLabel+505)
extern Node TM_Data_46IORef[];
extern Node FN_NHC_46IOExtras_46readIORef[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46_36[];
extern Node F0_NHC_46IOExtras_46excludeFinalisers[];
extern Node TMSUB_Data_46IORef[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46IOExtras_46writeIORef[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46_46[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v236)
,};
Node FN_Data_46IORef_46atomicModifyIORef[] = {
  useLabel(TM_Data_46IORef)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,1)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,6,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 880001
, useLabel(ST_v235)
,	/* CT_v236: (byte 0) */
  HW(5,2)
, 0
,};
Node F0_Data_46IORef_46atomicModifyIORef[] = {
  CAPTAG(useLabel(FN_Data_46IORef_46atomicModifyIORef),2)
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, CAPTAG(useLabel(FN_LAMBDA233),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46IOExtras_46excludeFinalisers)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v238)
,	/* FN_LAMBDA233: (byte 0) */
  useLabel(TMSUB_Data_46IORef)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,6,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,2,HEAP_I1,HEAP_CVAL_P1)
, bytes2word(7,HEAP_P1,0,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 900010
, useLabel(ST_v237)
,	/* CT_v238: (byte 0) */
  HW(6,3)
, 0
,	/* F0_LAMBDA233: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA233),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_LAMBDA231))
, VAPTAG(useLabel(FN_LAMBDA232))
, VAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v240)
,	/* FN_LAMBDA232: (byte 0) */
  useLabel(TMSUB_Data_46IORef)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 910013
, useLabel(ST_v239)
,	/* CT_v240: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA232: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA232),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v242)
,	/* FN_LAMBDA231: (byte 0) */
  useLabel(TMSUB_Data_46IORef)
, bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 910010
, useLabel(ST_v241)
,	/* CT_v242: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA231: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA231),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v244)
,};
Node FN_Data_46IORef_46modifyIORef[] = {
  useLabel(TM_Data_46IORef)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 650001
, useLabel(ST_v243)
,	/* CT_v244: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Data_46IORef_46modifyIORef[] = {
  CAPTAG(useLabel(FN_Data_46IORef_46modifyIORef),2)
, VAPTAG(useLabel(FN_NHC_46IOExtras_46readIORef))
, CAPTAG(useLabel(FN_NHC_46IOExtras_46writeIORef),1)
, VAPTAG(useLabel(FN_Prelude_46_46))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
,};
Node PM_Data_46IORef[] = {
 	/* ST_v234: (byte 0) */
  bytes2word(68,97,116,97)
, bytes2word(46,73,79,82)
,	/* ST_v235: (byte 3) */
  bytes2word(101,102,0,68)
, bytes2word(97,116,97,46)
, bytes2word(73,79,82,101)
, bytes2word(102,46,97,116)
, bytes2word(111,109,105,99)
, bytes2word(77,111,100,105)
, bytes2word(102,121,73,79)
,	/* ST_v237: (byte 4) */
  bytes2word(82,101,102,0)
, bytes2word(68,97,116,97)
, bytes2word(46,73,79,82)
, bytes2word(101,102,46,97)
, bytes2word(116,111,109,105)
, bytes2word(99,77,111,100)
, bytes2word(105,102,121,73)
, bytes2word(79,82,101,102)
, bytes2word(58,57,48,58)
, bytes2word(49,48,45,57)
, bytes2word(48,58,50,48)
,	/* ST_v241: (byte 1) */
  bytes2word(0,68,97,116)
, bytes2word(97,46,73,79)
, bytes2word(82,101,102,46)
, bytes2word(97,116,111,109)
, bytes2word(105,99,77,111)
, bytes2word(100,105,102,121)
, bytes2word(73,79,82,101)
, bytes2word(102,58,57,49)
, bytes2word(58,49,48,45)
, bytes2word(57,49,58,49)
,	/* ST_v239: (byte 2) */
  bytes2word(49,0,68,97)
, bytes2word(116,97,46,73)
, bytes2word(79,82,101,102)
, bytes2word(46,97,116,111)
, bytes2word(109,105,99,77)
, bytes2word(111,100,105,102)
, bytes2word(121,73,79,82)
, bytes2word(101,102,58,57)
, bytes2word(49,58,49,51)
,	/* ST_v243: (byte 1) */
  bytes2word(0,68,97,116)
, bytes2word(97,46,73,79)
, bytes2word(82,101,102,46)
, bytes2word(109,111,100,105)
, bytes2word(102,121,73,79)
, bytes2word(82,101,102,0)
,};
