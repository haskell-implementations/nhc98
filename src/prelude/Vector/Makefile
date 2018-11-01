include Makefile.inc

THISLIB	= Vector
SEARCH	=
EXTRA_H_FLAGS	= 
EXTRA_C_FLAGS	=

SRCS	= _E.hs

# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/_E.$O: _E.hs
${OBJDIR}/Vector.$O: Vector.hs ${OBJDIR}/_E.$O


# C-files dependencies.
LowVector.$C:  _E.$C

