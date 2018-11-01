#include "newmacros.h"
#include "runtime.h"

#define CT_v196	((void*)startLabel+124)
#define ST_v192	((void*)startLabel+164)
#define PS_v193	((void*)startLabel+184)
#define PS_v194	((void*)startLabel+196)
#define PS_v195	((void*)startLabel+208)
#define PS_v191	((void*)startLabel+220)
extern Node FN_NHC_46Binary_46getF[];
extern Node FN_NHC_46Internal_46_95apply2[];
extern Node FN_Prelude_46fst[];
extern Node PM_NHC_46Binary[];
extern Node PC_NHC_46Binary_46getF[];
extern Node PC_NHC_46Internal_46_95apply2[];
extern Node PC_Prelude_46fst[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v196)
,};
Node FN_NHC_46Binary_46getFAt[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,HEAP_ARG_ARG)
, bytes2word(2,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,13)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v195)
, 0
, 0
, 0
, 0
, useLabel(PS_v194)
, 0
, 0
, 0
, 0
, useLabel(PS_v193)
, 0
, 0
, 0
, 0
, 100001
, useLabel(ST_v192)
,	/* CT_v196: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_NHC_46Binary_46getFAt[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getFAt),3)
, useLabel(PS_v191)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_NHC_46Binary_46getF))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply2))
, VAPTAG(useLabel(FN_Prelude_46fst))
,};
Node PP_NHC_46Binary_46getFAt[] = {
 };
Node PC_NHC_46Binary_46getFAt[] = {
 	/* ST_v192: (byte 0) */
  bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,103)
, bytes2word(101,116,70,65)
, bytes2word(116,0,0,0)
,	/* PS_v193: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getFAt)
, useLabel(PC_NHC_46Binary_46getF)
,	/* PS_v194: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getFAt)
, useLabel(PC_NHC_46Internal_46_95apply2)
,	/* PS_v195: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getFAt)
, useLabel(PC_Prelude_46fst)
,	/* PS_v191: (byte 0) */
  useLabel(PM_NHC_46Binary)
, useLabel(PP_NHC_46Binary_46getFAt)
, useLabel(PC_NHC_46Binary_46getFAt)
,};
