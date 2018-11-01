include Makefile.inc

THISLIB	= Ratio
SEARCH	=

SRCS	= \
        DRatio.hs            TRational.hs \
        Eq_Ratio.hs          Ord_Ratio.hs         Show_Ratio.hs \
        Num_Ratio.hs         Read_Ratio.hs        Real_Ratio.hs \
        Fractional_Ratio.hs  RealFrac_Ratio.hs    Enum_Ratio.hs \
	ApproxRational.hs    RatioCon.hs \
	Denominator.hs       Numerator.hs \
        Prec.hs              Reduce.hs


# Here are the main rules.
include ../Makefile.common


# Here are some extra rules.
../Prelude/%.hi : ../Prelude/%.hs
	cd ../Prelude; ${MAKE} $@


# Here are the dependencies.

${OBJDIR}/Fractional_Ratio.$O : Fractional_Ratio.hs ${OBJDIR}/RatioCon.$O
${OBJDIR}/Num_Ratio.$O : Num_Ratio.hs ${OBJDIR}/Reduce.$O
${OBJDIR}/RatioCon.$O : RatioCon.hs ${OBJDIR}/Reduce.$O
${OBJDIR}/Show_Ratio.$O : Show_Ratio.hs ${OBJDIR}/Prec.$O
${OBJDIR}/Read_Ratio.$O : Read_Ratio.hs ${OBJDIR}/Prec.$O ${OBJDIR}/RatioCon.$O
${OBJDIR}/Real_Ratio.$O : Real_Ratio.hs
${OBJDIR}/Enum_Ratio.$O : Enum_Ratio.hs


Fractional_Ratio.$C : Fractional_Ratio.hs RatioCon.$C
Num_Ratio.$C : Num_Ratio.hs Reduce.$C
RatioCon.$C : RatioCon.hs Reduce.$C
Show_Ratio.$C : Show_Ratio.hs Prec.$C
Read_Ratio.$C : Read_Ratio.hs Prec.$C RatioCon.$C

