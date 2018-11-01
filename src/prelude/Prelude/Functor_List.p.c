#include "newmacros.h"
#include "runtime.h"

#define CT_v188	((void*)startLabel+64)
#define CT_v192	((void*)startLabel+172)
#define ST_v190	((void*)startLabel+204)
#define ST_v186	((void*)startLabel+232)
#define PS_v187	((void*)startLabel+264)
#define PS_v185	((void*)startLabel+276)
#define PS_v189	((void*)startLabel+288)
#define PS_v191	((void*)startLabel+300)
extern Node FN_Prelude_46map[];
extern Node PM_Prelude[];
extern Node PC_Prelude_46map[];
extern Node PC_Prelude_461[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v188)
,};
Node FN_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_P1,7)
, bytes2word(HEAP_CVAL_N1,7,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_ARG_ARG_RET_EVAL,1,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, useLabel(PS_v187)
, 0
, 0
, 0
, 0
, 70005
, useLabel(ST_v186)
,	/* CT_v188: (byte 0) */
  HW(1,2)
, 0
,};
Node F0_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
  CAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93_46fmap),2)
, useLabel(PS_v185)
, 0
, 0
, 0
, VAPTAG(useLabel(FN_Prelude_46map))
, bytes2word(0,0,0,0)
, useLabel(CT_v192)
,};
Node FN_Prelude_46Functor_46Prelude_46_91_93[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,7)
, bytes2word(HEAP_CVAL_N1,12,HEAP_CREATE,HEAP_SPACE)
, bytes2word(HEAP_SPACE,HEAP_CVAL_P1,7,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, useLabel(PS_v191)
, 0
, 0
, 0
, 0
, CONSTR(0,1,0)
, 0
, 0
, 0
, 0
, 60010
, useLabel(ST_v190)
,	/* CT_v192: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Prelude_46Functor_46Prelude_46_91_93[] = {
  VAPTAG(useLabel(FN_Prelude_46Functor_46Prelude_46_91_93))
, useLabel(PS_v189)
, 0
, 0
, 0
, useLabel(F0_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,};
Node PP_Prelude_46Functor_46Prelude_46_91_93[] = {
 };
Node PC_Prelude_46Functor_46Prelude_46_91_93[] = {
 	/* ST_v190: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,0,0)
,};
Node PP_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
 };
Node PC_Prelude_46Functor_46Prelude_46_91_93_46fmap[] = {
 	/* ST_v186: (byte 0) */
  bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(70,117,110,99)
, bytes2word(116,111,114,46)
, bytes2word(80,114,101,108)
, bytes2word(117,100,101,46)
, bytes2word(91,93,46,102)
, bytes2word(109,97,112,0)
,	/* PS_v187: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46_91_93_46fmap)
, useLabel(PC_Prelude_46map)
,	/* PS_v185: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46_91_93_46fmap)
, useLabel(PC_Prelude_46Functor_46Prelude_46_91_93_46fmap)
,	/* PS_v189: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46_91_93)
, useLabel(PC_Prelude_46Functor_46Prelude_46_91_93)
,	/* PS_v191: (byte 0) */
  useLabel(PM_Prelude)
, useLabel(PP_Prelude_46Functor_46Prelude_46_91_93)
, useLabel(PC_Prelude_461)
,};
