include Makefile.inc

THISLIB	= Array
SEARCH	= -P../List #-P../Ix
EXTRA_H_FLAGS	= #-prelude	# to ensure all Ix instances are re-exported
EXTRA_C_FLAGS	=

SRCS	= \
	_E.hs          LowVector.hs   ArrPrec.hs  \
	AMap.hs        Assocs.hs      Eq_Array.hs    ListArray.hs   \
	Show_Array.hs \
	Accum.hs       Bounds.hs      AIndex.hs      Ord_Array.hs   \
	AccumArray.hs  DArray.hs      Indices.hs     Read_Array.hs  \
	ArrayFun.hs    Elems.hs       IxMap.hs       Replace.hs     \
	ArrayLow.hs



# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/_E.$O: _E.hs
${OBJDIR}/LowVector.$O: LowVector.hs ${OBJDIR}/_E.$O
${OBJDIR}/AMap.$O: AMap.hs ${OBJDIR}/DArray.$O ${OBJDIR}/ArrayFun.$O ${OBJDIR}/AIndex.$O ${OBJDIR}/Bounds.$O
${OBJDIR}/Accum.$O: Accum.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Replace.$O ${OBJDIR}/AIndex.$O
${OBJDIR}/AccumArray.$O: AccumArray.hs ${OBJDIR}/DArray.$O ${OBJDIR}/ArrayFun.$O ${OBJDIR}/Accum.$O
${OBJDIR}/ArrayFun.$O: ArrayFun.hs ${OBJDIR}/DArray.$O
${OBJDIR}/Assocs.$O: Assocs.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Indices.$O ${OBJDIR}/AIndex.$O
${OBJDIR}/Bounds.$O: Bounds.hs ${OBJDIR}/DArray.$O
${OBJDIR}/Elems.$O: Elems.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Indices.$O ${OBJDIR}/AIndex.$O
${OBJDIR}/Eq_Array.$O: Eq_Array.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Bounds.$O ${OBJDIR}/Elems.$O
${OBJDIR}/AIndex.$O: AIndex.hs ${OBJDIR}/DArray.$O
${OBJDIR}/Indices.$O: Indices.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Bounds.$O
${OBJDIR}/IxMap.$O: IxMap.hs ${OBJDIR}/DArray.$O ${OBJDIR}/ArrayFun.$O ${OBJDIR}/AIndex.$O
${OBJDIR}/ListArray.$O: ListArray.hs ${OBJDIR}/DArray.$O ${OBJDIR}/ArrayFun.$O
${OBJDIR}/Ord_Array.$O: Ord_Array.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Assocs.$O ${OBJDIR}/Eq_Array.$O
${OBJDIR}/Read_Array.$O: Read_Array.hs ${OBJDIR}/DArray.$O ${OBJDIR}/ArrayFun.$O ${OBJDIR}/ArrPrec.$O
${OBJDIR}/Replace.$O: Replace.hs ${OBJDIR}/DArray.$O ${OBJDIR}/LowVector.$O ${OBJDIR}/_E.$O
${OBJDIR}/Show_Array.$O: Show_Array.hs ${OBJDIR}/DArray.$O ${OBJDIR}/Assocs.$O ${OBJDIR}/Bounds.$O ${OBJDIR}/Elems.$O ${OBJDIR}/ArrPrec.$O
${OBJDIR}/../List/Difference.$O:
	cd ../List; ${MAKE} ${BUILDDIR}/${OBJ}/prelude/List/Difference.$O


# C-files dependencies.
LowVector.$C:  _E.$C
AMap.$C:       DArray.$C ArrayFun.$C  AIndex.$C Bounds.$C
Accum.$C:      DArray.$C Replace.$C   AIndex.$C
AccumArray.$C: DArray.$C ArrayFun.$C  Accum.$C
ArrayFun.$C:   DArray.$C
Assocs.$C:     DArray.$C Indices.$C   AIndex.$C
Bounds.$C:     DArray.$C
Elems.$C:      DArray.$C Indices.$C   AIndex.$C
Eq_Array.$C:   DArray.$C Assocs.$C    Elems.$C
AIndex.$C:     DArray.$C
Indices.$C:    DArray.$C Bounds.$C
IxMap.$C:      DArray.$C ArrayFun.$C  AIndex.$C
ListArray.$C:  DArray.$C ArrayFun.$C
Ord_Array.$C:  DArray.$C Assocs.$C    Eq_Array.$C
Read_Array.$C: DArray.$C ArrayFun.$C  ArrPrec.$C
Replace.$C:    DArray.$C LowVector.$C _E.$C
Show_Array.$C: DArray.$C Assocs.$C    Bounds.$C  Elems.$C  ArrPrec.$C
../List/Difference.$C:
	cd ../List; ${MAKE} Difference.$C

