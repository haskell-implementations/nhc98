#include "newmacros.h"
#include "runtime.h"

#define CT_v279	((void*)startLabel+48)
#define FN_LAMBDA266	((void*)startLabel+100)
#define CT_v280	((void*)startLabel+112)
#define F0_LAMBDA266	((void*)startLabel+120)
#define FN_LAMBDA265	((void*)startLabel+140)
#define v281	((void*)startLabel+155)
#define CT_v283	((void*)startLabel+168)
#define F0_LAMBDA265	((void*)startLabel+176)
#define CT_v284	((void*)startLabel+212)
#define FN_LAMBDA268	((void*)startLabel+244)
#define CT_v286	((void*)startLabel+264)
#define CF_LAMBDA268	((void*)startLabel+272)
#define FN_LAMBDA267	((void*)startLabel+284)
#define CT_v288	((void*)startLabel+304)
#define CF_LAMBDA267	((void*)startLabel+312)
#define CT_v289	((void*)startLabel+340)
#define FN_LAMBDA269	((void*)startLabel+376)
#define CT_v291	((void*)startLabel+396)
#define CF_LAMBDA269	((void*)startLabel+404)
#define FN_Platform_46cygshel	((void*)startLabel+416)
#define CT_v292	((void*)startLabel+432)
#define CF_Platform_46cygshel	((void*)startLabel+440)
#define FN_LAMBDA271	((void*)startLabel+464)
#define CT_v294	((void*)startLabel+484)
#define CF_LAMBDA271	((void*)startLabel+492)
#define FN_LAMBDA270	((void*)startLabel+504)
#define CT_v296	((void*)startLabel+524)
#define CF_LAMBDA270	((void*)startLabel+532)
#define v297	((void*)startLabel+578)
#define CT_v299	((void*)startLabel+592)
#define FN_LAMBDA273	((void*)startLabel+636)
#define CT_v301	((void*)startLabel+656)
#define CF_LAMBDA273	((void*)startLabel+664)
#define FN_LAMBDA272	((void*)startLabel+676)
#define CT_v303	((void*)startLabel+696)
#define CF_LAMBDA272	((void*)startLabel+704)
#define v304	((void*)startLabel+730)
#define CT_v306	((void*)startLabel+740)
#define FN_LAMBDA274	((void*)startLabel+776)
#define v307	((void*)startLabel+788)
#define CT_v309	((void*)startLabel+796)
#define F0_LAMBDA274	((void*)startLabel+804)
#define v310	((void*)startLabel+832)
#define CT_v312	((void*)startLabel+840)
#define FN_LAMBDA275	((void*)startLabel+872)
#define CT_v314	((void*)startLabel+892)
#define CF_LAMBDA275	((void*)startLabel+900)
#define CT_v315	((void*)startLabel+928)
#define FN_LAMBDA277	((void*)startLabel+960)
#define CT_v316	((void*)startLabel+980)
#define CF_LAMBDA277	((void*)startLabel+988)
#define FN_LAMBDA276	((void*)startLabel+1000)
#define CT_v318	((void*)startLabel+1020)
#define CF_LAMBDA276	((void*)startLabel+1028)
#define FN_Platform_46getProcessID_35	((void*)startLabel+1040)
#define CT_v319	((void*)startLabel+1056)
#define F0_Platform_46getProcessID_35	((void*)startLabel+1064)
#define CT_v320	((void*)startLabel+1088)
#define ST_v302	((void*)startLabel+1108)
#define ST_v300	((void*)startLabel+1115)
#define ST_v313	((void*)startLabel+1117)
#define ST_v293	((void*)startLabel+1122)
#define ST_v317	((void*)startLabel+1139)
#define ST_v295	((void*)startLabel+1147)
#define ST_v287	((void*)startLabel+1156)
#define ST_v290	((void*)startLabel+1164)
#define ST_v285	((void*)startLabel+1176)
extern Node FN_System_46getEnv[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61[];
extern Node FN_Prelude_46catch[];
extern Node FN_Prelude_46_36[];
extern Node F0_NHC_46Internal_46unsafePerformIO[];
extern Node FN_Prelude_46Monad_46NHC_46Internal_46IO_46return[];
extern Node FN_Prelude_46null[];
extern Node FN_List_46isPrefixOf[];
extern Node CF_Prelude_46Eq_46Prelude_46Char[];
extern Node FN_Prelude_46_43_43[];
extern Node FN_System_46system[];
extern Node FN_Prelude_46map[];
extern Node F0_Prelude_46id[];
void FR_Platform_46getProcessID_35(void);
extern Node FN_NHC_46Internal_46_95mkIOok0[];

static Node startLabel[] = {
  bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v279)
,};
Node FN_Platform_46withDefault[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_ARG,1)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,HEAP_CVAL_I5)
, bytes2word(HEAP_OFF_N1,5,HEAP_OFF_N1,4)
, bytes2word(HEAP_CVAL_P1,6,HEAP_ARG,2)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,4,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_CVAL_P1,9,HEAP_OFF_N1)
, bytes2word(5,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v279: (byte 0) */
  HW(7,2)
, 0
,};
Node F0_Platform_46withDefault[] = {
  CAPTAG(useLabel(FN_Platform_46withDefault),2)
, VAPTAG(useLabel(FN_System_46getEnv))
, CAPTAG(useLabel(FN_LAMBDA265),1)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46_62_62_61))
, CAPTAG(useLabel(FN_LAMBDA266),1)
, VAPTAG(useLabel(FN_Prelude_46catch))
, VAPTAG(useLabel(FN_Prelude_46_36))
, useLabel(F0_NHC_46Internal_46unsafePerformIO)
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v280)
,	/* FN_LAMBDA266: (byte 0) */
  bytes2word(ZAP_ARG_I2,NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3)
, bytes2word(HEAP_ARG,1,RETURN_EVAL,ENDCODE)
, bytes2word(0,0,0,0)
,	/* CT_v280: (byte 0) */
  HW(1,2)
, 0
,	/* F0_LAMBDA266: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA266),2)
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,2,0)
, bytes2word(1,1,0,2)
, useLabel(CT_v283)
,	/* FN_LAMBDA265: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_ARG)
, bytes2word(2,EVAL,NEEDHEAP_I32,JUMPFALSE)
, bytes2word(7,0,PUSH_HEAP,HEAP_CVAL_I4)
,	/* v281: (byte 3) */
  bytes2word(HEAP_ARG,1,RETURN_EVAL,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I4,HEAP_ARG,2,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v283: (byte 0) */
  HW(2,2)
, 0
,	/* F0_LAMBDA265: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA265),2)
, VAPTAG(useLabel(FN_Prelude_46null))
, VAPTAG(useLabel(FN_Prelude_46Monad_46NHC_46Internal_46IO_46return))
, bytes2word(0,0,0,0)
, useLabel(CT_v284)
,};
Node FN_Platform_46machine[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v284: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Platform_46machine[] = {
  VAPTAG(useLabel(FN_Platform_46machine))
, VAPTAG(useLabel(FN_LAMBDA267))
, VAPTAG(useLabel(FN_LAMBDA268))
, VAPTAG(useLabel(FN_Platform_46withDefault))
, bytes2word(0,0,0,0)
, useLabel(CT_v286)
,	/* FN_LAMBDA268: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v285)
,	/* CT_v286: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA268: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA268))
, bytes2word(0,0,0,0)
, useLabel(CT_v288)
,	/* FN_LAMBDA267: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v287)
,	/* CT_v288: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA267: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA267))
, bytes2word(0,0,0,0)
, useLabel(CT_v289)
,};
Node FN_Platform_46windows[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,PUSH_HEAP,HEAP_CVAL_I4)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_CVAL_P1)
, bytes2word(6,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v289: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Platform_46windows[] = {
  VAPTAG(useLabel(FN_Platform_46windows))
, VAPTAG(useLabel(FN_LAMBDA269))
, VAPTAG(useLabel(FN_List_46isPrefixOf))
, useLabel(CF_Prelude_46Eq_46Prelude_46Char)
, useLabel(CF_Platform_46machine)
, bytes2word(0,0,0,0)
, useLabel(CT_v291)
,	/* FN_LAMBDA269: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v290)
,	/* CT_v291: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA269: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA269))
, bytes2word(0,0,0,0)
, useLabel(CT_v292)
,	/* FN_Platform_46cygshel: (byte 0) */
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v292: (byte 0) */
  HW(3,0)
, 0
,	/* CF_Platform_46cygshel: (byte 0) */
  VAPTAG(useLabel(FN_Platform_46cygshel))
, VAPTAG(useLabel(FN_LAMBDA270))
, VAPTAG(useLabel(FN_LAMBDA271))
, VAPTAG(useLabel(FN_Platform_46withDefault))
, bytes2word(0,0,0,0)
, useLabel(CT_v294)
,	/* FN_LAMBDA271: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v293)
,	/* CT_v294: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA271: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA271))
, bytes2word(0,0,0,0)
, useLabel(CT_v296)
,	/* FN_LAMBDA270: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v295)
,	/* CT_v296: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA270: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA270))
, bytes2word(1,0,0,1)
, useLabel(CT_v299)
,};
Node FN_Platform_46shell[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,28,0)
, bytes2word(HEAP_CVAL_I4,HEAP_CVAL_I5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_ARG,1,HEAP_OFF_N1,3)
, bytes2word(HEAP_CVAL_P1,6,HEAP_OFF_N1,6)
, bytes2word(HEAP_OFF_N1,5,HEAP_CVAL_P1,6)
, bytes2word(HEAP_CVAL_P1,7,HEAP_OFF_N1,5)
, bytes2word(PUSH_HEAP,HEAP_CVAL_P1,8,HEAP_OFF_N1)
,	/* v297: (byte 2) */
  bytes2word(4,RETURN_EVAL,PUSH_HEAP,HEAP_CVAL_P1)
, bytes2word(8,HEAP_ARG,1,RETURN_EVAL)
, bytes2word(ENDCODE,0,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v299: (byte 0) */
  HW(6,1)
, 0
,};
Node F0_Platform_46shell[] = {
  CAPTAG(useLabel(FN_Platform_46shell),1)
, useLabel(CF_Platform_46windows)
, VAPTAG(useLabel(FN_LAMBDA272))
, VAPTAG(useLabel(FN_LAMBDA273))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, useLabel(CF_Platform_46cygshel)
, VAPTAG(useLabel(FN_System_46system))
, bytes2word(0,0,0,0)
, useLabel(CT_v301)
,	/* FN_LAMBDA273: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v300)
,	/* CT_v301: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA273: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA273))
, bytes2word(0,0,0,0)
, useLabel(CT_v303)
,	/* FN_LAMBDA272: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v302)
,	/* CT_v303: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA272: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA272))
, bytes2word(0,0,0,0)
, useLabel(CT_v306)
,};
Node FN_Platform_46escape[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,8,0)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_OFF_N1)
,	/* v304: (byte 2) */
  bytes2word(2,RETURN,PUSH_CVAL_P1,6)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v306: (byte 0) */
  HW(4,0)
, 0
,};
Node CF_Platform_46escape[] = {
  VAPTAG(useLabel(FN_Platform_46escape))
, useLabel(CF_Platform_46windows)
, CAPTAG(useLabel(FN_LAMBDA274),1)
, CAPTAG(useLabel(FN_Prelude_46map),1)
, useLabel(F0_Prelude_46id)
, bytes2word(1,0,0,1)
, useLabel(CT_v309)
,	/* FN_LAMBDA274: (byte 0) */
  bytes2word(NEEDSTACK_I16,PUSH_CHAR_P1,92,PUSH_ARG_I1)
, bytes2word(EVAL,EQ_W,JUMPFALSE,5)
,	/* v307: (byte 4) */
  bytes2word(0,PUSH_CHAR_P1,47,RETURN)
, bytes2word(PUSH_ARG_I1,RETURN,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v309: (byte 0) */
  HW(0,1)
, 0
,	/* F0_LAMBDA274: (byte 0) */
  CAPTAG(useLabel(FN_LAMBDA274),1)
, bytes2word(1,0,0,1)
, useLabel(CT_v312)
,};
Node FN_Platform_46exe[] = {
  bytes2word(NEEDSTACK_I16,PUSH_CVAL_P1,3,EVAL)
, bytes2word(NEEDHEAP_I32,JUMPFALSE,10,0)
, bytes2word(HEAP_CVAL_I4,PUSH_HEAP,HEAP_CVAL_I5,HEAP_ARG)
,	/* v310: (byte 4) */
  bytes2word(1,HEAP_OFF_N1,3,RETURN_EVAL)
, bytes2word(PUSH_ARG_I1,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v312: (byte 0) */
  HW(3,1)
, 0
,};
Node F0_Platform_46exe[] = {
  CAPTAG(useLabel(FN_Platform_46exe),1)
, useLabel(CF_Platform_46windows)
, VAPTAG(useLabel(FN_LAMBDA275))
, VAPTAG(useLabel(FN_Prelude_46_43_43))
, bytes2word(0,0,0,0)
, useLabel(CT_v314)
,	/* FN_LAMBDA275: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v313)
,	/* CT_v314: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA275: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA275))
, bytes2word(0,0,0,0)
, useLabel(CT_v315)
,};
Node FN_Platform_46builtby[] = {
  bytes2word(NEEDHEAP_I32,HEAP_CVAL_I3,HEAP_CVAL_I4,PUSH_HEAP)
, bytes2word(HEAP_CVAL_I5,HEAP_OFF_N1,3,HEAP_OFF_N1)
, bytes2word(3,RETURN_EVAL,ENDCODE,0)
, bytes2word(0,0,0,0)
,	/* CT_v315: (byte 0) */
  HW(3,0)
, 0
,};
Node CF_Platform_46builtby[] = {
  VAPTAG(useLabel(FN_Platform_46builtby))
, VAPTAG(useLabel(FN_LAMBDA276))
, VAPTAG(useLabel(FN_LAMBDA277))
, VAPTAG(useLabel(FN_Platform_46withDefault))
, bytes2word(0,0,0,0)
, useLabel(CT_v316)
,	/* FN_LAMBDA277: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v285)
,	/* CT_v316: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA277: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA277))
, bytes2word(0,0,0,0)
, useLabel(CT_v318)
,	/* FN_LAMBDA276: (byte 0) */
  bytes2word(NEEDHEAP_I32,PUSH_CADR_N1,2,STRING)
, bytes2word(RETURN,ENDCODE,0,0)
, bytes2word(0,0,0,0)
, CONSTRW(1,0)
, useLabel(ST_v317)
,	/* CT_v318: (byte 0) */
  HW(0,0)
, 0
,	/* CF_LAMBDA276: (byte 0) */
  VAPTAG(useLabel(FN_LAMBDA276))
, bytes2word(1,0,0,1)
, useLabel(CT_v319)
,	/* FN_Platform_46getProcessID_35: (byte 0) */
  bytes2word(PUSH_ARG_I1,EVAL,POP_I1,PRIMITIVE)
, useLabel(FR_Platform_46getProcessID_35)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v319: (byte 0) */
  HW(0,1)
, 0
,	/* F0_Platform_46getProcessID_35: (byte 0) */
  CAPTAG(useLabel(FN_Platform_46getProcessID_35),1)
, bytes2word(0,0,0,0)
, useLabel(CT_v320)
,};
Node FN_Platform_46getProcessID[] = {
  bytes2word(NEEDHEAP_I32,PUSH_HEAP,HEAP_CVAL_I3,HEAP_CVAL_I4)
, bytes2word(RETURN_EVAL,ENDCODE,0,0)
, bytes2word(0,0,0,0)
,	/* CT_v320: (byte 0) */
  HW(2,0)
, 0
,};
Node CF_Platform_46getProcessID[] = {
  VAPTAG(useLabel(FN_Platform_46getProcessID))
, VAPTAG(useLabel(FN_NHC_46Internal_46_95mkIOok0))
, useLabel(F0_Platform_46getProcessID_35)
,	/* ST_v302: (byte 0) */
  bytes2word(32,45,99,108)
,	/* ST_v300: (byte 3) */
  bytes2word(32,34,0,34)
,	/* ST_v313: (byte 1) */
  bytes2word(0,46,101,120)
,	/* ST_v293: (byte 2) */
  bytes2word(101,0,47,99)
, bytes2word(121,103,119,105)
, bytes2word(110,47,98,105)
, bytes2word(110,47,98,97)
,	/* ST_v317: (byte 3) */
  bytes2word(115,104,0,66)
, bytes2word(85,73,76,84)
,	/* ST_v295: (byte 3) */
  bytes2word(66,89,0,67)
, bytes2word(89,71,83,72)
,	/* ST_v287: (byte 4) */
  bytes2word(69,76,76,0)
, bytes2word(77,65,67,72)
,	/* ST_v290: (byte 4) */
  bytes2word(73,78,69,0)
, bytes2word(105,120,56,54)
, bytes2word(45,67,89,71)
,	/* ST_v285: (byte 4) */
  bytes2word(87,73,78,0)
, bytes2word(117,110,107,110)
, bytes2word(111,119,110,0)
,};

#include <haskell2c.h>
#include <HsFFI.h>

/* foreign import ccall "getpid" Platform.getProcessID# 1 :: Prelude.() -> Prelude.Int */
extern HsInt getpid(void);
#ifdef PROFILE
static SInfo pf_Platform_46getProcessID_35 = {"Platform","Platform.getProcessID#","Prelude.Int"};
#endif
C_HEADER(FR_Platform_46getProcessID_35) {
  NodePtr nodeptr;
  HsInt result;
  /* void arg1 */;

  result = getpid();

  nodeptr = nhc_mkInt(result);
  INIT_PROFINFO(nodeptr,&pf_Platform_46getProcessID_35);
  C_RETURN(nodeptr);
}
