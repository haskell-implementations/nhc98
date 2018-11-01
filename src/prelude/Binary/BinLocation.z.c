#include "newmacros.h"
#include "runtime.h"

#define FN_NHC_46Binary_46toBinLocation	((void*)startLabel+16)
#define v210	((void*)startLabel+36)
#define v211	((void*)startLabel+40)
#define CT_v215	((void*)startLabel+72)
#define F0_NHC_46Binary_46toBinLocation	((void*)startLabel+80)
#define v217	((void*)startLabel+106)
#define v218	((void*)startLabel+121)
#define CT_v221	((void*)startLabel+164)
#define FN_LAMBDA205	((void*)startLabel+188)
#define CT_v224	((void*)startLabel+220)
#define CF_LAMBDA205	((void*)startLabel+228)
#define ST_v223	((void*)startLabel+232)
#define ST_v219	((void*)startLabel+233)
#define ST_v222	((void*)startLabel+260)
#define ST_v212	((void*)startLabel+299)
extern Node TM_NHC_46Binary[];
extern Node TMSUB_NHC_46Binary[];

static Node startLabel[] = {
  42
,};
Node C0_NHC_46Binary_46Memory[] = {
  CONSTR(0,0,0)
, bytes2word(1,0,0,1)
, useLabel(CT_v215)
,	/* FN_NHC_46Binary_46toBinLocation: (byte 0) */
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,UNPACK)
, bytes2word(3,PUSH_P1,0,EVAL)
, bytes2word(NEEDHEAP_I32,TABLESWITCH,2,NOP)
,	/* v210: (byte 4) */
  bytes2word(TOP(4),BOT(4),TOP(8),BOT(8))
,	/* v211: (byte 4) */
  bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_IN3,RETURN)
, bytes2word(POP_I1,PUSH_HEAP,HEAP_CVAL_N1,4)
, bytes2word(HEAP_I2,HEAP_P1,3,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,2,0)
, CONSTR(0,0,0)
, 130001
, useLabel(ST_v212)
,	/* CT_v215: (byte 0) */
  HW(0,1)
, 0
,	/* F0_NHC_46Binary_46toBinLocation: (byte 0) */
  CAPTAG(useLabel(FN_NHC_46Binary_46toBinLocation),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v221)
,};
Node FN_NHC_46Binary_46fromBinLocation[] = {
  useLabel(TM_NHC_46Binary)
, bytes2word(NEEDSTACK_I16,PUSH_ZAP_ARG_I1,EVAL,NEEDHEAP_I32)
, bytes2word(TABLESWITCH,2,TOP(4),BOT(4))
,	/* v217: (byte 2) */
  bytes2word(TOP(19),BOT(19),POP_I1,HEAP_CVAL_IN3)
, bytes2word(HEAP_CVAL_I3,HEAP_CVAL_N1,4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_OFF_N1,4)
,	/* v218: (byte 1) */
  bytes2word(RETURN,UNPACK,2,HEAP_CVAL_N1)
, bytes2word(6,PUSH_HEAP,HEAP_CVAL_N1,5)
, bytes2word(HEAP_OFF_N1,2,HEAP_I1,HEAP_I2)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTR(1,0,0)
, CONSTR(0,3,0)
, CONSTR(2,0,0)
, CONSTR(0,0,0)
, 100001
, useLabel(ST_v219)
,	/* CT_v221: (byte 0) */
  HW(1,1)
, 0
,};
Node F0_NHC_46Binary_46fromBinLocation[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46fromBinLocation),1)
, VAPTAG(useLabel(FN_LAMBDA205))
, bytes2word(0,0,0,0)
, useLabel(CT_v224)
,	/* FN_LAMBDA205: (byte 0) */
  useLabel(TMSUB_NHC_46Binary)
, bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,4,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v223)
, 100042
, useLabel(ST_v222)
,	/* CT_v224: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA205: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA205))
,	/* ST_v223: (byte 0) */
 	/* ST_v219: (byte 1) */
  bytes2word(0,78,72,67)
, bytes2word(46,66,105,110)
, bytes2word(97,114,121,46)
, bytes2word(102,114,111,109)
, bytes2word(66,105,110,76)
, bytes2word(111,99,97,116)
,	/* ST_v222: (byte 4) */
  bytes2word(105,111,110,0)
, bytes2word(78,72,67,46)
, bytes2word(66,105,110,97)
, bytes2word(114,121,46,102)
, bytes2word(114,111,109,66)
, bytes2word(105,110,76,111)
, bytes2word(99,97,116,105)
, bytes2word(111,110,58,49)
, bytes2word(48,58,52,50)
, bytes2word(45,49,48,58)
,	/* ST_v212: (byte 3) */
  bytes2word(52,51,0,78)
, bytes2word(72,67,46,66)
, bytes2word(105,110,97,114)
, bytes2word(121,46,116,111)
, bytes2word(66,105,110,76)
, bytes2word(111,99,97,116)
, bytes2word(105,111,110,0)
,};
