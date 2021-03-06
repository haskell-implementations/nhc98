#include "newmacros.h"
#include "runtime.h"

#define CT_v177	((void*)startLabel+84)
#define ST_v174	((void*)startLabel+120)
#define PS_v176	((void*)startLabel+132)
#define PS_v175	((void*)startLabel+144)
#define PS_v173	((void*)startLabel+156)
extern Node FN_Prelude_46compare[];
extern Node FN_List_46insertBy[];
extern Node PM_List[];
extern Node PC_List_46insertBy[];
extern Node PC_Prelude_46compare[];

static Node startLabel[] = {
  bytes2word(1,0,0,1)
, useLabel(CT_v177)
,};
Node FN_List_46insert[] = {
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
Node F0_List_46insert[] = {
  CAPTAG(useLabel(FN_List_46insert),1)
, useLabel(PS_v173)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46compare))
, CAPTAG(useLabel(FN_List_46insertBy),2)
,};
Node PP_List_46insert[] = {
 };
Node PC_List_46insert[] = {
 	/* ST_v174: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,105,110,115)
, bytes2word(101,114,116,0)
,	/* PS_v176: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46insert)
, useLabel(PC_List_46insertBy)
,	/* PS_v175: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46insert)
, useLabel(PC_Prelude_46compare)
,	/* PS_v173: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46insert)
, useLabel(PC_List_46insert)
,};
