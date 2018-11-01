#include "newmacros.h"
#include "runtime.h"

#define CT_v170	((void*)startLabel+108)
#define ST_v167	((void*)startLabel+144)
#define PS_v169	((void*)startLabel+160)
#define PS_v168	((void*)startLabel+172)
#define PS_v166	((void*)startLabel+184)
extern Node FN_Prelude_46foldr[];
extern Node F0_Prelude_46_43_43[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46foldr[];
extern Node PC_Prelude_46_91_93[];

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v170)
,};
Node FN_Prelude_46concat[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,7,HEAP_CVAL_N1)
, bytes2word(12,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,7,HEAP_CVAL_N1)
, bytes2word(17,HEAP_CREATE,HEAP_SPACE,HEAP_SPACE)
, bytes2word(HEAP_CVAL_P1,8,HEAP_OFF_N1,11)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v169)
, 0
, 0
, 0
, 0
, useLabel(PS_v168)
, 0
, 0
, 0
, 0
, CONSTR(0,0,0)
, 0
, 0
, 0
, 0
, 40001
, useLabel(ST_v167)
,	/* CT_v170: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Prelude_46concat[] = {
  VAPTAG(useLabel(FN_Prelude_46concat))
, useLabel(PS_v166)
, 0
, 0
, 0
, CAPTAG(useLabel(FN_Prelude_46foldr),1)
, useLabel(F0_Prelude_46_43_43)
,};
Node PP_Prelude_46concat[] = {
 };
Node PC_Prelude_46concat[] = {
 	/* ST_v167: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(99,111,110,99)
, bytes2word(97,116,0,0)
,	/* PS_v169: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46concat)
, useLabel(PC_Prelude_46foldr)
,	/* PS_v168: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46concat)
, useLabel(PC_Prelude_46_91_93)
,	/* PS_v166: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46concat)
, useLabel(PC_Prelude_46concat)
,};
