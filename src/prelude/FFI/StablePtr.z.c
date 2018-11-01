#include "newmacros.h"
#include "runtime.h"

#define CT_v385	((void*)startLabel+36)
#define CT_v387	((void*)startLabel+92)
#define CT_v389	((void*)startLabel+152)
#define CT_v391	((void*)startLabel+208)
#define FN_LAMBDA382	((void*)startLabel+244)
#define CT_v393	((void*)startLabel+272)
#define F0_LAMBDA382	((void*)startLabel+280)
#define CT_v395	((void*)startLabel+328)
#define CT_v397	((void*)startLabel+380)
#define CT_v399	((void*)startLabel+428)
#define CT_v401	((void*)startLabel+488)
#define CT_v403	((void*)startLabel+544)
#define CT_v405	((void*)startLabel+604)
#define CT_v407	((void*)startLabel+660)
#define FN_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+688)
#define CT_v409	((void*)startLabel+716)
#define F0_NHC_46FFI_46freeStablePtr_35	((void*)startLabel+724)
#define CT_v411	((void*)startLabel+760)
#define FN_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+788)
#define CT_v413	((void*)startLabel+816)
#define F0_NHC_46FFI_46deRefStablePtr_35	((void*)startLabel+824)
#define CT_v415	((void*)startLabel+860)
#define FN_NHC_46FFI_46newStablePtr_35	((void*)startLabel+888)
#define CT_v417	((void*)startLabel+916)
#define F0_NHC_46FFI_46newStablePtr_35	((void*)startLabel+924)
#define CT_v419	((void*)startLabel+960)
#define CT_v421	((void*)startLabel+1032)
#define ST_v420	((void*)startLabel+1080)
#define ST_v394	((void*)startLabel+1115)
#define ST_v398	((void*)startLabel+1160)
#define ST_v390	((void*)startLabel+1204)
#define ST_v392	((void*)startLabel+1244)
#define ST_v402	((void*)startLabel+1296)
#define ST_v406	((void*)startLabel+1343)
#define ST_v386	((void*)startLabel+1390)
#define ST_v400	((void*)startLabel+1430)
#define ST_v404	((void*)startLabel+1477)
#define ST_v396	((void*)startLabel+1524)
#define ST_v388	((void*)startLabel+1566)
#define ST_v384	((void*)startLabel+1593)
#define ST_v414	((void*)startLabel+1620)
#define ST_v412	((void*)startLabel+1643)
#define ST_v410	((void*)startLabel+1667)
#define ST_v408	((void*)startLabel+1689)
#define ST_v418	((void*)startLabel+1712)
#define ST_v416	((void*)startLabel+1733)
extern Node TM_NHC_46FFI[];
void FR_NHC_46FFI_46castStablePtrToPtr(void);
extern Node FN_NHC_46FFI_46castPtr[];
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke[];
void FR_NHC_46FFI_46castPtrToStablePtr(void);
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_NHC_46FFI[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46const[];
extern Node FN_NHC_46FFI_46_95_46destruct[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[];
extern Node FN_NHC_46FFI_46_95_46pokeByteOff[];
extern Node FN_NHC_46FFI_46_95_46peekByteOff[];
extern Node FN_NHC_46FFI_46_95_46pokeElemOff[];
extern Node FN_NHC_46FFI_46_95_46peekElemOff[];
void FR_NHC_46FFI_46freeStablePtr_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46deRefStablePtr_35(void);
void FR_NHC_46FFI_46newStablePtr_35(void);

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v385)
,};
Node FN_NHC_46FFI_46castStablePtrToPtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castStablePtrToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 190001
, useLabel(ST_v384)
,	/* CT_v385: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castStablePtrToPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castStablePtrToPtr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v387)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 260003
, useLabel(ST_v386)
,	/* CT_v387: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46castStablePtrToPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke))
, bytes2word(1,0,0,1)
, useLabel(CT_v389)
,};
Node FN_NHC_46FFI_46castPtrToStablePtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castPtrToStablePtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 200001
, useLabel(ST_v388)
,	/* CT_v389: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castPtrToStablePtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castPtrToStablePtr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v391)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 250003
, useLabel(ST_v390)
,	/* CT_v391: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek))
, CAPTAG(useLabel(FN_LAMBDA382),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v393)
,	/* FN_LAMBDA382: (byte 0) */
  useLabel(TMSUB_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 250023
, useLabel(ST_v392)
,	/* CT_v393: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA382: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA382),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtrToStablePtr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v395)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 240003
, useLabel(ST_v394)
,	/* CT_v395: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment),1)
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v397)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 230003
, useLabel(ST_v396)
,	/* CT_v397: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf),1)
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v399)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 220010
, useLabel(ST_v398)
,	/* CT_v399: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46destruct))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v401)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 220010
, useLabel(ST_v400)
,	/* CT_v401: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v403)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 220010
, useLabel(ST_v402)
,	/* CT_v403: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v405)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 220010
, useLabel(ST_v404)
,	/* CT_v405: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v407)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
, 220010
, useLabel(ST_v406)
,	/* CT_v407: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v409)
,	/* FN_NHC_46FFI_46freeStablePtr_35: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46freeStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 170001
, useLabel(ST_v408)
,	/* CT_v409: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46freeStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46freeStablePtr_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v411)
,};
Node FN_NHC_46FFI_46freeStablePtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 170001
, useLabel(ST_v410)
,	/* CT_v411: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46freeStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46freeStablePtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46freeStablePtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v413)
,	/* FN_NHC_46FFI_46deRefStablePtr_35: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46deRefStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v412)
,	/* CT_v413: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46deRefStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46deRefStablePtr_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v415)
,};
Node FN_NHC_46FFI_46deRefStablePtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 160001
, useLabel(ST_v414)
,	/* CT_v415: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46deRefStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46deRefStablePtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46deRefStablePtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v417)
,	/* FN_NHC_46FFI_46newStablePtr_35: (byte 0) */
  useLabel(TM_NHC_46FFI)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46newStablePtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 150001
, useLabel(ST_v416)
,	/* CT_v417: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46newStablePtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46newStablePtr_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v419)
,};
Node FN_NHC_46FFI_46newStablePtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 150001
, useLabel(ST_v418)
,	/* CT_v419: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46newStablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newStablePtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46newStablePtr_35)
, bytes2word(0,0,0,0)
, useLabel(CT_v421)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
  useLabel(TM_NHC_46FFI)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_IN3,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
, 220010
, useLabel(ST_v420)
,	/* CT_v421: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr))
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46poke)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46sizeOf)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46pokeElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peekElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46peek)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46destruct)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46StablePtr_46alignment)
,	/* ST_v420: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
,	/* ST_v394: (byte 3) */
  bytes2word(116,114,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,83)
, bytes2word(116,111,114,97)
, bytes2word(98,108,101,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
, bytes2word(114,46,97,108)
, bytes2word(105,103,110,109)
,	/* ST_v398: (byte 4) */
  bytes2word(101,110,116,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,100)
, bytes2word(101,115,116,114)
,	/* ST_v390: (byte 4) */
  bytes2word(117,99,116,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
,	/* ST_v392: (byte 4) */
  bytes2word(101,101,107,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(101,101,107,58)
, bytes2word(50,53,58,50)
, bytes2word(51,45,50,53)
,	/* ST_v402: (byte 4) */
  bytes2word(58,51,56,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,112)
, bytes2word(101,101,107,66)
, bytes2word(121,116,101,79)
,	/* ST_v406: (byte 3) */
  bytes2word(102,102,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,83)
, bytes2word(116,111,114,97)
, bytes2word(98,108,101,46)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
, bytes2word(114,46,112,101)
, bytes2word(101,107,69,108)
, bytes2word(101,109,79,102)
,	/* ST_v386: (byte 2) */
  bytes2word(102,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,83,116)
, bytes2word(111,114,97,98)
, bytes2word(108,101,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,83)
, bytes2word(116,97,98,108)
, bytes2word(101,80,116,114)
, bytes2word(46,112,111,107)
,	/* ST_v400: (byte 2) */
  bytes2word(101,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,83,116)
, bytes2word(111,114,97,98)
, bytes2word(108,101,46,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,83)
, bytes2word(116,97,98,108)
, bytes2word(101,80,116,114)
, bytes2word(46,112,111,107)
, bytes2word(101,66,121,116)
, bytes2word(101,79,102,102)
,	/* ST_v404: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,111)
, bytes2word(114,97,98,108)
, bytes2word(101,46,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,83,116)
, bytes2word(97,98,108,101)
, bytes2word(80,116,114,46)
, bytes2word(112,111,107,101)
, bytes2word(69,108,101,109)
,	/* ST_v396: (byte 4) */
  bytes2word(79,102,102,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(83,116,111,114)
, bytes2word(97,98,108,101)
, bytes2word(46,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,46,115)
, bytes2word(105,122,101,79)
,	/* ST_v388: (byte 2) */
  bytes2word(102,0,78,72)
, bytes2word(67,46,70,70)
, bytes2word(73,46,99,97)
, bytes2word(115,116,80,116)
, bytes2word(114,84,111,83)
, bytes2word(116,97,98,108)
, bytes2word(101,80,116,114)
,	/* ST_v384: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,99,97,115)
, bytes2word(116,83,116,97)
, bytes2word(98,108,101,80)
, bytes2word(116,114,84,111)
,	/* ST_v414: (byte 4) */
  bytes2word(80,116,114,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(100,101,82,101)
, bytes2word(102,83,116,97)
, bytes2word(98,108,101,80)
,	/* ST_v412: (byte 3) */
  bytes2word(116,114,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,100)
, bytes2word(101,82,101,102)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
,	/* ST_v410: (byte 3) */
  bytes2word(114,35,0,78)
, bytes2word(72,67,46,70)
, bytes2word(70,73,46,102)
, bytes2word(114,101,101,83)
, bytes2word(116,97,98,108)
, bytes2word(101,80,116,114)
,	/* ST_v408: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,102,114,101)
, bytes2word(101,83,116,97)
, bytes2word(98,108,101,80)
,	/* ST_v418: (byte 4) */
  bytes2word(116,114,35,0)
, bytes2word(78,72,67,46)
, bytes2word(70,70,73,46)
, bytes2word(110,101,119,83)
, bytes2word(116,97,98,108)
, bytes2word(101,80,116,114)
,	/* ST_v416: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,70,70,73)
, bytes2word(46,110,101,119)
, bytes2word(83,116,97,98)
, bytes2word(108,101,80,116)
, bytes2word(114,35,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "castStablePtrToPtr" NHC.FFI.castStablePtrToPtr 1 :: FFI.StablePtr -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castStablePtrToPtr = {"NHC.FFI","NHC.FFI.castStablePtrToPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46castStablePtrToPtr) {
  NodePtr nodeptr;
  void* result;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castStablePtrToPtr);
  C_RETURN(nodeptr);
}

/* foreign import cast "castPtrToStablePtr" NHC.FFI.castPtrToStablePtr 1 :: FFI.Ptr -> FFI.StablePtr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castPtrToStablePtr = {"NHC.FFI","NHC.FFI.castPtrToStablePtr","FFI.StablePtr"};
#endif
C_HEADER(FR_NHC_46FFI_46castPtrToStablePtr) {
  NodePtr nodeptr;
  StablePtr result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (StablePtr)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castPtrToStablePtr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "freeStablePtr" NHC.FFI.freeStablePtr# 1 :: FFI.StablePtr -> Prelude.() */
extern void freeStablePtr(StablePtr);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46freeStablePtr_35 = {"NHC.FFI","NHC.FFI.freeStablePtr#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46FFI_46freeStablePtr_35) {
  NodePtr nodeptr;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  freeStablePtr(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46freeStablePtr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "derefStablePtr" NHC.FFI.deRefStablePtr# 1 :: FFI.StablePtr -> 1 */
extern Node* derefStablePtr(StablePtr);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46deRefStablePtr_35 = {"NHC.FFI","NHC.FFI.deRefStablePtr#","1"};
#endif
C_HEADER(FR_NHC_46FFI_46deRefStablePtr_35) {
  NodePtr nodeptr;
  Node* result;
  StablePtr arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (StablePtr)GET_INT_VALUE(nodeptr);

  result = derefStablePtr(arg1);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46deRefStablePtr_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "makeStablePtr" NHC.FFI.newStablePtr# 1 :: 1 -> FFI.StablePtr */
extern StablePtr makeStablePtr(Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46newStablePtr_35 = {"NHC.FFI","NHC.FFI.newStablePtr#","FFI.StablePtr"};
#endif
C_HEADER(FR_NHC_46FFI_46newStablePtr_35) {
  NodePtr nodeptr;
  StablePtr result;
  Node* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*)nodeptr;

  result = makeStablePtr(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46newStablePtr_35);
  C_RETURN(nodeptr);
}
