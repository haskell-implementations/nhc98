#include "newmacros.h"
#include "runtime.h"

#define CT_v187	((void*)startLabel+92)
#define ST_v184	((void*)startLabel+128)
#define PS_v186	((void*)startLabel+152)
#define PS_v185	((void*)startLabel+164)
#define PS_v183	((void*)startLabel+176)
extern Node FN_Prelude_46repeat[];
extern Node FN_List_46genericTake[];
extern Node PM_List[];
extern Node PC_List_46genericTake[];
extern Node PC_Prelude_46repeat[];

static Node startLabel[] = {
  bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v187)
,};
Node FN_List_46genericReplicate[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(7,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_ARG,3,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_N1,12,HEAP_CREATE)
, bytes2word(HEAP_SPACE,HEAP_SPACE,HEAP_ARG_ARG,1)
, bytes2word(2,HEAP_OFF_N1,13,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v186)
, 0
, 0
, 0
, 0
, useLabel(PS_v185)
, 0
, 0
, 0
, 0
, 60001
, useLabel(ST_v184)
,	/* CT_v187: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_List_46genericReplicate[] = {
  CAPTAG(useLabel(FN_List_46genericReplicate),3)
, useLabel(PS_v183)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46repeat))
, VAPTAG(useLabel(FN_List_46genericTake))
,};
Node PP_List_46genericReplicate[] = {
 };
Node PC_List_46genericReplicate[] = {
 	/* ST_v184: (byte 0) */
  bytes2word(76,105,115,116)
, bytes2word(46,103,101,110)
, bytes2word(101,114,105,99)
, bytes2word(82,101,112,108)
, bytes2word(105,99,97,116)
, bytes2word(101,0,0,0)
,	/* PS_v186: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46genericReplicate)
, useLabel(PC_List_46genericTake)
,	/* PS_v185: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46genericReplicate)
, useLabel(PC_Prelude_46repeat)
,	/* PS_v183: (byte 0) */
  useLabel(PM_List)
, useLabel(PP_List_46genericReplicate)
, useLabel(PC_List_46genericReplicate)
,};
