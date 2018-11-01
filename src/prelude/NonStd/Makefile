include Makefile.inc

EXCLUDE_THISLIB_HS = yes
THISLIB	= NonStd
SEARCH	= -P$(LOW)

SRCS	=
LIBSRCS = \
	NonStdUnsafeCoerce.hs \
	NonStdProfile.hs \
	NonStdEval.hs  \
	NonStdTrace.hs \
	Warning.hs \
	NonStdGetPID.gc


# Here are the main rules.
include ../Makefile.common


# Here are some extra rules.


HOBJS	= $(patsubst %.hs, ${OBJDIR}/%.$O, $(filter %.hs, ${LIBSRCS}))
GOBJS	= $(patsubst %.gc, ${OBJDIR}/%.$O, $(filter %.gc, ${LIBSRCS}))
HCFILES = $(patsubst %.hs, %.$C, $(filter %.hs, ${LIBSRCS}))
GCFILES = $(patsubst %.gc, %.$C, $(filter %.gc, ${LIBSRCS}))

extra:	${HOBJS} ${GOBJS}
extracfiles: $(HCFILES) $(GCFILES)

${HOBJS}: ${OBJDIR}/%.$O : %.hs
	$(HC) -c $(LIB_FLAGS) -o $@ $<
${GOBJS}: ${OBJDIR}/%.$O : %.gc
	$(HC) -c $(LIB_FLAGS) -o $@ $<
${HCFILES}: %.$C : %.hs
	$(HC) -C $(LIB_FLAGS) $<
${GCFILES}: %.$C : %.gc
	$(HC) -C $(LIB_FLAGS) $<

cleanExtraC:
	rm -f ${HCFILES} ${GCFILES}



# Here are the dependencies.
