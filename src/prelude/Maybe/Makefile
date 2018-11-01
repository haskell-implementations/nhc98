include Makefile.inc

THISLIB	= Maybe
SEARCH	=

SRCS	= \
	FromMaybe.hs    MapMaybe.hs     IsNothing.hs \
	CatMaybes.hs    IsJust.hs       MaybeToList.hs  \
	FromJust.hs     ListToMaybe.hs



# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.
${OBJDIR}/MapMaybe.$O: MapMaybe.hs ${OBJDIR}/CatMaybes.$O

# C-files dependencies.
MapMaybe.$C: CatMaybes.$C

