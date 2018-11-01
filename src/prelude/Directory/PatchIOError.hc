#include "newmacros.h"
#include "runtime.h"

#define FN_Directory_46returnEither	((void*)startLabel+16)
#define v295	((void*)startLabel+36)
#define CT_v297	((void*)startLabel+48)
#define F0_Directory_46returnEither	((void*)startLabel+56)
#define FN_LAMBDA289	((void*)startLabel+88)
#define CT_v298	((void*)startLabel+116)
#define F0_LAMBDA289	((void*)startLabel+124)
#define CT_v299	((void*)startLabel+168)
#define FN_LAMBDA290	((void*)startLabel+204)
#define CT_v303	((void*)startLabel+236)
#define F0_LAMBDA290	((void*)startLabel+244)
#define CT_v304	((void*)startLabel+288)
#define FN_LAMBDA291	((void*)startLabel+324)
#define CT_v305	((void*)startLabel+356)
#define F0_LAMBDA291	((void*)startLabel+364)
#define CT_v306	((void*)startLabel+400)
#define FN_LAMBDA292	((void*)startLabel+432)
#define CT_v310	((void*)startLabel+464)
#define F0_LAMBDA292	((void*)startLabel+472)
#define CT_v311	((void*)startLabel+508)
#define FN_LAMBDA293	((void*)startLabel+540)
#define CT_v312	((void*)startLabel+572)
#define F0_LAMBDA293	((void*)startLabel+580)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node CF_NHC_46FFI_46getErrNo[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node FN_NHC_46Internal_46_95apply1[];

static Node startLabel[] = {
  bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v297)
,	/* FN_Directory_46returnEither: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_INT_N1,1,PUSH_ZAP_ARG_I3)
, bytes2word(EVAL,NEEDHEAP_I32,EQ_W,JUMPFALSE)
, bytes2word(12,0,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(1,2,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v295: (byte 4) */
  bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_ARG)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v297: (byte 0) */
  HW(4,4)
, 0
,	/* F0_Directory_46returnEither: (byte 0) */
  CAPTAG(useLabel(FN_Directory_46returnEither),4)
, CAPTAG(useLabel(FN_LAMBDA289),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, useLabel(CF_NHC_46FFI_46getErrNo)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v298)
,	/* FN_LAMBDA289: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v298: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA289: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA289),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v299)
,};
Node FN_Directory_46patchIOErrorFVal[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,3)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v299: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Directory_46patchIOErrorFVal[] = {
  CAPTAG(useLabel(FN_Directory_46patchIOErrorFVal),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA290),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v303)
,	/* FN_LAMBDA290: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I3,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,2,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,4)
, bytes2word(HEAP_I1,HEAP_I2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v303: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA290: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA290),3)
, VAPTAG(useLabel(FN_Directory_46returnEither))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v304)
,};
Node FN_Directory_46patchIOErrorF[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,3)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG_ARG,1)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v304: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Directory_46patchIOErrorF[] = {
  CAPTAG(useLabel(FN_Directory_46patchIOErrorF),3)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA291),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v305)
,	/* FN_LAMBDA291: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(5,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, CONSTR(0,0,0)
, CONSTR(1,1,0)
,	/* CT_v305: (byte 0) */
  HW(1,3)
, 0
,	/* F0_LAMBDA291: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA291),3)
, VAPTAG(useLabel(FN_Directory_46returnEither))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v306)
,};
Node FN_Directory_46patchIOErrorVal[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v306: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Directory_46patchIOErrorVal[] = {
  CAPTAG(useLabel(FN_Directory_46patchIOErrorVal),2)
, CAPTAG(useLabel(FN_LAMBDA292),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v310)
,	/* FN_LAMBDA292: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(UNPACK,2,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,3,HEAP_I1,HEAP_I2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v310: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA292: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA292),2)
, VAPTAG(useLabel(FN_Directory_46returnEither))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v311)
,};
Node FN_Directory_46patchIOError[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v311: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Directory_46patchIOError[] = {
  CAPTAG(useLabel(FN_Directory_46patchIOError),2)
, CAPTAG(useLabel(FN_LAMBDA293),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v312)
,	/* FN_LAMBDA293: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v312: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA293: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA293),2)
, VAPTAG(useLabel(FN_Directory_46returnEither))
,};
