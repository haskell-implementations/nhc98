#include "newmacros.h"
#include "runtime.h"

#define CT_v186	((void*)startLabel+144)
#define ST_v182	((void*)startLabel+184)
#define PS_v185	((void*)startLabel+200)
#define PS_v184	((void*)startLabel+212)
#define PS_v183	((void*)startLabel+224)
#define PS_v181	((void*)startLabel+236)
extern Node FN_Prelude_46reverse[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_List_46isPrefixOf[];
extern Node PM_List[];
extern Node PC_List_46isPrefixOf[];
extern Node PC_NHC_46Internal_46_95apply1[];
extern Node PC_Prelude_46reverse[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v186)
,};
Node FN_List_46isSuffixOf[] = {
  bytes2word(NEEDHEAP_P1,33,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,8,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_OFF_N1,10,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,10)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(9,HEAP_CVAL_N1,17,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG,1)
, bytes2word(HEAP_OFF_N1,25,HEAP_OFF_N1,14)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, useLabel(PS_v184)
, 0
, 0
, 0
, 0
, useLabel(PS_v183)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v182)
,	/* CT_v186: (byte 0) */
  HW(3,3)
, 0
,};
Node F0_List_46isSuffixOf[] = {
  CAPTAG(useLabel(FN_List_46isSuffixOf),3)
, useLabel(PS_v181)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46reverse))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_List_46isPrefixOf))
,};
Node PP_List_46isSuffixOf[] = {
 };
Node PC_List_46isSuffixOf[] = {
 	/* ST_v182: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,115,83)
, bytes2word(117,102,102,105)
, bytes2word(120,79,102,0)
,	/* PS_v185: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46isSuffixOf)
, useLabel(PC_List_46isPrefixOf)
,	/* PS_v184: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46isSuffixOf)
, useLabel(PC_NHC_46Internal_46_95apply1)
,	/* PS_v183: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46isSuffixOf)
, useLabel(PC_Prelude_46reverse)
,	/* PS_v181: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46isSuffixOf)
, useLabel(PC_List_46isSuffixOf)
,};
