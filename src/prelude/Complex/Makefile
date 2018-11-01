include Makefile.inc

THISLIB	= Complex
SEARCH	=
EXTRA_H_FLAGS	=
EXTRA_C_FLAGS	=

SRCS	= \
	ImagPart.hs            Read_Complex.hs \
	Cis.hs                 Magnitude.hs           Floating_Complex.hs \
	Conjugate.hs           MkPolar.hs             RealPart.hs \
	DComplex.hs            Num_Complex.hs         Show_Complex.hs \
	Eq_Complex.hs          Phase.hs               \
	Fractional_Complex.hs  Polar.hs


# Here are the main rules.
include ../Makefile.common



# Here are the dependencies.
${OBJDIR}/Cis.$O: Cis.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Conjugate.$O: Conjugate.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Eq_Complex.$O: Eq_Complex.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Floating_Complex.$O: Floating_Complex.hs ${OBJDIR}/DComplex.$O ${OBJDIR}/Magnitude.$O ${OBJDIR}/Phase.$O ${OBJDIR}/Fractional_Complex.$O ${OBJDIR}/Num_Complex.$O
${OBJDIR}/Fractional_Complex.$O: Fractional_Complex.hs ${OBJDIR}/DComplex.$O ${OBJDIR}/Num_Complex.$O
${OBJDIR}/ImagPart.$O: ImagPart.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Magnitude.$O: Magnitude.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/MkPolar.$O: MkPolar.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Num_Complex.$O: Num_Complex.hs ${OBJDIR}/DComplex.$O ${OBJDIR}/Magnitude.$O ${OBJDIR}/Eq_Complex.$O ${OBJDIR}/Show_Complex.$O
${OBJDIR}/Phase.$O: Phase.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Read_Complex.$O: Read_Complex.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/RealPart.$O: RealPart.hs ${OBJDIR}/DComplex.$O
${OBJDIR}/Show_Complex.$O: Show_Complex.hs ${OBJDIR}/DComplex.$O ${OBJDIR}/RealPart.$O
${OBJDIR}/Polar.$O: Polar.hs ${OBJDIR}/DComplex.$O ${OBJDIR}/Magnitude.$O  ${OBJDIR}/Phase.$O


# C-files dependencies.
Cis.$C:        DComplex.$C
Conjugate.$C:  DComplex.$C
Eq_Complex.$C: DComplex.$C
ImagPart.$C:   DComplex.$C
Magnitude.$C:  DComplex.$C
MkPolar.$C:    DComplex.$C
Phase.$C:      DComplex.$C
RealPart.$C:   DComplex.$C
Polar.$C:      DComplex.$C Magnitude.$C  Phase.$C

Floating_Complex.$C:   DComplex.$C Magnitude.$C Phase.$C Fractional_Complex.$C Num_Complex.$C
Fractional_Complex.$C: DComplex.$C Num_Complex.$C
Num_Complex.$C:        DComplex.$C Magnitude.$C Eq_Complex.$C Show_Complex.$C
Read_Complex.$C:       DComplex.$C
Show_Complex.$C:       DComplex.$C RealPart.$C

