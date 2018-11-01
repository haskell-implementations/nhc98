include Makefile.inc

THISLIB = Prelude
SEARCH	= -P$(LOW) -P../Ratio -P../PreludeList -P../PreludeText -P../PreludeIO 
ifeq "$(BUILDCOMP)" "hbc"
EXTRA_H_FLAGS	= --prelude +RTS -A2M -H32M -RTS
else
EXTRA_H_FLAGS	= --prelude
endif
EXTRA_C_FLAGS	=

COMMON_SRCS = \
	AndAnd.hs       ApplyM.hs       AsTypeOf.hs         Seq.hs \
	CBounded.hs     Bounded_2.hs    Bounded_3.hs        Bounded_Bool.hs \
	Bounded_Char.hs Bounded_Int.hs  Bounded_Ordering.hs Bounded_Unit.hs \
	CEnum.hs        CEq.hs          CFloating.hs        CFractional.hs \
        CFunctor.hs     CIntegral.hs                        CMonad.hs \
        CNum.hs         COrd.hs         CReal.hs            CRealFloat.hs \
        CRealFrac.hs    Compose.hs      Const.hs            Curry.hs \
	D2.hs 		D3.hs           D4.hs               D5.hs \
	D6.hs 		D7.hs           D8.hs               D9.hs \
	D10.hs		D11.hs		D12.hs		    D13.hs \
	D14.hs		D15.hs				    DBool.hs \
        DEither.hs      DList.hs        DMaybe.hs           DOrdering.hs \
        DUnit.hs        Dollar.hs       DollarBang.hs       Either.hs \
        Enum_Bool.hs    Enum_Char.hs    Enum_Double.hs      Enum_Float.hs \
        Enum_Int.hs     Enum_Integer.hs Enum_Ordering.hs    Enum_Unit.hs \
        Eq_2.hs         Eq_3.hs       			    Eq_Bool.hs \
        Eq_Char.hs      Eq_Double.hs    Eq_Either.hs        Eq_Float.hs \
        Eq_Int.hs       Eq_Integer.hs   Eq_List.hs          Eq_Maybe.hs \
        Eq_Ordering.hs  Eq_Unit.hs      Error.hs            Even.hs \
        Flip.hs         Floating_Double.hs                  Floating_Float.hs \
        FractionalRaise.hs              Fractional_Double.hs \
        Fractional_Float.hs             FromIntegral.hs     RealToFrac.hs \
        Fst.hs          Functor_List.hs Functor_Maybe.hs    Gcd.hs \
        Id.hs           Integral_Int.hs Integral_Integer.hs Lcm.hs \
        Sequence.hs     Sequence_.hs                                \
        MapM.hs         MapM_.hs        Maybefun.hs         Monad_List.hs \
        Monad_Maybe.hs  Not.hs          NumRaise.hs         Num_Double.hs \
        Num_Float.hs    Num_Int.hs      Num_Integer.hs      NumericEnumFrom.hs \
        NumericEnumFromThen.hs          Odd.hs              OrOr.hs \
        Ord_2.hs        Ord_3.hs        		    Ord_Bool.hs \
        Ord_Char.hs     Ord_Double.hs   Ord_Either.hs       Ord_Float.hs \
        Ord_Int.hs      Ord_Integer.hs  Ord_List.hs         Ord_Maybe.hs \
        Ord_Ordering.hs Ord_Unit.hs     Otherwise.hs \
        RealFloat_Double.hs             RealFloat_Float.hs \
        RealFrac_Double.hs              RealFrac_Float.hs \
	Real_Double.hs  Real_Float.hs   Real_Int.hs         Real_Integer.hs \
        Snd.hs          Subtract.hs \
        TString.hs      Uncurry.hs      Undefined.hs        Until.hs \
        _Filter.hs \
        _Foldr.hs       _FromEnum.hs    _ToEnum.hs          _NplusK.hs \
	_EnumFromThen.hs _EnumFromThenTo.hs \
	_EnumFromTo.hs _EnumFromToDec.hs _EnumFromToInc.hs _EnumInRange.hs \
	_EnumIndex.hs _EnumRange.hs


# The following are used for the normal Prelude
SRCS = ${COMMON_SRCS} \
	_Zap_Arg.hs     _Zap_Stack.hs

OLD =	_Apply1.hs      _Apply2.hs      _Apply3.hs          _Apply4.hs \
        _EqInteger.hs \
	_Id.hs


NOTDONE	= _TupleIndex.hs _TupleRange.hs


# Here are the main rules.
include ../Makefile.common



# Here are some extra rules.


# Here are the dependencies.

${OBJDIR}/CEnum.$O: CEnum.hs ${OBJDIR}/_EnumFromTo.$O  ${OBJDIR}/_EnumFromThenTo.$O ${OBJDIR}/Subtract.$O
${OBJDIR}/Enum_Bool.$O: Enum_Bool.hs ${OBJDIR}/_EnumFromTo.$O  ${OBJDIR}/_EnumFromThen.$O
${OBJDIR}/Enum_Char.$O: Enum_Char.hs ${OBJDIR}/_EnumFromTo.$O ${OBJDIR}/_EnumFromThen.$O
${OBJDIR}/Enum_Ordering.$O: Enum_Ordering.hs ${OBJDIR}/_EnumFromTo.$O ${OBJDIR}/_EnumFromThen.$O
${OBJDIR}/_EnumFromThen.$O: _EnumFromThen.hs ${OBJDIR}/_EnumFromToInc.$O ${OBJDIR}/_EnumFromToDec.$O
${OBJDIR}/_EnumFromThenTo.$O: _EnumFromThenTo.hs ${OBJDIR}/_EnumFromToInc.$O ${OBJDIR}/_EnumFromToDec.$O
${OBJDIR}/_EnumIndex.$O: _EnumIndex.hs ${OBJDIR}/_EnumInRange.$O
${OBJDIR}/_EnumRange.$O: _EnumRange.hs ${OBJDIR}/_EnumFromTo.$O
${OBJDIR}/_EnumFromTo.$O: _EnumFromTo.hs ${OBJDIR}/_FromEnum.$O ${OBJDIR}/_ToEnum.$O

# ${OBJDIR}/Enum_Integer.$O: Enum_Integer.hs ${OBJDIR}/NumericEnumFrom.$O ${OBJDIR}/NumericEnumFromThen.$O 

# And for C-files dependencies:

CEnum.$C:           _EnumFromTo.$C    _EnumFromThenTo.$C  Subtract.$C
Enum_Bool.$C:       _EnumFromTo.$C    _EnumFromThen.$C
Enum_Char.$C:       _EnumFromTo.$C    _EnumFromThen.$C
Enum_Ordering.$C:   _EnumFromTo.$C    _EnumFromThen.$C
_EnumFromThen.$C:   _EnumFromToInc.$C _EnumFromToDec.$C
_EnumFromThenTo.$C: _EnumFromToInc.$C _EnumFromToDec.$C
_EnumIndex.$C:      _EnumInRange.$C
_EnumRange.$C:      _EnumFromTo.$C
_EnumFromTo.$C:     _FromEnum.$C      _ToEnum.$C



