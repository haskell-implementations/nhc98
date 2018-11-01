#include "newmacros.h"
#include "runtime.h"

#define CT_v183	((void*)startLabel+116)
#define ST_v179	((void*)startLabel+156)
#define PS_v180	((void*)startLabel+164)
#define PS_v182	((void*)startLabel+176)
#define PS_v181	((void*)startLabel+188)
#define PS_v178	((void*)startLabel+200)
extern Node FN_List_46delete[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];
extern Node PM_List[];
extern Node PC_List_46delete[];
extern Node PC_Prelude_46foldl[];
extern Node PC_Prelude_46flip[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v183)
,};
Node FN_List_46_92_92[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,HEAP_CVAL_P1,8)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_OFF_N1,11,PUSH_HEAP)
, bytes2word(HEAP_CVAL_P1,9,HEAP_CVAL_N1,17)
, bytes2word(HEAP_CREATE,HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1)
, bytes2word(11,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v182)
, 0
, 0
, 0
, 0
, useLabel(PS_v181)
, 0
, 0
, 0
, 0
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, 110002
, useLabel(ST_v179)
,	/* CT_v183: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46_92_92[] = {
  CAPTAG(useLabel(FN_List_46_92_92),1)
, useLabel(PS_v178)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_List_46delete))
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),2)
,};
Node PP_List_46_92_92[] = {
 };
Node PC_List_46_92_92[] = {
 	/* ST_v179: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,92,92,0)
,	/* PS_v180: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46_92_92)
, useLabel(PC_List_46delete)
,	/* PS_v182: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46_92_92)
, useLabel(PC_Prelude_46foldl)
,	/* PS_v181: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46_92_92)
, useLabel(PC_Prelude_46flip)
,	/* PS_v178: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46_92_92)
, useLabel(PC_List_46_92_92)
,};
