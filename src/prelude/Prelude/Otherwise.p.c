#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+72)
#define ST_v164	((void*)startLabel+100)
#define PS_v165	((void*)startLabel+120)
#define PS_v163	((void*)startLabel+132)
extern Node PM_Prelude[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v166)
,};
Node FN_Prelude_46otherwise[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v165)
, 0
, 0
, 0
, 0
, CONSTR(1,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v164)
,	/* CT_v166: (byte 0) */
  HW(0,0)
, 0
,};
Node CF_Prelude_46otherwise[] = {
  VAPTAG(useLabel(FN_Prelude_46otherwise))
, useLabel(PS_v163)
, 0
, 0
, 0
,};
Node PP_Prelude_46otherwise[] = {
 };
Node PC_Prelude_46otherwise[] = {
 	/* ST_v164: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(111,116,104,101)
, bytes2word(114,119,105,115)
, bytes2word(101,0,0,0)
,	/* PS_v165: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46otherwise)
, useLabel(PC_Prelude_46True)
,	/* PS_v163: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46otherwise)
, useLabel(PC_Prelude_46otherwise)
,};
