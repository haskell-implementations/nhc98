#include "newmacros.h"
#include "runtime.h"

#define CT_v164	((void*)startLabel+20)
#define FN_LAMBDA161	((void*)startLabel+44)
#define CT_v166	((void*)startLabel+64)
#define CF_LAMBDA161	((void*)startLabel+72)
#define CT_v167	((void*)startLabel+96)
#define FN_LAMBDA162	((void*)startLabel+120)
#define CT_v169	((void*)startLabel+140)
#define CF_LAMBDA162	((void*)startLabel+148)
#define ST_v165	((void*)startLabel+152)
#define ST_v168	((void*)startLabel+157)

static Node startLabel[] = {
  bytes2word(0,0,0,0)
, useLabel(CT_v164)
,};
Node FN_Package_46version[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v164: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Package_46version[] = {
  VAPTAG(useLabel(FN_Package_46version))
, VAPTAG(useLabel(FN_LAMBDA161))
, bytes2word(0,0,0,0)
, useLabel(CT_v166)
,	/* FN_LAMBDA161: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v165)
,	/* CT_v166: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA161: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA161))
, bytes2word(0,0,0,0)
, useLabel(CT_v167)
,};
Node FN_Package_46name[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v167: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Package_46name[] = {
  VAPTAG(useLabel(FN_Package_46name))
, VAPTAG(useLabel(FN_LAMBDA162))
, bytes2word(0,0,0,0)
, useLabel(CT_v169)
,	/* FN_LAMBDA162: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v168)
,	/* CT_v169: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA162: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA162))
,	/* ST_v165: (byte 0) */
  bytes2word(48,46,57,99)
,	/* ST_v168: (byte 1) */
  bytes2word(0,103,114,101)
, bytes2word(101,110,45,99)
, bytes2word(97,114,100,32)
, bytes2word(40,121,111,114)
, bytes2word(107,41,0,0)
,};
