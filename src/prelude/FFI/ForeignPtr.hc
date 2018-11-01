#include "newmacros.h"
#include "runtime.h"

#define CT_v542	((void*)startLabel+40)
#define FN_NHC_46FFI_46primForeignPtr_35	((void*)startLabel+68)
#define CT_v543	((void*)startLabel+88)
#define F0_NHC_46FFI_46primForeignPtr_35	((void*)startLabel+96)
#define FN_NHC_46FFI_46primForeignPtr	((void*)startLabel+108)
#define CT_v544	((void*)startLabel+120)
#define CF_NHC_46FFI_46primForeignPtr	((void*)startLabel+128)
#define CT_v545	((void*)startLabel+188)
#define CT_v546	((void*)startLabel+228)
#define CT_v547	((void*)startLabel+276)
#define CT_v548	((void*)startLabel+316)
#define CT_v549	((void*)startLabel+364)
#define CT_v550	((void*)startLabel+416)
#define CT_v551	((void*)startLabel+468)
#define CT_v552	((void*)startLabel+512)
#define FN_LAMBDA538	((void*)startLabel+540)
#define CT_v554	((void*)startLabel+560)
#define CF_LAMBDA538	((void*)startLabel+568)
#define FN_NHC_46FFI_46newForeignPtr_35	((void*)startLabel+584)
#define CT_v555	((void*)startLabel+604)
#define F0_NHC_46FFI_46newForeignPtr_35	((void*)startLabel+612)
#define CT_v556	((void*)startLabel+636)
#define CT_v557	((void*)startLabel+684)
#define CT_v558	((void*)startLabel+732)
#define CT_v559	((void*)startLabel+772)
#define CT_v560	((void*)startLabel+812)
#define CT_v561	((void*)startLabel+852)
#define CT_v562	((void*)startLabel+904)
#define CT_v563	((void*)startLabel+948)
#define CT_v564	((void*)startLabel+992)
#define CT_v565	((void*)startLabel+1036)
#define CT_v566	((void*)startLabel+1080)
#define CT_v567	((void*)startLabel+1124)
#define CT_v568	((void*)startLabel+1168)
#define CT_v569	((void*)startLabel+1220)
#define CT_v570	((void*)startLabel+1264)
#define FN_NHC_46FFI_46foreignPtrToInt	((void*)startLabel+1292)
#define CT_v571	((void*)startLabel+1308)
#define F0_NHC_46FFI_46foreignPtrToInt	((void*)startLabel+1316)
#define CT_v572	((void*)startLabel+1348)
#define CT_v573	((void*)startLabel+1408)
#define CT_v574	((void*)startLabel+1484)
#define ST_v553	((void*)startLabel+1512)
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
void FR_NHC_46FFI_46primForeignPtr_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
extern Node FN_NHC_46Internal_46unsafePerformIO[];
extern Node FN_NonStdUnsafeCoerce_46unsafeCoerce[];
void FR_NHC_46FFI_46unsafeForeignPtrToPtr(void);
extern Node FN_Prelude_46error[];
void FR_NHC_46FFI_46newForeignPtr_35(void);
extern Node CF_NHC_46FFI_46nullFunPtr[];
extern Node FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46NHC_46FFI_46ForeignPtr[];
extern Node FN_Prelude_46_95_46showsType[];
extern Node FN_Prelude_46_95_46showList[];
extern Node FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare[];
extern Node FN_Prelude_46_95_46min[];
extern Node CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr[];
extern Node FN_Prelude_46_95_46max[];
extern Node FN_Prelude_46_95_46_62[];
extern Node FN_Prelude_46_95_46_62_61[];
extern Node FN_Prelude_46_95_46_60[];
extern Node FN_Prelude_46_95_46_60_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node FN_Prelude_46_95_46_47_61[];
extern Node CF_Prelude_46Eq_46NHC_46FFI_46ForeignPtr[];
void FR_NHC_46FFI_46foreignPtrToInt(void);

static Node startLabel[] = {
  42
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v542)
,};
Node FN_NHC_46FFI_46addConcForeignPtrFinalizer[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v542: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46addConcForeignPtrFinalizer[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46addConcForeignPtrFinalizer),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v543)
,	/* FN_NHC_46FFI_46primForeignPtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46primForeignPtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v543: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46primForeignPtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46primForeignPtr_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v544)
,	/* FN_NHC_46FFI_46primForeignPtr: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v544: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46primForeignPtr: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46primForeignPtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46FFI_46primForeignPtr_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v545)
,};
Node FN_NHC_46FFI_46newConcForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_N1,1,HEAP_OFF_N1)
, bytes2word(3,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_STACK_P1,3,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,1,0)
,	/* CT_v545: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46newConcForeignPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46newConcForeignPtr),2)
, VAPTAG(useLabel(FN_NHC_46Internal_46unsafePerformIO))
, VAPTAG(useLabel(FN_NHC_46FFI_46primForeignPtr))
, bytes2word(1,0,0,1)
, useLabel(CT_v546)
,};
Node FN_NHC_46FFI_46castForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v546: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46castForeignPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46castForeignPtr),1)
, VAPTAG(useLabel(FN_NonStdUnsafeCoerce_46unsafeCoerce))
, bytes2word(1,0,0,1)
, useLabel(CT_v547)
,};
Node FN_NHC_46FFI_46touchForeignPtr[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,HEAP_CVAL_N1,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1,2)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v547: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46FFI_46touchForeignPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46touchForeignPtr),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(1,0,0,1)
, useLabel(CT_v548)
,};
Node FN_NHC_46FFI_46unsafeForeignPtrToPtr[] = {
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46unsafeForeignPtrToPtr)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v548: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46FFI_46unsafeForeignPtrToPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46unsafeForeignPtrToPtr),1)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v549)
,};
Node FN_NHC_46FFI_46withForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,PUSH_P1,0,PUSH_ARG_I2)
, bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_STACK_P1,2)
, bytes2word(EVAL,NEEDHEAP_I32,APPLY,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v549: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46withForeignPtr[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46withForeignPtr),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46unsafeForeignPtrToPtr))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v550)
,};
Node FN_NHC_46FFI_46addForeignPtrFinalizerEnv[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,NEEDHEAP_I32)
, bytes2word(HEAP_CVAL_N1,1,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_OFF_N1,2,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v550: (byte 0) */
  HW(1,3)
, 0
,};
Node F0_NHC_46FFI_46addForeignPtrFinalizerEnv[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46addForeignPtrFinalizerEnv),3)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v551)
,};
Node FN_NHC_46FFI_46addForeignPtrFinalizer[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,NEEDHEAP_I32,HEAP_CVAL_N1)
, bytes2word(1,PUSH_HEAP,HEAP_CVAL_I3,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v551: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_NHC_46FFI_46addForeignPtrFinalizer[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46addForeignPtrFinalizer),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v552)
,};
Node FN_NHC_46FFI_46newForeignPtrEnv[] = {
  bytes2word(ZAP_ARG_I1,ZAP_ARG_I2,ZAP_ARG_I3,NEEDHEAP_I32)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v552: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46FFI_46newForeignPtrEnv[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtrEnv),3)
, VAPTAG(useLabel(FN_LAMBDA538))
, VAPTAG(useLabel(FN_Prelude_46error))
, bytes2word(0,0,0,0)
, useLabel(CT_v554)
,	/* FN_LAMBDA538: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v553)
,	/* CT_v554: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA538: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA538))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v555)
,	/* FN_NHC_46FFI_46newForeignPtr_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46newForeignPtr_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v555: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46newForeignPtr_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v556)
,};
Node FN_NHC_46FFI_46newForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v556: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_NHC_46FFI_46newForeignPtr[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46FFI_46newForeignPtr_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v557)
,};
Node FN_NHC_46FFI_46newForeignPtr_95[] = {
  bytes2word(NEEDHEAP_I32,PUSH_ARG_I1,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,ZAP_ARG_I1,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v557: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46newForeignPtr_95[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr_95),1)
, useLabel(CF_NHC_46FFI_46nullFunPtr)
, VAPTAG(useLabel(FN_NHC_46FFI_46newForeignPtr))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v558)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v558: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsPrec),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46unsafeForeignPtrToPtr))
, VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46Ptr_46showsPrec))
, bytes2word(1,0,0,1)
, useLabel(CT_v559)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v559: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46ForeignPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v560)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsType[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v560: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsType),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showsType))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46ForeignPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v561)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v561: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v562)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46compare[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v562: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46compare[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46compare),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46unsafeForeignPtrToPtr))
, VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46Ptr_46compare))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v563)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46min[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v563: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46min[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46min),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46min))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v564)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46max[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v564: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46max[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46max),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46max))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v565)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v565: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v566)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v566: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_62_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v567)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v567: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v568)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v568: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_60_61))
, useLabel(CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v569)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_61_61[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_ARG,2,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v569: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_61_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_61_61),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46unsafeForeignPtrToPtr))
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v570)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_47_61[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG_ARG_RET_EVAL,1,2,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v570: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_47_61[] = {
  CAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_47_61),2)
, VAPTAG(useLabel(FN_Prelude_46_95_46_47_61))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46ForeignPtr)
, bytes2word(1,0,0,1)
, useLabel(CT_v571)
,	/* FN_NHC_46FFI_46foreignPtrToInt: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46foreignPtrToInt)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46foreignPtrToInt: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46foreignPtrToInt),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v572)
,};
Node FN_Prelude_46Eq_46NHC_46FFI_46ForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,2,0)
,	/* CT_v572: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46Eq_46NHC_46FFI_46ForeignPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46ForeignPtr))
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_47_61)
, useLabel(F0_Prelude_46Eq_46NHC_46FFI_46ForeignPtr_46_61_61)
, bytes2word(0,0,0,0)
, useLabel(CT_v573)
,};
Node FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,HEAP_CVAL_P1,7,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_CVAL_P1)
, bytes2word(10,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,8,0)
,	/* CT_v573: (byte 0) */
  HW(8,0)
, 0
,};
Node CF_Prelude_46Ord_46NHC_46FFI_46ForeignPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Ord_46NHC_46FFI_46ForeignPtr))
, useLabel(CF_Prelude_46Eq_46NHC_46FFI_46ForeignPtr)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_60_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62_61)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46_62)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46compare)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46min)
, useLabel(F0_Prelude_46Ord_46NHC_46FFI_46ForeignPtr_46max)
, bytes2word(0,0,0,0)
, useLabel(CT_v574)
,};
Node FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v574: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46NHC_46FFI_46ForeignPtr[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46NHC_46FFI_46ForeignPtr))
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsPrec)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showsType)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46showList)
, useLabel(F0_Prelude_46Show_46NHC_46FFI_46ForeignPtr_46show)
,	/* ST_v553: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(110,101,119,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,80,116)
, bytes2word(114,69,110,118)
, bytes2word(32,110,111,116)
, bytes2word(32,115,117,112)
, bytes2word(112,111,114,116)
, bytes2word(101,100,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "primForeignObjC" NHC.FFI.primForeignPtr# 2 :: FFI.Ptr -> 2 -> FFI.ForeignPtr */
extern void* primForeignObjC(void*,Node*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46primForeignPtr_35 = {"NHC.FFI","NHC.FFI.primForeignPtr#","FFI.ForeignPtr"};
#endif
C_HEADER(FR_NHC_46FFI_46primForeignPtr_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  Node* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (Node*)nodeptr;

  result = primForeignObjC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46primForeignPtr_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "unsafeForeignPtrToPtr" NHC.FFI.unsafeForeignPtrToPtr 1 :: FFI.ForeignPtr -> FFI.Ptr */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46unsafeForeignPtrToPtr = {"NHC.FFI","NHC.FFI.unsafeForeignPtrToPtr","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46unsafeForeignPtrToPtr) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = (void*)(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46unsafeForeignPtrToPtr);
  C_RETURN(nodeptr);
}

/* foreign import ccall "primForeignPtrC" NHC.FFI.newForeignPtr# 2 :: FFI.FunPtr(FFI.Ptr -> Prelude.()) -> FFI.Ptr -> FFI.ForeignPtr */
extern void* primForeignPtrC(void(*)(void*),void*);
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46newForeignPtr_35 = {"NHC.FFI","NHC.FFI.newForeignPtr#","FFI.ForeignPtr"};
#endif
C_HEADER(FR_NHC_46FFI_46newForeignPtr_35) {
  NodePtr nodeptr;
  void* result;
  void(*arg1)(void*);
  void* arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void(*)(void*))GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (void*)GET_INT_VALUE(nodeptr);

  result = primForeignPtrC(arg1,arg2);

  nodeptr = result;
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46newForeignPtr_35);
  C_RETURN(nodeptr);
}

/* foreign import cast "foreignPtrToInt" NHC.FFI.foreignPtrToInt 1 :: FFI.ForeignPtr -> Prelude.Int */
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46foreignPtrToInt = {"NHC.FFI","NHC.FFI.foreignPtrToInt","Prelude.Int"};
#endif
C_HEADER(FR_NHC_46FFI_46foreignPtrToInt) {
  NodePtr nodeptr;
  HsInt result;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)derefForeignObj((ForeignObj*)GET_INT_VALUE(nodeptr));

  result = (HsInt)(arg1);

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46foreignPtrToInt);
  C_RETURN(nodeptr);
}
