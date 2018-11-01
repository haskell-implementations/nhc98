include Makefile.inc

VPATH = $(INCDIR)

DIR=Builtin
OBJDIR=${BUILDDIR}/${OBJ}/runtime/${DIR}

SRCS = \
	primDecodeDouble.c       primEncodeDouble.c	\
	primFloatFromInteger.c   primIntegerFromInt.c      \
	primDecodeFloat.c        primEncodeFloat.c	\
	primDoubleFromInteger.c              primIntFromInteger.c \
	primPackString.c  lengthPS.c unpackPS.c indexPS.c primComparePS.c \
	cOpen.c cHClose.c cHIsEOF.c cHFileSize.c \
	cHFlush.c cHGetPosn.c cHSetPosn.c cHSeek.c \
	cHGetBuffering.c cHSetBuffering.c \
	cHGetFileName.c cHPutGetBuf.c \
	primEqHandlePosn.c \
	cGetProgName.c cGetEnv.c cGetArgs.c cProfile.c cExitWith.c \
	cOpenSocket.c \
	primVector.c primIndex.c \
        cBits.c  cFFI.c cIOExtras.c cHPutStr.c \
	primsFloat.c primsDouble.c primsInt.c primsWord.c \
	primIntegerFromInt64.c  primIntegerToInt64.c \
	primIntegerFromWord64.c primIntegerToWord64.c


LINKS = haskell2c.h twopass.h HsFFI.h

links:
	@cd ${INCDIR}; \
	for f in ${LINKS}; do \
        ln -s ../src/runtime/${DIR}/$$f >/dev/null 2>&1 || \
            echo "Link ${INCDIR}/$$f already exists."; \
    done
nolinks:
	@for f in ${LINKS}; do \
        rm -f ${INCDIR}/$$f; \
    done

OBJS = $(patsubst %.c,${OBJDIR}/%.o,${SRCS})

WARNING = $(shell if [ $(GCCVERSION) \> 4.2 ]; then echo -Wno-pointer-to-int-cast; fi)

CFLAGS= -I../Kernel -I${INCDIR} ${DCFG} ${BUGFIX} ${OPT} ${ENDIAN} ${ARCH} \
	$(shell echo ${COPTS}) $(WARNING)

${OBJS}: ${OBJDIR}/%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $<

all: links ${OBJS}

${OBJDIR}:
	mkdir -p ${OBJDIR}

objdir: ${OBJDIR}

clean:
	rm -f ${OBJDIR}/*.o

primIntegerFromInt64.o: HsFFI.h
primIntegerToWord64.o: HsFFI.h
primIntegerFromWord64.o: HsFFI.h
primDecodeDouble.o: primDecodeDouble.c haskell2c.h
primDecodeFloat.o: primDecodeFloat.c haskell2c.h
primDoubleFromInteger.o: primDoubleFromInteger.c haskell2c.h
primEncodeDouble.o: primEncodeDouble.c  haskell2c.h
primEncodeFloat.o:primEncodeFloat.c  haskell2c.h
primFloatFromInteger.o: primFloatFromInteger.c haskell2c.h
primGetChar.o: primGetChar.c haskell2c.h
primIntFromInteger.o: primIntFromInteger.c haskell2c.h
primIntegerFromInt.o: primIntegerFromInt.c haskell2c.h
primPutChar.o: primPutChar.c haskell2c.h
primSeq.o: primSeq.c haskell2c.h
cExitWith.o: cExitWith.c haskell2c.h
cGetEnv.o: cGetEnv.c haskell2c.h
cHFileSize.o: cHFileSize.c haskell2c.h
cHGetBuffering.o: cHGetBuffering.c haskell2c.h
cHIsEOF.o: cHIsEOF.c haskell2c.h
cHSetBuffering.o: cHSetBuffering.c haskell2c.h
cOpen.o: cOpen.c haskell2c.h
cProgName.o: cProgName.c haskell2c.h
cGetArgs.o: cGetArgs.c haskell2c.h
cHClose.o: cHClose.c haskell2c.h
cHFlush.o: cHFlush.c haskell2c.h
cHGetPosn.o: cHGetPosn.c haskell2c.h
cHSeek.o: cHSeek.c haskell2c.h
cHSetPosn.o: cHSetPosn.c haskell2c.h
cProfile.o: cProfile.c haskell2c.h
cOpenSocket.o: cOpenSocket.c haskell2c.h
cBits.o: cBits.c haskell2c.h
cFFI.o: cFFI.c HsFFI.h
primsFloat.o: primsFloat.c
primsDouble.o: primsDouble.c
primsInt.o: primsInt.c HsFFI.h
primsWord.o: primsWord.c HsFFI.h
