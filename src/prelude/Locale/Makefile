include Makefile.inc

THISLIB	= Locale
SEARCH	=

SRCS	= DTimeLocale.hs       DefaultTimeLocale.hs


# Here are the main rules.
include ../Makefile.common


# Here are the dependencies.

${OBJDIR}/DTimeLocale.$O: DTimeLocale.hs
${OBJDIR}/DefaultTimeLocale.$O: DefaultTimeLocale.hs ${OBJDIR}/DTimeLocale.$O

DefaultTimeLocale.$C: DTimeLocale.$C


