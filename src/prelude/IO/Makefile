include Makefile.inc

THISLIB	= IO
SEARCH	= -P../PreludeIO -P$(LOW) -P../$(MACHINE)

SRCS = \
	DHandle.hs	  DHandlePosn.hs \
	HFlush.hs         HPrint.hs        HSetPosn.hs \
        IsEOF.hs          SeekMode.hs      BufferMode.hs \
        HGetChar.hs       HPutChar.hs                     \
        IsEOFError.hs     HGetContents.hs \
        HPutStr.hs        IOMode.hs        IsUserError.hs   \
	HClose.hs         HGetPosn.hs      HSeek.hs \
        IoeGetFileName.hs OpenFile.hs      HFileSize.hs \
        HIsEOF.hs                          IoeGetHandle.hs \
                          HGetFileName.hs  HPutStrLn.hs \
	NotDoneYet.hs                                    \
	IoeGetErrorString.hs	HGetLine.hs	\
	Eq_Handle.hs      Eq_HandlePosn.hs \
	Show_Handle.hs    Show_HandlePosn.hs \
	IsIOErrors.hs     Try.hs           Bracket.hs	Bracket_.hs \
	HSetBuffering.hs HGetBuffering.hs \
	DSocket.hs OpenSocket.hs \
	StdIO.hs


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.
${OBJDIR}/NotDoneYet.$O:     ${OBJDIR}/DHandle.$O 
${OBJDIR}/IoeGetFileName.$O: ${OBJDIR}/DHandle.$O ${OBJDIR}/HGetFileName.$O ${OBJDIR}/IoeGetHandle.$O
${OBJDIR}/IoeGetHandle.$O:   ${OBJDIR}/DHandle.$O 
${OBJDIR}/Bracket_.$O:       ${OBJDIR}/Try.$O 
${OBJDIR}/Bracket.$O:        ${OBJDIR}/Try.$O 
${OBJDIR}/HPutStrLn.$O:      ${OBJDIR}/DHandle.$O ${OBJDIR}/HPutStr.$O ${OBJDIR}/HPutChar.$O 
${OBJDIR}/HPutStr.$O:        ${OBJDIR}/DHandle.$O ${OBJDIR}/HPutChar.$O 
${OBJDIR}/HPutChar.$O:       ${OBJDIR}/DHandle.$O 
${OBJDIR}/HGetContents.$O:   ${OBJDIR}/DHandle.$O 
${OBJDIR}/HGetChar.$O:       ${OBJDIR}/DHandle.$O 
${OBJDIR}/HGetLine.$O:       ${OBJDIR}/HGetChar.$O 
${OBJDIR}/HSeek.$O:          ${OBJDIR}/SeekMode.$O ${OBJDIR}/DHandle.$O ${OBJDIR}/HGetFileName.$O 
${OBJDIR}/HSetPosn.$O:       ${OBJDIR}/DHandle.$O ${OBJDIR}/DHandlePosn.$O ${OBJDIR}/HGetFileName.$O 
${OBJDIR}/HGetPosn.$O:       ${OBJDIR}/DHandle.$O ${OBJDIR}/DHandlePosn.$O ${OBJDIR}/HGetFileName.$O 
${OBJDIR}/HFlush.$O:         ${OBJDIR}/DHandle.$O ${OBJDIR}/HGetFileName.$O 
${OBJDIR}/HGetBuffering.$O:  ${OBJDIR}/DHandle.$O ${OBJDIR}/BufferMode.$O 
${OBJDIR}/HSetBuffering.$O:  ${OBJDIR}/DHandle.$O ${OBJDIR}/BufferMode.$O ${OBJDIR}/HGetFileName.$O 
${OBJDIR}/IsEOF.$O:          ${OBJDIR}/HIsEOF.$O  ${OBJDIR}/StdIO.$O
${OBJDIR}/HIsEOF.$O:         ${OBJDIR}/DHandle.$O 
${OBJDIR}/HGetFileName.$O:   ${OBJDIR}/DHandle.$O 
${OBJDIR}/HFileSize.$O:      ${OBJDIR}/DHandle.$O ${OBJDIR}/HGetFileName.$O 
${OBJDIR}/OpenFile.$O:       ${OBJDIR}/DHandle.$O ${OBJDIR}/IOMode.$O ${OBJDIR}/HClose.$O 
${OBJDIR}/HClose.$O:         ${OBJDIR}/DHandle.$O 
${OBJDIR}/Eq_Handle.$O:      ${OBJDIR}/DHandle.$O 
${OBJDIR}/Eq_HandlePosn.$O:  ${OBJDIR}/DHandlePosn.$O ${OBJDIR}/Eq_Handle.$O

# C deps.
NotDoneYet.$C: DHandle.$C 
IoeGetFileName.$C: DHandle.$C HGetFileName.$C IoeGetHandle.$C 
IoeGetHandle.$C: DHandle.$C 
Bracket_.$C: Try.$C 
Bracket.$C: Try.$C 
HPutStrLn.$C: DHandle.$C HPutStr.$C HPutChar.$C 
HPutStr.$C: DHandle.$C HPutChar.$C 
HPutChar.$C: DHandle.$C 
HGetContents.$C: DHandle.$C HGetChar.$C 
HGetChar.$C: DHandle.$C 
HGetLine.$C: HGetChar.$C 
HSeek.$C: SeekMode.$C DHandle.$C HGetFileName.$C 
HSetPosn.$C: DHandle.$C DHandlePosn.$C HGetFileName.$C 
HGetPosn.$C: DHandle.$C DHandlePosn.$C HGetFileName.$C 
HFlush.$C: DHandle.$C HGetFileName.$C 
HGetBuffering.$C: DHandle.$C BufferMode.$C 
HSetBuffering.$C: DHandle.$C BufferMode.$C HGetFileName.$C 
IsEOF.$C: DHandle.$C HIsEOF.$C 
HIsEOF.$C: DHandle.$C 
HGetFileName.$C: DHandle.$C 
HFileSize.$C: DHandle.$C HGetFileName.$C 
OpenFile.$C: DHandle.$C IOMode.$C HClose.$C 
HClose.$C: DHandle.$C 
Eq_HandlePosn.$C: DHandlePosn.$C 

