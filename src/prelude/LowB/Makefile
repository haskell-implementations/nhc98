include Makefile.inc

EXCLUDE_THISLIB_HS = yes
THISLIB = LowB
SEARCH	= -P.. -P../PreludeIO -P../IO
EXTRA_H_FLAGS	= --prelude
EXTRA_C_FLAGS	=


SRCS	= \
	PrimError.hs Blackhole.hs \
	PrimOpenSocket.hs \
	CExitWith.hs PrimExitWith.hs PrimGetArgs.hs \
	DPackedString.hs \
	PrimComparePS.hs PrimIndex.hs PrimLength.hs PrimPackString.hs \
	PrimUnpackPS.hs \
	PrimDecodeDouble.hs PrimDecodeFloat.hs PrimDoubleFromInteger.hs \
	PrimEncodeDouble.hs PrimEncodeFloat.hs PrimFloatFromInteger.hs \
	PrimIntFromInteger.hs \
	PrimIntegerAbs.hs PrimIntegerAdd.hs PrimIntegerAnd.hs \
	PrimIntegerEq.hs PrimIntegerFromInt.hs PrimIntegerLe.hs \
	PrimIntegerLt.hs PrimIntegerGe.hs PrimIntegerGt.hs \
	PrimIntegerMul.hs PrimIntegerNe.hs PrimIntegerNeg.hs PrimIntegerOr.hs \
	PrimIntegerQuotRem.hs PrimIntegerSub.hs  Ieee.hs


#	PrimSystem.hs PrimGetEnv.hs PrimGetProgName.hs \
#	CHGetChar.hs PrimEqHandlePosn.hs CHPutChar.hs PrimHClose.hs \
# 	PrimHFileSize.hs PrimHFlush.hs PrimHGetBuffering.hs PrimHGetChar.hs \
#	PrimHGetContents.hs PrimHGetPosn.hs PrimHIsEOF.hs PrimHPutChar.hs \
#	PrimHSeek.hs PrimHSetBuffering.hs PrimHSetPosn.hs \
#	PrimOpenFile.hs \

SRCS_TRICKY	= \
	_Driver.hs CString.hs LowI.hs LowPS.hs LowSystem.hs
#	LowIO.hs


# Here are the main rules.
include ../Makefile.common


# Here are some extra rules.
OBJS_TRICKY	= $(patsubst %.hs, ${OBJDIR}/%.$O, ${SRCS_TRICKY})
CFILES_TRICKY	= $(patsubst %.hs, %.$C, ${SRCS_TRICKY})
extra:  ${OBJS_TRICKY}
cfiles: ${CFILES_TRICKY}
${OBJS_TRICKY}: ${OBJDIR}/%.$O : %.hs
	$(HC) -c  $(LIB_FLAGS) -o $@ $<
${CFILES_TRICKY}: %.$C : %.hs
	$(HC) -C  $(LIB_FLAGS) $<

cleanExtraC:
	rm -f ${CFILES_TRICKY}


# Here are the dependencies.
${OBJDIR}/PrimError.$O: PrimError.hs  ${OBJDIR}/CExitWith.$O
${OBJDIR}/PrimExitWith.$O: PrimExitWith.hs ${OBJDIR}/CExitWith.$O
${OBJDIR}/PrimGetEnv.$O: PrimGetEnv.hs  ${OBJDIR}/CString.$O  ${OBJDIR}/../PreludeIO/DIOError.$O
${OBJDIR}/PrimHGetChar.$O: PrimHGetChar.hs ${OBJDIR}/../PreludeIO/DIOError.$O  ${OBJDIR}/CHGetChar.$O
${OBJDIR}/PrimHGetContents.$O: PrimHGetContents.hs ${OBJDIR}/CHGetChar.$O
${OBJDIR}/PrimHIsEOF.$O: PrimHIsEOF.hs  ${OBJDIR}/../PreludeIO/DIOError.$O
${OBJDIR}/PrimHPutChar.$O: PrimHPutChar.hs  ${OBJDIR}/CHPutChar.$O
${OBJDIR}/PrimIntegerGe.$O: PrimIntegerGe.hs  ${OBJDIR}/PrimIntegerLt.$O
${OBJDIR}/PrimIntegerGt.$O: PrimIntegerGt.hs  ${OBJDIR}/PrimIntegerLe.$O
${OBJDIR}/PrimIntegerNe.$O: PrimIntegerNe.hs  ${OBJDIR}/PrimIntegerEq.$O
${OBJDIR}/PrimOpenFile.$O: PrimOpenFile.hs ${OBJDIR}/CString.$O
${OBJDIR}/PrimSystem.$O: PrimSystem.hs  ${OBJDIR}/CString.$O  ${OBJDIR}/../PreludeIO/DIOError.$O  #${OBJDIR}/../PreludeIO/DErrNo.$O
${OBJDIR}/PrimOpenSocket.$O: PrimOpenSocket.hs ${OBJDIR}/../IO/DSocket.$O ${OBJDIR}/CString.$O

${OBJDIR}/../PreludeIO/MsgIOError.$O:
	cd ../PreludeIO; ${MAKE} ${BUILDDIR}/${OBJ}/prelude/PreludeIO/DIOError.$O
${OBJDIR}/../PreludeIO/DIOError.$O:
	cd ../PreludeIO; ${MAKE} ${BUILDDIR}/${OBJ}/prelude/PreludeIO/DIOError.$O
#${OBJDIR}/../PreludeIO/DIO.$O:
#	cd ../PreludeIO; ${MAKE} ${BUILDDIR}/${OBJ}/prelude/PreludeIO/DIO.$O
#${OBJDIR}/../DErrNo/DErrNo.$O:
#	cd ../$(MACHINE); ${MAKE} ${BUILDDIR}/${OBJ}/prelude/DErrNo/DErrNo.$O
${OBJDIR}/../IO/DSocket.$O:
	cd ../IO; ${MAKE} ${BUILDDIR}/${OBJ}/prelude/IO/DSocket.$O



# And now for the C-files dependencies.
PrimError.$C:          CExitWith.$C
PrimExitWith.$C:       CExitWith.$C
PrimGetEnv.$C:         CString.$C  ../PreludeIO/DIOError.$C
PrimHGetChar.$C:       ../PreludeIO/DIOError.$C CHGetChar.$C
PrimHGetContents.$C:   CHGetChar.$C
PrimHIsEOF.$C:         ../PreludeIO/DIOError.$C
PrimHPutChar.$C:       CHPutChar.$C
PrimIntegerGe.$C:      PrimIntegerLt.$C
PrimIntegerGt.$C:      PrimIntegerLe.$C
PrimIntegerNe.$C:      PrimIntegerEq.$C
PrimOpenFile.$C:       CString.$C
PrimSystem.$C:         CString.$C  ../PreludeIO/DIOError.$C
PrimOpenSocket.$C:     ../IO/DSocket.$C CString.$C

../PreludeIO/MsgIOError.$C:
	cd ../PreludeIO; ${MAKE} DIOError.$C
../PreludeIO/DIOError.$C:
	cd ../PreludeIO; ${MAKE} DIOError.$C
#../PreludeIO/DIO.$C:
#	cd ../PreludeIO; ${MAKE} DIO.$C
#../$(MACHINE)/DErrNo.$C:
#	cd ../$(MACHINE);${MAKE} DErrNo.$C
../IO/DSocket.$C:
	cd ../IO;        ${MAKE} DSocket.$C

