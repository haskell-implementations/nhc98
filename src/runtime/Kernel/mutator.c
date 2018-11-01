#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <setjmp.h>

#include "cinterface.h"
/* #include "node.h"     -- already included in cinterface.h */
/* #include "runtime.h"  -- already included in node.h */
/* #include "bytecode.h" -- already included in node.h via newmacros.h */
#include "mutlib.h"
#include "mark.h"
#include "initend.h"

#if defined(__GNUC__) && !defined(DEBUG)
#  define USE_GCC_LABELS 1
#else
#  define USE_GCC_LABELS 0
#endif

#ifdef BYTECODE_PROF
/* for profiling bytecode instruction pairs/triples */
#define PAIR 0		/* for pairs, PAIR=1, for triples, PAIR=0 */
#if PAIR
static int           total_instr_count=0;
static int           instr_pair[ENDCODE+1][ENDCODE+1];
static unsigned char last_instr=EVAL;
#define register_instr(x)     instr_pair[last_instr][x]++; last_instr=x; \
				total_instr_count++
#else
static int           total_instr_count=0;
static int           instr_triple[ENDCODE+1][ENDCODE+1][ENDCODE+1];
static unsigned char last_instr=EVAL;
static unsigned char penu_instr=EVAL;
#define register_instr(x)     instr_triple[penu_instr][last_instr][x]++; \
				penu_instr=last_instr; \
				last_instr=x; \
				total_instr_count++
#endif
#else
#define register_instr(x)
#endif

#if defined(__CYGWIN32__) || defined(__MINGW32__)
extern jmp_buf exit_mutator;
#else
extern sigjmp_buf exit_mutator;
#endif

NodePtr  Hp;
NodePtr *Sp;
NodePtr *Fp;
CodePtr  Ip;

#if 0
#define INSTR(x)  fprintf(stderr,"eval: %s\n",x)
#else
#define INSTR(x)
#endif

#if TRACE
NodePtr stopHP;
CodePtr stopIP;
int inscount;
int stopInscount;
#endif


#ifdef PROFILE

static SInfo apply1ProfInfo = { "Runtime","<APPLY>","<APPLY.VAP>"};
static SInfo apply2ProfInfo = { "Runtime","<APPLY>","<APPLY.$>"};
static SInfo apply3ProfInfo = { "Runtime","<APPLY>","<APPLY.CAP>"};
/* static SInfo evalProfInfo = { "Runtime","<EVAL>","<EVAL.BlackHole>"}; */
static SInfo int1ProfInfo = { "Runtime","<unary_int_op>","Prelude.Int"};
static SInfo int2ProfInfo = { "Runtime","<binary_int_op>","Prelude.Int"};
static SInfo float1ProfInfo = { "Runtime","<unary_float_op>","Prelude.Float"};
static SInfo float2ProfInfo = { "Runtime","<binary_float_op>","Prelude.Float"};
static SInfo double1ProfInfo = { "Runtime","<unary_double_op>","Prelude.Double"};
static SInfo double2ProfInfo = { "Runtime","<binary_double_op>","Prelude.Double"};
static SInfo fromEnumProfInfo = { "Runtime","<fromEnum>","Prelude.Int"};
static SInfo toEnumProfInfo = { "Runtime","<toEnum>","<Enum>"};
static SInfo string1ProfInfo = { "Runtime","<STRING>","Prelude.Int"};
static SInfo string2ProfInfo = { "Runtime","<STRING>","<String_VAP>"};
static SInfo string3ProfInfo = { "Runtime","<STRING>","Prelude.:"};
static SInfo inpStringProfInfo = { "Runtime","<STRING>","<hGetContents_VAP>"};
/* static SInfo handleProfInfo = { "Runtime","<Handle>","IO.Handle"}; */

#endif

#define DUMP_NODE(n) fprintf(stderr," %08lx at %p\n",n[0],n);

#if PARANOID

#define ASSERT_W(i,n) \
  if(CONSTR_INT != *(n)) { \
    fprintf(stderr,"Ip = %08x: Expected Int but got ",i);   \
    DUMP_NODE(n); \
  }

#define ASSERT_F(i,n) \
  if(CONSTR_FLOAT != *(n)) { \
    fprintf(stderr,"Ip = %08x: Expected Float but got ",i); \
    DUMP_NODE(n); \
  }

#define ASSERT_D(i,n) \
  if(CONSTR_DOUBLE != *(n)) { \
    fprintf(stderr,"Ip = %08x: Expected Double but got ",i); \
    DUMP_NODE(n); \
  }

#else

#define ASSERT_W(i,n)
#define ASSERT_F(i,n)
#define ASSERT_D(i,n)

#endif

#if defined(DEBUG)
#define SHOW(x)	x
#if USE_GCC_LABELS
static char *instr_names[];
#endif
#else
#define SHOW(x)
#endif


void run(NodePtr toplevel)
{
  NodePtr *sp,  *fp,  hp;	/* -- shadow globals for efficiency */
  CodePtr ip;			/* -- shadow globals for efficiency */
  NodePtr vapptr;
  NodePtr nodeptr;
  NodePtr *constptr = NULL;

  TPROF_SETUP

#if USE_GCC_LABELS
#  define ins(x)	&&l##x
   static void *labs[] = { INSTRUCTION_LIST };
#  undef ins
#  define Dispatch	Break;
#  define Case(x)	l##x
#  define Break		SHOW(fprintf(stderr,"%s\t\t",instr_names[*ip]);) \
			SHOW(fprintf(stderr,"hp=0x%x sp=0x%x fp=0x%x ip=0x%x\n",hp,sp,fp,ip);) \
			register_instr(*ip); ip++; goto *labs[*(ip-1)]
#  define EndDispatch	
#else
#  define Dispatch	switch (*ip++) {
#  define Case(x)	case x
#  define Break		break
#  define EndDispatch	}
#endif

  sp = Sp;
  fp = Fp;
  hp = Hp;

#ifdef TPROF
  ip = (CodePtr)(LEAVE+NS);   /* +NS (DAVID) */
  TPROF_RUN;
#else
  ip = (CodePtr)(LEAVE);
#endif
  vapptr = toplevel;

  goto EvalTOS;

  for(;;) {
  NextInst:


#if INSCOUNT
    if(insCount)
      countIns(ip);
#endif

    Dispatch

    Case(NEEDHEAP_I32): { HEAP_CHECK_VAP(32); } Break;
    Case(NEEDHEAP_P1):  { Int i = *ip++;      HEAP_CHECK_VAP(i); } Break;
    Case(NEEDHEAP_P2):  { Int i = HEAPOFFSET(ip[0]) + (HEAPOFFSET(ip[1])<<8); ip+=2; HEAP_CHECK_VAP(i);} Break;
      /* !!! Need stack !!! */
    Case(NEEDSTACK_I16):  { HEAP_CHECK_VAP(16); TPROF_NEEDSTACK_I16; } Break;
    Case(NEEDSTACK_P1):  { Int i = *ip++;      HEAP_CHECK_VAP(i); } Break;
    Case(NEEDSTACK_P2): { Int i = HEAPOFFSET(ip[0]) + (HEAPOFFSET(ip[1])<<8); ip+=2; HEAP_CHECK_VAP(i); } Break;
      
    Case(JUMP):  ip += HEAPOFFSET(ip[0]) + (HEAPOFFSET(ip[1])<<8); Break;
    Case(JUMPFALSE):	/* DAVID */
      { nodeptr = *sp++; IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	if (GET_BOOL_VALUE(nodeptr) )
	  ip += 2;
	else
	  ip += HEAPOFFSET(ip[0]) + (HEAPOFFSET(ip[1])<<8);
      } Break;
    Case(NOP):
      fprintf(stderr,"Executed NOP at %p\n",ip);
      Break;

    Case(PRIMITIVE):
      { Primitive fun;
	ip = (CodePtr) ALIGNPTR(ip);
	fun = *(Primitive*)ip;
        SHOW(fprintf(stderr,"\tPRIMITIVE %p\n",fun);)
        fflush(stderr);
	ip += sizeof(Primitive);
        TPROF_GREENCARD_ENTER;
        CALL_C(fun);
        TPROF_GREENCARD_EXIT;
      }
      /* PRIMITIVE is always followed by RETURN_EVAL, so we elide the */
      /* bytecode and jump direct.  (Later, let's not generate the */
      /* bytecode either.) */
      /* ip++; */
      /* goto return_eval; */
      /* Ahem.  It turns out in the new FFI that IO primitives are *not* */
      /* always followed by RETURN_EVAL.  */
      Break;


    Case(ZAP_ARG_I1):   vapptr[EXTRA +1    ] = (Node)ZAP_ARG_NODE;  Break;
    Case(ZAP_ARG_I2):   vapptr[EXTRA +2    ] = (Node)ZAP_ARG_NODE;  Break;
    Case(ZAP_ARG_I3):   vapptr[EXTRA +3    ] = (Node)ZAP_ARG_NODE;  Break;
    Case(ZAP_ARG):      vapptr[EXTRA +HEAPOFFSET(ip[0])] = (Node)ZAP_ARG_NODE; ip+=1; Break;
    Case(ZAP_STACK_P1): sp[HEAPOFFSET(ip[0])           ] = ZAP_STACK_NODE;     ip+=1; Break;
    Case(ZAP_STACK_P2): sp[HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)] = ZAP_STACK_NODE;     ip+=2; Break;
      
    Case(PUSH_CADR_N2): *--sp = (NodePtr)&constptr[-HEAPOFFSET(ip[0])-(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
    Case(PUSH_CADR_N1): *--sp = (NodePtr)&constptr[-HEAPOFFSET(ip[0])];            ip+=1; Break;
    Case(PUSH_CADR_P1): *--sp = (NodePtr)&constptr[ HEAPOFFSET(ip[0])];            ip+=1; Break;
    Case(PUSH_CADR_P2): *--sp = (NodePtr)&constptr[ HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
    Case(PUSH_CVAL_N2): *--sp = (NodePtr) constptr[-HEAPOFFSET(ip[0])-(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
    Case(PUSH_CVAL_N1): *--sp = (NodePtr) constptr[-HEAPOFFSET(ip[0])];            ip+=1; Break;
    Case(PUSH_CVAL_P1): *--sp = (NodePtr) constptr[ HEAPOFFSET(ip[0])];            ip+=1; Break;  
    Case(PUSH_CVAL_P2): *--sp = (NodePtr) constptr[ HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
    Case(PUSH_INT_N1):  *--sp =  GET_INT(-HEAPOFFSET(ip[0]));            ip+=1; Break;
    Case(PUSH_INT_P1):  *--sp =  GET_INT( HEAPOFFSET(ip[0]));            ip+=1; Break;
    Case(PUSH_CHAR_N1): *--sp =  GET_CHAR(-HEAPOFFSET(ip[0]));           ip+=1; Break;
    Case(PUSH_CHAR_P1): *--sp =  GET_CHAR( HEAPOFFSET(ip[0]));           ip+=1; Break;
    Case(PUSH_ARG_I1):  UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,1);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr; Break;
    Case(PUSH_ARG_I2):  UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,2);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr; Break;
    Case(PUSH_ARG_I3):  UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,3);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr; Break;
    Case(PUSH_ARG):     UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,ip[0]);          ip+=1;
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr; Break;

    Case(PUSH_ZAP_ARG_I1):  UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,1);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr;
                       vapptr[EXTRA +1] = (Node)ZAP_ARG_NODE;  Break;
    Case(PUSH_ZAP_ARG_I2):  UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,2);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr;
                       vapptr[EXTRA +2] = (Node)ZAP_ARG_NODE;  Break;
    Case(PUSH_ZAP_ARG_I3):  UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,3);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr;
                       vapptr[EXTRA +3] = (Node)ZAP_ARG_NODE;  Break;
    Case(PUSH_ZAP_ARG):     UPDATE_PROFINFO(vapptr);
                       nodeptr =GET_POINTER_ARG1(vapptr,ip[0]);
                       IND_REMOVE(nodeptr); 
                       *--sp = nodeptr;
                       vapptr[EXTRA +HEAPOFFSET(ip[0])] = (Node)ZAP_ARG_NODE;
                       ip+=1; Break;

    Case(PUSH_HEAP):    *--sp = hp; Break;
    Case(PUSH_I1):      nodeptr = sp[1];                *--sp = nodeptr;        Break;
    Case(PUSH_P1):      nodeptr = sp[HEAPOFFSET(ip[0])];            *--sp = nodeptr; ip+=1; Break;
    Case(PUSH_P2):      nodeptr = sp[HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)]; *--sp = nodeptr; ip+=2; Break;
      
    Case(POP_I1):       sp += 1;                        Break;
    Case(POP_P1):       sp += HEAPOFFSET(ip[0]);             ip+=1; Break;
    Case(POP_P2):       sp += HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8) ; ip+=2; Break;
    Case(SLIDE_P1):     nodeptr = sp[0]; sp += HEAPOFFSET(ip[0]);             sp[0] = nodeptr; ip+=1; Break;
    Case(SLIDE_P2):     nodeptr = sp[0]; sp += HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8) ; sp[0] = nodeptr; ip+=2; Break;
    Case(SELECT):
      { Int index = *ip++;
	nodeptr = *sp;
	IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	*sp = (NodePtr) GET_POINTER_ARG1(nodeptr,index);
        TPROF_SELECT;
      } goto return_eval;

    Case(UNPACK):
#if PARANOID
      { int i;
	nodeptr = sp[0];
	IND_REMOVE(nodeptr);
	switch(GET_LARGETAG(nodeptr)) {
	case CON_DATA | CON_TAG:
	case CON_CDATA | CON_TAG:
	  i = CONINFO_SIZE(GET_CONINFO(nodeptr));
	  break;
	case CON_PTRS | CON_TAG:
	case CON_WORDS | CON_TAG:
	  i = CONINFO_LARGESIZES(GET_CONINFO(nodeptr));
	  break;
	default:
	  fprintf(stderr,"Trying to get tag from unevaluated node in UNPACK at %08x!\n",ip-1);
	  fprintf(stderr,"Node is:\n");
	  fprintf(stderr," %08x at %08x\n",nodeptr[0],nodeptr);
	  exit(-1);
	  Break; 
	}
	if(i!=ip[0]) {
	  fprintf(stderr,"Trying to do UNPACK %d on a node with %d arguments at %08x!\n",ip[0],i,ip-1);
	  fprintf(stderr,"Node is:\n");
	  fprintf(stderr," %08x at %08x\n",nodeptr[0],nodeptr);
	  exit(-1);
	}
      }
#endif
      { Int arity = *ip++;
	nodeptr = *sp++;
	IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	while (arity) {
	  *--sp = (NodePtr) GET_POINTER_ARG1(nodeptr,arity--);
	}
      } Break;
      
      
    Case(APPLY):
    INSTR("apply");
    { int need,size,args = *ip++;
      Cinfo cinfo;
      NodePtr vap;

      nodeptr = *sp++;
      IND_REMOVE(nodeptr);
      UPDATE_PROFINFO(nodeptr)

      cinfo = GET_CINFO(nodeptr);

#if PARANOID
      {
	  int c = (GET_LARGETAG(nodeptr));
	  switch(c) {
	  case CON_DATA | CON_TAG:
	  case CON_CDATA | CON_TAG:
	      fprintf(stderr, "Strange: con in apply:\n");
	      fprintf(stderr, "\n");
	      /*startDbg(GET_POINTER_ARG1(nodeptr, 2));*/
	      exit(-1);
	  }
       }
#endif /*0*/
#if 1
      if(GET_TAG(nodeptr)&VAP_TAG && !CINFO_NEED(cinfo)) {   /* Probably not needed */
        /* Actually, this sometimes happens due to MKIORETURN. */
        /*fprintf(stderr,"VAP in Apply?\n");*/
        vap = nodeptr;
        goto build_apply;
      }
#endif

      need = CINFO_NEED(cinfo);
      size = CINFO_SIZE(cinfo);
      nodeptr = nodeptr+1+EXTRA;  /* Skip tag (and optional profile info) */
      if(need <= args) {
	INIT_PROFINFO(hp,&apply1ProfInfo)
	vap = hp;
        *hp++ = (Node)((UInt)2*need+(UInt)cinfo)+(UInt)VAP_TAG;
	hp += EXTRA; 
        while(size-->0)
          *hp++ = *nodeptr++;
        args -= need;
        while(need--)
          *hp++ = (Node)*sp++;
      build_apply:
        while(args--) {
	  INIT_PROFINFO(hp,&apply2ProfInfo)
          *hp++ = (Node)(C_VAPTAG(PRIM_APPLY));
	  hp += EXTRA;
          *hp ++ = (Node) vap;
          vap = &hp[-2-EXTRA];
          *hp++ = (Node)*sp++;
        }
      } else { /* need > args */
	INIT_PROFINFO(hp,&apply3ProfInfo)
        vap = hp;
        *hp++ = (Node)(2*(UInt)args+(UInt)VAP_TAG+(UInt)cinfo);
	hp +=EXTRA;
        while(size-->0)
          *hp++ = *nodeptr++;
        while(args-->0)
          *hp++ = (Node)*sp++;
      }
      *--sp = vap;
    } Break;

  /* DON'T Fall trough to evaluate TOS. We might wan't to do RETURN_EVAL !!! */

    Case(SELECTOR_EVAL):   /* == PUSH_ARG 1, EVAL  has it's own opcode to signal that this is a selector function (gc need to know) */
      UPDATE_PROFINFO(vapptr);
      nodeptr =GET_POINTER_ARG1(vapptr,1);
      IND_REMOVE(nodeptr);
      *--sp = nodeptr;
      TPROF_SELECTOR_EVAL;
      /* Fall through to EVAL */
    Case(EVAL):
      INSTR("evalToS");
    EvalTOS:
      { nodeptr = sp[0];
	IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	  sp[0] = nodeptr;
	if(GET_TAG(nodeptr) & VAP_TAG && !CINFO_NEED(GET_CINFO(nodeptr))) {
	  if (ZAPPED(nodeptr)) {
            nhc_abort("Black hole detected.");
	    /* The following out-commented commands basically just build
             * a call to `error "Black hole detected."' in Haskell memory
             * an call it; so the result is the same.
             */
#if 0
            extern Node CF_DbgIface_46blackhole[];
            extern Node FN_DbgIface_46fatal[];

	    fp = sp = spStart; /* Clear the stack */
	    /* There better be space left now. */

	    MK_VAP2(hp,C_VAPTAG(FN_DbgIface_46fatal),CON_NIL,(Node)CF_DbgIface_46blackhole);
		     /* Build a call to blackhole, in the future use function name */
	    INIT_PROFINFO(hp,&evalProfInfo)
	    *--sp = hp;
	    hp += SIZE_VAP2;

#if 0
	    MK_VAP1(hp,C_VAPTAG(BLACKHOLE),CON_NIL); /* Build a call to blackhole, in the future use function name */
	    INIT_PROFINFO(hp,&evalProfInfo)
	    *--sp = hp;
	    hp += SIZE_VAP1;
#endif
	    if (hp >= (NodePtr)sp) {
	      fprintf(stderr, "Black hole detected and no heap space available.\n");
	      exit(-1);
	    }
	    nodeptr = sp[0];
#endif
	  }
	
	  ZAP(nodeptr);

	  PUSH_STATE;
	  vapptr   = nodeptr;
	  constptr = VAP_CONST(vapptr);
	  ip       = FINFO_CODE(GET_FINFO(vapptr));
          TPROF_EVAL;
        }
        TPROF_EVAL_END;
      } Break;

 Case(RETURN):
      INSTR("return");
    nodeptr = *sp++;
    UPDATE_VAP(nodeptr);
    POP_STATEVP;
    Break;
  Case(RETURN_EVAL):
  return_eval:
      INSTR("returneval");
    nodeptr = *sp++;
    UPDATE_VAP(nodeptr);
    POP_STATEVP;
    TPROF_RETURN_EVAL;
    goto EvalTOS;

#ifdef PROFILE
  Case(HEAP_CREATE): { BInfo binfo; binfo.all = 0; binfo.parts.created = year;  *hp++ = (Node)binfo.all; Break;}
  Case(HEAP_SPACE):  *hp++ = 0; Break;
#else
  Case(HEAP_CREATE): Break;	/* Not used, but need to keep gcc-labels happy */
  Case(HEAP_SPACE):  Break;	/* Not used, but need to keep gcc-labels happy */
#endif

  Case(HEAP_OFF_N2): *hp = (Node) (hp-HEAPOFFSET(ip[0])-(HEAPOFFSET(ip[1])<<8));   hp++; ip+=2; Break;
  Case(HEAP_OFF_N1): *hp = (Node) (hp-HEAPOFFSET(ip[0]));              hp++; ip+=1; Break;
  Case(HEAP_OFF_P1): *hp = (Node) (hp+HEAPOFFSET(ip[0]));              hp++; ip+=1; Break;
  Case(HEAP_OFF_P2): *hp = (Node) (hp+HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8));   hp++; ip+=2; Break;

  Case(HEAP_CADR_N2): *hp++ = (Node)&constptr[-HEAPOFFSET(ip[0])-(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
  Case(HEAP_CADR_N1): *hp++ = (Node)&constptr[-HEAPOFFSET(ip[0])];            ip+=1; Break;
  Case(HEAP_CADR_P1): *hp++ = (Node)&constptr[ HEAPOFFSET(ip[0])];            ip+=1; Break;
  Case(HEAP_CADR_P2): *hp++ = (Node)&constptr[ HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
  Case(HEAP_CVAL_N2): *hp++ = (Node) constptr[-HEAPOFFSET(ip[0])-(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
  Case(HEAP_CVAL_N1): *hp++ = (Node) constptr[-HEAPOFFSET(ip[0])];            ip+=1; Break;
  Case(HEAP_CVAL_IN3):*hp++ = (Node) constptr[    -3];                   Break;  
  Case(HEAP_CVAL_I3): *hp++ = (Node) constptr[     3];                   Break;  
  Case(HEAP_CVAL_I4): *hp++ = (Node) constptr[     4];                   Break;  
  Case(HEAP_CVAL_I5): *hp++ = (Node) constptr[     5];                   Break;  
  Case(HEAP_CVAL_P1): *hp++ = (Node) constptr[ HEAPOFFSET(ip[0])];            ip+=1; Break;  
  Case(HEAP_CVAL_P2): *hp++ = (Node) constptr[ HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)]; ip+=2; Break;
  Case(HEAP_INT_N1):  *hp++ = (Node) GET_INT(-HEAPOFFSET(ip[0])) ;            ip+=1; Break;
  Case(HEAP_INT_P1):  *hp++ = (Node) GET_INT( HEAPOFFSET(ip[0])) ;            ip+=1; Break;
  Case(HEAP_CHAR_N1): *hp++ = (Node) GET_CHAR(-HEAPOFFSET(ip[0])) ;           ip+=1; Break;
  Case(HEAP_CHAR_P1): *hp++ = (Node) GET_CHAR( HEAPOFFSET(ip[0])) ;           ip+=1; Break;
  Case(HEAP_ARG):     UPDATE_PROFINFO(vapptr);
                     *hp++ = (Node) GET_POINTER_ARG1(vapptr,ip[0]);         ip+=1; Break;
  Case(HEAP_ARG_ARG): UPDATE_PROFINFO(vapptr);
                     *hp++ = (Node) GET_POINTER_ARG1(vapptr,ip[0]);
                     *hp++ = (Node) GET_POINTER_ARG1(vapptr,ip[1]);         ip+=2; Break;
  Case(HEAP_ARG_ARG_RET_EVAL): UPDATE_PROFINFO(vapptr);
                     *hp++ = (Node) GET_POINTER_ARG1(vapptr,ip[0]);
                     *hp++ = (Node) GET_POINTER_ARG1(vapptr,ip[1]);         ip+=2;
			goto return_eval;
  Case(HEAP_I1):      nodeptr = sp[   1 ];            *hp++ = (Node)nodeptr;        Break;
  Case(HEAP_I2):      nodeptr = sp[   2 ];            *hp++ = (Node)nodeptr;        Break;
  Case(HEAP_P1):      nodeptr = sp[HEAPOFFSET(ip[0])];            *hp++ = (Node)nodeptr; ip+=1; Break;
  Case(HEAP_P2):      nodeptr = sp[HEAPOFFSET(ip[0])+(HEAPOFFSET(ip[1])<<8)]; *hp++ = (Node)nodeptr; ip+=1; Break;


#define PRIM_OP2_INT(op) \
    { NodePtr nodeptr = *sp++; \
	Int a,b;                 \
	IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = GET_INT_VALUE(nodeptr); \
	nodeptr = *sp++;         \
	IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = GET_INT_VALUE(nodeptr); \
	MK_INT(hp, a op b); \
	INIT_PROFINFO(hp,&int2ProfInfo) \
	*--sp = hp; hp += SIZE_INT; \
    } Break

  Case(ADD_W): PRIM_OP2_INT(+);
  Case(SUB_W): PRIM_OP2_INT(-);
  Case(MUL_W): PRIM_OP2_INT(*);
  Case(QUOT):  PRIM_OP2_INT(/);
  Case(REM):   PRIM_OP2_INT(%);

 Case(NEG_W):
    { NodePtr nodeptr = *sp++;
      Int a;
      IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = GET_INT_VALUE(nodeptr);
      MK_INT(hp, -a); 
      INIT_PROFINFO(hp,&int1ProfInfo) 
      *--sp = hp; hp += SIZE_INT; 
    } Break;

 Case(ABS_W):
    { NodePtr nodeptr = *sp++;
      Int a;
      IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = GET_INT_VALUE(nodeptr);
      if (a < 0) {
	nodeptr = hp;
        MK_INT(hp, -a); 
	INIT_PROFINFO(hp,&int1ProfInfo) 
	hp += SIZE_INT;
      }
      *--sp = nodeptr;
    } Break;

 Case(SIGNUM_W):
    { NodePtr nodeptr = *sp++;
      Int a;
      IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = GET_INT_VALUE(nodeptr);
      if (a < 0) {
	nodeptr = GET_INT(-1);
      } else if (a == 0) {
	nodeptr = GET_INT(0);
      } else  {
	nodeptr = GET_INT(1);
      }
      *--sp = nodeptr;
    } Break;
      

#define PRIM_CMP2_INT(op) \
  { NodePtr nodeptr = *sp++; \
    Int a,b;                 \
    IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = GET_INT_VALUE(nodeptr); \
    nodeptr = *sp++;         \
    IND_REMOVE(nodeptr); ASSERT_W(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = GET_INT_VALUE(nodeptr); \
    *--sp = GET_BOOL(a op b); \
  } Break

  Case(EQ_W): PRIM_CMP2_INT(==);
  Case(NE_W): PRIM_CMP2_INT(!=);
  Case(LT_W): PRIM_CMP2_INT(<);
  Case(LE_W): PRIM_CMP2_INT(<=);
  Case(GT_W): PRIM_CMP2_INT(>);
  Case(GE_W): PRIM_CMP2_INT(>=);

#ifndef __alpha /* Float is Double on alpha */
#define PRIM_OP2_FLOAT(op) \
    { NodePtr nodeptr = *sp++; \
	float a,b;                 \
	IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_float_value(nodeptr); \
	nodeptr = *sp++;         \
	IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = get_float_value(nodeptr); \
	mk_float(hp, a op b); \
	INIT_PROFINFO(hp,&float2ProfInfo) \
	*--sp = hp; hp += SIZE_FLOAT; \
    } Break

  Case(ADD_F): PRIM_OP2_FLOAT(+);
  Case(SUB_F): PRIM_OP2_FLOAT(-);
  Case(MUL_F): PRIM_OP2_FLOAT(*);
  Case(SLASH_F): PRIM_OP2_FLOAT(/);

  Case(POW_F):
    { NodePtr nodeptr = *sp++;
	float a,b;
	IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_float_value(nodeptr);
	nodeptr = *sp++;
	IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = get_float_value(nodeptr);
	mk_float(hp, (float)pow((double)a,(double)b));
	INIT_PROFINFO(hp,&float2ProfInfo)
	*--sp = hp; hp += SIZE_FLOAT;
    } Break;

#define PRIM_OP1_FLOAT(op) \
    { NodePtr nodeptr = *sp++; \
	float a;                 \
	IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_float_value(nodeptr); \
	mk_float(hp, op); \
	INIT_PROFINFO(hp,&float1ProfInfo) \
	*--sp = hp; hp += SIZE_FLOAT; \
    } Break

  Case(NEG_F): PRIM_OP1_FLOAT(-a);
  Case(ABS_F): PRIM_OP1_FLOAT((a<0?-a:a));
  Case(SIGNUM_F): PRIM_OP1_FLOAT((a<0?-1.0:(a==0?0.0:1.0)));
  Case(EXP_F): PRIM_OP1_FLOAT((float)exp((double)a));
  Case(LOG_F):PRIM_OP1_FLOAT((float)log((double)a));
  Case(SQRT_F):PRIM_OP1_FLOAT((float)sqrt((double)a));
  Case(SIN_F):PRIM_OP1_FLOAT((float)sin((double)a));
  Case(COS_F):PRIM_OP1_FLOAT((float)cos((double)a));
  Case(TAN_F):PRIM_OP1_FLOAT((float)tan((double)a));
  Case(ASIN_F):PRIM_OP1_FLOAT((float)asin((double)a));
  Case(ACOS_F):PRIM_OP1_FLOAT((float)acos((double)a));
  Case(ATAN_F):PRIM_OP1_FLOAT((float)atan((double)a));

#define PRIM_CMP2_FLOAT(op) \
  { NodePtr nodeptr = *sp++; \
    float a,b;                 \
    IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_float_value(nodeptr); \
    nodeptr = *sp++;         \
    IND_REMOVE(nodeptr); ASSERT_F(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = get_float_value(nodeptr); \
    *--sp = GET_BOOL(a op b); \
  } Break

  Case(EQ_F): PRIM_CMP2_FLOAT(==);
  Case(NE_F): PRIM_CMP2_FLOAT(!=);
  Case(LT_F): PRIM_CMP2_FLOAT(<);
  Case(LE_F): PRIM_CMP2_FLOAT(<=);
  Case(GT_F): PRIM_CMP2_FLOAT(>);
  Case(GE_F): PRIM_CMP2_FLOAT(>=);

#endif /* __alpha */

#define PRIM_OP2_DOUBLE(op) \
    { NodePtr nodeptr = *sp++; \
	double a,b;                 \
	IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_double_value(nodeptr); \
	nodeptr = *sp++;         \
	IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = get_double_value(nodeptr); \
	mk_double(hp, a op b); \
	INIT_PROFINFO(hp,&double2ProfInfo) \
	*--sp = hp; hp += SIZE_DOUBLE; \
    } Break

  Case(ADD_D): PRIM_OP2_DOUBLE(+);
  Case(SUB_D): PRIM_OP2_DOUBLE(-);
  Case(MUL_D): PRIM_OP2_DOUBLE(*);
  Case(SLASH_D): PRIM_OP2_DOUBLE(/);

  Case(POW_D):
    { NodePtr nodeptr = *sp++;
	double a,b;
	IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_double_value(nodeptr);
	nodeptr = *sp++;
	IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = get_double_value(nodeptr);
	mk_double(hp, pow(a,b));
	INIT_PROFINFO(hp,&double2ProfInfo)
	*--sp = hp; hp += SIZE_DOUBLE;
    } Break;

#define PRIM_OP1_DOUBLE(op) \
    { NodePtr nodeptr = *sp++; \
	double a;                 \
	IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_double_value(nodeptr); \
	mk_double(hp, op); \
	INIT_PROFINFO(hp,&double1ProfInfo) \
	*--sp = hp; hp += SIZE_DOUBLE; \
    } Break

  Case(NEG_D): PRIM_OP1_DOUBLE(-a);
  Case(ABS_D): PRIM_OP1_DOUBLE((a<0?-a:a));
  Case(SIGNUM_D): PRIM_OP1_DOUBLE((a<0?-1.0:(a==0?0.0:1.0)));
  Case(EXP_D): PRIM_OP1_DOUBLE(exp(a));
  Case(LOG_D):PRIM_OP1_DOUBLE(log(a));
  Case(SQRT_D):PRIM_OP1_DOUBLE(sqrt(a));
  Case(SIN_D):PRIM_OP1_DOUBLE(sin(a));
  Case(COS_D):PRIM_OP1_DOUBLE(cos(a));
  Case(TAN_D):PRIM_OP1_DOUBLE(tan(a));
  Case(ASIN_D):PRIM_OP1_DOUBLE(asin(a));
  Case(ACOS_D):PRIM_OP1_DOUBLE(acos(a));
  Case(ATAN_D):PRIM_OP1_DOUBLE(atan(a));

#define PRIM_CMP2_DOUBLE(op) \
  { NodePtr nodeptr = *sp++; \
    double a,b;                 \
    IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) a = get_double_value(nodeptr); \
    nodeptr = *sp++;         \
    IND_REMOVE(nodeptr); ASSERT_D(ip,nodeptr) UPDATE_PROFINFO(nodeptr) b = get_double_value(nodeptr); \
    *--sp = GET_BOOL(a op b); \
  } Break

  Case(EQ_D): PRIM_CMP2_DOUBLE(==);
  Case(NE_D): PRIM_CMP2_DOUBLE(!=);
  Case(LT_D): PRIM_CMP2_DOUBLE(<);
  Case(LE_D): PRIM_CMP2_DOUBLE(<=);
  Case(GT_D): PRIM_CMP2_DOUBLE(>);
  Case(GE_D): PRIM_CMP2_DOUBLE(>=);

  Case(ORD):
    { UInt tag;
      nodeptr = sp[0];
      IND_REMOVE(nodeptr);
      UPDATE_PROFINFO(nodeptr)
      tag = (UInt)GET_CONSTR(nodeptr);
      MK_INT(hp,tag);
      INIT_PROFINFO(hp,&fromEnumProfInfo)
      sp[0] = hp;
      hp+= SIZE_INT;
    } Break;
 Case(CHR):
  { UInt tag;
    nodeptr = sp[0];
    IND_REMOVE(nodeptr);
    UPDATE_PROFINFO(nodeptr)
    tag = (UInt)GET_INT_VALUE(nodeptr);
    MK_ENUM(hp,tag);
    INIT_PROFINFO(hp,&toEnumProfInfo)
    sp[0] = hp;
    hp+= SIZE_ENUM;
  } Break;


  Case(STRING):
   { char *str;
     nodeptr = *sp++;
     IND_REMOVE(nodeptr);
     UPDATE_PROFINFO(nodeptr)
     str = (char *)GET_INT_VALUE(nodeptr);
     if (*str) {
       if(*str == '\\')
	 str++;
       MK_INT(hp,(UInt)(str+1));
       INIT_PROFINFO(hp,&string1ProfInfo)
       nodeptr = hp;
       hp += SIZE_INT;
       
       MK_VAP1(hp
              ,(Node)(C_VAPTAG(PRIM_STRING))
              ,(Node)nodeptr);
       INIT_PROFINFO(hp,&string2ProfInfo)
       nodeptr = hp;
       hp += SIZE_VAP1;

       MK_CONS(hp
              ,(Node)GET_INT(0xff&(Int)(*str))
              ,(Node)nodeptr);
       INIT_PROFINFO(hp,&string3ProfInfo)

       nodeptr = hp;
       hp += SIZE_CONS;

     } else {
       nodeptr = GET_NIL();
     }
     *--sp = nodeptr;
   } Break;

    Case(HGETS):	/* added MW 2001.02.06 for improved(?) input speed */
      { 
	int c;
     /* ForeignObj *fo; */
	FileDesc *a;

	nodeptr = *sp++;
	IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	a  = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));
	/* fo = (ForeignObj*)(GET_INT_VALUE(nodeptr)); */
	/* a  = derefForeignObj(fo);                   */

#ifdef PROFILE
	if(replay) {
	  if(255==(c=getc(inputFILE)))
	    if(0==(c=getc(inputFILE))) c = -1;
	} else
#endif
	  c = getc(a->fp);
#ifdef PROFILE
	if(record) {
	  if(c==EOF) {
	    putc(255,inputFILE);
	    putc(0,inputFILE);
	  } if (c==255) {
	    putc(255,inputFILE);
	    putc(255,inputFILE);
	  } else
	    putc(c,inputFILE);
	}
#endif

        SHOW(fprintf(stderr,"HGETS:    c=%d '%c'\n",c,c);)

        if (c==-1) {
          nodeptr = GET_NIL();
        } else {
       /* MK_CDATA1(hp,(UInt)(fo));         */
       /* INIT_PROFINFO(hp,&handleProfInfo) */
       /* nodeptr = hp;                     */
       /* hp += SIZE_INT;                   */

          MK_VAP1(hp
                 ,(Node)(C_VAPTAG(PRIM_HGETS))
                 ,(Node)nodeptr);
          INIT_PROFINFO(hp,&inpStringProfInfo)
          nodeptr = hp;
          hp += SIZE_VAP1;

          MK_CONS(hp
                 ,(Node)GET_CHAR(c)
                 ,(Node)nodeptr);
          INIT_PROFINFO(hp,&string3ProfInfo)
 
          nodeptr = hp;
          hp += SIZE_CONS;
        }
        *--sp = nodeptr;
      } Break;

    Case(HGETC):
      { 
	int c;
	FileDesc *a;

	nodeptr = *sp;
	IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	a = derefForeignObj((ForeignObj*)(GET_INT_VALUE(nodeptr)));
#ifdef PROFILE
	if(replay) {
	  if(255==(c=getc(inputFILE)))
	    if(0==(c=getc(inputFILE))) c = -1;
	} else
#endif
	  c = getc(a->fp);
#ifdef PROFILE
	if(record) {
	  if(c==EOF) {
	    putc(255,inputFILE);
	    putc(0,inputFILE);
	  } if (c==255) {
	    putc(255,inputFILE);
	    putc(255,inputFILE);
	  } else
	    putc(c,inputFILE);
	}
#endif
	*sp = GET_CHAR(c);  /* Note EOF == -1 == negative character,      */
			     /* but it's OK characters are ints anyway,   */
                             /* and the table includes -1.                */
      } Break;

    Case(HPUTC):
      {
	char c;
	FileDesc *a;

	nodeptr = *sp++;
	IND_REMOVE(nodeptr);
	UPDATE_PROFINFO(nodeptr)
	a = derefForeignObj((ForeignObj *)GET_INT_VALUE(nodeptr));
	nodeptr = *sp;
        IND_REMOVE(nodeptr);
        UPDATE_PROFINFO(nodeptr)
        c = GET_CHAR_VALUE(nodeptr);
#ifdef PROFILE
        if(!replay)
#endif
	  putc(c,a->fp);
	*sp = HPUTC_OK;
      } Break;
    Case(EXIT):
      INSTR("exit");
      goto mutator_end;
      Break;

      Case(TABLESWITCH):	/* DAVID */
          nodeptr = sp[0];
          IND_REMOVE(nodeptr);
          UPDATE_PROFINFO(nodeptr)
          switch(GET_LARGETAG(nodeptr)) {
          case CON_DATA  | CON_TAG :
          case CON_CDATA | CON_TAG :
              nodeptr = (NodePtr) GET_CONSTR(nodeptr);
              break;
          case CON_PTRS  | CON_TAG :
          case CON_WORDS | CON_TAG :
              nodeptr = 0;
              break;
          default :
              fprintf(stderr,"Trying to get tag from unevaluated node in TABLESWITCH at %p!\n",ip-1);
              fprintf(stderr,"Node is:\n");
              DUMP_NODE(nodeptr);
              exit(-1);
              break;
          }
        ip  = (CodePtr) ALIGNPTR2(ip+1);
          ip += *(((short*) ip) + (int) nodeptr);
          Break;

      Case(LOOKUPSWITCH):	/* DAVID */
        { int    sz = *ip;
          short* t;

          nodeptr = sp[0];
          IND_REMOVE(nodeptr);
          UPDATE_PROFINFO(nodeptr)
          nodeptr = (NodePtr) GET_INT_VALUE(nodeptr);

          ip = (CodePtr) ALIGNPTR2(ip+1);

          for (t = (short*) ip; sz > 0; t = t + 2, sz--) {
              if (((int) nodeptr) == *t) {
                  ip += *(t+1);
                  goto NextInst;
              }
          }
          ip += *t;
        }
        Break;
    Case(MKIORETURN):	/* MW - now obsolete */
        INSTR("mkIOreturn");
        printf("mutator:MKIORETURN\n");
#if 0
        nodeptr = *sp;
        MK_VAP1(hp,C_VAPTAG(IORETURN),nodeptr); /* Build a call to IO.return */
        INIT_PROFINFO(hp,&apply1ProfInfo)
        *sp = hp;
        hp += SIZE_VAP1;
#endif
        Break;
    Case(ENDCODE):
      INSTR("endcode");
      fprintf(stderr,"Tried to evaluate beyond end of function.\n");
      fprintf(stderr,"Instruction pointer at %lx\n",(UInt)&ip[-1]);
      goto mutator_end;
      Break;

    UNUSED_INSTRUCTIONS	/* MW */
      fprintf(stderr,"Unimplemented instruction %d at %lx\n",ip[-1], (UInt)&ip[-1]);
      exit(-1);

#if !defined(USE_GCC_LABELS)
    default:
      fprintf(stderr,"Unknown instruction %d at %lx\n",ip[-1], (UInt)&ip[-1]);
      exit(-1);
#endif

    EndDispatch

  }
 mutator_end:
  Hp = hp;
  Sp = sp;
  Fp = fp;
  return;
}


#if PROFILE

int sizeofNode(Node tag) {
  switch (EXT_TAG(tag)) {
  case VAP_TAG0:
  case VAP_TAG1:
    { Cinfo cinfo = EXT_CINFO(tag);
      int size = (int)CINFO_SIZE(cinfo);
      return size+1;
    }
  case CON_TAG:
    { if (tag == CONSTR(42,0,0)) 
	return 1;
      else {
	fprintf(stderr,"CON_TAG in sizeofNode!\n");
	exit(-1);
	return 0;
      }
    }
  default:
    { fprintf(stderr,"IND_TAG in sizeofNode!\n");
      exit(-1);
      return 0;
    }
  }
}

#endif

#if defined(BYTECODE_PROF) || (defined(DEBUG) && USE_GCC_LABELS)
#  undef ins
static char *instr_names[] = {
 "DUMMY_FOR_ZERO",

 "NEEDHEAP_P1",
 "NEEDHEAP_P2",
 "JUMP",
 "JUMPFALSE",
 "NOP",

 "PUSH_CADR_N2",
 "PUSH_CADR_N1",
 "PUSH_CADR_P1",
 "PUSH_CADR_P2",
 "PUSH_CVAL_N2",
 "PUSH_CVAL_N1",
 "PUSH_CVAL_P1",
 "PUSH_CVAL_P2",
 "PUSH_INT_N2",
 "PUSH_INT_N1",
 "PUSH_INT_P1",
 "PUSH_INT_P2",
 "PUSH_ARG",
 "PUSH_P1",
 "PUSH_P2",

 "POP_P1",
 "POP_P2",
 "SLIDE_P1",
 "SLIDE_P2",
 "UNPACK",

 "APPLY",
 "EVAL",

 "RETURN",
 "RETURN_EVAL",

 "HEAP_CADR_N2",
 "HEAP_CADR_N1",
 "HEAP_CADR_P1",
 "HEAP_CADR_P2",
 "HEAP_CVAL_N2",
 "HEAP_CVAL_N1",
 "HEAP_CVAL_P1",
 "HEAP_CVAL_P2",
 "HEAP_INT_N2",
 "HEAP_INT_N1",
 "HEAP_INT_P1",
 "HEAP_INT_P2",
 "HEAP_ARG",
 "HEAP_ARG_ARG",
 "HEAP_ARG_ARG_RET_EVAL",
 "HEAP_P1",
 "HEAP_P2",

 "ADD_W",
 "ADD_F",
 "ADD_D",
 "SUB_W",
 "SUB_F",
 "SUB_D",
 "MUL_W",
 "MUL_F",
 "MUL_D",
 "ABS_W",
 "ABS_F",
 "ABS_D",
 "SIGNUM_W",
 "SIGNUM_F",
 "SIGNUM_D",
 "EXP_F",
 "EXP_D",
 "LOG_F",
 "LOG_D",
 "SQRT_F",
 "SQRT_D",
 "SIN_F",
 "SIN_D",
 "COS_F",
 "COS_D",
 "TAN_F",
 "TAN_D",
 "ASIN_F",
 "ASIN_D",
 "ACOS_F",
 "ACOS_D",
 "ATAN_F",
 "ATAN_D",
 "SLASH_F",
 "SLASH_D",
 "EQ_W",
 "EQ_F",
 "EQ_D",
 "NE_W",
 "NE_F",
 "NE_D",
 "LT_W",
 "LT_F",
 "LT_D",
 "LE_W",
 "LE_F",
 "LE_D",
 "GT_W",
 "GT_F",
 "GT_D",
 "GE_W",
 "GE_F",
 "GE_D",
 "NEG_W",
 "NEG_F",
 "NEG_D",

 "QUOT",
 "REM",
 "AND",
 "OR",
 "NOT",
 "ORD",
 "CHR",
 "SEQ",
 "STRING",

 "PRIMITIVE",
 "PUSH_HEAP",
 "EXIT",

 "NEEDSTACK_P1",
 "NEEDSTACK_P2",

 "HEAP_OFF_N2",
 "HEAP_OFF_N1",
 "HEAP_OFF_P1",
 "HEAP_OFF_P2",

 "HEAP_CREATE",
 "HEAP_SPACE",

 "SELECTOR_EVAL",
 "SELECT",

 "ZAP_ARG",
 "ZAP_STACK_P1",
 "ZAP_STACK_P2",

 "NEEDHEAP_I32",
 "NEEDSTACK_I16",

 "PUSH_I1",
 "POP_I1",

 "PUSH_ARG_I1",
 "PUSH_ARG_I2",
 "PUSH_ARG_I3",

 "ZAP_ARG_I1",
 "ZAP_ARG_I2",
 "ZAP_ARG_I3",

 "HEAP_CVAL_I3",
 "HEAP_CVAL_I4",
 "HEAP_CVAL_I5",

 "HEAP_CVAL_IN3",

 "HEAP_I1",
 "HEAP_I2",

 "HPUTC",
 "HGETC",
 "HGETS",

 "PUSH_CHAR_N1",
 "PUSH_CHAR_P1",
 "HEAP_CHAR_N1",
 "HEAP_CHAR_P1",

 "TABLESWITCH",
 "LOOKUPSWITCH",
 "MKIORETURN",

 "PUSH_ZAP_ARG_I1",
 "PUSH_ZAP_ARG_I2",
 "PUSH_ZAP_ARG_I3",
 "PUSH_ZAP_ARG",

 "ENDCODE",

 "POW_F",
 "POW_D"
};
#endif

#ifdef BYTECODE_PROF
#if PAIR
void instr_prof_init() {
  int i,j;
  for (i=1; i<=ENDCODE; i++) {
    for (j=1; j<=ENDCODE; j++) {
      instr_pair[i][j] = 0;
    }
  }
}
void instr_prof_results() {
  int i,j;
  fprintf(stderr,"Instruction pairs.\n");
  for (i=1; i<=ENDCODE; i++) {
    for (j=1; j<=ENDCODE; j++) {
      if (instr_pair[i][j]) {
        fprintf(stderr,"(%3d,%3d) %9d\t%s..%s\n",i,j,
                  instr_pair[i][j],
                  instr_names[i],instr_names[j]);
      }
    }
  }
  fprintf(stderr,"\nTotal instruction count = %d\n",total_instr_count);
}
#else
void instr_prof_init() {
  int i,j,k;
  for (i=1; i<=ENDCODE; i++) {
    for (j=1; j<=ENDCODE; j++) {
      for (k=1; k<=ENDCODE; k++) {
        instr_triple[i][j][k] = 0;
      }
    }
  }
}
void instr_prof_results() {
  int i,j,k;
  fprintf(stderr,"Instruction triples.\n");
  for (i=1; i<=ENDCODE; i++) {
    for (j=1; j<=ENDCODE; j++) {
      for (k=1; k<=ENDCODE; k++) {
        if (instr_triple[i][j][k]) {
          fprintf(stderr,"(%3d,%3d,%3d) %9d\t%s..%s..%s\n",i,j,k,
                    instr_triple[i][j][k],
                    instr_names[i],instr_names[j],instr_names[k]);
        }
      }
    }
  }
  fprintf(stderr,"\nTotal instruction count = %d\n",total_instr_count);
}

#endif /*PAIR*/
#endif /*BYTECODE_PROF*/
