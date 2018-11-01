include Makefile.inc

EXCLUDE_THISLIB_HS = yes
THISLIB	= Observe
ifeq "${BUILDCOMP}" "nhc"
EXTRA_H_FLAGS = +RTS -H32M -RTS
endif

SRCS	=
LIBSRCS = Observe.lhs



# Here are the main rules.
include ../Makefile.common


# Here are some extra rules.
LHCFILES = $(patsubst %.lhs, %.$C, $(filter %.lhs, ${LIBSRCS}))
LHOBJS	 = $(patsubst %.lhs, ${OBJDIR}/%.$O, $(filter %.lhs, ${LIBSRCS}))

extra:	${LHOBJS}
extracfiles: $(LHCFILES)

${LHOBJS}: ${OBJDIR}/%.$O : %.lhs
	$(HC) -c $(LIB_FLAGS) $(EXTRA_H_FLAGS) -o $@ $<
${LHCFILES}: %.$C : %.lhs
	$(HC) -C $(LIB_FLAGS) $<

cleanExtraC:
	rm -f ${LHCFILES}



# Here are the dependencies.
