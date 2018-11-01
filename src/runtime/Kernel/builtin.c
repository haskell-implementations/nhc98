/* This file is now obsolete - use newbuiltin.c instead */

#include "codemacros.h"

 STARTBYTECODE

 AL
  EX L(C0_Builtin_46PrimToken)
DL(C0_Builtin_46PrimToken)
 DW CONSTR(0,0,0)
#ifdef PROFILE
 DW L(PROF_primToken), 0, 0, 0
#endif

 AL
  EX L(CF__95Builtin_46hputc_95ok)
DL(CF__95Builtin_46hputc_95ok)
 DW CONSTR(1,1,0)
#ifdef PROFILE
 DW L(PROF_hputc_ok), 0, 0, 0
#endif
 DW L(C0_Prelude_46_91_93)

 AL
  EX L(Start_World)
DL(Start_World)
 DW CONSTR(0,2,0)
#ifdef PROFILE
 DW L(PROF_Start_World), 0, 0, 0
#endif
 DW L(C0_Prelude_46_91_93)
 DW L(C0_Prelude_46_91_93)

 AL
 DB FILL4toWORD 1,0,0,1
 DW L(CT_primLeave)
  EX L(FN_Prelude_46primLeave)
DL(FN_Prelude_46primLeave)
#ifdef TPROF
   DW 0		/* DAVID/PH */
#endif
 DB EXIT
 DB ENDCODE	/* DAVID */

 AL
 DW 0
 DW L(ST_primLeave)
DL(CT_primLeave)
 DW HW(0,1)
 DW 0
DL(F0_Prelude_46primLeave)
 DW CAPTAG(FN_Prelude_46primLeave,1)
#ifdef PROFILE
 DW L(PROF_primLeave), 0, 0, 0
#endif

 AL
 DB FILL4toWORD 1,0,0,1
 DW L(CT_unpackCString)
  EX L(FN_Builtin_46primUnpackCString)
DL(FN_Builtin_46primUnpackCString)
#ifdef TPROF
   DW 0		/* DAVID/PH */
#endif
 DB NEEDHEAP_I32
 DB PUSH_ARG_I1
 DB STRING
 DB RETURN
 DB ENDCODE	/* DAVID */

 AL
 DW 0
 DW L(ST_Builtin_46primUnpackCString)
DL(CT_unpackCString)
 DW HW(0,1)
 DW 0
DL(F0_Builtin_46primUnpackCString)
 DW CAPTAG(FN_Builtin_46primUnpackCString,1)
#ifdef PROFILE
 DW L(PROF_46primUnpackCString), 0, 0, 0
DL(PROF_46primUnpackCString)
 DW L(PM_Prelude),L(PP_compiletime),L(PC_Builtin_46primUnpackCString)
#endif

 AL
 DB FILL4toWORD 1,0,0,1
 DW L(CT_hgets)
  EX L(FN_Builtin_46hgets)
DL(FN_Builtin_46hgets)
#ifdef TPROF
   DW 0		/* DAVID/PH */
#endif
 DB NEEDHEAP_I32
 DB PUSH_ARG_I1
 DB HGETS
 DB RETURN
 DB ENDCODE	/* DAVID */

 AL
 DW 0
 DW L(ST_Builtin_46hgets)
DL(CT_hgets)
 DW HW(0,1)
 DW 0
DL(F0_Builtin_46hgets)
 DW CAPTAG(FN_Builtin_46hgets,1)
#ifdef PROFILE
 DW L(PROF_46hgets), 0, 0, 0
DL(PROF_46hgets)
 DW L(PM_Prelude),L(PP_compiletime),L(PC_Builtin_46hgets)
#endif

  AL
  EX L(CF_IO_46stdout)
DL(CF_IO_46stdout)
  DW CONSTRW(1,0)
#ifdef PROFILE
  DW L(PROF_IO_46stdout), 0, 0, 0
#endif
  DW L(fo_stdout)

  AL
  EX L(CF_IO_46stdin)
DL(CF_IO_46stdin)
  DW CONSTRW(1,0)
#ifdef PROFILE
  DW L(PROF_IO_46stdin), 0, 0, 0
#endif
  DW L(fo_stdin)

  AL
  EX L(CF_IO_46stderr)
DL(CF_IO_46stderr)
  DW CONSTRW(1,0)
#ifdef PROFILE
  DW L(PROF_IO_46stderr), 0, 0, 0
#endif
  DW L(fo_stderr)


#ifdef PROFILE

AL
DL(PROF_primLeave)
 DW L(PM_Prelude),L(PP_compiletime),L(PC_Prelude_46primLeave)

DL(PROF_primToken)
 DW L(PM_Prelude),L(PP_compiletime),L(PC_primToken)

DL(PROF_hputc_ok)
 DW L(PM_Prelude),L(PP_compiletime),L(PC_hputc_ok)

DL(PROF_Start_World)
 DW L(PM_Prelude),L(PP_compiletime),L(PC_Start_World)

DL(PROF_IO_46stdin)
 DW L(PM_IO),L(PP_compiletime),L(PC_Prelude_46stdin)

DL(PROF_IO_46stdout)
 DW L(PM_IO),L(PP_compiletime),L(PC_Prelude_46stdout)

DL(PROF_IO_46stderr)
 DW L(PM_IO),L(PP_compiletime),L(PC_Prelude_46stderr)

DL(PC_IO_46stdin)
 DS "IO.stdin"
 DB 0

DL(PC_IO_46stdout)
 DS "IO.stdout"
 DB 0

DL(PC_IO_46stderr)
 DS "IO.stderr"
 DB 0

DL(PC_primToken)
 DS "Prelude.primToken"
 DB 0

DL(PC_hputc_ok)
 DS "Builtin.hputc_ok"
 DB 0

DL(PC_Start_World)
 DS "Prelude.Start_World"
 DB 0

#endif

  
#ifdef PROFILE
  AL
  EX L(PP_Prelude_46primLeave)
DL(PP_Prelude_46primLeave)
  EX L(PC_Prelude_46primLeave)
DL(PC_Prelude_46primLeave)
#endif
DL(ST_primLeave)
  DS "Prelude.primLeave"
  DB 0

#ifdef PROFILE
  AL
  EX L(PP_Builtin_46primUnpackCString)
DL(PP_Builtin_46primUnpackCString)
  EX L(PC_Builtin_46primUnpackCString)
DL(PC_Builtin_46primUnpackCString)
#endif
DL(ST_Builtin_46primUnpackCString)
  DS "Builtin.primUnpackString"
  DB 0

#ifdef PROFILE
  AL
  EX L(PP_Builtin_46hgets)
DL(PP_Builtin_46hgets)
  EX L(PC_Builtin_46hgets)
DL(PC_Builtin_46hgets)
#endif
DL(ST_Builtin_46hgets)
  DS "Builtin.hgets"
  DB 0

