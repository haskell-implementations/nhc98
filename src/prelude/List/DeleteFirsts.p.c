#include "newmacros.h"
#include "runtime.h"

#define CT_v175	((void*)startLabel+60)
#define ST_v173	((void*)startLabel+92)
#define PS_v174	((void*)startLabel+112)
#define PS_v172	((void*)startLabel+124)
extern Node FN_List_46_92_92[];
extern Node PM_List[];
extern Node PC_List_46_92_92[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v175)
,};
Node FN_List_46deleteFirsts[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v174)
, 0
, 0
, 0
, 0
, 70001
, useLabel(ST_v173)
,	/* CT_v175: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_List_46deleteFirsts[] = {
  CAPTAG(useLabel(FN_List_46deleteFirsts),1)
, useLabel(PS_v172)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_List_46_92_92))
,};
Node PP_List_46deleteFirsts[] = {
 };
Node PC_List_46deleteFirsts[] = {
 	/* ST_v173: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,100,101,108)
, bytes2word(101,116,101,70)
, bytes2word(105,114,115,116)
, bytes2word(115,0,0,0)
,	/* PS_v174: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteFirsts)
, useLabel(PC_List_46_92_92)
,	/* PS_v172: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46deleteFirsts)
, useLabel(PC_List_46deleteFirsts)
,};
