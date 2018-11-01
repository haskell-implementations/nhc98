include Makefile.inc

THISLIB	= Ix
SEARCH	=
EXTRA_H_FLAGS = #-prelude

SRCS	= \
	CIx.hs \
	Ix_Bool.hs Ix_Char.hs Ix_Int.hs Ix_Integer.hs Ix_Ordering.hs \
	Ix_0.hs Ix_2.hs Ix_3.hs  Ix_4.hs  Ix_5.hs  Ix_6.hs  Ix_7.hs  Ix_8.hs \
	Ix_9.hs Ix_10.hs Ix_11.hs Ix_12.hs Ix_13.hs Ix_14.hs Ix_15.hs \
	_TupleRange.hs _TupleIndex.hs

OBSOLETE = RangeSize.hs



# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.
$(OBJDIR)/_TupleRange.$O:	$(OBJDIR)/CIx.$O
$(OBJDIR)/_TupleIndex.$O:	$(OBJDIR)/CIx.$O


# C-files dependencies.
_TupleRange.$C:	CIx.$C
_TupleIndex.$C:	CIx.$C

