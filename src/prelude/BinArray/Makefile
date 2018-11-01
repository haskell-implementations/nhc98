include Makefile.inc

THISLIB	= BinArray
SEARCH	= -P../Binary -I../Binary
EXTRA_H_FLAGS	=
EXTRA_C_FLAGS	= -I../Binary

SRCS	= \
	UnboxedArray.hs \
	AllocUBA.gc DUnboxedArray.gc RUBA.gc GetUBAEnd.gc Binary_UBA.gc \
	GetUBAFree.gc WUBA.gc \
	cLowUnboxedArray.c


# Here are some extra rules.
cfiles: cfilescheck
cfilescheck:
	cp $(INCDIR)/NHC/Binary.${HISUFFIX} ../Binary  # hack around compiler bug!


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.
${OBJS}: cLowUnboxedArray.h

${OBJDIR}/AllocUBA.$O: AllocUBA.gc ${OBJDIR}/DUnboxedArray.$O
${OBJDIR}/Binary_UBA.$O: Binary_UBA.gc  ${OBJDIR}/DUnboxedArray.$O
${OBJDIR}/DUnboxedArray.$O: DUnboxedArray.gc
${OBJDIR}/GetUBAEnd.$O: GetUBAEnd.gc ${OBJDIR}/DUnboxedArray.$O
${OBJDIR}/GetUBAFree.$O: GetUBAFree.gc ${OBJDIR}/DUnboxedArray.$O
${OBJDIR}/RUBA.$O: RUBA.gc ${OBJDIR}/DUnboxedArray.$O
${OBJDIR}/WUBA.$O: WUBA.gc ${OBJDIR}/DUnboxedArray.$O
${OBJDIR}/UnboxedArray.$O: UnboxedArray.hs ${OBJDIR}/DUnboxedArray.$O ${OBJDIR}/AllocUBA.$O ${OBJDIR}/Binary_UBA.$O ${OBJDIR}/GetUBAEnd.$O ${OBJDIR}/GetUBAFree.$O ${OBJDIR}/RUBA.$O ${OBJDIR}/WUBA.$O
${OBJDIR}/cLowUnboxedArray.$O: cLowUnboxedArray.c
${OBJDIR}/BinArray.$O: BinArray.hs ${OBJDIR}/UnboxedArray.$O ${OBJS}


# C-files dependencies.
AllocUBA.$C:     DUnboxedArray.$C
Binary_UBA.$C:   DUnboxedArray.$C
GetUBAEnd.$C:    DUnboxedArray.$C
GetUBAFree.$C:   DUnboxedArray.$C
RUBA.$C:         DUnboxedArray.$C
WUBA.$C:         DUnboxedArray.$C
UnboxedArray.$C: DUnboxedArray.$C AllocUBA.$C Binary_UBA.$C GetUBAEnd.$C GetUBAFree.$C RUBA.$C WUBA.$C
BinArray.$C:     UnboxedArray.$C 

