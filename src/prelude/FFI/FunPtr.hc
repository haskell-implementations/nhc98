#include "newmacros.h"
#include "runtime.h"

#define CT_v607	((void*)startLabel+24)
#define CT_v608	((void*)startLabel+60)
#define CT_v609	((void*)startLabel+104)
#define CT_v610	((void*)startLabel+140)
#define CT_v611	((void*)startLabel+176)
#define CT_v612	((void*)startLabel+228)
#define CT_v613	((void*)startLabel+284)
#define FN_LAMBDA604	((void*)startLabel+320)
#define CT_v614	((void*)startLabel+336)
#define F0_LAMBDA604	((void*)startLabel+344)
#define CT_v615	((void*)startLabel+380)
#define CT_v616	((void*)startLabel+420)
#define CT_v617	((void*)startLabel+456)
#define CT_v618	((void*)startLabel+504)
#define CT_v619	((void*)startLabel+548)
#define CT_v620	((void*)startLabel+596)
#define CT_v621	((void*)startLabel+640)
#define FN_NHC_46FFI_46funPtrToInt	((void*)startLabel+668)
#define CT_v622	((void*)startLabel+684)
#define F0_NHC_46FFI_46funPtrToInt	((void*)startLabel+692)
#define CT_v623	((void*)startLabel+744)
#define FN_LAMBDA605	((void*)startLabel+792)
#define CT_v625	((void*)startLabel+812)
#define CF_LAMBDA605	((void*)startLabel+820)
#define CT_v626	((void*)startLabel+844)
#define CT_v627	((void*)startLabel+884)
#define CT_v628	((void*)startLabel+924)
#define CT_v629	((void*)startLabel+976)
#define CT_v630	((void*)startLabel+1020)
#define CT_v631	((void*)startLabel+1064)
#define CT_v632	((void*)startLabel+1108)
#define CT_v633	((void*)startLabel+1152)
#define CT_v634	((void*)startLabel+1196)
#define CT_v635	((void*)startLabel+1240)
#define CT_v636	((void*)startLabel+1296)
#define CT_v637	((void*)startLabel+1336)
#define CT_v638	((void*)startLabel+1384)
#define CT_v639	((void*)startLabel+1444)
#define CT_v640	((void*)startLabel+1520)
#define CT_v641	((void*)startLabel+1592)
#define ST_v624	((void*)startLabel+1640)
void FR_NHC_46FFI_46castPtrToFunPtr(void);
void FR_NHC_46FFI_46castFunPtrToPtr(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NonStdUnsafeCoerce_46unsafeCoerce[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node FN_NHC_46FFI_46castPtr[];
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke[];
extern Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46const[];
extern Node FN_NHC_46FFI_46_95_46destruct[];
extern Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr[];
extern Node FN_NHC_46FFI_46_95_46pokeByteOff[];
extern Node FN_NHC_46FFI_46_95_46peekByteOff[];
extern Node FN_NHC_46FFI_46_95_46pokeElemOff[];
extern Node FN_NHC_46FFI_46_95_46peekElemOff[];
void FR_NHC_46FFI_46funPtrToInt(void);
extern Node FN_Prelude_46showString[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Numeric_46showHex[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node FN_Prelude_46_46[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46FunPtr[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Ord_46Prelude_46Int_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46FFI_46FunPtr[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46FunPtr[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v607)
,};
Node FN_NHC_46FFI_46castPtrToFunPtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castPtrToFunPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v607: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castPtrToFunPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castPtrToFunPtr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v608)
,};
Node FN_NHC_46FFI_46castFunPtrToPtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46castFunPtrToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v608: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46castFunPtrToPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castFunPtrToPtr),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v609)
,};
Node FN_NHC_46FFI_46freeHaskellFunPtr[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v609: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46freeHaskellFunPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46freeHaskellFunPtr),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v610)
,};
Node FN_NHC_46FFI_46castFunPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v610: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46castFunPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castFunPtr),1)
, VAPTAG(useLabel(FN_NonStdUnsafeCoerce_46unsafeCoerce))
, bytes2word(0,0,0,0)
, useLabel(CT_v611)
,};
Node FN_NHC_46FFI_46nullFunPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v611: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46nullFunPtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46nullFunPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtrToFunPtr))
, useLabel(CF_NHC_46FFI_46nullPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v612)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46poke[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v612: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46poke[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46poke),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46castFunPtrToPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46poke))
, bytes2word(1,0,0,1)
, useLabel(CT_v613)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peek[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v613: (byte 0) */
  HW(4,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peek[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peek),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtr))
, VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46Ptr_46peek))
, CAPTAG(useLabel(FN_LAMBDA604),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v614)
,	/* FN_LAMBDA604: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v614: (byte 0) */
  HW(2,1)
, 0
,	/* F0_LAMBDA604: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA604),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46castPtrToFunPtr))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v615)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46alignment[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v615: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46alignment[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46alignment),1)
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v616)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46sizeOf[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_INT_P1)
, bytes2word(4,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v616: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46sizeOf),1)
, VAPTAG(useLabel(FN_Prelude_46const))
, bytes2word(1,0,0,1)
, useLabel(CT_v617)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46destruct[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v617: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46destruct[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46destruct),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46destruct))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v618)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeByteOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v618: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeByteOff),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v619)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekByteOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v619: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekByteOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekByteOff),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekByteOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v620)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeElemOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_ARG)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v620: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeElemOff),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46pokeElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v621)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekElemOff[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v621: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekElemOff[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekElemOff),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95_46peekElemOff))
, useLabel(CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v622)
,	/* FN_NHC_46FFI_46funPtrToInt: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46funPtrToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v622: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46funPtrToInt: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46funPtrToInt),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v623)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsPrec[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,HEAP_CVAL_P1,6,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,11,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v623: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsPrec),2)
, VAPTAG(useLabel(FN_Prelude_46showString))
, VAPTAG(useLabel(FN_LAMBDA605))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Numeric_46showHex))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, VAPTAG(useLabel(FN_NHC_46FFI_46funPtrToInt))
, VAPTAG(useLabel(FN_Prelude_46_46))
, bytes2word(0,0,0,0)
, useLabel(CT_v625)
,	/* FN_LAMBDA605: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v624)
,	/* CT_v625: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA605: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA605))
, bytes2word(1,0,0,1)
, useLabel(CT_v626)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v626: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46FunPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v627)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v627: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46FunPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v628)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v628: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46FunPtr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v629)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v629: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46compare),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46funPtrToInt))
, VAPTAG(useLabel(FN_Prelude_46Ord_46Prelude_46Int_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v630)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v630: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v631)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v631: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v632)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v632: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v633)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v633: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v634)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v634: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v635)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v635: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v636)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(ZAP_ARG_I1,EVAL,EQ_W,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v636: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46funPtrToInt))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v637)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v637: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46FunPtr)
, bytes2word(0,0,0,0)
, useLabel(CT_v638)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46FunPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v638: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46FunPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46FunPtr))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46FunPtr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v639)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46FunPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v639: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46FunPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46FunPtr))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46FunPtr)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46FunPtr_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v640)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46FunPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v640: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46FunPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46FunPtr))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46FunPtr_46show)
, bytes2word(0,0,0,0)
, useLabel(CT_v641)
,};
Node FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,HEAP_CVAL_P1,11,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,9,0)
,	/* CT_v641: (byte 0) */
  HW(9,0)
, 0
,};
Node CF_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr))
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46poke)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46sizeOf)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekByteOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46pokeElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peekElemOff)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46peek)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46destruct)
, useLabel(F0_NHC_46FFI_46Storable_46NHC_46FFI_46FunPtr_46alignment)
,	/* ST_v624: (byte 0) */
  bytes2word(48,120,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import cast "castPtrToFunPtr" NHC.FFI.castPtrToFunPtr 1 :: FFI.Ptr -> FFI.FunPtr(2) */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castPtrToFunPtr = {"NHC.FFI","NHC.FFI.castPtrToFunPtr","FFI.FunPtr(2)"};
#endif
C_HEADER(FR_NHC_46FFI_46castPtrToFunPtr) {
  NodePtr nodeptr;
  Node*(*result)();
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  result = (Node*(*)())(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castPtrToFunPtr);
  C_RETURN(nodeptr);
}

/* foreign import cast "castFunPtrToPtr" NHC.FFI.castFunPtrToPtr 1 :: FFI.FunPtr(1) -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46castFunPtrToPtr = {"NHC.FFI","NHC.FFI.castFunPtrToPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46castFunPtrToPtr) {
  NodePtr nodeptr;
  void* result;
  Node*(*arg1)();
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*(*)())GET_INT_VALUE(nodeptr);

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46castFunPtrToPtr);
  C_RETURN(nodeptr);
}

/* foreign import cast "funPtrToInt" NHC.FFI.funPtrToInt 1 :: FFI.FunPtr(1) -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46funPtrToInt = {"NHC.FFI","NHC.FFI.funPtrToInt","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46funPtrToInt) {
  NodePtr nodeptr;
  HsInt result;
  Node*(*arg1)();
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (Node*(*)())GET_INT_VALUE(nodeptr);

  result = (HsInt)(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46funPtrToInt);
  C_RETURN(nodeptr);
}
