#include "newmacros.h"
#include "runtime.h"

#define CT_v283	((void*)startLabel+44)
#define FN_Memo_46Prelude_46183_46comb	((void*)startLabel+88)
#define CT_v284	((void*)startLabel+100)
#define F0_Memo_46Prelude_46183_46comb	((void*)startLabel+108)
#define CT_v285	((void*)startLabel+164)
#define FN_LAMBDA279	((void*)startLabel+200)
#define CT_v286	((void*)startLabel+220)
#define F0_LAMBDA279	((void*)startLabel+228)
#define CT_v287	((void*)startLabel+284)
#define FN_LAMBDA280	((void*)startLabel+320)
#define CT_v288	((void*)startLabel+340)
#define F0_LAMBDA280	((void*)startLabel+348)
#define CT_v289	((void*)startLabel+372)
#define CT_v290	((void*)startLabel+420)
#define CT_v291	((void*)startLabel+468)
#define FN_LAMBDA281	((void*)startLabel+500)
#define CT_v292	((void*)startLabel+524)
#define F0_LAMBDA281	((void*)startLabel+532)
extern Node FN_Prelude_46compare[];
extern Node FN_Tree234_46treeAdd[];
extern Node FN_Prelude_46_36[];
extern Node F0_NHC_46Internal_46_95id[];
extern Node FN_NHC_46Internal_46_95apply1[];
extern Node FN_Tree234_46treeSearch[];
extern Node CF_Tree234_46initTree[];
extern Node FN_Prelude_46foldl[];
extern Node FN_Tree234_46treeMapList[];

static Node startLabel[] = {
  42
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v283)
,};
Node FN_Memo_46addM[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,HEAP_ARG)
, bytes2word(1,HEAP_CVAL_I5,HEAP_OFF_N1,4)
, bytes2word(HEAP_OFF_N1,4,HEAP_ARG_ARG,3)
, bytes2word(2,PUSH_HEAP,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,7)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v283: (byte 0) */
  HW(5,3)
, 0
,};
Node F0_Memo_46addM[] = {
  CAPTAG(useLabel(FN_Memo_46addM),3)
, CAPTAG(useLabel(FN_Memo_46Prelude_46183_46comb),2)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_Tree234_46treeAdd))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46_95id)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v284)
,	/* FN_Memo_46Prelude_46183_46comb: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDSTACK_I16,PUSH_ARG_I2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v284: (byte 0) */
  HW(0,2)
, 0
,	/* F0_Memo_46Prelude_46183_46comb: (byte 0) */
  CAPTAG(useLabel(FN_Memo_46Prelude_46183_46comb),2)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v285)
,};
Node FN_Memo_46lookupM[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v285: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Memo_46lookupM[] = {
  CAPTAG(useLabel(FN_Memo_46lookupM),3)
, CAPTAG(useLabel(FN_LAMBDA279),1)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Tree234_46treeSearch))
, bytes2word(1,0,0,1)
, useLabel(CT_v286)
,	/* FN_LAMBDA279: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG,1,RETURN,ENDCODE)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,1,0)
,	/* CT_v286: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA279: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA279),1)
, bytes2word(3,0,2,1)
, bytes2word(1,2,0,3)
, useLabel(CT_v287)
,};
Node FN_Memo_46elemM[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_N1,1,HEAP_CVAL_I3)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,1,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,3,HEAP_ARG,3)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,6,HEAP_OFF_N1)
, bytes2word(8,HEAP_OFF_N1,8,HEAP_OFF_N1)
, bytes2word(6,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(0,0,0)
,	/* CT_v287: (byte 0) */
  HW(4,3)
, 0
,};
Node F0_Memo_46elemM[] = {
  CAPTAG(useLabel(FN_Memo_46elemM),3)
, CAPTAG(useLabel(FN_LAMBDA280),1)
, VAPTAG(useLabel(FN_Prelude_46compare))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95apply1))
, VAPTAG(useLabel(FN_Tree234_46treeSearch))
, bytes2word(1,0,0,1)
, useLabel(CT_v288)
,	/* FN_LAMBDA280: (byte 0) */
  bytes2word(ZAP_ARG_I1,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1)
, bytes2word(1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,0,0)
,	/* CT_v288: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA280: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA280),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v289)
,};
Node FN_Memo_46initM[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v289: (byte 0) */
  HW(1,0)
, 0
,};
Node CF_Memo_46initM[] = {
  VAPTAG(useLabel(FN_Memo_46initM))
, useLabel(CF_Tree234_46initTree)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v290)
,};
Node FN_Memo_46fromListM[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(PUSH_HEAP,HEAP_CVAL_I4,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_I5,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v290: (byte 0) */
  HW(3,2)
, 0
,};
Node F0_Memo_46fromListM[] = {
  CAPTAG(useLabel(FN_Memo_46fromListM),2)
, CAPTAG(useLabel(FN_Memo_46addM),2)
, VAPTAG(useLabel(FN_Prelude_46foldl))
, useLabel(CF_Memo_46initM)
, bytes2word(1,0,0,1)
, useLabel(CT_v291)
,};
Node FN_Memo_46listM[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_OFF_N1,2,HEAP_ARG,1)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v291: (byte 0) */
  HW(2,1)
, 0
,};
Node F0_Memo_46listM[] = {
  CAPTAG(useLabel(FN_Memo_46listM),1)
, CAPTAG(useLabel(FN_LAMBDA281),2)
, VAPTAG(useLabel(FN_Tree234_46treeMapList))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v292)
,	/* FN_LAMBDA281: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_N1,1)
, bytes2word(HEAP_ARG_ARG,1,2,RETURN)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
, 0
, CONSTR(1,2,0)
,	/* CT_v292: (byte 0) */
  HW(0,2)
, 0
,	/* F0_LAMBDA281: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA281),2)
,};
