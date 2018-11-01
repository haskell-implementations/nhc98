#include "newmacros.h"
#include "runtime.h"

#define CT_v518	((void*)startLabel+36)
#define FN_Foreign_46Marshal_46Alloc_46_95free_35	((void*)startLabel+56)
#define CT_v520	((void*)startLabel+84)
#define F0_Foreign_46Marshal_46Alloc_46_95free_35	((void*)startLabel+92)
#define FN_Foreign_46Marshal_46Alloc_46_95free	((void*)startLabel+104)
#define CT_v522	((void*)startLabel+128)
#define CF_Foreign_46Marshal_46Alloc_46_95free	((void*)startLabel+136)
#define FN_Foreign_46Marshal_46Alloc_46_95realloc_35	((void*)startLabel+160)
#define CT_v524	((void*)startLabel+192)
#define F0_Foreign_46Marshal_46Alloc_46_95realloc_35	((void*)startLabel+200)
#define FN_Foreign_46Marshal_46Alloc_46_95realloc	((void*)startLabel+212)
#define CT_v526	((void*)startLabel+236)
#define CF_Foreign_46Marshal_46Alloc_46_95realloc	((void*)startLabel+244)
#define FN_Foreign_46Marshal_46Alloc_46_95malloc_35	((void*)startLabel+264)
#define CT_v528	((void*)startLabel+292)
#define F0_Foreign_46Marshal_46Alloc_46_95malloc_35	((void*)startLabel+300)
#define FN_Foreign_46Marshal_46Alloc_46_95malloc	((void*)startLabel+312)
#define CT_v530	((void*)startLabel+336)
#define CF_Foreign_46Marshal_46Alloc_46_95malloc	((void*)startLabel+344)
#define FN_Foreign_46Marshal_46Alloc_46failWhenNULL	((void*)startLabel+368)
#define CT_v532	((void*)startLabel+396)
#define F0_Foreign_46Marshal_46Alloc_46failWhenNULL	((void*)startLabel+404)
#define FN_LAMBDA511	((void*)startLabel+428)
#define v533	((void*)startLabel+460)
#define CT_v536	((void*)startLabel+480)
#define F0_LAMBDA511	((void*)startLabel+488)
#define FN_LAMBDA510	((void*)startLabel+528)
#define CT_v539	((void*)startLabel+560)
#define CF_LAMBDA510	((void*)startLabel+568)
#define CT_v541	((void*)startLabel+604)
#define v547	((void*)startLabel+648)
#define v545	((void*)startLabel+652)
#define v542	((void*)startLabel+670)
#define CT_v548	((void*)startLabel+716)
#define FN_LAMBDA512	((void*)startLabel+784)
#define CT_v551	((void*)startLabel+816)
#define CF_LAMBDA512	((void*)startLabel+824)
#define CT_v553	((void*)startLabel+860)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc	((void*)startLabel+892)
#define CT_v555	((void*)startLabel+944)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc	((void*)startLabel+952)
#define FN_LAMBDA513	((void*)startLabel+992)
#define CT_v557	((void*)startLabel+1024)
#define CF_LAMBDA513	((void*)startLabel+1032)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size	((void*)startLabel+1048)
#define CT_v559	((void*)startLabel+1096)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46294_46size	((void*)startLabel+1104)
#define CT_v561	((void*)startLabel+1180)
#define FN_LAMBDA514	((void*)startLabel+1228)
#define CT_v564	((void*)startLabel+1260)
#define CF_LAMBDA514	((void*)startLabel+1268)
#define CT_v566	((void*)startLabel+1308)
#define FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned	((void*)startLabel+1344)
#define CT_v568	((void*)startLabel+1368)
#define F0_Foreign_46Marshal_46Alloc_46allocaBytesAligned	((void*)startLabel+1376)
#define CT_v570	((void*)startLabel+1416)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca	((void*)startLabel+1448)
#define CT_v572	((void*)startLabel+1492)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca	((void*)startLabel+1500)
#define CT_v574	((void*)startLabel+1552)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc	((void*)startLabel+1584)
#define CT_v576	((void*)startLabel+1616)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc	((void*)startLabel+1624)
#define ST_v538	((void*)startLabel+1640)
#define ST_v516	((void*)startLabel+1656)
#define ST_v521	((void*)startLabel+1678)
#define ST_v519	((void*)startLabel+1706)
#define ST_v529	((void*)startLabel+1735)
#define ST_v527	((void*)startLabel+1765)
#define ST_v525	((void*)startLabel+1796)
#define ST_v523	((void*)startLabel+1827)
#define ST_v569	((void*)startLabel+1859)
#define ST_v571	((void*)startLabel+1888)
#define ST_v565	((void*)startLabel+1930)
#define ST_v567	((void*)startLabel+1964)
#define ST_v531	((void*)startLabel+2005)
#define ST_v535	((void*)startLabel+2040)
#define ST_v537	((void*)startLabel+2082)
#define ST_v517	((void*)startLabel+2131)
#define ST_v540	((void*)startLabel+2167)
#define ST_v573	((void*)startLabel+2194)
#define ST_v575	((void*)startLabel+2223)
#define ST_v560	((void*)startLabel+2263)
#define ST_v562	((void*)startLabel+2297)
#define ST_v552	((void*)startLabel+2343)
#define ST_v554	((void*)startLabel+2373)
#define ST_v558	((void*)startLabel+2416)
#define ST_v556	((void*)startLabel+2460)
#define ST_v546	((void*)startLabel+2504)
#define ST_v549	((void*)startLabel+2539)
#define ST_v563	((void*)startLabel+2588)
#define ST_v550	((void*)startLabel+2595)
extern Node TM_Foreign_46Marshal_46Alloc[];
void FR_Foreign_46Marshal_46Alloc_46finalizerFree(void);
void FR_Foreign_46Marshal_46Alloc_46_95free_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_Foreign_46Marshal_46Alloc_46_95realloc_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Foreign_46Marshal_46Alloc_46_95malloc_35(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node TMSUB_Foreign_46Marshal_46Alloc[];
extern Node FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61[];
extern Node CF_NHC_46FFI_46nullPtr[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_Prelude_46userError[];
extern Node FN_Prelude_46ioError[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62[];
extern Node FN_Prelude_46fromIntegral[];
extern Node CF_Prelude_46Integral_46Prelude_46Int[];
extern Node CF_Prelude_46Num_46NHC_46FFI_46CSize[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node CF_Prelude_46undefined[];
extern Node FN_NHC_46FFI_46sizeOf[];
extern Node FN_IO_46bracket[];
extern Node FN_NHC_46FFI_46alignment[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v518)
,};
Node FN_Foreign_46Marshal_46Alloc_46finalizerFree[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_Foreign_46Marshal_46Alloc_46finalizerFree)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2170001
, useLabel(ST_v517)
,	/* CT_v518: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Foreign_46Marshal_46Alloc_46finalizerFree[] = {
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46finalizerFree))
, bytes2word(1,0,0,1)
, useLabel(CT_v520)
,	/* FN_Foreign_46Marshal_46Alloc_46_95free_35: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Foreign_46Marshal_46Alloc_46_95free_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2120001
, useLabel(ST_v519)
,	/* CT_v520: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46_95free_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95free_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v522)
,	/* FN_Foreign_46Marshal_46Alloc_46_95free: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2120001
, useLabel(ST_v521)
,	/* CT_v522: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Alloc_46_95free: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95free))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Foreign_46Marshal_46Alloc_46_95free_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v524)
,	/* FN_Foreign_46Marshal_46Alloc_46_95realloc_35: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Foreign_46Marshal_46Alloc_46_95realloc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2110001
, useLabel(ST_v523)
,	/* CT_v524: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46_95realloc_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95realloc_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v526)
,	/* FN_Foreign_46Marshal_46Alloc_46_95realloc: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2110001
, useLabel(ST_v525)
,	/* CT_v526: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Alloc_46_95realloc: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95realloc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Foreign_46Marshal_46Alloc_46_95realloc_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v528)
,	/* FN_Foreign_46Marshal_46Alloc_46_95malloc_35: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Foreign_46Marshal_46Alloc_46_95malloc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2100001
, useLabel(ST_v527)
,	/* CT_v528: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46_95malloc_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95malloc_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v530)
,	/* FN_Foreign_46Marshal_46Alloc_46_95malloc: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 2100001
, useLabel(ST_v529)
,	/* CT_v530: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Alloc_46_95malloc: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95malloc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Foreign_46Marshal_46Alloc_46_95malloc_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v532)
,	/* FN_Foreign_46Marshal_46Alloc_46failWhenNULL: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 1940001
, useLabel(ST_v531)
,	/* CT_v532: (byte 0) */
  HW(2,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46failWhenNULL: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46failWhenNULL),2)
, CAPTAG(useLabel(FN_LAMBDA511),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v536)
,	/* FN_LAMBDA511: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,19,0,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v533: (byte 4) */
  bytes2word(8,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 1950012
, useLabel(ST_v535)
,	/* CT_v536: (byte 0) */
  HW(7,2)
, 0
,	/* F0_LAMBDA511: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA511),2)
, VAPTAG(useLabel(FN_Prelude_46Eq_46NHC_46FFI_46Ptr_46_61_61))
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_LAMBDA510))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, VAPTAG(useLabel(FN_Prelude_46userError))
, VAPTAG(useLabel(FN_Prelude_46ioError))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v539)
,	/* FN_LAMBDA510: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v538)
, 2040038
, useLabel(ST_v537)
,	/* CT_v539: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA510: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA510))
, bytes2word(0,0,0,0)
, useLabel(CT_v541)
,};
Node FN_Foreign_46Marshal_46Alloc_46free[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1840001
, useLabel(ST_v540)
,	/* CT_v541: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46Marshal_46Alloc_46free[] = {
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46free))
, useLabel(CF_Foreign_46Marshal_46Alloc_46_95free)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v548)
,};
Node FN_Foreign_46Marshal_46Alloc_46reallocBytes[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(0),BOT(0))
,	/* v547: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v545: (byte 4) */
  bytes2word(POP_I1,JUMP,20,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
,	/* v542: (byte 2) */
  bytes2word(4,RETURN_EVAL,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_P1,10)
, bytes2word(HEAP_CVAL_P1,11,HEAP_CVAL_P1,12)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,4,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_P1,13,HEAP_OFF_N1)
, bytes2word(8,HEAP_ARG,1,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,14)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 1740001
, useLabel(ST_v546)
,	/* CT_v548: (byte 0) */
  HW(12,2)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46reallocBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46reallocBytes),2)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46free))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, useLabel(CF_NHC_46FFI_46nullPtr)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62))
, VAPTAG(useLabel(FN_LAMBDA512))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95realloc))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46failWhenNULL))
, bytes2word(0,0,0,0)
, useLabel(CT_v551)
,	/* FN_LAMBDA512: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v550)
, 1760016
, useLabel(ST_v549)
,	/* CT_v551: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA512: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA512))
, bytes2word(1,0,0,1)
, useLabel(CT_v553)
,};
Node FN_Foreign_46Marshal_46Alloc_46realloc[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 1530001
, useLabel(ST_v552)
,	/* CT_v553: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46realloc[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46realloc),1)
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc),1)
, useLabel(CF_Prelude_46undefined)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v555)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 1560005
, useLabel(ST_v554)
,	/* CT_v555: (byte 0) */
  HW(7,3)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc),3)
, VAPTAG(useLabel(FN_LAMBDA513))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95realloc))
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size),1)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46failWhenNULL))
, bytes2word(0,0,0,0)
, useLabel(CT_v557)
,	/* FN_LAMBDA513: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v550)
, 1590041
, useLabel(ST_v556)
,	/* CT_v557: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA513: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA513))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v559)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,3,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 1570030
, useLabel(ST_v558)
,	/* CT_v559: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46294_46size: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(1,0,0,1)
, useLabel(CT_v561)
,};
Node FN_Foreign_46Marshal_46Alloc_46mallocBytes[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 880001
, useLabel(ST_v560)
,	/* CT_v561: (byte 0) */
  HW(7,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46mallocBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46mallocBytes),1)
, VAPTAG(useLabel(FN_LAMBDA514))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95malloc))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, useLabel(CF_Prelude_46Num_46NHC_46FFI_46CSize)
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46failWhenNULL))
, bytes2word(0,0,0,0)
, useLabel(CT_v564)
,	/* FN_LAMBDA514: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v563)
, 880034
, useLabel(ST_v562)
,	/* CT_v564: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA514: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA514))
, bytes2word(1,0,0,1)
, useLabel(CT_v566)
,};
Node FN_Foreign_46Marshal_46Alloc_46allocaBytes[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 1360001
, useLabel(ST_v565)
,	/* CT_v566: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46allocaBytes[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46mallocBytes))
, CAPTAG(useLabel(FN_IO_46bracket),1)
, useLabel(CF_Foreign_46Marshal_46Alloc_46free)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v568)
,	/* FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned: (byte 0) */
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 1390001
, useLabel(ST_v567)
,	/* CT_v568: (byte 0) */
  HW(1,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46allocaBytesAligned: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned),2)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, bytes2word(1,0,0,1)
, useLabel(CT_v570)
,};
Node FN_Foreign_46Marshal_46Alloc_46alloca[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 990001
, useLabel(ST_v569)
,	/* CT_v570: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46alloca[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46alloca),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca))
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v572)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 1020005
, useLabel(ST_v571)
,	/* CT_v572: (byte 0) */
  HW(4,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46FFI_46alignment))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned))
, bytes2word(1,0,0,1)
, useLabel(CT_v574)
,};
Node FN_Foreign_46Marshal_46Alloc_46malloc[] = {
  useLabel(TM_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
, 750001
, useLabel(ST_v573)
,	/* CT_v574: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46malloc[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46malloc),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc))
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v576)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc: (byte 0) */
  useLabel(TMSUB_Foreign_46Marshal_46Alloc)
, bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
, 780005
, useLabel(ST_v575)
,	/* CT_v576: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46mallocBytes))
,	/* ST_v538: (byte 0) */
  bytes2word(58,32,111,117)
, bytes2word(116,32,111,102)
, bytes2word(32,109,101,109)
, bytes2word(111,114,121,0)
,};
Node PM_Foreign_46Marshal_46Alloc[] = {
 	/* ST_v516: (byte 0) */
  bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
,	/* ST_v521: (byte 2) */
  bytes2word(99,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,77,97)
, bytes2word(114,115,104,97)
, bytes2word(108,46,65,108)
, bytes2word(108,111,99,46)
, bytes2word(95,102,114,101)
,	/* ST_v519: (byte 2) */
  bytes2word(101,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,77,97)
, bytes2word(114,115,104,97)
, bytes2word(108,46,65,108)
, bytes2word(108,111,99,46)
, bytes2word(95,102,114,101)
,	/* ST_v529: (byte 3) */
  bytes2word(101,35,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,95,109,97)
, bytes2word(108,108,111,99)
,	/* ST_v527: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,77,97,114)
, bytes2word(115,104,97,108)
, bytes2word(46,65,108,108)
, bytes2word(111,99,46,95)
, bytes2word(109,97,108,108)
,	/* ST_v525: (byte 4) */
  bytes2word(111,99,35,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,95,114)
, bytes2word(101,97,108,108)
,	/* ST_v523: (byte 3) */
  bytes2word(111,99,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,95,114,101)
, bytes2word(97,108,108,111)
,	/* ST_v569: (byte 3) */
  bytes2word(99,35,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,97,108,108)
,	/* ST_v571: (byte 4) */
  bytes2word(111,99,97,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,97,108)
, bytes2word(108,111,99,97)
, bytes2word(58,49,48,50)
, bytes2word(58,53,45,49)
, bytes2word(48,50,58,55)
,	/* ST_v565: (byte 2) */
  bytes2word(51,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,77,97)
, bytes2word(114,115,104,97)
, bytes2word(108,46,65,108)
, bytes2word(108,111,99,46)
, bytes2word(97,108,108,111)
, bytes2word(99,97,66,121)
,	/* ST_v567: (byte 4) */
  bytes2word(116,101,115,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,97,108)
, bytes2word(108,111,99,97)
, bytes2word(66,121,116,101)
, bytes2word(115,65,108,105)
, bytes2word(103,110,101,100)
,	/* ST_v531: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,77,97,114)
, bytes2word(115,104,97,108)
, bytes2word(46,65,108,108)
, bytes2word(111,99,46,102)
, bytes2word(97,105,108,87)
, bytes2word(104,101,110,78)
,	/* ST_v535: (byte 4) */
  bytes2word(85,76,76,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,102,97)
, bytes2word(105,108,87,104)
, bytes2word(101,110,78,85)
, bytes2word(76,76,58,49)
, bytes2word(57,53,58,49)
,	/* ST_v537: (byte 2) */
  bytes2word(50,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,77,97)
, bytes2word(114,115,104,97)
, bytes2word(108,46,65,108)
, bytes2word(108,111,99,46)
, bytes2word(102,97,105,108)
, bytes2word(87,104,101,110)
, bytes2word(78,85,76,76)
, bytes2word(58,50,48,52)
, bytes2word(58,51,56,45)
, bytes2word(50,48,52,58)
,	/* ST_v517: (byte 3) */
  bytes2word(53,52,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,102,105,110)
, bytes2word(97,108,105,122)
, bytes2word(101,114,70,114)
,	/* ST_v540: (byte 3) */
  bytes2word(101,101,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,102,114,101)
,	/* ST_v573: (byte 2) */
  bytes2word(101,0,70,111)
, bytes2word(114,101,105,103)
, bytes2word(110,46,77,97)
, bytes2word(114,115,104,97)
, bytes2word(108,46,65,108)
, bytes2word(108,111,99,46)
, bytes2word(109,97,108,108)
,	/* ST_v575: (byte 3) */
  bytes2word(111,99,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,109,97,108)
, bytes2word(108,111,99,58)
, bytes2word(55,56,58,53)
, bytes2word(45,55,56,58)
,	/* ST_v560: (byte 3) */
  bytes2word(52,56,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,109,97,108)
, bytes2word(108,111,99,66)
, bytes2word(121,116,101,115)
,	/* ST_v562: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,77,97,114)
, bytes2word(115,104,97,108)
, bytes2word(46,65,108,108)
, bytes2word(111,99,46,109)
, bytes2word(97,108,108,111)
, bytes2word(99,66,121,116)
, bytes2word(101,115,58,56)
, bytes2word(56,58,51,52)
, bytes2word(45,56,56,58)
,	/* ST_v552: (byte 3) */
  bytes2word(52,49,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,114,101,97)
, bytes2word(108,108,111,99)
,	/* ST_v554: (byte 1) */
  bytes2word(0,70,111,114)
, bytes2word(101,105,103,110)
, bytes2word(46,77,97,114)
, bytes2word(115,104,97,108)
, bytes2word(46,65,108,108)
, bytes2word(111,99,46,114)
, bytes2word(101,97,108,108)
, bytes2word(111,99,58,49)
, bytes2word(53,54,58,53)
, bytes2word(45,49,53,57)
,	/* ST_v558: (byte 4) */
  bytes2word(58,54,57,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,114,101)
, bytes2word(97,108,108,111)
, bytes2word(99,58,49,53)
, bytes2word(55,58,51,48)
, bytes2word(45,49,53,55)
,	/* ST_v556: (byte 4) */
  bytes2word(58,54,51,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,114,101)
, bytes2word(97,108,108,111)
, bytes2word(99,58,49,53)
, bytes2word(57,58,52,49)
, bytes2word(45,49,53,57)
,	/* ST_v546: (byte 4) */
  bytes2word(58,52,57,0)
, bytes2word(70,111,114,101)
, bytes2word(105,103,110,46)
, bytes2word(77,97,114,115)
, bytes2word(104,97,108,46)
, bytes2word(65,108,108,111)
, bytes2word(99,46,114,101)
, bytes2word(97,108,108,111)
, bytes2word(99,66,121,116)
,	/* ST_v549: (byte 3) */
  bytes2word(101,115,0,70)
, bytes2word(111,114,101,105)
, bytes2word(103,110,46,77)
, bytes2word(97,114,115,104)
, bytes2word(97,108,46,65)
, bytes2word(108,108,111,99)
, bytes2word(46,114,101,97)
, bytes2word(108,108,111,99)
, bytes2word(66,121,116,101)
, bytes2word(115,58,49,55)
, bytes2word(54,58,49,54)
, bytes2word(45,49,55,54)
,	/* ST_v563: (byte 4) */
  bytes2word(58,50,52,0)
, bytes2word(109,97,108,108)
,	/* ST_v550: (byte 3) */
  bytes2word(111,99,0,114)
, bytes2word(101,97,108,108)
, bytes2word(111,99,0,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall & "stdlib.h free" Foreign.Marshal.Alloc.finalizerFree 0 ::  -> FFI.FunPtr(FFI.Ptr -> Prelude.()) */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_Foreign_46Marshal_46Alloc_46finalizerFree = {"Foreign.Marshal.Alloc","Foreign.Marshal.Alloc.finalizerFree","FFI.FunPtr(FFI.Ptr -> Prelude.())"};
#endif
C_HEADER(FR_Foreign_46Marshal_46Alloc_46finalizerFree) {
  NodePtr nodeptr;
  void(*result)(void*);
;

  result = (void(*)(void*))&free;

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_Foreign_46Marshal_46Alloc_46finalizerFree);
  C_RETURN(nodeptr);
}

/* foreign import ccall "stdlib.h free" Foreign.Marshal.Alloc._free# 1 :: FFI.Ptr -> Prelude.() */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_Foreign_46Marshal_46Alloc_46_95free_35 = {"Foreign.Marshal.Alloc","Foreign.Marshal.Alloc._free#","Prelude.()"};
#endif
C_HEADER(FR_Foreign_46Marshal_46Alloc_46_95free_35) {
  NodePtr nodeptr;
  void* arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (void*)GET_INT_VALUE(nodeptr);

  free(arg1);

  nodeptr = nhc_mkUnit();
  INIT_PROFINFO(nodeptr,&pf_Foreign_46Marshal_46Alloc_46_95free_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "stdlib.h realloc" Foreign.Marshal.Alloc._realloc# 2 :: FFI.Ptr -> Prelude.Int -> FFI.Ptr */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_Foreign_46Marshal_46Alloc_46_95realloc_35 = {"Foreign.Marshal.Alloc","Foreign.Marshal.Alloc._realloc#","FFI.Ptr"};
#endif
C_HEADER(FR_Foreign_46Marshal_46Alloc_46_95realloc_35) {
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
  INIT_PROFINFO(nodeptr,&pf_Foreign_46Marshal_46Alloc_46_95realloc_35);
  C_RETURN(nodeptr);
}

/* foreign import ccall "stdlib.h malloc" Foreign.Marshal.Alloc._malloc# 1 :: Prelude.Int -> FFI.Ptr */
#include "stdlib.h"
#ifdef PROFILE
static SInfo pf_Foreign_46Marshal_46Alloc_46_95malloc_35 = {"Foreign.Marshal.Alloc","Foreign.Marshal.Alloc._malloc#","FFI.Ptr"};
#endif
C_HEADER(FR_Foreign_46Marshal_46Alloc_46_95malloc_35) {
  NodePtr nodeptr;
  void* result;
  HsInt arg1;
  nodeptr = C_GETARG1(1);
  IND_REMOVE(nodeptr);
  arg1 = (HsInt)GET_INT_VALUE(nodeptr);

  result = malloc(arg1);

  nodeptr = nhc_mkInt((int)result);
  INIT_PROFINFO(nodeptr,&pf_Foreign_46Marshal_46Alloc_46_95malloc_35);
  C_RETURN(nodeptr);
}
