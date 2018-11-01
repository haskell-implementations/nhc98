#include "newmacros.h"
#include "runtime.h"

#define CT_v213	((void*)startLabel+24)
#define FN_LAMBDA211	((void*)startLabel+52)
#define CT_v215	((void*)startLabel+72)
#define CF_LAMBDA211	((void*)startLabel+80)
#define CT_v216	((void*)startLabel+116)
#define CT_v217	((void*)startLabel+164)
#define CT_v218	((void*)startLabel+204)
#define CT_v219	((void*)startLabel+256)
#define ST_v214	((void*)startLabel+284)
extern Node FN_Prelude_46showString[];
extern Node FN_Numeric_46showInt[];
extern Node CF_Prelude_46Integral_46Prelude_46Integer[];
extern Node FN_Numeric_46showSigned[];
extern Node CF_Prelude_46Real_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46show[];
extern Node CF_Prelude_46Show_46Prelude_46Integer[];
extern Node FN_Prelude_46_95_46showList[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v213)
,};
Node FN_Prelude_46Show_46Prelude_46Integer_46showsType[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_CVAL_P1,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,EVAL,NEEDHEAP_I32)
, bytes2word(APPLY,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v213: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Integer_46showsType[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46showsType),1)
, useLabel(CF_LAMBDA211)
, VAPTAG(useLabel(FN_Prelude_46showString))
, bytes2word(0,0,0,0)
, useLabel(CT_v215)
,	/* FN_LAMBDA211: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v214)
,	/* CT_v215: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA211: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA211))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v216)
,};
Node FN_Prelude_46Show_46Prelude_46Integer_46showsPrec[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(4,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v216: (byte 0) */
  HW(4,2)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Integer_46showsPrec[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46showsPrec),2)
, VAPTAG(useLabel(FN_Numeric_46showInt))
, useLabel(CF_Prelude_46Integral_46Prelude_46Integer)
, VAPTAG(useLabel(FN_Numeric_46showSigned))
, useLabel(CF_Prelude_46Real_46Prelude_46Integer)
, bytes2word(1,0,0,1)
, useLabel(CT_v217)
,};
Node FN_Prelude_46Show_46Prelude_46Integer_46show[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v217: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Integer_46show[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46show),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46show))
, useLabel(CF_Prelude_46Show_46Prelude_46Integer)
, bytes2word(1,0,0,1)
, useLabel(CT_v218)
,};
Node FN_Prelude_46Show_46Prelude_46Integer_46showList[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v218: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Prelude_46Show_46Prelude_46Integer_46showList[] = {
  CAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer_46showList),1)
, VAPTAG(useLabel(FN_Prelude_46_95_46showList))
, useLabel(CF_Prelude_46Show_46Prelude_46Integer)
, bytes2word(0,0,0,0)
, useLabel(CT_v219)
,};
Node FN_Prelude_46Show_46Prelude_46Integer[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1)
, bytes2word(6,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,4,0)
,	/* CT_v219: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Prelude_46Show_46Prelude_46Integer[] = {
  VAPTAG(useLabel(FN_Prelude_46Show_46Prelude_46Integer))
, useLabel(F0_Prelude_46Show_46Prelude_46Integer_46showsPrec)
, useLabel(F0_Prelude_46Show_46Prelude_46Integer_46showsType)
, useLabel(F0_Prelude_46Show_46Prelude_46Integer_46showList)
, useLabel(F0_Prelude_46Show_46Prelude_46Integer_46show)
,	/* ST_v214: (byte 0) */
  bytes2word(73,110,116,101)
, bytes2word(103,101,114,0)
,};
