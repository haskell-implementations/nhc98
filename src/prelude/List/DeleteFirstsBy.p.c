#include "newmacros.h"
#include "runtime.h"

#define CT_v181	((void*)startLabel+116)
#define ST_v177	((void*)startLabel+156)
#define PS_v178	((void*)startLabel+176)
#define PS_v180	((void*)startLabel+188)
#define PS_v179	((void*)startLabel+200)
#define PS_v176	((void*)startLabel+212)
extern Node FN_List_46deleteBy[];
extern Node FN_Prelude_46flip[];
extern Node FN_Prelude_46foldl[];
extern Node PM_List[];
extern Node PC_List_46deleteBy[];
extern Node PC_Prelude_46foldl[];
extern Node PC_Prelude_46flip[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v181)
,};
Node FN_List_46deleteFirstsBy[] = {
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
, useLabel(PS_v180)
, 0
, 0
, 0
, 0
, useLabel(PS_v179)
, 0
, 0
, 0
, 0
, useLabel(PS_v178)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v177)
,	/* CT_v181: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_List_46deleteFirstsBy[] = {
  CAPTAG(useLabel(FN_List_46deleteFirstsBy),1)
, useLabel(PS_v176)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_List_46deleteBy),2)
, CAPTAG(useLabel(FN_Prelude_46flip),2)
, CAPTAG(useLabel(FN_Prelude_46foldl),2)
,};
Node PP_List_46deleteFirstsBy[] = {
 };
Node PC_List_46deleteFirstsBy[] = {
 	/* ST_v177: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,100,101,108)
, bytes2word(101,116,101,70)
, bytes2word(105,114,115,116)
, bytes2word(115,66,121,0)
,	/* PS_v178: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteFirstsBy)
, useLabel(PC_List_46deleteBy)
,	/* PS_v180: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteFirstsBy)
, useLabel(PC_Prelude_46foldl)
,	/* PS_v179: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteFirstsBy)
, useLabel(PC_Prelude_46flip)
,	/* PS_v176: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteFirstsBy)
, useLabel(PC_List_46deleteFirstsBy)
,};
