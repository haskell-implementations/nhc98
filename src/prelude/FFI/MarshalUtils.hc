#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46FFI_46_95memmove_35	((void*)startLabel+12)
#define CT_v514	((void*)startLabel+36)
#define F0_NHC_46FFI_46_95memmove_35	((void*)startLabel+44)
#define FN_NHC_46FFI_46_95memmove	((void*)startLabel+56)
#define CT_v515	((void*)startLabel+68)
#define CF_NHC_46FFI_46_95memmove	((void*)startLabel+76)
#define FN_NHC_46FFI_46_95memcpy_35	((void*)startLabel+100)
#define CT_v516	((void*)startLabel+124)
#define F0_NHC_46FFI_46_95memcpy_35	((void*)startLabel+132)
#define FN_NHC_46FFI_46_95memcpy	((void*)startLabel+144)
#define CT_v517	((void*)startLabel+156)
#define CF_NHC_46FFI_46_95memcpy	((void*)startLabel+164)
#define CT_v518	((void*)startLabel+236)
#define CT_v519	((void*)startLabel+340)
#define v521	((void*)startLabel+406)
#define v522	((void*)startLabel+415)
#define CT_v524	((void*)startLabel+444)
#define FN_LAMBDA506	((void*)startLabel+488)
#define CT_v525	((void*)startLabel+508)
#define F0_LAMBDA506	((void*)startLabel+516)
#define FN_LAMBDA505	((void*)startLabel+540)
#define CT_v526	((void*)startLabel+576)
#define F0_LAMBDA505	((void*)startLabel+584)
#define v527	((void*)startLabel+618)
#define v529	((void*)startLabel+640)
#define CT_v531	((void*)startLabel+664)
#define FN_LAMBDA508	((void*)startLabel+720)
#define CT_v533	((void*)startLabel+740)
#define CF_LAMBDA508	((void*)startLabel+748)
#define FN_LAMBDA507	((void*)startLabel+760)
#define CT_v534	((void*)startLabel+784)
#define F0_LAMBDA507	((void*)startLabel+792)
#define CT_v535	((void*)startLabel+824)
#define CT_v536	((void*)startLabel+876)
#define CT_v537	((void*)startLabel+948)
#define v539	((void*)startLabel+1002)
#define v540	((void*)startLabel+1014)
#define CT_v542	((void*)startLabel+1048)
#define CT_v543	((void*)startLabel+1100)
#define FN_LAMBDA510	((void*)startLabel+1140)
#define CT_v544	((void*)startLabel+1180)
#define F0_LAMBDA510	((void*)startLabel+1188)
#define FN_LAMBDA509	((void*)startLabel+1228)
#define CT_v545	((void*)startLabel+1256)
#define F0_LAMBDA509	((void*)startLabel+1264)
#define CT_v546	((void*)startLabel+1316)
#define FN_LAMBDA511	((void*)startLabel+1352)
#define CT_v547	((void*)startLabel+1380)
#define F0_LAMBDA511	((void*)startLabel+1388)
#define ST_v532	((void*)startLabel+1408)
void FR_NHC_46FFI_46_95memmove_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
void FR_NHC_46FFI_46_95memcpy_35(void);
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node C0_Prelude_46_91_93[];
extern Node FN_Prelude_46_36[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46_36[];
extern Node FN_Prelude_46maybe[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_NHC_46FFI_46alloca[];
extern Node FN_NHC_46FFI_46poke[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_NHC_46FFI_46destruct[];
extern Node FN_NHC_46FFI_46malloc[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v514)
,	/* FN_NHC_46FFI_46_95memmove_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46FFI_46_95memmove_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v514: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46FFI_46_95memmove_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46_95memmove_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v515)
,	/* FN_NHC_46FFI_46_95memmove: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v515: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46_95memmove: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46_95memmove))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46FFI_46_95memmove_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v516)
,	/* FN_NHC_46FFI_46_95memcpy_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_NHC_46FFI_46_95memcpy_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v516: (byte 0) */
  HW(0,3)
, 0
,	/* F0_NHC_46FFI_46_95memcpy_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46_95memcpy_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v517)
,	/* FN_NHC_46FFI_46_95memcpy: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v517: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46_95memcpy: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46_95memcpy))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_NHC_46FFI_46_95memcpy_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v518)
,};
Node FN_NHC_46FFI_46moveBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_N1,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v518: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_NHC_46FFI_46moveBytes[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46moveBytes),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95memmove))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v519)
,};
Node FN_NHC_46FFI_46copyBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_N1,1,HEAP_CVAL_P1)
, bytes2word(9,HEAP_OFF_N1,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,9)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v519: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_NHC_46FFI_46copyBytes[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46copyBytes),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46_95memcpy))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v524)
,};
Node FN_NHC_46FFI_46withMany[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v521: (byte 2) */
  bytes2word(TOP(13),BOT(13),POP_I1,PUSH_CVAL_P1)
, bytes2word(3,PUSH_ARG_I3,EVAL,NEEDHEAP_I32)
,	/* v522: (byte 3) */
  bytes2word(APPLY,1,RETURN_EVAL,UNPACK)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v524: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_NHC_46FFI_46withMany[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46withMany),3)
, useLabel(C0_Prelude_46_91_93)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA506),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v525)
,	/* FN_LAMBDA506: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,4)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v525: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA506: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA506),4)
, CAPTAG(useLabel(FN_LAMBDA505),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46withMany))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v526)
,	/* FN_LAMBDA505: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v526: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA505: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA505),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v531)
,};
Node FN_NHC_46FFI_46maybePeek[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,9,0,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
,	/* v527: (byte 2) */
  bytes2word(2,RETURN_EVAL,PUSH_CVAL_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,17)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
,	/* v529: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v531: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_NHC_46FFI_46maybePeek[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46maybePeek),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA507),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_LAMBDA508))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v533)
,	/* FN_LAMBDA508: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v532)
,	/* CT_v533: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA508: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA508))
, bytes2word(1,0,0,1)
, useLabel(CT_v534)
,	/* FN_LAMBDA507: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v534: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA507: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA507),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v535)
,};
Node FN_NHC_46FFI_46maybeWith[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v535: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_NHC_46FFI_46maybeWith[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46maybeWith))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46_36)
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_Prelude_46maybe),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v536)
,};
Node FN_NHC_46FFI_46maybeNew[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v536: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_NHC_46FFI_46maybeNew[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46maybeNew))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_Prelude_46maybe),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v537)
,};
Node FN_NHC_46FFI_46toBool[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_CVAL_I5)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,3,HEAP_CADR_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,5,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(0,0)
,	/* CT_v537: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_NHC_46FFI_46toBool[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46toBool),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v542)
,};
Node FN_NHC_46FFI_46fromBool[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v539: (byte 2) */
  bytes2word(TOP(16),BOT(16),POP_I1,PUSH_CADR_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,APPLY)
,	/* v540: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CADR_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
,	/* CT_v542: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46fromBool[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46fromBool),2)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v543)
,};
Node FN_NHC_46FFI_46with[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,2,3)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v543: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46FFI_46with[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46with),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46alloca))
, CAPTAG(useLabel(FN_LAMBDA510),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v544)
,	/* FN_LAMBDA510: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(4,1,HEAP_CVAL_I5,HEAP_ARG_ARG)
, bytes2word(2,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG_ARG,3,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,7,HEAP_OFF_N1)
, bytes2word(5,PUSH_HEAP,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,14,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v544: (byte 0) */
  HW(6,4)
, 0
,	/* F0_LAMBDA510: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA510),4)
, VAPTAG(useLabel(FN_NHC_46FFI_46poke))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA509),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v545)
,	/* FN_LAMBDA509: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(6,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v545: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA509: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA509),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46destruct))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v546)
,};
Node FN_NHC_46FFI_46new[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v546: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_NHC_46FFI_46new[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46new),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46malloc))
, CAPTAG(useLabel(FN_LAMBDA511),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v547)
,	/* FN_LAMBDA511: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(3,2,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v547: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA511: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA511),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46poke))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v532: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(70,70,73,58)
, bytes2word(32,80,97,116)
, bytes2word(116,101,114,110)
, bytes2word(32,109,97,116)
, bytes2word(99,104,32,102)
, bytes2word(97,105,108,117)
, bytes2word(114,101,32,105)
, bytes2word(110,32,102,117)
, bytes2word(110,99,116,105)
, bytes2word(111,110,32,97)
, bytes2word(116,32,57,54)
, bytes2word(58,49,45,57)
, bytes2word(55,58,55,50)
, bytes2word(46,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "memmove" NHC.FFI._memmove# 3 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46_95memmove_35 = {"NHC.FFI","NHC.FFI._memmove#","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46_95memmove_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = memmove(arg1,arg2,arg3);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46_95memmove_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "memcpy" NHC.FFI._memcpy# 3 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46_95memcpy_35 = {"NHC.FFI","NHC.FFI._memcpy#","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46_95memcpy_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  void* arg2;
  HsInt arg3;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(3);
  IND_REMOVE(nodeptr);
  arg3 = (HsInt)GET_INT_VALUE(nodeptr);

  result = memcpy(arg1,arg2,arg3);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46_95memcpy_35);
  C_RETURN(nodeptr);
}
