include Makefile.inc

DIR=Mk
OBJDIR=${BUILDDIR}/${OBJ}/runtime/${DIR}

SRCS_PROG = \
	mkBlockBuffering.c mkComplex.c mkCons.c mkExitFailure.c \
	mkIO.c mkIOErrorEOF.c mkIOErrorHFileSize.c mkIOErrorHFlush.c \
	mkIOErrorHGetBuffering.c mkIOErrorHGetPosn.c mkIOErrorHIsEOF.c \
	mkIOErrorHSeek.c mkIOErrorHSetBuffering.c mkIOErrorHSetPosn.c \
	mkIOErrorOpen.c mkIOErrorSystem.c mkIOErrorUser.c \
	mkJust.c mkLeft.c mkRight.c \
	mkMkArray.c mkRatio.c \
	mkTuple2.c mkTuple3.c mkTuple4.c mkTuple5.c \
	mkTuple6.c mkTuple7.c mkTuple8.c mkTuple9.c \
	mkTuple10.c mkTuple11.c mkTuple12.c mkTuple13.c \
	mkTuple14.c mkTuple15.c

SRCS_HAND = \
	mkHandlePosn.c   \
	mkSmallIntegerU.c mkInt.c mkFloat.c mkDouble.c \
	mkPackedString.c \
	mkForeign.c       mkStablePtr.c \
	mkCInt.c

OBJS_PROG = $(patsubst %.c,${OBJDIR}/%.o,${SRCS_PROG})
OBJS_HAND = $(patsubst %.c,${OBJDIR}/%.o,${SRCS_HAND})

OBJS = ${OBJS_PROG} ${OBJS_HAND}

DATA2C = ../../data2c/data2c

CFLAGS= -I../Kernel -I${INCDIR} ${DCFG} ${OPT} ${ENDIAN} ${ARCH} \
	$(shell echo ${COPTS})

${OBJS}: ${OBJDIR}/%.o: %.c
	${CC} -c ${CFLAGS} -o $@ $<

LINKS = mk.h mkByHand.h mkByProg.h
ULINKS = mutlib.h

links:
	@cd ${INCDIR}; \
	for f in ${LINKS}; do \
        ln -s ../src/runtime/${DIR}/$$f >/dev/null 2>&1 || \
            echo "Link ${INCDIR}/$$f already exists."; \
    done
	@for f in ${ULINKS}; do \
	    ln -s ${INCDIR}/$$f $$f >/dev/null 2>&1 || echo "Link $$f already exists."; \
    done
nolinks:
	@for f in ${LINKS}; do \
        rm -f ${INCDIR}/$$f; \
    done
	@rm -f ${ULINKS}

all: links ${OBJS}

${OBJDIR}:
	mkdir -p ${OBJDIR}

objdir: ${OBJDIR}

rebuild:
	$(DATA2C) ../../prelude/Prelude/D2.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D3.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D4.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D5.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D6.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D7.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D8.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D9.hs	>> log
	$(DATA2C) ../../prelude/Prelude/D10.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DBool.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DEither.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DList.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DMaybe.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DOrdering.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DRatio.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DUnit.hs	>> log
	$(DATA2C) ../../prelude/Prelude/DVoid.hs	>> log
	$(DATA2C) ../../prelude/PreludeIO/DIO.hs	>> log
	$(DATA2C) ../../prelude/PreludeIO/DIOError.hs	>> log
	$(DATA2C) ../../prelude/Array/DArray.hs   	>> log
	$(DATA2C) ../../prelude/Complex/DComplex.hs	>> log
	$(DATA2C) ../../prelude/IO/BufferMode.hs	>> log
	$(DATA2C) ../../prelude/IO/IOMode.hs		>> log
	$(DATA2C) ../../prelude/IO/SeekMode.hs		>> log
	$(DATA2C) ../../prelude/IO/DSocket.hs		>> log
	$(DATA2C) ../../prelude/System/DExitCode.hs	>> log

clean:
	rm -f ${OBJDIR}/*.o
