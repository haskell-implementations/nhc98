#include "newmacros.h"
#include "runtime.h"

#define FN_Foreign_46Marshal_46Utils_46memmove_35	((void*)startLabel+12)
#define CT_v548	((void*)startLabel+36)
#define F0_Foreign_46Marshal_46Utils_46memmove_35	((void*)startLabel+44)
#define FN_Foreign_46Marshal_46Utils_46memmove	((void*)startLabel+56)
#define CT_v549	((void*)startLabel+68)
#define CF_Foreign_46Marshal_46Utils_46memmove	((void*)startLabel+76)
#define FN_Foreign_46Marshal_46Utils_46memcpy_35	((void*)startLabel+100)
#define CT_v550	((void*)startLabel+124)
#define F0_Foreign_46Marshal_46Utils_46memcpy_35	((void*)startLabel+132)
#define FN_Foreign_46Marshal_46Utils_46memcpy	((void*)startLabel+144)
#define CT_v551	((void*)startLabel+156)
#define CF_Foreign_46Marshal_46Utils_46memcpy	((void*)startLabel+164)
#define CT_v552	((void*)startLabel+224)
#define FN_LAMBDA537	((void*)startLabel+276)
#define CT_v553	((void*)startLabel+300)
#define F0_LAMBDA537	((void*)startLabel+308)
#define CT_v554	((void*)startLabel+364)
#define FN_LAMBDA538	((void*)startLabel+416)
#define CT_v555	((void*)startLabel+440)
#define F0_LAMBDA538	((void*)startLabel+448)
#define v557	((void*)startLabel+478)
#define v558	((void*)startLabel+487)
#define CT_v560	((void*)startLabel+516)
#define FN_LAMBDA540	((void*)startLabel+560)
#define CT_v561	((void*)startLabel+580)
#define F0_LAMBDA540	((void*)startLabel+588)
#define FN_LAMBDA539	((void*)startLabel+612)
#define CT_v562	((void*)startLabel+648)
#define F0_LAMBDA539	((void*)startLabel+656)
#define v563	((void*)startLabel+690)
#define v565	((void*)startLabel+712)
#define CT_v567	((void*)startLabel+736)
#define FN_LAMBDA542	((void*)startLabel+792)
#define CT_v569	((void*)startLabel+812)
#define CF_LAMBDA542	((void*)startLabel+820)
#define FN_LAMBDA541	((void*)startLabel+832)
#define CT_v570	((void*)startLabel+856)
#define F0_LAMBDA541	((void*)startLabel+864)
#define CT_v571	((void*)startLabel+896)
#define CT_v572	((void*)startLabel+948)
#define CT_v573	((void*)startLabel+1020)
#define v575	((void*)startLabel+1074)
#define v576	((void*)startLabel+1086)
#define CT_v578	((void*)startLabel+1120)
#define CT_v579	((void*)startLabel+1172)
#define FN_LAMBDA544	((void*)startLabel+1212)
#define CT_v580	((void*)startLabel+1248)
#define F0_LAMBDA544	((void*)startLabel+1256)
#define FN_LAMBDA543	((void*)startLabel+1292)
#define CT_v581	((void*)startLabel+1304)
#define F0_LAMBDA543	((void*)startLabel+1312)
#define CT_v582	((void*)startLabel+1352)
#define FN_LAMBDA545	((void*)startLabel+1388)
#define CT_v583	((void*)startLabel+1416)
#define F0_LAMBDA545	((void*)startLabel+1424)
#define ST_v568	((void*)startLabel+1444)
void FR_Foreign_46Marshal_46Utils_46memmove_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok3[];
void FR_Foreign_46Marshal_46Utils_46memcpy_35(void);
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply3[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node C0_Prelude_46_91_93[];
extern Node FN_Prelude_46_36[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node CF_Prelude_46otherwise[];
extern Node FN_NHC_46Internal_46_95patternMatchFail[];
extern Node FN_Prelude_46flip[];
extern Node F0_Prelude_46_36[];
extern Node FN_Prelude_46maybe[];
extern Node FN_Prelude_46Num_46Prelude_46Eq[];
extern Node FN_Prelude_46_47_61[];
extern Node FN_Prelude_46fromInteger[];
extern Node FN_Foreign_46Marshal_46Alloc_46alloca[];
extern Node FN_NHC_46FFI_46poke[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Foreign_46Marshal_46Alloc_46malloc[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v548)
,	/* FN_Foreign_46Marshal_46Utils_46memmove_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Foreign_46Marshal_46Utils_46memmove_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v548: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Foreign_46Marshal_46Utils_46memmove_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46memmove_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v549)
,	/* FN_Foreign_46Marshal_46Utils_46memmove: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v549: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Utils_46memmove: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46memmove))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_Foreign_46Marshal_46Utils_46memmove_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v550)
,	/* FN_Foreign_46Marshal_46Utils_46memcpy_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PUSH_ARG_I3,EVAL)
, bytes2word(POP_I1,PRIMITIVE,NOP,NOP)
, useLabel(FR_Foreign_46Marshal_46Utils_46memcpy_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v550: (byte 0) */
  HW(0,3)
, 0
,	/* F0_Foreign_46Marshal_46Utils_46memcpy_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46memcpy_35),3)
, bytes2word(0,0,0,0)
, useLabel(CT_v551)
,	/* FN_Foreign_46Marshal_46Utils_46memcpy: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v551: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Utils_46memcpy: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46memcpy))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok3))
, useLabel(F0_Foreign_46Marshal_46Utils_46memcpy_35)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v552)
,};
Node FN_Foreign_46Marshal_46Utils_46moveBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v552: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46moveBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46moveBytes),3)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46memmove))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA537),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v553)
,	/* FN_LAMBDA537: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v553: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA537: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA537),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v554)
,};
Node FN_Foreign_46Marshal_46Utils_46copyBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG,3)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,8)
, bytes2word(HEAP_ARG_ARG,1,2,HEAP_OFF_N1)
, bytes2word(7,HEAP_CVAL_P1,9,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,3,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v554: (byte 0) */
  HW(8,3)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46copyBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46copyBytes),3)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46memcpy))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply3))
, CAPTAG(useLabel(FN_LAMBDA538),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(1,0,0,1)
, useLabel(CT_v555)
,	/* FN_LAMBDA538: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v555: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA538: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA538),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v560)
,};
Node FN_Foreign_46Marshal_46Utils_46withMany[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v557: (byte 2) */
  bytes2word(TOP(13),BOT(13),POP_I1,PUSH_CVAL_P1)
, bytes2word(3,PUSH_ARG_I3,EVAL,NEEDHEAP_I32)
,	/* v558: (byte 3) */
  bytes2word(APPLY,1,RETURN_EVAL,UNPACK)
, bytes2word(2,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_P1,0,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(1,HEAP_I1,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v560: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46withMany[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46withMany),3)
, useLabel(C0_Prelude_46_91_93)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA540),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v561)
,	/* FN_LAMBDA540: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG_ARG,4)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v561: (byte 0) */
  HW(2,4)
, 0
,	/* F0_LAMBDA540: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA540),4)
, CAPTAG(useLabel(FN_LAMBDA539),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46withMany))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v562)
,	/* FN_LAMBDA539: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,3,PUSH_P1)
, bytes2word(0,PUSH_ARG_I2,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v562: (byte 0) */
  HW(0,3)
, 0
,	/* F0_LAMBDA539: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA539),3)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v567)
,};
Node FN_Foreign_46Marshal_46Utils_46maybePeek[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,9,0,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
,	/* v563: (byte 2) */
  bytes2word(2,RETURN_EVAL,PUSH_CVAL_P1,6)
, bytes2word(EVAL,NEEDHEAP_I32,JUMPFALSE,17)
, bytes2word(0,HEAP_CVAL_P1,7,HEAP_ARG_ARG)
, bytes2word(1,2,HEAP_CVAL_P1,8)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
,	/* v565: (byte 4) */
  bytes2word(5,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(HEAP_CVAL_P1,10,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(11,HEAP_OFF_N1,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v567: (byte 0) */
  HW(9,2)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46maybePeek[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46maybePeek),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, useLabel(CF_Prelude_46otherwise)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA541),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_LAMBDA542))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95patternMatchFail))
, bytes2word(0,0,0,0)
, useLabel(CT_v569)
,	/* FN_LAMBDA542: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v568)
,	/* CT_v569: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA542: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA542))
, bytes2word(1,0,0,1)
, useLabel(CT_v570)
,	/* FN_LAMBDA541: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_ARG)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v570: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA541: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA541),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v571)
,};
Node FN_Foreign_46Marshal_46Utils_46maybeWith[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Foreign_46Marshal_46Utils_46maybeWith[] = {
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46maybeWith))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, useLabel(F0_Prelude_46_36)
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_Prelude_46maybe),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v572)
,};
Node FN_Foreign_46Marshal_46Utils_46maybeNew[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v572: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Foreign_46Marshal_46Utils_46maybeNew[] = {
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46maybeNew))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, useLabel(CF_NHC_46FFI_46nullPtr)
, CAPTAG(useLabel(FN_Prelude_46maybe),2)
, bytes2word(1,0,0,1)
, useLabel(CT_v573)
,};
Node FN_Foreign_46Marshal_46Utils_46toBool[] = {
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
,	/* CT_v573: (byte 0) */
  HW(5,1)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46toBool[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46toBool),1)
, VAPTAG(useLabel(FN_Prelude_46Num_46Prelude_46Eq))
, VAPTAG(useLabel(FN_Prelude_46_47_61))
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_Prelude_46flip),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v578)
,};
Node FN_Foreign_46Marshal_46Utils_46fromBool[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v575: (byte 2) */
  bytes2word(TOP(16),BOT(16),POP_I1,PUSH_CADR_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,EVAL,NEEDHEAP_I32,APPLY)
,	/* v576: (byte 2) */
  bytes2word(1,RETURN_EVAL,POP_I1,PUSH_CADR_N1)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTRW(1,0)
, 1
, CONSTRW(0,0)
,	/* CT_v578: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46fromBool[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46fromBool),2)
, VAPTAG(useLabel(FN_Prelude_46fromInteger))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v579)
,};
Node FN_Foreign_46Marshal_46Utils_46with[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v579: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46with[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46with),3)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46alloca))
, CAPTAG(useLabel(FN_LAMBDA544),1)
, VAPTAG(useLabel(FN_Prelude_46_36))
, bytes2word(0,0,4,0)
, bytes2word(3,1,2,2)
, bytes2word(1,3,0,4)
, useLabel(CT_v580)
,	/* FN_LAMBDA544: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(4,2,HEAP_CVAL_I5,HEAP_ARG_ARG)
, bytes2word(3,4,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(HEAP_OFF_N1,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_OFF_N1,12,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v580: (byte 0) */
  HW(6,4)
, 0
,	/* F0_LAMBDA544: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA544),4)
, VAPTAG(useLabel(FN_NHC_46FFI_46poke))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, CAPTAG(useLabel(FN_LAMBDA543),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(1,0,0,1)
, useLabel(CT_v581)
,	/* FN_LAMBDA543: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v581: (byte 0) */
  HW(1,1)
, 0
,	/* F0_LAMBDA543: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA543),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v582)
,};
Node FN_Foreign_46Marshal_46Utils_46new[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG_ARG,1,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v582: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Foreign_46Marshal_46Utils_46new[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Utils_46new),2)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46malloc))
, CAPTAG(useLabel(FN_LAMBDA545),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v583)
,	/* FN_LAMBDA545: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG_ARG)
, bytes2word(3,2,HEAP_CVAL_I5,HEAP_ARG)
, bytes2word(3,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v583: (byte 0) */
  HW(4,3)
, 0
,	/* F0_LAMBDA545: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA545),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46poke))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
,	/* ST_v568: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(85,116,105,108)
, bytes2word(115,58,32,80)
, bytes2word(97,116,116,101)
, bytes2word(114,110,32,109)
, bytes2word(97,116,99,104)
, bytes2word(32,102,97,105)
, bytes2word(108,117,114,101)
, bytes2word(32,105,110,32)
, bytes2word(102,117,110,99)
, bytes2word(116,105,111,110)
, bytes2word(32,97,116,32)
, bytes2word(49,51,53,58)
, bytes2word(49,45,49,51)
, bytes2word(54,58,55,50)
, bytes2word(46,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "string.h memmove" Foreign.Marshal.Utils.memmove# 3 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int -> FFI.Ptr */
#include "string.h"
#ifdef PROFILE
static SInfo pf_Foreign_46Marshal_46Utils_46memmove_35 = {"Foreign.Marshal.Utils","Foreign.Marshal.Utils.memmove#","FFI.Ptr"};
#endif
C_HEADER(FR_Foreign_46Marshal_46Utils_46memmove_35) {
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
  INIT_PROFINFO(nodeptr,&pf_Foreign_46Marshal_46Utils_46memmove_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "string.h memcpy" Foreign.Marshal.Utils.memcpy# 3 :: FFI.Ptr -> FFI.Ptr -> Prelude.Int -> FFI.Ptr */
#include "string.h"
#ifdef PROFILE
static SInfo pf_Foreign_46Marshal_46Utils_46memcpy_35 = {"Foreign.Marshal.Utils","Foreign.Marshal.Utils.memcpy#","FFI.Ptr"};
#endif
C_HEADER(FR_Foreign_46Marshal_46Utils_46memcpy_35) {
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
  INIT_PROFINFO(nodeptr,&pf_Foreign_46Marshal_46Utils_46memcpy_35);
  C_RETURN(nodeptr);
}
