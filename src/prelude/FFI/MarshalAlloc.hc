#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46FFI_46_95free_35	((void*)startLabel+8)
#define CT_v546	((void*)startLabel+24)
#define F0_NHC_46FFI_46_95free_35	((void*)startLabel+32)
#define FN_NHC_46FFI_46_95free	((void*)startLabel+44)
#define CT_v547	((void*)startLabel+56)
#define CF_NHC_46FFI_46_95free	((void*)startLabel+64)
#define FN_NHC_46FFI_46_95realloc_35	((void*)startLabel+88)
#define CT_v548	((void*)startLabel+108)
#define F0_NHC_46FFI_46_95realloc_35	((void*)startLabel+116)
#define FN_NHC_46FFI_46_95realloc	((void*)startLabel+128)
#define CT_v549	((void*)startLabel+140)
#define CF_NHC_46FFI_46_95realloc	((void*)startLabel+148)
#define FN_NHC_46FFI_46_95malloc_35	((void*)startLabel+168)
#define CT_v550	((void*)startLabel+184)
#define F0_NHC_46FFI_46_95malloc_35	((void*)startLabel+192)
#define FN_NHC_46FFI_46_95malloc	((void*)startLabel+204)
#define CT_v551	((void*)startLabel+216)
#define CF_NHC_46FFI_46_95malloc	((void*)startLabel+224)
#define FN_NHC_46FFI_46failWhenNULL	((void*)startLabel+248)
#define CT_v552	((void*)startLabel+264)
#define F0_NHC_46FFI_46failWhenNULL	((void*)startLabel+272)
#define FN_LAMBDA541	((void*)startLabel+296)
#define CT_v553	((void*)startLabel+364)
#define F0_LAMBDA541	((void*)startLabel+372)
#define FN_LAMBDA540	((void*)startLabel+424)
#define CT_v555	((void*)startLabel+444)
#define CF_LAMBDA540	((void*)startLabel+452)
#define CT_v556	((void*)startLabel+480)
#define CT_v557	((void*)startLabel+512)
#define CT_v558	((void*)startLabel+576)
#define FN_LAMBDA542	((void*)startLabel+628)
#define CT_v560	((void*)startLabel+648)
#define CF_LAMBDA542	((void*)startLabel+656)
#define CT_v561	((void*)startLabel+688)
#define FN_NHC_46FFI_46Prelude_46347_46doRealloc	((void*)startLabel+720)
#define CT_v562	((void*)startLabel+768)
#define F0_NHC_46FFI_46Prelude_46347_46doRealloc	((void*)startLabel+776)
#define FN_LAMBDA543	((void*)startLabel+824)
#define CT_v563	((void*)startLabel+844)
#define CF_LAMBDA543	((void*)startLabel+852)
#define CT_v564	((void*)startLabel+900)
#define FN_LAMBDA544	((void*)startLabel+948)
#define CT_v566	((void*)startLabel+968)
#define CF_LAMBDA544	((void*)startLabel+976)
#define CT_v567	((void*)startLabel+1004)
#define CT_v568	((void*)startLabel+1048)
#define FN_NHC_46FFI_46Prelude_46343_46doAlloca	((void*)startLabel+1080)
#define CT_v569	((void*)startLabel+1100)
#define F0_NHC_46FFI_46Prelude_46343_46doAlloca	((void*)startLabel+1108)
#define CT_v570	((void*)startLabel+1144)
#define FN_NHC_46FFI_46Prelude_46340_46doMalloc	((void*)startLabel+1176)
#define CT_v571	((void*)startLabel+1196)
#define F0_NHC_46FFI_46Prelude_46340_46doMalloc	((void*)startLabel+1204)
#define ST_v554	((void*)startLabel+1220)
#define ST_v565	((void*)startLabel+1235)
#define ST_v559	((void*)startLabel+1242)
void FR_NHC_46FFI_46_95free_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_NHC_46FFI_46_95realloc_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_NHC_46FFI_46_95malloc_35(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum[];
extern Node FN_NHC_46FFI_46throwIOError[];
extern Node FN_Monad_46when[];
extern Node CF_Prelude_46Monad_46NHC_46Internal_46IO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
void FR_NHC_46FFI_46finalizerFree(void);
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CSize[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_Prelude_46undefined[];
extern Node FN_NHC_46FFI_46sizeOf[];
extern Node FN_IO_46bracket[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v546)
,	/* FN_NHC_46FFI_46_95free_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46_95free_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v546: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46_95free_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46_95free_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v547)
,	/* FN_NHC_46FFI_46_95free: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v547: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46_95free: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46_95free))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46_95free_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v548)
,	/* FN_NHC_46FFI_46_95realloc_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_NHC_46FFI_46_95realloc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v548: (byte 0) */
  HW(0,2)
, 0
,	/* F0_NHC_46FFI_46_95realloc_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46_95realloc_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v549)
,	/* FN_NHC_46FFI_46_95realloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v549: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46_95realloc: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46_95realloc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_NHC_46FFI_46_95realloc_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v550)
,	/* FN_NHC_46FFI_46_95malloc_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_NHC_46FFI_46_95malloc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v550: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46FFI_46_95malloc_35: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46_95malloc_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v551)
,	/* FN_NHC_46FFI_46_95malloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v551: (byte 0) */
  HW(2,0)
, 0
,	/* CF_NHC_46FFI_46_95malloc: (byte 0) */
  VAPTAG(useLabel(FN_NHC_46FFI_46_95malloc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_NHC_46FFI_46_95malloc_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v552)
,	/* FN_NHC_46FFI_46failWhenNULL: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v552: (byte 0) */
  HW(2,2)
, 0
,	/* F0_NHC_46FFI_46failWhenNULL: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46failWhenNULL),2)
, CAPTAG(useLabel(FN_LAMBDA541),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v553)
,	/* FN_LAMBDA541: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_N1,1,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_N1,2,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,2,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,7)
, bytes2word(HEAP_OFF_N1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_OFF_N1,19,HEAP_OFF_N1,8)
, bytes2word(HEAP_CVAL_P1,11,HEAP_ARG,2)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,12,HEAP_OFF_N1)
, bytes2word(7,HEAP_OFF_N1,4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(12,0,0)
, CONSTR(0,0,0)
,	/* CT_v553: (byte 0) */
  HW(10,2)
, 0
,	/* F0_LAMBDA541: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA541),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_LAMBDA540))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46Enum_46NHC_46DErrNo_46ErrNo_46fromEnum))
, VAPTAG(useLabel(FN_NHC_46FFI_46throwIOError))
, VAPTAG(useLabel(FN_Monad_46when))
, useLabel(CF_Prelude_46Monad_46NHC_46Internal_46IO)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, bytes2word(0,0,0,0)
, useLabel(CT_v555)
,	/* FN_LAMBDA540: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v554)
,	/* CT_v555: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA540: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA540))
, bytes2word(0,0,0,0)
, useLabel(CT_v556)
,};
Node FN_NHC_46FFI_46finalizerFree[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_NHC_46FFI_46finalizerFree)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v556: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_NHC_46FFI_46finalizerFree[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46finalizerFree))
, bytes2word(0,0,0,0)
, useLabel(CT_v557)
,};
Node FN_NHC_46FFI_46free[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v557: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_NHC_46FFI_46free[] = {
  VAPTAG(useLabel(FN_NHC_46FFI_46free))
, useLabel(CF_NHC_46FFI_46_95free)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v558)
,};
Node FN_NHC_46FFI_46reallocBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,2,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,8,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(10,HEAP_OFF_N1,13,HEAP_OFF_N1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v558: (byte 0) */
  HW(8,2)
, 0
,};
Node F0_NHC_46FFI_46reallocBytes[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46reallocBytes),2)
, VAPTAG(useLabel(FN_LAMBDA542))
, VAPTAG(useLabel(FN_NHC_46FFI_46_95realloc))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_NHC_46FFI_46failWhenNULL))
, bytes2word(0,0,0,0)
, useLabel(CT_v560)
,	/* FN_LAMBDA542: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v559)
,	/* CT_v560: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA542: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA542))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v561)
,};
Node FN_NHC_46FFI_46realloc[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG_ARG)
, bytes2word(2,1,HEAP_CVAL_I4,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v561: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46FFI_46realloc[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46realloc),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46Prelude_46347_46doRealloc))
, useLabel(CF_Prelude_46undefined)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v562)
,	/* FN_NHC_46FFI_46Prelude_46347_46doRealloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,9,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,3,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(HEAP_CVAL_P1,10,HEAP_OFF_N1,13)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,6)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,11,HEAP_OFF_N1)
, bytes2word(18,HEAP_OFF_N1,6,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v562: (byte 0) */
  HW(9,3)
, 0
,	/* F0_NHC_46FFI_46Prelude_46347_46doRealloc: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46Prelude_46347_46doRealloc),3)
, VAPTAG(useLabel(FN_LAMBDA543))
, VAPTAG(useLabel(FN_NHC_46FFI_46_95realloc))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_NHC_46FFI_46failWhenNULL))
, bytes2word(0,0,0,0)
, useLabel(CT_v563)
,	/* FN_LAMBDA543: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v559)
,	/* CT_v563: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA543: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA543))
, bytes2word(1,0,0,1)
, useLabel(CT_v564)
,};
Node FN_NHC_46FFI_46mallocBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v564: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_NHC_46FFI_46mallocBytes[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46mallocBytes),1)
, VAPTAG(useLabel(FN_LAMBDA544))
, VAPTAG(useLabel(FN_NHC_46FFI_46_95malloc))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46FFI_46failWhenNULL))
, bytes2word(0,0,0,0)
, useLabel(CT_v566)
,	/* FN_LAMBDA544: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v565)
,	/* CT_v566: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA544: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA544))
, bytes2word(1,0,0,1)
, useLabel(CT_v567)
,};
Node FN_NHC_46FFI_46allocaBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v567: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_NHC_46FFI_46allocaBytes[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46allocaBytes),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46mallocBytes))
, CAPTAG(useLabel(FN_IO_46bracket),1)
, useLabel(CF_NHC_46FFI_46free)
, bytes2word(1,0,0,1)
, useLabel(CT_v568)
,};
Node FN_NHC_46FFI_46alloca[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v568: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46alloca[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46alloca),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46Prelude_46343_46doAlloca))
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v569)
,	/* FN_NHC_46FFI_46Prelude_46343_46doAlloca: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v569: (byte 0) */
  HW(3,2)
, 0
,	/* F0_NHC_46FFI_46Prelude_46343_46doAlloca: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46Prelude_46343_46doAlloca),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46FFI_46allocaBytes))
, bytes2word(1,0,0,1)
, useLabel(CT_v570)
,};
Node FN_NHC_46FFI_46malloc[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v570: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_NHC_46FFI_46malloc[] = {
  CAPTAG(useLabel(FN_NHC_46FFI_46malloc),1)
, VAPTAG(useLabel(FN_NHC_46FFI_46Prelude_46340_46doMalloc))
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v571)
,	/* FN_NHC_46FFI_46Prelude_46340_46doMalloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v571: (byte 0) */
  HW(3,2)
, 0
,	/* F0_NHC_46FFI_46Prelude_46340_46doMalloc: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46FFI_46Prelude_46340_46doMalloc),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46FFI_46mallocBytes))
,	/* ST_v554: (byte 0) */
  bytes2word(32,111,117,116)
, bytes2word(32,111,102,32)
, bytes2word(109,101,109,111)
,	/* ST_v565: (byte 3) */
  bytes2word(114,121,0,109)
, bytes2word(97,108,108,111)
,	/* ST_v559: (byte 2) */
  bytes2word(99,0,114,101)
, bytes2word(97,108,108,111)
, bytes2word(99,0,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "stdlib.h free" NHC.FFI._free# 1 :: FFI.Ptr -> Prelude.() */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46_95free_35 = {"NHC.FFI","NHC.FFI._free#","Prelude.()"};
#endif
C_HEADER(FR_NHC_46FFI_46_95free_35) {
  NodePtr nodeptr;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  free(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46_95free_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "stdlib.h realloc" NHC.FFI._realloc# 2 :: FFI.Ptr -> Prelude.Int -> FFI.Ptr */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46_95realloc_35 = {"NHC.FFI","NHC.FFI._realloc#","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46_95realloc_35) {
  NodePtr nodeptr;
  void* result;
  void* arg1;
  HsInt arg2;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);
  nodeptr = C_GETARG1(2);
  IND_REMOVE(nodeptr);
  arg2 = (HsInt)GET_INT_VALUE(nodeptr);

  result = realloc(arg1,arg2);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46_95realloc_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "stdlib.h malloc" NHC.FFI._malloc# 1 :: Prelude.Int -> FFI.Ptr */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46_95malloc_35 = {"NHC.FFI","NHC.FFI._malloc#","FFI.Ptr"};
#endif
C_HEADER(FR_NHC_46FFI_46_95malloc_35) {
  NodePtr nodeptr;
  void* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = malloc(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46_95malloc_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall & "stdlib.h free" NHC.FFI.finalizerFree 0 ::  -> FFI.FunPtr(FFI.Ptr -> Prelude.()) */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_NHC_46FFI_46finalizerFree = {"NHC.FFI","NHC.FFI.finalizerFree","FFI.FunPtr(FFI.Ptr -> Prelude.())"};
#endif
C_HEADER(FR_NHC_46FFI_46finalizerFree) {
  NodePtr nodeptr;
  void(*result)(void*);
;

  result = (void(*)(void*))&free;

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_NHC_46FFI_46finalizerFree);
  C_RETURN(nodeptr);
}
