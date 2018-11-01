#include "newmacros.h"
#include "runtime.h"

#define CT_v517	((void*)startLabel+24)
#define FN_Foreign_46Marshal_46Alloc_46_95free_35	((void*)startLabel+44)
#define CT_v518	((void*)startLabel+60)
#define F0_Foreign_46Marshal_46Alloc_46_95free_35	((void*)startLabel+68)
#define FN_Foreign_46Marshal_46Alloc_46_95free	((void*)startLabel+80)
#define CT_v519	((void*)startLabel+92)
#define CF_Foreign_46Marshal_46Alloc_46_95free	((void*)startLabel+100)
#define FN_Foreign_46Marshal_46Alloc_46_95realloc_35	((void*)startLabel+124)
#define CT_v520	((void*)startLabel+144)
#define F0_Foreign_46Marshal_46Alloc_46_95realloc_35	((void*)startLabel+152)
#define FN_Foreign_46Marshal_46Alloc_46_95realloc	((void*)startLabel+164)
#define CT_v521	((void*)startLabel+176)
#define CF_Foreign_46Marshal_46Alloc_46_95realloc	((void*)startLabel+184)
#define FN_Foreign_46Marshal_46Alloc_46_95malloc_35	((void*)startLabel+204)
#define CT_v522	((void*)startLabel+220)
#define F0_Foreign_46Marshal_46Alloc_46_95malloc_35	((void*)startLabel+228)
#define FN_Foreign_46Marshal_46Alloc_46_95malloc	((void*)startLabel+240)
#define CT_v523	((void*)startLabel+252)
#define CF_Foreign_46Marshal_46Alloc_46_95malloc	((void*)startLabel+260)
#define FN_Foreign_46Marshal_46Alloc_46failWhenNULL	((void*)startLabel+284)
#define CT_v524	((void*)startLabel+300)
#define F0_Foreign_46Marshal_46Alloc_46failWhenNULL	((void*)startLabel+308)
#define FN_LAMBDA511	((void*)startLabel+332)
#define v525	((void*)startLabel+360)
#define CT_v527	((void*)startLabel+372)
#define F0_LAMBDA511	((void*)startLabel+380)
#define FN_LAMBDA510	((void*)startLabel+420)
#define CT_v529	((void*)startLabel+440)
#define CF_LAMBDA510	((void*)startLabel+448)
#define CT_v530	((void*)startLabel+472)
#define v535	((void*)startLabel+512)
#define v534	((void*)startLabel+516)
#define v531	((void*)startLabel+534)
#define CT_v536	((void*)startLabel+572)
#define FN_LAMBDA512	((void*)startLabel+640)
#define CT_v538	((void*)startLabel+660)
#define CF_LAMBDA512	((void*)startLabel+668)
#define CT_v539	((void*)startLabel+692)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc	((void*)startLabel+724)
#define CT_v540	((void*)startLabel+764)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc	((void*)startLabel+772)
#define FN_LAMBDA513	((void*)startLabel+812)
#define CT_v541	((void*)startLabel+832)
#define CF_LAMBDA513	((void*)startLabel+840)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size	((void*)startLabel+856)
#define CT_v542	((void*)startLabel+892)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46294_46size	((void*)startLabel+900)
#define CT_v543	((void*)startLabel+964)
#define FN_LAMBDA514	((void*)startLabel+1012)
#define CT_v545	((void*)startLabel+1032)
#define CF_LAMBDA514	((void*)startLabel+1040)
#define CT_v546	((void*)startLabel+1068)
#define FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned	((void*)startLabel+1104)
#define CT_v547	((void*)startLabel+1116)
#define F0_Foreign_46Marshal_46Alloc_46allocaBytesAligned	((void*)startLabel+1124)
#define CT_v548	((void*)startLabel+1152)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca	((void*)startLabel+1184)
#define CT_v549	((void*)startLabel+1216)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca	((void*)startLabel+1224)
#define CT_v550	((void*)startLabel+1264)
#define FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc	((void*)startLabel+1296)
#define CT_v551	((void*)startLabel+1316)
#define F0_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc	((void*)startLabel+1324)
#define ST_v528	((void*)startLabel+1340)
#define ST_v544	((void*)startLabel+1356)
#define ST_v537	((void*)startLabel+1363)
void FR_Foreign_46Marshal_46Alloc_46finalizerFree(void);
void FR_Foreign_46Marshal_46Alloc_46_95free_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok1[];
void FR_Foreign_46Marshal_46Alloc_46_95realloc_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok2[];
void FR_Foreign_46Marshal_46Alloc_46_95malloc_35(void);
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
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
, useLabel(CT_v517)
,};
Node FN_Foreign_46Marshal_46Alloc_46finalizerFree[] = {
  bytes2word(PRIMITIVE,NOP,NOP,NOP)
, useLabel(FR_Foreign_46Marshal_46Alloc_46finalizerFree)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v517: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Foreign_46Marshal_46Alloc_46finalizerFree[] = {
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46finalizerFree))
, bytes2word(1,0,0,1)
, useLabel(CT_v518)
,	/* FN_Foreign_46Marshal_46Alloc_46_95free_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Foreign_46Marshal_46Alloc_46_95free_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v518: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46_95free_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95free_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v519)
,	/* FN_Foreign_46Marshal_46Alloc_46_95free: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v519: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Alloc_46_95free: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95free))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Foreign_46Marshal_46Alloc_46_95free_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v520)
,	/* FN_Foreign_46Marshal_46Alloc_46_95realloc_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PUSH_ARG_I2)
, bytes2word(EVAL,POP_I1,PRIMITIVE,NOP)
, useLabel(FR_Foreign_46Marshal_46Alloc_46_95realloc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v520: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46_95realloc_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95realloc_35),2)
, bytes2word(0,0,0,0)
, useLabel(CT_v521)
,	/* FN_Foreign_46Marshal_46Alloc_46_95realloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v521: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Alloc_46_95realloc: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95realloc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok2))
, useLabel(F0_Foreign_46Marshal_46Alloc_46_95realloc_35)
, bytes2word(1,0,0,1)
, useLabel(CT_v522)
,	/* FN_Foreign_46Marshal_46Alloc_46_95malloc_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Foreign_46Marshal_46Alloc_46_95malloc_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v522: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46_95malloc_35: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95malloc_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v523)
,	/* FN_Foreign_46Marshal_46Alloc_46_95malloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v523: (byte 0) */
  HW(2,0)
, 0
,	/* CF_Foreign_46Marshal_46Alloc_46_95malloc: (byte 0) */
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46_95malloc))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok1))
, useLabel(F0_Foreign_46Marshal_46Alloc_46_95malloc_35)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v524)
,	/* FN_Foreign_46Marshal_46Alloc_46failWhenNULL: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_ARG,2)
, bytes2word(HEAP_OFF_N1,4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v524: (byte 0) */
  HW(2,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46failWhenNULL: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46failWhenNULL),2)
, CAPTAG(useLabel(FN_LAMBDA511),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v527)
,	/* FN_LAMBDA511: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(JUMPFALSE,19,0,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,3,HEAP_CVAL_P1,7)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
,	/* v525: (byte 4) */
  bytes2word(8,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_ARG)
, bytes2word(2,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v527: (byte 0) */
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
, useLabel(CT_v529)
,	/* FN_LAMBDA510: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v528)
,	/* CT_v529: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA510: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA510))
, bytes2word(0,0,0,0)
, useLabel(CT_v530)
,};
Node FN_Foreign_46Marshal_46Alloc_46free[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v530: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Foreign_46Marshal_46Alloc_46free[] = {
  VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46free))
, useLabel(CF_Foreign_46Marshal_46Alloc_46_95free)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v536)
,};
Node FN_Foreign_46Marshal_46Alloc_46reallocBytes[] = {
  bytes2word(NEEDSTACK_I16,PUSH_ARG_I2,EVAL,NEEDHEAP_I32)
, bytes2word(LOOKUPSWITCH,1,TOP(0),BOT(0))
,	/* v535: (byte 4) */
  bytes2word(TOP(10),BOT(10),TOP(6),BOT(6))
,	/* v534: (byte 4) */
  bytes2word(POP_I1,JUMP,20,0)
, bytes2word(POP_I1,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(7,HEAP_OFF_N1,6,HEAP_OFF_N1)
,	/* v531: (byte 2) */
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
,	/* CT_v536: (byte 0) */
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
, useLabel(CT_v538)
,	/* FN_LAMBDA512: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v537)
,	/* CT_v538: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA512: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA512))
, bytes2word(1,0,0,1)
, useLabel(CT_v539)
,};
Node FN_Foreign_46Marshal_46Alloc_46realloc[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v539: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46realloc[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46realloc),1)
, CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc),1)
, useLabel(CF_Prelude_46undefined)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v540)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46291_46doRealloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_P1)
, bytes2word(0,HEAP_ARG,2,HEAP_CVAL_P1)
, bytes2word(6,HEAP_OFF_N1,4,HEAP_CVAL_P1)
, bytes2word(7,HEAP_CVAL_P1,8,HEAP_OFF_N1)
, bytes2word(8,HEAP_ARG,3,HEAP_OFF_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_P1,9)
, bytes2word(HEAP_OFF_N1,13,HEAP_OFF_N1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v540: (byte 0) */
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
, useLabel(CT_v541)
,	/* FN_LAMBDA513: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v537)
,	/* CT_v541: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA513: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA513))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v542)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_ARG,2,PUSH_P1,0)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,3,ZAP_ARG_I1,ZAP_ARG_I2)
, bytes2word(ZAP_ARG_I3,ZAP_STACK_P1,2,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v542: (byte 0) */
  HW(4,3)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46294_46size: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46294_46size),3)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Prelude_46fromIntegral))
, useLabel(CF_Prelude_46Integral_46Prelude_46Int)
, bytes2word(1,0,0,1)
, useLabel(CT_v543)
,};
Node FN_Foreign_46Marshal_46Alloc_46mallocBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5)
, bytes2word(HEAP_CVAL_P1,6,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,4)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_OFF_N1,8,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(12,HEAP_OFF_N1,5,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v543: (byte 0) */
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
, useLabel(CT_v545)
,	/* FN_LAMBDA514: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v544)
,	/* CT_v545: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA514: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA514))
, bytes2word(1,0,0,1)
, useLabel(CT_v546)
,};
Node FN_Foreign_46Marshal_46Alloc_46allocaBytes[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v546: (byte 0) */
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
, useLabel(CT_v547)
,	/* FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v547: (byte 0) */
  HW(1,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46allocaBytesAligned: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned),2)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytes))
, bytes2word(1,0,0,1)
, useLabel(CT_v548)
,};
Node FN_Foreign_46Marshal_46Alloc_46alloca[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v548: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46alloca[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46alloca),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca))
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v549)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,HEAP_CVAL_I5,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_OFF_N1,9,HEAP_OFF_N1,5)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v549: (byte 0) */
  HW(4,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46286_46doAlloca),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_NHC_46FFI_46alignment))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46allocaBytesAligned))
, bytes2word(1,0,0,1)
, useLabel(CT_v550)
,};
Node FN_Foreign_46Marshal_46Alloc_46malloc[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I4,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v550: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Foreign_46Marshal_46Alloc_46malloc[] = {
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46malloc),1)
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc))
, useLabel(CF_Prelude_46undefined)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v551)
,	/* FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_OFF_N1,3,HEAP_ARG)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
, bytes2word(4,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v551: (byte 0) */
  HW(3,2)
, 0
,	/* F0_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc: (byte 0) */
  CAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46Prelude_46283_46doMalloc),2)
, VAPTAG(useLabel(FN_NHC_46FFI_46sizeOf))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Foreign_46Marshal_46Alloc_46mallocBytes))
,	/* ST_v528: (byte 0) */
  bytes2word(58,32,111,117)
, bytes2word(116,32,111,102)
, bytes2word(32,109,101,109)
,	/* ST_v544: (byte 4) */
  bytes2word(111,114,121,0)
, bytes2word(109,97,108,108)
,	/* ST_v537: (byte 3) */
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
