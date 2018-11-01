include Makefile.inc

EXCLUDE_THISLIB_HS = yes
THISLIB = GreenCard
SEARCH	= -P$(LOW) -P../PreludeIO

SRCS	= 


# Here are the main rules.
include ../Makefile.common


# Here are some extra rules.
extra: ${OBJDIR}/${THISLIB}.$O
extracfiles: ${THISLIB}.$C
cleanExtraC:
	rm -f ${THISLIB}.$C

${OBJDIR}/${THISLIB}.$O: ${THISLIB}.gc
	$(HC) -c $(LIB_FLAGS) $(EXTRA_H_FLAGS) -o $@ $<
${THISLIB}.$C : ${THISLIB}.gc
	$(HC) -C $(LIB_FLAGS) $(EXTRA_H_FLAGS) $<


# Here are the dependencies.
