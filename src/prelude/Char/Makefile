include Makefile.inc

THISLIB	= Char
SEARCH	= -P../Numeric -P../PreludeList
EXTRA_H_FLAGS	=
EXTRA_C_FLAGS	=

SRCS	= \
        AsciiTab.hs Chr.hs Ord.hs IsDigit.hs DigitToInt.hs IntToDigit.hs \
	IsAlpha.hs IsAlphaNum.hs IsAscii.hs IsControl.hs \
        IsHexDigit.hs IsLower.hs IsOctDigit.hs \
        IsLatin1.hs IsPrint.hs IsSpace.hs IsUpper.hs \
        LexLitChar.hs ReadLitChar.hs ShowLitChar.hs \
        ToLower.hs ToUpper.hs


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/IsAlpha.$O : ${OBJDIR}/IsUpper.$O ${OBJDIR}/IsLower.$O
${OBJDIR}/IsAlphaNum.$O : ${OBJDIR}/IsAlpha.$O ${OBJDIR}/IsDigit.$O
${OBJDIR}/IsPrint.$O: ${OBJDIR}/IsControl.$O
${OBJDIR}/ToLower.$O: ${OBJDIR}/IsUpper.$O
${OBJDIR}/ToUpper.$O: ${OBJDIR}/IsLower.$O
${OBJDIR}/LexLitChar.$O: ../Numeric/LexDigits.${HISUFFIX}
${OBJDIR}/ReadLitChar.$O: ../Numeric/ReadDec.${HISUFFIX} ../Numeric/ReadOct.${HISUFFIX} ../Numeric/ReadHex.${HISUFFIX}

IsAlpha.$C : IsAlpha.hs IsUpper.$C IsLower.$C
IsAlphaNum.$C : IsAlphaNum.hs IsAlpha.$C IsDigit.$C
IsPrint.$C: IsPrint.hs IsControl.$C
ToLower.$C: ToLower.hs IsUpper.$C
ToUpper.$C: ToUpper.hs IsLower.$C
LexLitChar.$C: LexLitChar.hs ../Numeric/LexDigits.${HISUFFIX}
ReadLitChar.$C: ReadLitChar.hs ../Numeric/ReadDec.${HISUFFIX} ../Numeric/ReadOct.${HISUFFIX} ../Numeric/ReadHex.${HISUFFIX}


## Yucky .hi stuff to deal with mutual dependencies.

NUMHIFILES =  LexDigits Nonnull ReadDec ReadOct ReadHex ReadInt
NUMHIS     = $(patsubst %, ../Numeric/%.${HISUFFIX}, ${NUMHIFILES})

${NUMHIS}: ../Numeric/%.${HISUFFIX} : ../Numeric/%.hs
	cd ../Numeric; ${MAKE} $@

../Numeric/LexDigits.${HISUFFIX}: ../Numeric/Nonnull.${HISUFFIX}
../Numeric/ReadDec.${HISUFFIX}: ../Numeric/ReadInt.${HISUFFIX}
../Numeric/ReadOct.${HISUFFIX}: ../Numeric/ReadInt.${HISUFFIX}
../Numeric/ReadHex.${HISUFFIX}: ../Numeric/ReadInt.${HISUFFIX}
../Numeric/ReadInt.${HISUFFIX}: ../Numeric/Nonnull.${HISUFFIX}

