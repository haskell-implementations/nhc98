#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+84)
#define ST_v174	((void*)startLabel+120)
#define PS_v176	((void*)startLabel+132)
#define PS_v175	((void*)startLabel+144)
#define PS_v173	((void*)startLabel+156)
extern Node FN_Prelude_46_61_61[];
extern Node FN_List_46unionBy[];
extern Node PM_List[];
extern Node PC_List_46unionBy[];
extern Node PC_Prelude_46_61_61[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_List_46union[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,1,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v176)
, 0
, 0
, 0
, 0
, useLabel(PS_v175)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v174)
,	/* CT_v177: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_List_46union[] = {
  CAPTAG(useLabel(FN_List_46union),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46_61_61))
, CAPTAG(useLabel(FN_List_46unionBy),2)
,};
Node PP_List_46union[] = {
 };
Node PC_List_46union[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,117,110,105)
, bytes2word(111,110,0,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46union)
, useLabel(PC_List_46unionBy)
,	/* PS_v175: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46union)
, useLabel(PC_Prelude_46_61_61)
,	/* PS_v173: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46union)
, useLabel(PC_List_46union)
,};
