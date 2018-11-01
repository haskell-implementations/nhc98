include Makefile.inc

THISLIB	= PreludeIO
SEARCH	= -P$(LOW) -P../$(MACHINE)
EXTRA_H_FLAGS	= --prelude --redefine
EXTRA_C_FLAGS	=

SRCS	= \
	StrError.hs \
	Eq_IOError.hs    Monad_IO.hs      ReadLn.hs 	\
	AppendFile.hs    Print.hs         Show_IOError.hs \
	Catch.hs         Functor_IO.hs    PutStrLn.hs      TFilePath.hs    \
	                 GetLine.hs       ReadFile.hs      UserError.hs    \
	DIOError.hs      Interact.hs      ReadIO.hs        WriteFile.hs    \
	PutChar.hs PutStr.hs GetChar.hs GetContents.hs     IoError.hs



# Here are the main rules.
include ../Makefile.common



# Here are some extra rules.


# Here are the dependencies.
${OBJDIR}/Eq_IOError.$O:   ${OBJDIR}/DIOError.$O
${OBJDIR}/Monad_IO.$O:     ${OBJDIR}/DIOError.$O # ../Prelude/CMonad.hi
${OBJDIR}/Functor_IO.$O:   # ../Prelude/CFunctor.hi
${OBJDIR}/Show_IOError.$O: ${OBJDIR}/DIOError.$O ${OBJDIR}/StrError.$O
${OBJDIR}/Show_IOError.$O: ${OBJDIR}/StrError.$O
${OBJDIR}/UserError.$O:    ${OBJDIR}/DIOError.$O
${OBJDIR}/DIOError.$O:     #${OBJDIR}/DErrNo.$O
${OBJDIR}/ReadLn.$O:       ${OBJDIR}/ReadIO.$O


# And now for C-files dependencies.
Eq_IOError.$C:   DIOError.$C #DErrNo.$C
Monad_IO.$C:     DIOError.$C # ../Prelude/CMonad.hi
Functor_IO.$C:   # ../Prelude/CFunctor.hi
Show_IOError.$C: DIOError.$C StrError.$C #DErrNo.$C 
UserError.$C:    DIOError.$C
DIOError.$C:	#DErrNo.$C
ReadLn.$C:	ReadIO.$C

