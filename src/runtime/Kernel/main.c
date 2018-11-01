#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <setjmp.h>
#include "comp.h"

#include "node.h"
#include "mutlib.h"
#include "initend.h"
/* #include "runtime.h" -- already included in node.h */


/* In this variable an error handler can be registered.
 * The error message is passed to it.
 */
void (*haskellErrorHandler)(char *errorMsg) = NULL;

/* This function is always used when an error of a Haskell program
 * is or cannot be caught by the Haskell program.
 * It is not (yet) used for nhc internal errors (e.g. wrong bytecode)
 */
void nhc_abort(char *errorMsg) 
{
  fprintf(stderr,"%s\n",errorMsg);
  if (haskellErrorHandler)
     (*haskellErrorHandler)(errorMsg);
  exit(-1);
}

/****/

#ifdef PROFILE
static SInfo mainProfInfo = { "<Main>","<Main>","<Main>"};
#endif

#if defined(__CYGWIN32__) || defined(__MINGW32__)
extern jmp_buf exit_mutator;
#else
extern sigjmp_buf exit_mutator;
#endif


int main(int argc, char **argv)
{
  haskellInit(argc,argv);	/* all cmd-line-arg setup is separate now */
#ifdef BYTECODE_PROF
  instr_prof_init();
#endif

  Fp = Sp;
  *--Sp = TOPLEVEL;
  *--Sp = (NodePtr)Fp;
  *--Sp = TOPLEVEL_code;
  Fp = Sp;
  spStart = Sp;

  MK_VAP1(Hp,C_VAPTAG(MAIN), GET_WORLD);
  INIT_PROFINFO(Hp,&mainProfInfo);
  *--Sp = Hp;
  Hp += SIZE_VAP1;

#if defined(__CYGWIN32__) || defined(__MINGW32__)
  if(!setjmp(exit_mutator)) {
#else
  if(!sigsetjmp(exit_mutator,0)) {
#endif
    run(TOPLEVEL);
    fprintf(stderr,"What, run() returned!\n");
    exit_code = -1;
  }

#ifdef BYTECODE_PROF
  instr_prof_results();
#endif

  return haskellEnd(argc,argv);

} /* end of main() */
