/* tprof.c */
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "runtime.h"
#include "newmacros.h"  /* only for DIR_DEL macro ! */

#define MAX_HEIGHT(x,y) (x>y ? x : y)
#define CMP_KEY(x,y) (x==y ? 0 : ((x<y) ? -1 : 1))
#define MAX_FILE_NAME 80
#define IGNORE_DRIVER 1 /* 1 => Ignore _Driver */

int listedby;
#define TICKSPERMOD 0 /* Default */
#define TICKS 1
#define ENTERSPERMOD 2
#define ENTERS 3
#define LISTEDBYTICKS ((listedby==TICKS)||(listedby==TICKSPERMOD))
#define LISTEDBYENTERS ((listedby==ENTERS)||(listedby==ENTERSPERMOD))
#define LISTEDBYPERMOD ((listedby==TICKSPERMOD)||(listedby==ENTERSPERMOD))

int tprof;
CodePtr *ipref;
int gcData;
FILE *tpFILE;
FILE *gdFILE;
int gem_wants_the_ticks;
int time_subtotal;
int csubtot=0;
int show_dictionary;
int ticks_per_enter;
double tpefactor;
int enter_percentages;
int assign_subfn_enters;
int in_greencard;
int collecting_garbage;
int *last_tick;
extern timer gcTime;
extern timer totalTime;
extern timer runTime;
extern Int hpTotal;
extern NodePtr hpBase;
int cancel_enter = 0;
int **enterPtr;

typedef struct avl {
  struct avl *left, *right;
  int height;
  CodePtr address;
  char *funname;
  int *enters;
  int ticks;
  int g_enters;
  int g_ticks;
} AVLnode;

AVLnode *address_AVL_root;
AVLnode *last_right_taken;
AVLnode *lastn_tree;
int **enterPtrTmp;
int *in_greencard_ticks;

typedef struct subtree {
  AVLnode **tot;
  AVLnode **root;
} Subtree;

struct sums {
  int total_enters;
  int total_ticks;
  int nonZeroTotalTicks;
  int total_g_enters;
  int total_g_ticks;
  int collect_garbage_enters;
  int collect_garbage_ticks;
} Sums;

struct mods {
  int premods;
  int usrmods;
  int maxmod;
} Mods;

static int get_height_AVL(AVLnode *tree) { 
  if (tree == NULL)
    return(-1);
  else
    return(tree->height);
}

static void set_height_AVL(AVLnode *tree) { 
  if (tree != NULL)
    tree->height = 1 + 
      MAX_HEIGHT(get_height_AVL(tree->left), get_height_AVL(tree->right));
}

static void right_rotate_AVL(AVLnode **tree) {
  AVLnode *old_root, *old_left, *middle;
  
  old_root = *tree;
  old_left = old_root->left;
  middle = old_left->right;
  old_left->right = old_root;
  old_root->left = middle;
  *tree = old_left;
  set_height_AVL(old_root);
  set_height_AVL(old_left);
}

static void left_rotate_AVL(AVLnode **tree) {
  AVLnode *old_root, *old_right, *middle;

  old_root = *tree;
  old_right = old_root->right;
  middle = old_right->left;
  old_right->left = old_root;
  old_root->right = middle;
  *tree = old_right;
  set_height_AVL(old_root);
  set_height_AVL(old_right);
}

static void double_right_rotate_AVL(AVLnode **tree) {
  left_rotate_AVL(&((*tree)->left));
  right_rotate_AVL(tree);
}

static void double_left_rotate_AVL(AVLnode **tree) {
  right_rotate_AVL(&((*tree)->right));
  left_rotate_AVL(tree);
}

static void balance_AVL(AVLnode **tree) {
  int left_height,right_height;
  AVLnode *subtree;

  left_height = get_height_AVL((*tree)->left);
  right_height = get_height_AVL((*tree)->right);
  if (left_height > right_height+1) {
    subtree = (*tree)->left;
    left_height = get_height_AVL(subtree->left);
    right_height = get_height_AVL(subtree->right);
    if (left_height >= right_height) 
      right_rotate_AVL(tree);   
    else 
      double_right_rotate_AVL(tree);
  }
  else
    if (left_height+1 < right_height) {
      subtree = (*tree)->right;
      left_height = get_height_AVL(subtree->left);
      right_height = get_height_AVL(subtree->right);
      if (right_height >= left_height)
        left_rotate_AVL(tree);
      else
        double_left_rotate_AVL(tree);       
    }
}

static void init_AVL(AVLnode **tree) { 
  *tree = NULL;
}

static void insert_by_address_AVL(AVLnode **tree, CodePtr address, 
                                  char *funname, int insert_mode, 
                                  int setup) {
  AVLnode *newtree;
  int cmp;

  if (*tree==NULL) {
    if (insert_mode) {
      if(NULL == (newtree = (AVLnode*) malloc(sizeof(AVLnode)))) {
        fprintf(stderr,"Not enough memory for tprof.\n");
        exit(-1);
      }
      newtree->left = NULL;
      newtree->right = NULL;
      newtree->height = 0;
      (newtree->address) = address;  
      newtree->funname = funname;
      if (setup)
	newtree->enters = *enterPtrTmp;
      else {
        if(NULL == (newtree->enters = (int*) malloc(sizeof(int)))) {
          fprintf(stderr,"Not enough memory for tprof.\n");
          exit(-1);
        }
	*enterPtrTmp = newtree->enters;
	*(newtree->enters) = 1;
      }
      newtree->g_enters = 0;
      newtree->ticks = 0;
      newtree->g_ticks = 0;
      *tree = newtree;
    }
    else {
      if (last_right_taken == NULL) 
	fprintf(stderr,"Trying to record tick into an empty tprof tree.\n");
      else {
	if (in_greencard) {
	  last_right_taken->g_enters++;
	  in_greencard_ticks = &(last_right_taken->g_ticks);
          if (cancel_enter) last_tick = &(last_right_taken->g_ticks);
	}
	else {
	  last_right_taken->ticks++;
          if (cancel_enter) last_tick = &(last_right_taken->ticks);
        }
      }
    }
  }
  else {
    cmp = CMP_KEY(address,(*tree)->address);
    if (cmp==0)
      if (in_greencard) {
	(*tree)->g_enters++;
	in_greencard_ticks = &((*tree)->g_ticks);
      }
      else
	(*tree)->ticks++;
    else {
      if (cmp==-1)
	insert_by_address_AVL(&((*tree)->left), address, funname, insert_mode, setup);
      else {
	if (!insert_mode) last_right_taken = *tree;
	insert_by_address_AVL(&((*tree)->right), address, funname, insert_mode, setup);
      }
      set_height_AVL(*tree);
      balance_AVL(tree);
    }
  }
}

static void insert_by_key_AVL(AVLnode **tree, AVLnode **node) {
  int cmp = 0;

  if (*tree == NULL) {
    *tree = *node;
  }
  else {
    if (LISTEDBYTICKS) {      /* listed by time            */
      if (cmp == 0) {         /* Order by ticks (normal+g) */
	cmp = CMP_KEY((*tree)->ticks+(*tree)->g_ticks,(*node)->ticks+(*node)->g_ticks);
	if (cmp == 0) {       /* Order by enters           */
	  cmp = CMP_KEY((*((*tree)->enters)),(*((*node)->enters)));
	  if (cmp == 0)       /* Order by funname          */
	    cmp = strcmp((*node)->funname,(*tree)->funname);
	}
      }
    }
    else {                    /* listed by enters          */
      if (cmp == 0) {         /* Order by enters           */
        cmp = CMP_KEY((*((*tree)->enters)),(*((*node)->enters)));
	if (cmp == 0) {       /* Order by ticks (normal+g) */
	  cmp = CMP_KEY((*tree)->ticks+(*tree)->g_ticks,(*node)->ticks+(*node)->g_ticks);
	  if (cmp == 0)       /* Order by funname          */
	    cmp = strcmp((*node)->funname,(*tree)->funname);
	}
      }  
    }
    if (cmp < 0)                                          
      insert_by_key_AVL(&((*tree)->left), node);
    else
      insert_by_key_AVL(&((*tree)->right), node);
  }
}

static void print_AVL_raw(AVLnode *tree, FILE *fp, int tab) {
  int i;
  if (tree != NULL) {
    print_AVL_raw(tree->left, fp, tab+1);
    for (i=0; i<tab; i++) {
      fprintf(stderr, " ");
    }
    fprintf(stderr, "%p\t%s\t%d\t%d\t%d,%d\n", tree->address, 
            tree->funname, tree->ticks, *(tree->enters), 
            tree->g_enters, tree->g_ticks);
    print_AVL_raw(tree->right, fp, tab+1);
  }
  return;
}


static void print_AVL_info(AVLnode *tree, char *module, FILE *fp)
{
  int dotpos = -1;

  if (LISTEDBYTICKS) {
    fprintf(fp, "  %5.1f  ", 
            100*((float) (tree->ticks+tree->g_ticks))/Sums.nonZeroTotalTicks);
    if (gem_wants_the_ticks) 
      fprintf(fp, "[%d]  ", tree->ticks+tree->g_ticks);
    if (time_subtotal) {
      csubtot += tree->ticks+tree->g_ticks;
      fprintf(fp, "%5.1f  ", 
              100*((float)csubtot)/Sums.nonZeroTotalTicks);
    }
  }

  if (tree->g_enters) fprintf(fp, "%10d  ", tree->g_enters);
  else fprintf(fp, "%10d  ", *(tree->enters));

  if (LISTEDBYENTERS) {
    fprintf(fp, "  %5.1f  ", 
            100*((float) (tree->ticks+tree->g_ticks))/Sums.nonZeroTotalTicks);
    if (gem_wants_the_ticks) 
      fprintf(fp, "[%10d]  ", tree->ticks+tree->g_ticks);
    if (time_subtotal) {
      csubtot += tree->ticks+tree->g_ticks;
      fprintf(fp, "%5.1f  ", 
              100*((float)csubtot)/Sums.nonZeroTotalTicks);
    }
  }

  if (ticks_per_enter)
    fprintf(fp, "%10d  ",
            (int)(tpefactor*(tree->ticks+tree->g_ticks)/((tree->g_enters)?(tree->g_enters):*(tree->enters))));
  
  if (tree->g_enters) fprintf(fp, "*");
  else fprintf(fp, " ");

  if (LISTEDBYPERMOD) {
    dotpos = strlen(module);
    if ((strncmp(tree->funname,module,dotpos)!=0) || 
        (*(tree->funname+dotpos)!='.'))
      dotpos = -1;
  }
  fprintf(fp, "%s\n", (tree->funname)+dotpos+1);  
}

static char* print_AVL_node(AVLnode *tree, Subtree *subtree, 
                            char *module, int norc, FILE *fp) {
  char *fnp;
  char sp;
  char *mod = module;
  if (tree != NULL) {
    mod = print_AVL_node(tree->left, subtree, mod, norc, fp);
    fnp = tree->funname;
    if (norc) {
      int dispn = (*fnp=='+') && (LISTEDBYPERMOD);
      mod = fnp+3;
      if(strlen(mod)<7) sp='\t'; else sp=' ';
      if (dispn)
        fprintf(fp, 
              "\n----------------------------------------------------------");
      if (dispn || (*fnp=='-')) {
        if(LISTEDBYENTERS) {
          fprintf(fp, "\n%s%c\t %10d calls", mod, sp, *(tree->enters));
          if(enter_percentages) 
            fprintf(fp, "   %5.1f%% calls", 
                    100*((float) *(tree->enters))/Sums.total_enters);
          fprintf(fp, "\t%5.1f%% time", 
                  100*((float) tree->ticks)/Sums.nonZeroTotalTicks);
          if (gem_wants_the_ticks) 
            fprintf(fp, "\t[%d]",tree->ticks);
          if (ticks_per_enter)
            fprintf(fp, "\t%10d tpe",
                    (int)(tpefactor*(tree->ticks)/(*(tree->enters))));
          fprintf(fp, "\n");
        }
        else {
          fprintf(fp, "\n%s%c\t %5.1f%% time", mod, sp, 
                  100*((float) tree->ticks)/Sums.nonZeroTotalTicks);
          if (gem_wants_the_ticks) fprintf(fp, "\t[%d]",tree->ticks);
          fprintf(fp, "\t%10d calls", *(tree->enters));
          if(enter_percentages) 
            fprintf(fp, "   %5.1f%% calls", 
                    100*((float) *(tree->enters))/Sums.total_enters);
          if (ticks_per_enter)
            fprintf(fp, "\t%10d tpe",
                    (int)(tpefactor*(tree->ticks)/(*(tree->enters))));
          fprintf(fp, "\n");
        }
        if (dispn) {
          fprintf(fp, 
              "----------------------------------------------------------\n");
          if(LISTEDBYENTERS) {
            fprintf(fp, "   # calls   %% time ");
            if (time_subtotal)
              fprintf(fp, "  ctot ");
          }
          else {
            fprintf(fp, " %% time ");
            if (time_subtotal)
              fprintf(fp, "  ctot ");
            fprintf(fp, "    # calls ");
          }
          if (ticks_per_enter) 
            fprintf(fp, "        tpe");
          fprintf(fp, "\n");
        }
      }
      if (*fnp=='+') {
        csubtot = 0;
        print_AVL_node(*(subtree[tree->height].root), subtree, mod, 0, fp);
      }
    }
    else
      print_AVL_info(tree, mod, fp);
    mod = print_AVL_node(tree->right, subtree, mod, norc, fp);
  }
  return mod;
}

int rearrange_AVL(AVLnode **address_tree, int mod, Subtree *subtree) {
  AVLnode **lft, **rht;
  char *fnp;

  if (*address_tree != NULL) {
    if(NULL == (lft = (AVLnode**) malloc(sizeof(AVLnode*)))) {
      fprintf(stderr,"Not enough memory for tprof.\n");
      exit(-1);
    }
    if(NULL == (rht = (AVLnode**) malloc(sizeof(AVLnode*)))) {
      fprintf(stderr,"Not enough memory for tprof.\n");
      exit(-1);
    }
    *lft = (*address_tree)->left; 
    *rht = (*address_tree)->right;
    ((*address_tree)->left) = NULL;
    ((*address_tree)->right) = NULL;

    if (*lft != NULL) mod = rearrange_AVL(lft, mod, subtree);
    free(lft);

    fnp = (*address_tree)->funname;
    if ((*fnp=='+') || (*fnp=='-')) {
      if ((*(fnp+1)=='+') || (*(fnp+1)=='-'))
        mod = Mods.maxmod++;
      else
        mod = 10*(*(fnp+1)-48)+(*(fnp+2)-48);     
      if ((*fnp=='+') && !(LISTEDBYPERMOD) && (mod>0))
        mod = Mods.premods;
      (*address_tree)->height = mod;
      if (*fnp=='+') { /* '+' */
        if (*(subtree[mod].tot) == NULL) {
          *((*address_tree)->enters) = 0;
          *subtree[mod].tot = *address_tree;
        }
        lastn_tree = *(subtree[mod].tot); 
      }
      else { /* '-' */
        if (*(subtree[mod].tot) == NULL) {
          *subtree[mod].tot = *address_tree;
        }
        else {
          (*subtree[mod].tot)->ticks     += (*address_tree)->ticks;
          (*subtree[mod].tot)->g_enters  += (*address_tree)->g_enters;
          (*subtree[mod].tot)->g_ticks   += (*address_tree)->g_ticks;    
        }
      }
    }
    else {
      int e  = *((*address_tree)->enters);
      int ge = (*address_tree)->g_enters;
      if ((*fnp=='P') && (!show_dictionary)) {
        char *lastdot = strrchr(fnp,'.');
        if ((lastdot!=NULL) && 
            (*(lastdot+1)>='A') && 
            (*(lastdot+1)<='Z')) {
          e=0;
          ge=0;
        }
      }
      if (e+ge>0) {
        *(lastn_tree->enters) += e;
        lastn_tree->ticks     += (*address_tree)->ticks;
        lastn_tree->g_enters  += ge;
        lastn_tree->g_ticks   += (*address_tree)->g_ticks;
        insert_by_key_AVL(subtree[mod].root, address_tree);
      }
    }
    if (*rht != NULL) mod = rearrange_AVL(rht, mod, subtree);
    free(rht);
  }
  return mod;
}

void output_AVL_as_orderd_table(AVLnode **tree, FILE *fp) {
  AVLnode *c_ticks_AVL_root;
  AVLnode *n_ticks_AVL_root;
  Subtree subtree[Mods.premods+Mods.usrmods+1];

  int i;
  char *c;

  if (*tree != NULL) {
    init_AVL(&c_ticks_AVL_root);
    init_AVL(&n_ticks_AVL_root);
    for (i=0;i<Mods.premods+Mods.usrmods+1;i++) {
      if(NULL == (subtree[i].tot = (AVLnode**) malloc(sizeof(AVLnode*)))) {
        fprintf(stderr,"Not enough memory for tprof.\n");
        exit(-1);
      }
      *(subtree[i].tot) = NULL;
      if(NULL == (subtree[i].root = (AVLnode**) malloc(sizeof(AVLnode*)))) {
        fprintf(stderr,"Not enough memory for tprof.\n");
        exit(-1);
      }
      *(subtree[i].root) = NULL;
    }
    Mods.maxmod = Mods.premods;
    /* print_AVL_raw(*tree, fp, 0); */
    i = rearrange_AVL(tree, 0, subtree);
    Sums.total_ticks  += Sums.collect_garbage_ticks;
    Sums.total_enters += Sums.collect_garbage_enters;

    if (!(LISTEDBYPERMOD)) {
      if (listedby==TICKS) {
        fprintf(fp, "\n %% time ");
        if (time_subtotal)
          fprintf(fp, "  ctot ");
        fprintf(fp, "    # calls ");
      }
      else {
        fprintf(fp, "\n   # calls   %% time ");
        if (time_subtotal) 
          fprintf(fp, "  ctot ");
      }
      if (ticks_per_enter) 
        fprintf(fp, "        tpe");
      fprintf(fp, "\n");
      fprintf(fp, 
              "----------------------------------------------------------\n");
    }
    for (i=IGNORE_DRIVER;i<Mods.premods+Mods.usrmods+1;i++)
      if (*(subtree[i].tot) != NULL) {
        AVLnode **tmp = subtree[i].tot;
        if (*((*tmp)->enters)+(*tmp)->g_enters>0) {
          if (*((*tmp)->funname)=='+')
            insert_by_key_AVL(&n_ticks_AVL_root, tmp);
          else
            insert_by_key_AVL(&c_ticks_AVL_root, tmp);
          Sums.total_ticks    += (*tmp)->ticks     + (*tmp)->g_ticks;
          Sums.total_enters   += *((*tmp)->enters) + (*tmp)->g_enters;
          Sums.total_g_ticks  += (*tmp)->g_ticks;
          Sums.total_g_enters += (*tmp)->g_enters;
        }
      }

    if (Sums.total_ticks)
      Sums.nonZeroTotalTicks = Sums.total_ticks;
    else
      Sums.nonZeroTotalTicks = 1;

    if (ticks_per_enter)
      tpefactor = 100000 * pow(10,
                               (int)log10(Sums.total_enters)) / 
        Sums.nonZeroTotalTicks;

    c = print_AVL_node(n_ticks_AVL_root, subtree, "", 1, fp);
    c = print_AVL_node(c_ticks_AVL_root, subtree, "", 1, fp);
    fprintf(fp, "\n");

    if(LISTEDBYENTERS) {
      if(Sums.total_g_enters) {
        fprintf(fp, "foreign lang\t %10d calls", Sums.total_g_enters);
        if(enter_percentages) 
          fprintf(fp, "   %5.1f%% calls", 
                  100*((float) Sums.total_g_enters)/Sums.total_enters);
        fprintf(fp, "\t%5.1f%% time", 
                100*((float) Sums.total_g_ticks)/Sums.nonZeroTotalTicks);
        if (ticks_per_enter)
          fprintf(fp, "\t%10d tpe",
                  (int)(tpefactor*(Sums.total_g_ticks)/(Sums.total_g_enters)));
        fprintf(fp, "\n\n");
      }
      fprintf(fp, "garbage collect\t %10d calls", 
              Sums.collect_garbage_enters);
      if(enter_percentages)
        fprintf(fp, "   %5.1f%% calls", 
                100*((float) Sums.collect_garbage_enters)/Sums.total_enters);
      fprintf(fp, "\t%5.1f%% time",
              100*((float) Sums.collect_garbage_ticks)/Sums.nonZeroTotalTicks);
      if (ticks_per_enter)
        fprintf(fp, "\t%10d tpe",
                (int)(tpefactor*(Sums.collect_garbage_ticks) /
                      (Sums.collect_garbage_enters)));
      fprintf(fp, "\n\nTime figures based on %d samples\n\n", 
              Sums.total_ticks);
    }
    else {
      if(Sums.total_g_enters) {
        fprintf(fp, "foreign lang\t %5.1f%% time\t%10d calls", 
                100*((float) Sums.total_g_ticks)/Sums.nonZeroTotalTicks, 
                Sums.total_g_enters);
        if(enter_percentages) 
          fprintf(fp, "   %5.1f%% calls", 
                  100*((float) Sums.total_g_enters)/Sums.total_enters);
        if (ticks_per_enter)
          fprintf(fp, "\t%10d tpe",
                  (int)(tpefactor*(Sums.total_g_ticks)/(Sums.total_g_enters)));
        fprintf(fp, "\n\n");
      }
      fprintf(fp, "garbage collect\t %5.1f%% time\t%10d calls", 
              100*((float) Sums.collect_garbage_ticks)/Sums.nonZeroTotalTicks, 
              Sums.collect_garbage_enters);
      if(enter_percentages)
        fprintf(fp, "   %5.1f%% calls", 
                100*((float) Sums.collect_garbage_enters)/Sums.total_enters);
      if (ticks_per_enter)
        fprintf(fp, "\t%10d tpe",
                (int)(tpefactor*(Sums.collect_garbage_ticks) /
                      (Sums.collect_garbage_enters)));
      fprintf(fp, "\n\nTime figures based on %d samples\n\n", 
              Sums.total_ticks);
    }
  }
}

/****************************************************** tprof stuff */

void tprofStart(void)
{
  if(!timeSample && !profileInterval) {
    timeSample=1;
    profileInterval = (double) 0.1; /* 100ms */
  }
  if(timeSample) {
#if defined(__arm) || defined(__CYGWIN32__) || defined(__MINGW32__)
    fprintf(stderr,"No timed profiling availible on this machine.\n");
    exit(-1);
#else
    setuptimer();
#endif
  }
  init_AVL(&address_AVL_root);
  if (assign_subfn_enters) {
    tprofTMIncludePrelSubfn();
    tprofTMIncludeUsrSubfn();
  }
  Mods.usrmods = tprofTMInitTreeUsr();
  Mods.premods = tprofTMInitTreePrel3();
  Mods.premods = tprofTMInitTreePrel2();
  Mods.premods = tprofTMInitTreePrel1();
  return;
}

void tprofInclude(char *module)
{
  int mod_len,i,j;
  int listpermod=0;
  char *args;

  mod_len = strlen(module);
  args = module;
  for(i=0;i<mod_len;i++) {
    switch (*(args+i)) {
    case 'm':
      listpermod = 1;
      break;
    case 't':
      listedby = TICKS;
      break;
    case 'e': /* Was just e for enters   */
    case 'c': /* refered to as calls now */
      listedby = ENTERS;
      break;
    case ' ': break;
    case '+': 
    case '-':
      for(j=i;j<mod_len;j++) {
	if (*(args+j)==' ' || (j==mod_len-1)) {
	  if (j!=mod_len-1) *(args+j)='\0';
	  if (*(args+i)=='-') {
            tprofTMIncludePrel(args+i+1,0);
	    tprofTMIncludeUsr(args+i+1,0);
          }
	  else {
	    tprofTMIncludePrel(args+i+1,-1);
	    tprofTMIncludeUsr(args+i+1,-1);
          }
	  i=j;
	  break;
	}
      }
      break;
    case 'x': /* extensions */
      i++;
      switch (*(args+i)) {
      case 'p': /* percentages for calls as well as for time */
        enter_percentages = 1;
        break;  
      case 'l': /* Count sub-function (lambda lifted) entries separately */
      case 's': /* Was just l (LAMBDA) for subfns but s seems more       */
      case 'f': /* obvious and Malcolm mentions f on the webpage         */
        assign_subfn_enters = 1;
        break;
      case 'g': /* Display the actual number of ticks for gem */
        gem_wants_the_ticks = 1;
        break;
      case 'o': /* Calculate ticks per enter (scaled) for olaf */
        ticks_per_enter = 1;
        break;
      case 'c': /* Calculate time cumulative subtotals for colin */
        time_subtotal = 1;
        break;
      case 'd': /* Don't ignore dictionary functions */
        show_dictionary = 1;
        break;
      default: {
          fprintf(stderr,
                  "\n Unknown tprof extension flag.\tValid flags: -txp, -txs, -txg, -txo\n");
          exit(-1);
        }
      }
      break;  
    default: {
        fprintf(stderr,
                "\n Unknown tprof flag.\tValid flags: -t, -tt, -tmc, etc...\n");
        exit(-1);
      }
    }
  }
  if (listpermod) {
    if (listedby==TICKS)
      listedby = TICKSPERMOD;
    if (listedby==ENTERS)
      listedby = ENTERSPERMOD;
  }
}

void tprofInitTree(CodePtr address, char *funname, int *enterPtr)
{
  enterPtrTmp = &enterPtr;
  fflush(stderr);
  insert_by_address_AVL(&address_AVL_root, address, funname, 1, 1);
  return;
}

void tprofStop(int argc, char **argv)
{
  int i;
  char fname[MAX_FILE_NAME];
  char *str;

  timeSample++; /* No more timer exceptions */
  stoptimer();

#ifdef __arm
  strcpy(fname, argv[0]);
  strcat(fname, "_tp");
#else
  if(0 == (str = strrchr(argv[0], DIR_DEL))) {
    strcpy(fname, argv[0]);
  } else {
    strcpy(fname, str+1);
  }
  strcat(fname, ".tp");
#endif
  if(0 == (tpFILE = fopen(fname, "w"))) {
    fprintf(stderr, "%s can't open \"%s\" for profile data.\n", argv[0], fname);
    exit(-1);
  }
  fprintf(tpFILE, "JOB ");
  for(i=0; i<argc; ) {
    fputs(argv[i], tpFILE);
    i++;
    fputc(' ', tpFILE);
  }
  fprintf(tpFILE, ";\n");
  { time_t t;
  time(&t);
  fprintf(tpFILE, "DATE %s\n", asctime(localtime(&t)));
  }

  output_AVL_as_orderd_table(&address_AVL_root, tpFILE);

  fclose(tpFILE);
}

void tprofRecordEnter(char *funname, int **enterPtr) {
  timeSample = FREEZE_TIME;
  enterPtrTmp = enterPtr;
  last_right_taken = address_AVL_root;
  insert_by_address_AVL(&address_AVL_root, *ipref, funname, 1, 0);    
  timeSample = ACTIVE_TIME;
}

void tprofEnterGreencard(CodePtr address, char *funname) {
  timeSample = FREEZE_TIME;
  in_greencard = 1;
  last_right_taken = address_AVL_root;
  insert_by_address_AVL(&address_AVL_root, address, "", 0, 0);
  timeSample = ACTIVE_TIME;
}

void tprofExitGreencard(void) {
  in_greencard = 0;
}

void tprofRecordGC(void) {
  timeSample = FREEZE_TIME;
  if (collecting_garbage)
    collecting_garbage=0;
  else {
    collecting_garbage=1;
    Sums.collect_garbage_enters++;
  }
  timeSample = ACTIVE_TIME;
}

void tprofRecordTick(void) {
  timeSample = FREEZE_TIME;
  if (in_greencard)
    *in_greencard_ticks++;
  else
    if (collecting_garbage)
      Sums.collect_garbage_ticks++; 
    else {
      last_right_taken = address_AVL_root;
      insert_by_address_AVL(&address_AVL_root, *ipref, "", 0, 0);
    }
  timeSample = ACTIVE_TIME;
  return;
}

void gcDataStart(int argc, char **argv)
{
  int i;
  char fname[MAX_FILE_NAME];
#ifdef __arm
  strcpy(fname, argv[0]);
  strcat(fname, "_gd");
#else
  char *str;
  if(0 == (str = strrchr(argv[0], DIR_DEL))) {
    strcpy(fname, argv[0]);
  } else {
    strcpy(fname, str+1);
  }
  strcat(fname, ".gd");
#endif
  if(0 == (gdFILE = fopen(fname, "w"))) {
    fprintf(stderr, "%s can't open \"%s\" for GC data.\n", argv[0], fname);
    exit(-1);
  }
  fprintf(gdFILE, "JOB ");
  for(i=0; i<argc; ) {
    fputs(argv[i], gdFILE);
    i++;
    fputc(' ', gdFILE);
  }
  fprintf(gdFILE, ";\n");
  { time_t t;
  time(&t);
  fprintf(gdFILE, "DATE \"%s\"\n", asctime(localtime(&t)));
  }

  fprintf(gdFILE, "HPSIZE %8d\n", hpSize);


  if(profileInterval)
    fprintf(gdFILE, "PROFINTERVAL %7.2f\n", profileInterval);
  else {
    profileInterval = (double)hpSize+spSize;
    gcData = 2;
  }
}

void gcDataStop(NodePtr hp) {
  /* Last data point might be needed */
  fprintf(gdFILE,"POINT %8ld %8d %8d %7.3f\n",hp-hpBase+hpTotal,0,0,0.0);  

  fprintf(gdFILE,"GCTIME %7.2f\n",(double)gcTime.l/(double)HZ);
  fprintf(gdFILE,"RUNTIME %7.2f\n",(double)runTime.l/(double)HZ);
  fprintf(gdFILE,"TOTALTIME %7.2f\n",(double)totalTime.l/(double)HZ);
  if(totalTime.h || gcTime.h || runTime.h)
    fprintf(gdFILE,"TIMERWRAPPED\n");
  fclose(gdFILE);
}


