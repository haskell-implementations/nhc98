#include "newmacros.h"
#include "runtime.h"

#define CT_v252	((void*)startLabel+32)
#define FN_LAMBDA247	((void*)startLabel+60)
#define CT_v254	((void*)startLabel+80)
#define CF_LAMBDA247	((void*)startLabel+88)
#define CT_v255	((void*)startLabel+128)
#define FN_LAMBDA248	((void*)startLabel+156)
#define CT_v257	((void*)startLabel+176)
#define CF_LAMBDA248	((void*)startLabel+184)
#define CT_v258	((void*)startLabel+220)
#define FN_LAMBDA249	((void*)startLabel+248)
#define CT_v260	((void*)startLabel+268)
#define CF_LAMBDA249	((void*)startLabel+276)
#define CT_v261	((void*)startLabel+316)
#define FN_LAMBDA250	((void*)startLabel+344)
#define CT_v263	((void*)startLabel+364)
#define CF_LAMBDA250	((void*)startLabel+372)
#define CT_v264	((void*)startLabel+396)
#define CT_v265	((void*)startLabel+428)
#define CT_v266	((void*)startLabel+460)
#define CT_v267	((void*)startLabel+492)
#define ST_v259	((void*)startLabel+504)
#define ST_v256	((void*)startLabel+547)
#define ST_v262	((void*)startLabel+591)
#define ST_v253	((void*)startLabel+634)
extern Node FN_NHC_46Internal_46_95noMethodError[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v252)
,};
Node FN_NHC_46Binary_46_95_46sizeOf[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v252: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Binary_46_95_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46sizeOf),2)
, VAPTAG(useLabel(FN_LAMBDA247))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v254)
,	/* FN_LAMBDA247: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v253)
,	/* CT_v254: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA247: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA247))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v255)
,};
Node FN_NHC_46Binary_46_95_46getF[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v255: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Binary_46_95_46getF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46getF),3)
, VAPTAG(useLabel(FN_LAMBDA248))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v257)
,	/* FN_LAMBDA248: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v256)
,	/* CT_v257: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA248: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA248))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v258)
,};
Node FN_NHC_46Binary_46_95_46get[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I2,HEAP_CVAL_I3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,2)
, bytes2word(ZAP_ARG_I2,EVAL,NEEDHEAP_I32,APPLY)
, bytes2word(1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v258: (byte 0) */
  HW(2,2)
, 0
,};
Node F0_NHC_46Binary_46_95_46get[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46get),2)
, VAPTAG(useLabel(FN_LAMBDA249))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v260)
,	/* FN_LAMBDA249: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v259)
,	/* CT_v260: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA249: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA249))
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v261)
,};
Node FN_NHC_46Binary_46_95_46put[] = {
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_ARG_I3,PUSH_ARG_I2)
, bytes2word(HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1)
, bytes2word(2,ZAP_ARG_I2,ZAP_ARG_I3,EVAL)
, bytes2word(NEEDHEAP_I32,APPLY,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v261: (byte 0) */
  HW(2,3)
, 0
,};
Node F0_NHC_46Binary_46_95_46put[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46_95_46put),3)
, VAPTAG(useLabel(FN_LAMBDA250))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95noMethodError))
, bytes2word(0,0,0,0)
, useLabel(CT_v263)
,	/* FN_LAMBDA250: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v262)
,	/* CT_v263: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA250: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA250))
, bytes2word(1,0,0,1)
, useLabel(CT_v264)
,};
Node FN_NHC_46Binary_46getF[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,1)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v264: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46getF[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46getF),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v265)
,};
Node FN_NHC_46Binary_46sizeOf[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,2)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v265: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46sizeOf[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46sizeOf),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v266)
,};
Node FN_NHC_46Binary_46get[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,3)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v266: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46get[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46get),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v267)
,};
Node FN_NHC_46Binary_46put[] = {
  bytes2word(NEEDSTACK_I16,SELECTOR_EVAL,SELECT,4)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v267: (byte 0) */
  HW(0,1)
, 0
,};
Node F0_NHC_46Binary_46put[] = {
  CAPTAG(useLabel(FN_NHC_46Binary_46put),1)
,	/* ST_v259: (byte 0) */
  bytes2word(78,111,32,100)
, bytes2word(101,102,97,117)
, bytes2word(108,116,32,100)
, bytes2word(101,102,105,110)
, bytes2word(105,116,105,111)
, bytes2word(110,32,102,111)
, bytes2word(114,32,99,108)
, bytes2word(97,115,115,32)
, bytes2word(109,101,116,104)
, bytes2word(111,100,32,103)
,	/* ST_v256: (byte 3) */
  bytes2word(101,116,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,103,101)
,	/* ST_v262: (byte 3) */
  bytes2word(116,70,0,78)
, bytes2word(111,32,100,101)
, bytes2word(102,97,117,108)
, bytes2word(116,32,100,101)
, bytes2word(102,105,110,105)
, bytes2word(116,105,111,110)
, bytes2word(32,102,111,114)
, bytes2word(32,99,108,97)
, bytes2word(115,115,32,109)
, bytes2word(101,116,104,111)
, bytes2word(100,32,112,117)
,	/* ST_v253: (byte 2) */
  bytes2word(116,0,78,111)
, bytes2word(32,100,101,102)
, bytes2word(97,117,108,116)
, bytes2word(32,100,101,102)
, bytes2word(105,110,105,116)
, bytes2word(105,111,110,32)
, bytes2word(102,111,114,32)
, bytes2word(99,108,97,115)
, bytes2word(115,32,109,101)
, bytes2word(116,104,111,100)
, bytes2word(32,115,105,122)
, bytes2word(101,79,102,0)
,};
