#include <setjmp.h>
#include <signal.h>
#include "node.h"
/* #include "runtime.h"  -- already included in node.h */
/* #include "bytecode.h" -- already included in node.h via newmacros.h */

/* dummy to suppress warnings */
void nhc_inscount_dummy() { }

#if INSCOUNT
#define MAX_ARG 7


static int i_zap_arg_i1[1];
static int i_zap_arg_i3[1];
static int i_zap_arg_i2[1];
static int i_zap_arg[MAX_ARG+1];
static int i_zap_stack_p1[MAX_ARG+1];
static int i_zap_stack_p2[MAX_ARG+1];

static int i_needheap_i32[1];
static int i_needheap_p1[MAX_ARG+1];
static int i_needheap_p2[MAX_ARG+1];
static int i_needstack_i16[1];
static int i_needstack_p1[MAX_ARG+1];
static int i_needstack_p2[MAX_ARG+1];

static int i_jump[MAX_ARG+1];
static int i_jumpfalse[MAX_ARG+1];	/*DW/PH*/

static int i_nop[1];

static int i_matchcon[1];
static int i_matchint[1];
static int i_jumps_t[1];
static int i_jumps_l[1];

static int i_push_cadr_n2[MAX_ARG+1];
static int i_push_cadr_n1[MAX_ARG+1];
static int i_push_cadr_p1[MAX_ARG+1];
static int i_push_cadr_p2[MAX_ARG+1];
static int i_push_cval_n2[MAX_ARG+1];
static int i_push_cval_n1[MAX_ARG+1];
static int i_push_cval_p1[MAX_ARG+1];
static int i_push_cval_p2[MAX_ARG+1];
static int i_push_int_n2[MAX_ARG+1];
static int i_push_int_n1[MAX_ARG+1];
static int i_push_int_p1[MAX_ARG+1];
static int i_push_int_p2[MAX_ARG+1];
static int i_push_char_n1[MAX_ARG+1];
static int i_push_char_p1[MAX_ARG+1];
static int i_push_arg_i1[1];
static int i_push_arg_i2[1];
static int i_push_arg_i3[1];
static int i_push_arg[MAX_ARG+1];
static int i_push_i1[1];
static int i_push_p1[MAX_ARG+1];
static int i_push_p2[MAX_ARG+1];

static int i_pop_i1[1];
static int i_pop_p1[MAX_ARG+1];
static int i_pop_p2[MAX_ARG+1];
static int i_slide_p1[MAX_ARG+1];
static int i_slide_p2[MAX_ARG+1];
static int i_unpack[MAX_ARG+1];

static int i_selector_eval[1];
static int i_select[MAX_ARG+1];

static int i_apply[1];
static int i_eval[1];

static int i_return[1];
static int i_return_eval[1];

static int i_heap_off_n2[MAX_ARG+1];
static int i_heap_off_n1[MAX_ARG+1];
static int i_heap_off_p1[MAX_ARG+1];
static int i_heap_off_p2[MAX_ARG+1];

static int i_heap_create[1];
static int i_heap_space[1];

static int i_heap_cadr_n2[MAX_ARG+1];
static int i_heap_cadr_n1[MAX_ARG+1];
static int i_heap_cadr_p1[MAX_ARG+1];
static int i_heap_cadr_p2[MAX_ARG+1];
static int i_heap_cval_n2[MAX_ARG+1];
static int i_heap_cval_n1[MAX_ARG+1];
static int i_heap_cval_in3[1];
static int i_heap_cval_i3[1];
static int i_heap_cval_i4[1];
static int i_heap_cval_i5[1];
static int i_heap_cval_p1[MAX_ARG+1];
static int i_heap_cval_p2[MAX_ARG+1];
static int i_heap_int_n2[MAX_ARG+1];
static int i_heap_int_n1[MAX_ARG+1];
static int i_heap_int_p1[MAX_ARG+1];
static int i_heap_int_p2[MAX_ARG+1];
static int i_heap_char_n1[MAX_ARG+1];
static int i_heap_char_p1[MAX_ARG+1];
static int i_heap_arg[1];
static int i_heap_i1[1];
static int i_heap_i2[1];
static int i_heap_p1[MAX_ARG+1];
static int i_heap_p2[MAX_ARG+1];

static int i_add_w[1];
static int i_add_f[1];
static int i_add_d[1];
static int i_sub_w[1];
static int i_sub_f[1];
static int i_sub_d[1];
static int i_mul_w[1];
static int i_mul_f[1];
static int i_mul_d[1];
static int i_abs_w[1];
static int i_abs_f[1];
static int i_abs_d[1];
static int i_signum_w[1];
static int i_signum_f[1];
static int i_signum_d[1];
static int i_exp_f[1];
static int i_exp_d[1];
static int i_pow_f[1];
static int i_pow_d[1];
static int i_log_f[1];
static int i_log_d[1];
static int i_sqrt_f[1];
static int i_sqrt_d[1];
static int i_sin_f[1];
static int i_sin_d[1];
static int i_cos_f[1];
static int i_cos_d[1];
static int i_tan_f[1];
static int i_tan_d[1];
static int i_asin_f[1];
static int i_asin_d[1];
static int i_acos_f[1];
static int i_acos_d[1];
static int i_atan_f[1];
static int i_atan_d[1];
static int i_slash_f[1];
static int i_slash_d[1];
static int i_eq_w[1];
static int i_eq_f[1];
static int i_eq_d[1];
static int i_ne_w[1];
static int i_ne_f[1];
static int i_ne_d[1];
static int i_lt_w[1];
static int i_lt_f[1];
static int i_lt_d[1];
static int i_le_w[1];
static int i_le_f[1];
static int i_le_d[1];
static int i_gt_w[1];
static int i_gt_f[1];
static int i_gt_d[1];
static int i_ge_e[1];
static int i_ge_f[1];
static int i_ge_d[1];
static int i_neg_w[1];
static int i_neg_f[1];
static int i_neg_d[1];
static int i_quot[1];
static int i_rem[1];
static int i_and[1];
static int i_or[1];
static int i_not[1];
static int i_ord[1];
static int i_chr[1];
static int i_seq[1];
static int i_string[1];
static int i_exit[MAX_ARG+1];
static int i_primitive[1];
static int i_push_heap[1];
static int i_unknown[1];

static int i_tableswitch[1];	/*PH*/
static int i_lookupswitch[1];	/*PH*/
static int i_mkioreturn[1];	/*MW*/
static int i_endcode[1];	/*PH*/
static int i_hputc[1];		/*PH*/
static int i_hgetc[1];		/*PH*/

static int total = 0;



typedef void (*fun)(CodePtr, char *, int *);



void genericByteIns (CodePtr ip, fun op0, fun op1, fun op2, fun opdef)
{
  switch(*ip) {

  case ZAP_ARG_I1: op0(ip,"ZAP_ARG_I1",i_zap_arg_i1); break;
  case ZAP_ARG_I2: op0(ip,"ZAP_ARG_I2",i_zap_arg_i2); break;
  case ZAP_ARG_I3: op0(ip,"ZAP_ARG_I3",i_zap_arg_i3); break;
  case ZAP_ARG:      op1(ip,"ZAP_ARG",i_zap_arg); break;
  case ZAP_STACK_P1: op1(ip,"ZAP_STACK_P1",i_zap_stack_p1); break;
  case ZAP_STACK_P2: op2(ip,"ZAP_STACK_P2",i_zap_stack_p2); break;

  case NEEDHEAP_I32: op0(ip,"NEEDHEAP_I32",i_needheap_i32); break;
  case NEEDHEAP_P1: op1(ip,"NEEDHEAP_P1",i_needheap_p1); break;
  case NEEDHEAP_P2: op2(ip,"NEEDHEAP_P2",i_needheap_p2); break;
  case NEEDSTACK_I16: op0(ip,"NEEDSTACK_I16",i_needstack_i16); break;
  case NEEDSTACK_P1: op1(ip,"NEEDSTACK_P1",i_needstack_p1); break;
  case NEEDSTACK_P2: op2(ip,"NEEDSTACK_P2",i_needstack_p2); break;

  case JUMP: op2(ip,"JUMP",i_jump); break;
  case JUMPFALSE: op2(ip,"JUMPFALSE",i_jumpfalse); break; /*DW/PH*/

  case NOP: op0(ip,"NOP",i_nop); break;

#if 0 /*DW/PH*/
  case MATCHCON: op0(ip,"MATCHCON",i_matchcon); break;
  case MATCHINT: op0(ip,"MATCHINT",i_matchint); break;
  case JUMPS_T: op0(ip,"JUMPS_T",i_jumps_t); break;
  case JUMPS_L: op0(ip,"JUMPS_L",i_jumps_l); break;
#endif

  case PUSH_CADR_N2: op2(ip,"PUSH_CADR_N2",i_push_cadr_n2); break;
  case PUSH_CADR_N1: op1(ip,"PUSH_CADR_N1",i_push_cadr_n1); break;
  case PUSH_CADR_P1: op1(ip,"PUSH_CADR_P1",i_push_cadr_p1); break;
  case PUSH_CADR_P2: op2(ip,"PUSH_CADR_P2",i_push_cadr_p2); break;
  case PUSH_CVAL_N2: op2(ip,"PUSH_CVAL_N2",i_push_cval_n2); break;
  case PUSH_CVAL_N1: op1(ip,"PUSH_CVAL_N1",i_push_cval_n1); break;
  case PUSH_CVAL_P1: op1(ip,"PUSH_CVAL_P1",i_push_cval_p1); break;
  case PUSH_CVAL_P2: op2(ip,"PUSH_CVAL_P2",i_push_cval_p2); break;
  case PUSH_INT_N2: op2(ip,"PUSH_INT_N2",i_push_int_n2); break;
  case PUSH_INT_N1: op1(ip,"PUSH_INT_N1",i_push_int_n1); break;
  case PUSH_INT_P1: op1(ip,"PUSH_INT_P1",i_push_int_p1); break;
  case PUSH_INT_P2: op2(ip,"PUSH_INT_P2",i_push_int_p2); break;
  case PUSH_CHAR_N1: op1(ip,"PUSH_CHAR_N1",i_push_char_n1); break;
  case PUSH_CHAR_P1: op1(ip,"PUSH_CHAR_P1",i_push_char_p1); break;
  case PUSH_ARG_I1: op0(ip,"PUSH_ARG_I1",i_push_arg_i1); break;
  case PUSH_ARG_I2: op0(ip,"PUSH_ARG_I2",i_push_arg_i2); break;
  case PUSH_ARG_I3: op0(ip,"PUSH_ARG_I3",i_push_arg_i3); break;
  case PUSH_ARG: op1(ip,"PUSH_ARG",i_push_arg); break;
  case PUSH_I1: op0(ip,"PUSH_I1",i_push_i1); break;
  case PUSH_P1: op1(ip,"PUSH_P1",i_push_p1); break;
  case PUSH_P2: op2(ip,"PUSH_P2",i_push_p2); break;

  case POP_I1: op0(ip,"POP_I1",i_pop_i1); break;
  case POP_P1: op1(ip,"POP_P1",i_pop_p1); break;
  case POP_P2: op2(ip,"POP_P2",i_pop_p2); break;
  case SLIDE_P1: op1(ip,"SLIDE_P1",i_slide_p1); break;
  case SLIDE_P2: op2(ip,"SLIDE_P2",i_slide_p2); break;
  case UNPACK: op1(ip,"UNPACK",i_unpack); break;

  case SELECTOR_EVAL: op0(ip,"SELECTOR_EVAL",i_selector_eval); break;
  case SELECT: op1(ip,"SELECT",i_select); break;

  case APPLY: op0(ip,"APPLY",i_apply); break;
  case EVAL: op0(ip,"EVAL",i_eval); break;

  case RETURN: op0(ip,"RETURN",i_return); break;
  case RETURN_EVAL: op0(ip,"RETURN_EVAL",i_return_eval); break;

  case HEAP_OFF_N2: op2(ip,"HEAP_OFF_N2",i_heap_off_n2); break;
  case HEAP_OFF_N1: op1(ip,"HEAP_OFF_N1",i_heap_off_n1); break;
  case HEAP_OFF_P1: op1(ip,"HEAP_OFF_P1",i_heap_off_p1); break;
  case HEAP_OFF_P2: op2(ip,"HEAP_OFF_P2",i_heap_off_p2); break;

  case HEAP_CREATE: op0(ip,"HEAP_CREATE",i_heap_create); break;
  case HEAP_SPACE: op0(ip,"HEAP_SPACE",i_heap_space); break;

  case HEAP_CADR_N2: op2(ip,"HEAP_CADR_N2",i_heap_cadr_n2); break;
  case HEAP_CADR_N1: op1(ip,"HEAP_CADR_N1",i_heap_cadr_n1); break;
  case HEAP_CADR_P1: op1(ip,"HEAP_CADR_P1",i_heap_cadr_p1); break;
  case HEAP_CADR_P2: op2(ip,"HEAP_CADR_P2",i_heap_cadr_p2); break;
  case HEAP_CVAL_N2: op2(ip,"HEAP_CVAL_N2",i_heap_cval_n2); break;
  case HEAP_CVAL_N1: op1(ip,"HEAP_CVAL_N1",i_heap_cval_n1); break;
  case HEAP_CVAL_IN3: op0(ip,"HEAP_CVAL_IN3",i_heap_cval_in3); break;
  case HEAP_CVAL_I3: op0(ip,"HEAP_CVAL_I3",i_heap_cval_i3); break;
  case HEAP_CVAL_I4: op0(ip,"HEAP_CVAL_I4",i_heap_cval_i4); break;
  case HEAP_CVAL_I5: op0(ip,"HEAP_CVAL_I4",i_heap_cval_i5); break;
  case HEAP_CVAL_P1: op1(ip,"HEAP_CVAL_P1",i_heap_cval_p1); break;
  case HEAP_CVAL_P2: op2(ip,"HEAP_CVAL_P2",i_heap_cval_p2); break;
  case HEAP_INT_N2: op2(ip,"HEAP_INT_N2",i_heap_int_n2); break;
  case HEAP_INT_N1: op1(ip,"HEAP_INT_N1",i_heap_int_n1); break;
  case HEAP_INT_P1: op1(ip,"HEAP_INT_P1",i_heap_int_p1); break;
  case HEAP_INT_P2: op2(ip,"HEAP_INT_P2",i_heap_int_p2); break;
  case HEAP_CHAR_N1: op1(ip,"HEAP_CHAR_N1",i_heap_char_n1); break;
  case HEAP_CHAR_P1: op1(ip,"HEAP_CHAR_P1",i_heap_char_p1); break;
  case HEAP_ARG: op0(ip,"HEAP_ARG",i_heap_arg); break;
  case HEAP_I1: op0(ip,"HEAP_I1",i_heap_i1); break;
  case HEAP_I2: op0(ip,"HEAP_I2",i_heap_i2); break;
  case HEAP_P1: op1(ip,"HEAP_P1",i_heap_p1); break;
  case HEAP_P2: op2(ip,"HEAP_P2",i_heap_p2); break;

  case ADD_W: op0(ip,"ADD_W",i_add_w); break;
  case ADD_F: op0(ip,"ADD_F",i_add_f); break;
  case ADD_D: op0(ip,"ADD_D",i_add_d); break;
  case SUB_W: op0(ip,"SUB_W",i_sub_w); break;
  case SUB_F: op0(ip,"SUB_F",i_sub_f); break;
  case SUB_D: op0(ip,"SUB_D",i_sub_d); break;
  case MUL_W: op0(ip,"MUL_W",i_mul_w); break;
  case MUL_F: op0(ip,"MUL_F",i_mul_f); break;
  case MUL_D: op0(ip,"MUL_D",i_mul_d); break;
  case ABS_W: op0(ip,"ABS_W",i_abs_w); break;
  case ABS_F: op0(ip,"ABS_F",i_abs_f); break;
  case ABS_D: op0(ip,"ABS_D",i_abs_d); break;
  case SIGNUM_W: op0(ip,"SIGNUM_W",i_signum_w); break;
  case SIGNUM_F: op0(ip,"SIGNUM_F",i_signum_f); break;
  case SIGNUM_D: op0(ip,"SIGNUM_D",i_signum_d); break;
  case EXP_F: op0(ip,"EXP_F",i_exp_f); break;
  case EXP_D: op0(ip,"EXP_D",i_exp_d); break;
  case POW_F: op0(ip,"POW_F",i_pow_f); break;
  case POW_D: op0(ip,"POW_D",i_pow_d); break;
  case LOG_F: op0(ip,"LOG_F",i_log_f); break;
  case LOG_D: op0(ip,"LOG_D",i_log_d); break;
  case SQRT_F: op0(ip,"SQRT_F",i_sqrt_f); break;
  case SQRT_D: op0(ip,"SQRT_D",i_sqrt_d); break;
  case SIN_F: op0(ip,"SIN_F",i_sin_f); break;
  case SIN_D: op0(ip,"SIN_D",i_sin_d); break;
  case COS_F: op0(ip,"COS_F",i_cos_f); break;
  case COS_D: op0(ip,"COS_D",i_cos_d); break;
  case TAN_F: op0(ip,"TAN_F",i_tan_f); break;
  case TAN_D: op0(ip,"TAN_D",i_tan_d); break;
  case ASIN_F: op0(ip,"ASIN_F",i_asin_f); break;
  case ASIN_D: op0(ip,"ASIN_D",i_asin_d); break;
  case ACOS_F: op0(ip,"ACOS_F",i_acos_f); break;
  case ACOS_D: op0(ip,"ACOS_D",i_acos_d); break;
  case ATAN_F: op0(ip,"ATAN_F",i_atan_f); break;
  case ATAN_D: op0(ip,"ATAN_D",i_atan_d); break;
  case SLASH_F: op0(ip,"SLASH_F",i_slash_f); break;
  case SLASH_D: op0(ip,"SLASH_D",i_slash_d); break;
  case EQ_W: op0(ip,"EQ_W",i_eq_w); break;
  case EQ_F: op0(ip,"EQ_F",i_eq_f); break;
  case EQ_D: op0(ip,"EQ_D",i_eq_d); break;
  case NE_W: op0(ip,"NE_W",i_ne_w); break;
  case NE_F: op0(ip,"NE_F",i_ne_f); break;
  case NE_D: op0(ip,"NE_D",i_ne_d); break;
  case LT_W: op0(ip,"LT_W",i_lt_w); break;
  case LT_F: op0(ip,"LT_F",i_lt_f); break;
  case LT_D: op0(ip,"LT_D",i_lt_d); break;
  case LE_W: op0(ip,"LE_W",i_le_w); break;
  case LE_F: op0(ip,"LE_F",i_le_f); break;
  case LE_D: op0(ip,"LE_D",i_le_d); break;
  case GT_W: op0(ip,"GT_W",i_gt_w); break;
  case GT_F: op0(ip,"GT_F",i_gt_f); break;
  case GT_D: op0(ip,"GT_D",i_gt_d); break;
  case GE_W: op0(ip,"GE_W",i_ge_e); break;
  case GE_F: op0(ip,"GE_F",i_ge_f); break;
  case GE_D: op0(ip,"GE_D",i_ge_d); break;
  case NEG_W: op0(ip,"NEG_W",i_neg_w); break;
  case NEG_F: op0(ip,"NEG_F",i_neg_f); break;
  case NEG_D: op0(ip,"NEG_D",i_neg_d); break;

  case QUOT: op0(ip,"QUOT",i_quot); break;
  case REM: op0(ip,"REM",i_rem); break;
  case AND: op0(ip,"AND",i_and); break;
  case OR: op0(ip,"OR",i_or); break;
  case NOT: op0(ip,"NOT",i_not); break;
  case ORD: op0(ip,"ORD",i_ord); break;
  case CHR: op0(ip,"CHR",i_chr); break;
  case SEQ: op0(ip,"SEQ",i_seq); break;
  case STRING: op0(ip,"STRING",i_string); break;
  case EXIT: op1(ip,"EXIT",i_exit); break;
  case PRIMITIVE: op0(ip,"PRIMITIVE",i_primitive); break;
  case PUSH_HEAP: op0(ip,"PUSH_HEAP",i_push_heap); break;
  case HPUTC: op0(ip,"HPUTC",i_hputc); break;				/*PH*/
  case HGETC: op0(ip,"HGETC",i_hgetc); break;				/*PH*/
  case TABLESWITCH: op0(ip,"TABLESWITCH",i_tableswitch); break;		/*PH*/
  case LOOKUPSWITCH: op0(ip,"LOOKUPSWITCH",i_lookupswitch); break;	/*PH*/
  case MKIORETURN: op0(ip,"MKIORETURN",i_mkioreturn); break;		/*MW*/
  case ENDCODE: op0(ip,"ENDCODE",i_endcode); break;			/*PH*/
  default:
    opdef(ip,"Unknown",i_unknown); break;
  }
}

static void incOp0(CodePtr ip, char *str, int* counter)
{
  counter[0]++;
}

static void incOp1(CodePtr ip, char *str, int* counter)
{
  int arg = ip[1];
  if(arg>=MAX_ARG) counter[MAX_ARG]++;
  else counter[arg]++;
}

static void incOp2(CodePtr ip, char *str, int* counter)
{
  unsigned int arg = (ip[2]<<8)+ip[1];
  if(arg>=MAX_ARG) counter[MAX_ARG]++;
  else counter[arg]++;
}

static void incDef(CodePtr ip, char *str, int* counter)
{
  fprintf(stderr,"Unknown instruction %3d at %08x\n",ip[0],ip);
  counter[0]++;
}


static void prOp0(CodePtr ip, char *str, int* counter)
{
  if(insCount>1 || counter[0]) {
    fprintf(stderr,"%15s  %10d\n",str,counter[0]);
    total += counter[0];
  }
}

static void prOpN(CodePtr ip, char *str, int* counter)
{
  int i;
  int tot = 0;
  for(i = 0; i <= MAX_ARG; i++)
    tot += counter[i];

  if(insCount>1 || tot) {
    fprintf(stderr,"%15s",str);
    for(i = 0; i <= MAX_ARG; i++) {
      fprintf(stderr,"  %10d",counter[i]);
      total += counter[i];
    }
    fprintf(stderr,"  (total = %10d)\n",tot);
  }
}

static void prDef(CodePtr ip, char *str, int* counter)
{
  if(counter[0]) {
    fprintf(stderr,"%15s  %10d\n",str,counter[0]);
    total += counter[0];
  }
}

void countIns(CodePtr ip)
{
  genericByteIns(ip,incOp0,incOp1,incOp2,incDef);
}

void printIns(void)
{
  Code code;
  int i;
  total = 0;
  fprintf(stderr,"Instruction counts\n");
  fprintf(stderr,"%15s","Argument");
  for(i=0; i<MAX_ARG; i++) {
    fprintf(stderr,"     %4d   ",i);
  }
  fprintf(stderr,"    >%4d   \n",MAX_ARG);
  for(i=0, code=0; i<256; i++,code++)
    genericByteIns(&code,prOp0,prOpN,prOpN,prDef);

  fprintf(stderr,"Total number of instructions   %d\n",total);
}

#endif

