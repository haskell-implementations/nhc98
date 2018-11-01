#include "newmacros.h"
#include "runtime.h"

#define CT_v166	((void*)startLabel+108)
#define ST_v163	((void*)startLabel+144)
#define PS_v165	((void*)startLabel+156)
#define PS_v164	((void*)startLabel+168)
#define PS_v162	((void*)startLabel+180)
extern Node FN_Prelude_46foldr[];
extern Node F0_Prelude_46_38_38[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46foldr[];
extern Node PC_Prelude_46True[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v166)
,};
Node FN_Prelude_46and[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v165)
, 0
, 0
, 0
, 0
, useLabel(PS_v164)
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
, useLabel(ST_v163)
,	/* CT_v166: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46and[] = {
  VAPTAG(useLabel(FN_Prelude_46and))
, useLabel(PS_v162)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, useLabel(F0_Prelude_46_38_38)
,};
Node PP_Prelude_46and[] = {
 };
Node PC_Prelude_46and[] = {
 	/* ST_v163: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(97,110,100,0)
,	/* PS_v165: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46and)
, useLabel(PC_Prelude_46foldr)
,	/* PS_v164: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46and)
, useLabel(PC_Prelude_46True)
,	/* PS_v162: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46and)
, useLabel(PC_Prelude_46and)
,};
