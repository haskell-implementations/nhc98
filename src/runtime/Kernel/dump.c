#include <setjmp.h>
#include <signal.h>
#include "cinterface.h"
#include "mutlib.h"
/* #include "node.h"     -- already included in cinterface.h */
/* #include "runtime.h"  -- already included in node.h */
/* #include "bytecode.h" -- already included in node.h via newmacros.h */

/* dummy to suppress warnings */
void nhc_dump_dummy() { }

#if TRACE
static char *profName(NodePtr *p)
{
#if PROFILE
  return (char *)(p[-1]);
#else
  return "";
#endif
}

static char posstr[40];

static char *profPos(NodePtr *p)
{
  UInt pos = (UInt)p[-2];
  int r = pos / 10000;
  int c = pos % 10000;
  sprintf(posstr,"%d:%d",r,c);
  return posstr;
}
    


void prByteIns (CodePtr ip)
{
  fprintf(stderr,"%08x :",ip);

  switch(*ip) {

  case ZAP_ARG_I1:      fprintf(stderr," ZAP_ARG_I1\n") ; break;
  case ZAP_ARG_I2:      fprintf(stderr," ZAP_ARG_I2\n") ; break;
  case ZAP_ARG_I3:      fprintf(stderr," ZAP_ARG_I3\n") ; break;
  case ZAP_ARG:      fprintf(stderr," ZAP_ARG %d\n",ip[1]) ; break;
  case ZAP_STACK_P1: fprintf(stderr," ZAP_STACK_P1 %d\n",ip[1]); break;
  case ZAP_STACK_P2: fprintf(stderr," ZAP_STACK_P2 %d (%d:%d)\n",(ip[2]<<8)+ip[1],ip[1],ip[2]); break; 

  case NEEDHEAP_I32: fprintf(stderr," NEEDHEAP_I32\n"); break;
  case NEEDHEAP_P1: fprintf(stderr," NEEDHEAP_P1 %d\n",ip[1]); break;
  case NEEDHEAP_P2: fprintf(stderr," NEEDHEAP_P2 %d (%d:%d)\n",(ip[2]<<8)+ip[1],ip[1],ip[2]); break;
  case NEEDSTACK_I16: fprintf(stderr," NEEDSTACK_I16\n"); break;
  case NEEDSTACK_P1: fprintf(stderr," NEEDSTACK_P1 %d\n",ip[1]); break;
  case NEEDSTACK_P2: fprintf(stderr," NEEDSTACK_P2 %d (%d:%d)\n",(ip[2]<<8)+ip[1],ip[1],ip[2]); break;

  case JUMP: fprintf(stderr," JUMP %08x (%d:%d)\n",ip+1+(ip[2]<<8)+ip[1],ip[1],ip[2]); break;
  case JUMPFALSE: fprintf(stderr," JUMPFALSE %08x (%d:%d)\n",ip+1+(ip[2]<<8)+ip[1],ip[1],ip[2]); break;

  case NOP: fprintf(stderr," NOP \n"); break;

#if 0  /* ----------------------------------- */
  case MATCHCON: fprintf(stderr," MATCHCON \n"); break;
  case MATCHINT: fprintf(stderr," MATCHINT \n"); break;
  case JUMPS_T: fprintf(stderr," JUMPS_T \n"); break;
  case JUMPS_L: fprintf(stderr," JUMPS_L \n"); break;
#endif /* ----------------------------------- */

  case PUSH_CADR_N2: fprintf(stderr," PUSH_CADR_N2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case PUSH_CADR_N1: fprintf(stderr," PUSH_CADR_N1  %d\n",ip[1]); break;
  case PUSH_CADR_P1: fprintf(stderr," PUSH_CADR_P1  %d\n",ip[1]); break;
  case PUSH_CADR_P2: fprintf(stderr," PUSH_CADR_P2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case PUSH_CVAL_N2: fprintf(stderr," PUSH_CVAL_N2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case PUSH_CVAL_N1: fprintf(stderr," PUSH_CVAL_N1  %d\n",ip[1]); break;
  case PUSH_CVAL_P1: fprintf(stderr," PUSH_CVAL_P1  %d\n",ip[1]); break;
  case PUSH_CVAL_P2: fprintf(stderr," PUSH_CVAL_P2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case PUSH_INT_N2: fprintf(stderr," PUSH_INT_N2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case PUSH_INT_N1: fprintf(stderr," PUSH_INT_N1  %d\n",ip[1]); break;
  case PUSH_INT_P1: fprintf(stderr," PUSH_INT_P1  %d\n",ip[1]); break;
  case PUSH_INT_P2: fprintf(stderr," PUSH_INT_P2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case PUSH_ARG_I1: fprintf(stderr," PUSH_ARG_I1\n"); break;
  case PUSH_ARG_I2: fprintf(stderr," PUSH_ARG_I2\n"); break;
  case PUSH_ARG_I3: fprintf(stderr," PUSH_ARG_I3\n"); break;
  case PUSH_ARG: fprintf(stderr," PUSH_ARG  %d\n",ip[1]); break;
  case PUSH_I1: fprintf(stderr," PUSH_I1\n"); break;
  case PUSH_P1: fprintf(stderr," PUSH_P1  %d\n",ip[1]); break;
  case PUSH_P2: fprintf(stderr," PUSH_P2  %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;

  case POP_I1: fprintf(stderr," POP_I1\n"); break;
  case POP_P1: fprintf(stderr," POP_P1 %d\n",ip[1]); break;
  case POP_P2: fprintf(stderr," POP_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case SLIDE_P1: fprintf(stderr," SLIDE_P1 %d\n",ip[1]); break;
  case SLIDE_P2: fprintf(stderr," SLIDE_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case UNPACK: fprintf(stderr," UNPACK %d\n",ip[1]); break;

  case SELECTOR_EVAL: fprintf(stderr," SELECTOR_EVAL\n"); break;
  case SELECT: fprintf(stderr," SELECT %d\n",ip[1]); break;

  case APPLY: fprintf(stderr," APPLY %d\n",ip[1]); break;
  case EVAL: fprintf(stderr," EVAL\n"); break;

  case RETURN: fprintf(stderr," RETURN\n"); break;
  case RETURN_EVAL: fprintf(stderr," RETURN_EVAL\n"); break;

  case HEAP_OFF_N2: fprintf(stderr," HEAP_OFF_N2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_OFF_N1: fprintf(stderr," HEAP_OFF_N1 %d\n",ip[1]); break;
  case HEAP_OFF_P1: fprintf(stderr," HEAP_OFF_P1 %d\n",ip[1]); break;
  case HEAP_OFF_P2: fprintf(stderr," HEAP_OFF_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;

  case HEAP_CREATE: fprintf(stderr," HEAP_CREATE\n"); break;
  case HEAP_SPACE: fprintf(stderr," HEAP_SPACE\n"); break;

  case HEAP_CADR_N2: fprintf(stderr," HEAP_CADR_N2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_CADR_N1: fprintf(stderr," HEAP_CADR_N1 %d\n",ip[1]); break;
  case HEAP_CADR_P1: fprintf(stderr," HEAP_CADR_P1 %d\n",ip[1]); break;
  case HEAP_CADR_P2: fprintf(stderr," HEAP_CADR_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_CVAL_N2: fprintf(stderr," HEAP_CVAL_N2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_CVAL_N1: fprintf(stderr," HEAP_CVAL_N1 %d\n",ip[1]); break;
  case HEAP_CVAL_IN3:fprintf(stderr," HEAP_CVAL_IN3\n"); break;
  case HEAP_CVAL_I3: fprintf(stderr," HEAP_CVAL_I3\n"); break;
  case HEAP_CVAL_I4: fprintf(stderr," HEAP_CVAL_I4\n"); break;
  case HEAP_CVAL_I5: fprintf(stderr," HEAP_CVAL_I5\n"); break;
  case HEAP_CVAL_P1: fprintf(stderr," HEAP_CVAL_P1 %d\n",ip[1]); break;
  case HEAP_CVAL_P2: fprintf(stderr," HEAP_CVAL_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_INT_N2: fprintf(stderr," HEAP_INT_N2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_INT_N1: fprintf(stderr," HEAP_INT_N1 %d\n",ip[1]); break;
  case HEAP_INT_P1: fprintf(stderr," HEAP_INT_P1 %d\n",ip[1]); break;
  case HEAP_INT_P2: fprintf(stderr," HEAP_INT_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;
  case HEAP_ARG: fprintf(stderr," HEAP_ARG %d\n",ip[1]); break;
  case HEAP_I1: fprintf(stderr," HEAP_I1\n"); break;
  case HEAP_I2: fprintf(stderr," HEAP_I2\n"); break;
  case HEAP_P1: fprintf(stderr," HEAP_P1 %d\n",ip[1]); break;
  case HEAP_P2: fprintf(stderr," HEAP_P2 %d (%d:%d)\n",ip[2]<<8+ip[1],ip[1],ip[2]); break;

  case ADD_W: fprintf(stderr," ADD_W \n"); break;
  case ADD_F: fprintf(stderr," ADD_F \n"); break;
  case ADD_D: fprintf(stderr," ADD_D \n"); break;
  case SUB_W: fprintf(stderr," SUB_W \n"); break;
  case SUB_F: fprintf(stderr," SUB_F \n"); break;
  case SUB_D: fprintf(stderr," SUB_D \n"); break;
  case MUL_W: fprintf(stderr," MUL_W \n"); break;
  case MUL_F: fprintf(stderr," MUL_F \n"); break;
  case MUL_D: fprintf(stderr," MUL_D \n"); break;
  case ABS_W: fprintf(stderr," ABS_W \n"); break;
  case ABS_F: fprintf(stderr," ABS_F \n"); break;
  case ABS_D: fprintf(stderr," ABS_D \n"); break;
  case SIGNUM_W: fprintf(stderr," SIGNUM_W \n"); break;
  case SIGNUM_F: fprintf(stderr," SIGNUM_F \n"); break;
  case SIGNUM_D: fprintf(stderr," SIGNUM_D \n"); break;
  case EXP_F: fprintf(stderr," EXP_F \n"); break;
  case EXP_D: fprintf(stderr," EXP_D \n"); break;
  case POW_F: fprintf(stderr," POW_F \n"); break;
  case POW_D: fprintf(stderr," POW_D \n"); break;
  case LOG_F: fprintf(stderr," LOG_F \n"); break;
  case LOG_D: fprintf(stderr," LOG_D \n"); break;
  case SQRT_F: fprintf(stderr," SQRT_F \n"); break;
  case SQRT_D: fprintf(stderr," SQRT_D \n"); break;
  case SIN_F: fprintf(stderr," SIN_F \n"); break;
  case SIN_D: fprintf(stderr," SIN_D \n"); break;
  case COS_F: fprintf(stderr," COS_F \n"); break;
  case COS_D: fprintf(stderr," COS_D \n"); break;
  case TAN_F: fprintf(stderr," TAN_F \n"); break;
  case TAN_D: fprintf(stderr," TAN_D \n"); break;
  case ASIN_F: fprintf(stderr," ASIN_F \n"); break;
  case ASIN_D: fprintf(stderr," ASIN_D \n"); break;
  case ACOS_F: fprintf(stderr," ACOS_F \n"); break;
  case ACOS_D: fprintf(stderr," ACOS_D \n"); break;
  case ATAN_F: fprintf(stderr," ATAN_F \n"); break;
  case ATAN_D: fprintf(stderr," ATAN_D \n"); break;
  case SLASH_F: fprintf(stderr," SLASH_F \n"); break;
  case SLASH_D: fprintf(stderr," SLASH_D \n"); break;
  case EQ_W: fprintf(stderr," EQ_W \n"); break;
  case EQ_F: fprintf(stderr," EQ_F \n"); break;
  case EQ_D: fprintf(stderr," EQ_D \n"); break;
  case NE_W: fprintf(stderr," NE_W \n"); break;
  case NE_F: fprintf(stderr," NE_F \n"); break;
  case NE_D: fprintf(stderr," NE_D \n"); break;
  case LT_W: fprintf(stderr," LT_W \n"); break;
  case LT_F: fprintf(stderr," LT_F \n"); break;
  case LT_D: fprintf(stderr," LT_D \n"); break;
  case LE_W: fprintf(stderr," LE_W \n"); break;
  case LE_F: fprintf(stderr," LE_F \n"); break;
  case LE_D: fprintf(stderr," LE_D \n"); break;
  case GT_W: fprintf(stderr," GT_W \n"); break;
  case GT_F: fprintf(stderr," GT_F \n"); break;
  case GT_D: fprintf(stderr," GT_D \n"); break;
  case GE_W: fprintf(stderr," GE_W \n"); break;
  case GE_F: fprintf(stderr," GE_F \n"); break;
  case GE_D: fprintf(stderr," GE_D \n"); break;
  case NEG_W: fprintf(stderr," NEG_W \n"); break;
  case NEG_F: fprintf(stderr," NEG_F \n"); break;
  case NEG_D: fprintf(stderr," NEG_D \n"); break;

  case QUOT: fprintf(stderr," QUOT \n"); break;
  case REM: fprintf(stderr," REM \n"); break;
  case AND: fprintf(stderr," AND \n"); break;
  case OR: fprintf(stderr," OR \n"); break;
  case NOT: fprintf(stderr," NOT \n"); break;
  case ORD: fprintf(stderr," ORD \n"); break;
  case CHR: fprintf(stderr," CHR \n"); break;
  case SEQ: fprintf(stderr," SEQ \n"); break;
  case STRING: fprintf(stderr," STRING \n"); break;
  case HGETC: fprintf(stderr," HGETC \n"); break;
  case HPUTC: fprintf(stderr," HPUTC \n"); break;
  case EXIT: fprintf(stderr," EXIT \n"); break;
  case MKIORETURN: fprintf(stderr," MKIORETURN \n"); break;	/* MW */
  case PRIMITIVE:
    ip = (CodePtr) ALIGNPTR((ip+1));
    fprintf(stderr," PRIMITIVE %08x\n",*(Primitive *)ip);
    break;
  case PUSH_HEAP: fprintf(stderr," PUSH_HEAP \n"); break;
  default:
    fprintf(stderr," Unknown instruction %3d at %08x\n",*ip,ip);
  }
}

#if defined(__CYGWIN32__) || defined(__MINGW32__)
jmp_buf prGraphEnv;
#else
sigjmp_buf prGraphEnv;
#endif
void (*prGraphOldSig)();

void prGraphSig()
{
  signal(SIGSEGV,prGraphOldSig);
#if defined(__CYGWIN32__) || defined(__MINGW32__)
  longjmp(prGraphEnv,1);
#else
  siglongjmp(prGraphEnv,1);
#endif
}

#ifdef PROFILE
void printInfo(NodePtr nodeptr)
{ 
  Info *info = (Info*)&nodeptr[1];
  fprintf(stderr,"[");
  if(info->sinfo)
    fprintf(stderr,"%s %s %s,",info->sinfo->module,info->sinfo->producer,info->sinfo->constructor);
  else
    fprintf(stderr,"---,");
  fprintf(stderr,"%d:%d:%d:%d, %d, %d]"
	  ,info->binfo.parts.created,info->binfo.parts.first,info->binfo.parts.last,info->binfo.parts.used
	  ,(int)info->rinfo,info->unique);
}
#endif

void prGraph(NodePtr nodeptr,Int flags,Int d)
{

  prGraphOldSig = signal(SIGSEGV,prGraphSig);

#if defined(__CYGWIN32__) || defined(__MINGW32__)
  if(setjmp(prGraphEnv)) {
#else
  if(sigsetjmp(prGraphEnv,0)) {
#endif
    fprintf(stderr,"*** segmentation fault ***\n");
    signal(SIGSEGV,prGraphOldSig);
    return;
  }

  if(nodeptr>=hpEnd) {
    fprintf(stderr,"???%lx>=%lx???",(UInt)nodeptr,(UInt)hpEnd);
    signal(SIGSEGV,prGraphOldSig);
    return;
  }
  if(!nodeptr) {
    fprintf(stderr,"<   0,    *0>");
    signal(SIGSEGV,prGraphOldSig);
    return;
  }
  if(flags & DUMP_ADDR) fprintf(stderr,"<%04lx,%06lx>",(UInt)nodeptr,(3&(Int)nodeptr?-1:(UInt)*nodeptr));
  if (d) {
    switch (GET_LARGETAG(nodeptr)) {
    case CON_DATA|VAP_TAG0: case CON_PTRS|VAP_TAG0: case CON_CDATA|VAP_TAG0: case CON_WORDS|VAP_TAG0:
    case CON_DATA|VAP_TAG1: case CON_PTRS|VAP_TAG1: case CON_CDATA|VAP_TAG1: case CON_WORDS|VAP_TAG1:
      { Cinfo cinfo = GET_CINFO(nodeptr);
        Int size  = CINFO_SIZE(cinfo);
        Int need = CINFO_NEED(cinfo);
	Finfo finfo = CINFO_FINFO(cinfo);
	NodePtr *constptr = FINFO_CONST(finfo);
        Int i,arity = FINFO_ARITY(finfo);
	if(need) {
	  fprintf(stderr,"(CAP%s %2ld(%2ld)", (UInt)*nodeptr & ZAP_BIT ? "*" : "",size,need);
	  if(size+need != arity)
	    fprintf(stderr,"!=%ld",arity);
	} else {
	  fprintf(stderr,"(VAP%s %2ld", (UInt)*nodeptr & ZAP_BIT ? "*" : "",size);
	}
	fprintf(stderr," %04lx {%s %s} ",(UInt)FINFO_CODE(finfo),profName(constptr),profPos(constptr));
#ifdef PROFILE
	printInfo(nodeptr);
#endif
	for(i=0; i<size; i++) {
          fprintf(stderr,",");
          prGraph(GET_POINTER_ARG1(nodeptr,i+1),flags,d-1);
        }
        fprintf(stderr,")");
      } break;
    case CON_DATA|CON_TAG:
    case CON_CDATA|CON_TAG:
      { Coninfo cinfo = GET_CONINFO(nodeptr);
        Int size  = CONINFO_SIZE(cinfo);
        Int psize = CONINFO_PSIZE(cinfo);
        Int i;
        fprintf(stderr,"CON DATA(%2ld %3ld(%3ld):",CONINFO_NUMBER(cinfo),size,psize);
#ifdef PROFILE
	printInfo(nodeptr);
#endif
        for(i=0; i<psize; i++) {
          fprintf(stderr,",");
          prGraph((NodePtr)GET_POINTER_ARG1(nodeptr,i+1),flags,d-1);
        }
        for(; i<size; i++)
          fprintf(stderr,",%4ld",GET_INT_ARG1(nodeptr,i+1));
        fprintf(stderr,")");
      } break;
    case CON_PTRS|CON_TAG:
      { Coninfo cinfo = GET_CONINFO(nodeptr);
        Int psize  = CONINFO_LARGESIZES(cinfo);
        Int i;
        fprintf(stderr,"CON PTRS( %4ld(e = %1ld):",psize,CONINFO_LARGEEXTRA(cinfo));
#ifdef PROFILE
	printInfo(nodeptr);
#endif
        for(i=0; i<psize; i++) {
          fprintf(stderr,",");
          prGraph((NodePtr)GET_POINTER_ARG1(nodeptr,i+1),flags,d-1);
        }
        fprintf(stderr,")");
      } break;
    case CON_WORDS|CON_TAG:
      { Coninfo cinfo = GET_CONINFO(nodeptr);
        Int size  = CONINFO_LARGESIZES(cinfo);
        Int i;
        fprintf(stderr,"CON WORDS( %4ld(e= %1ld):",size,CONINFO_LARGEEXTRA(cinfo));
#ifdef PROFILE
	printInfo(nodeptr);
#endif
        for(i=0; i<size; i++)
          fprintf(stderr,",%4ld",GET_INT_ARG1(nodeptr,i+1));
        fprintf(stderr,")");
      } break;
    default: /*  IND_TAG: */
      if(flags & DUMP_IND) fprintf(stderr,"Ind  ");
      prGraph (GET_IND_ADDRESS(nodeptr),flags,flags&DUMP_IND?d-1:d);
      break;
    }
  } else {
    fprintf(stderr,"...");
  }
}


void prStack(NodePtr *sp,NodePtr *fp,NodePtr vapptr,NodePtr *constptr,int flags,int depth)
{
  NodePtr *sptr;
  fprintf(stderr,"\nvapptr   = %08lx",(UInt)vapptr);
  fprintf(stderr,"\nconstptr = %08lx",(UInt)constptr);
  fprintf(stderr,"\nfp       = %08lx",(UInt)fp);

  fprintf(stderr,"\n======");
  for(sptr = sp; sptr < fp; sptr++) {
    fprintf(stderr,"\n   %4lx: ",(UInt)sptr);
    prGraph(*sptr,flags,depth);
  }
  prStackGc(sptr,fp,flags,depth);
}

void prStackGc(NodePtr *sptr,NodePtr *fp,int flags,int depth)    
{
  fprintf(stderr,"\n------");
  for(; sptr < spStart; ) {
    int i;
    CodePtr tip;
    NodePtr *tfp;
    NodePtr *tcp;
    NodePtr tvp;

    tip = (CodePtr)*sptr;
    fprintf(stderr,"\nip  %8lx: %8lx    ",(UInt)sptr,(UInt)*sptr);
    tfp = (NodePtr*)*++sptr;
    fprintf(stderr,"\nfp  %8lx: %8lx",(UInt)sptr,(UInt)tfp);
    sptr++;
    i = tfp-sptr;
    if(tfp == spStart || (UInt)tfp & 3) {
      fprintf(stderr,"\nvp  %8s: %8s"," ","**");
      fprintf(stderr,"\ncp  %8s: %8s"," ","**");
    } else {
      tvp = tfp[2];
      fprintf(stderr,"\nvp  %8s: %8lx"," ",(UInt)tvp);
      if((UInt)tvp & 3) {
	fprintf(stderr,"\ncp  %8s: %8s"," ","**");
      } else {
	tcp = VAP_CONST(tvp);
	fprintf(stderr,"\ncp  %8s: %8lx"," ",(UInt)tcp);
      }
    }
    while(i-->0)  {
      fprintf(stderr,"\n   %8lx: ",(UInt)sptr);
      prGraph(*sptr,flags,depth);
      sptr++;
    }
    fprintf(stderr,"\n=======");
    if(flags&DUMP_TOP) {
      fprintf(stderr," <-- more frames -->\n\n");
      signal(SIGSEGV,prGraphOldSig);
      return;
    }
  }
  fprintf(stderr,"\n\n");
  signal(SIGSEGV,prGraphOldSig);
}

#endif
