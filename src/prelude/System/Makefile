include Makefile.inc

THISLIB	= System
SEARCH	= -P$(LOW) -P../PreludeIO

SRCS	= \
	DExitCode.hs Eq_ExitCode.hs Read_ExitCode.hs \
	Ord_ExitCode.hs  Show_ExitCode.hs  \
	GetArgs.hs GetProgName.hs GetEnv.hs \
	ExitWith.hs ExitFailure.hs SystemFun.hs


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/Eq_ExitCode.$O: Eq_ExitCode.hs ${OBJDIR}/DExitCode.$O
${OBJDIR}/Ord_ExitCode.$O: Ord_ExitCode.hs ${OBJDIR}/DExitCode.$O ${OBJDIR}/Eq_ExitCode.$O
${OBJDIR}/Read_ExitCode.$O: Read_ExitCode.hs ${OBJDIR}/DExitCode.$O
${OBJDIR}/Show_ExitCode.$O: Show_ExitCode.hs ${OBJDIR}/DExitCode.$O


# C-files dependencies.
Eq_ExitCode.$C:   DExitCode.$C
Ord_ExitCode.$C:  DExitCode.$C Eq_ExitCode.$C
Read_ExitCode.$C: DExitCode.$C
Show_ExitCode.$C: DExitCode.$C

