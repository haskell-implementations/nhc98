module Prelude (
    (->),Double,Char,Integer,Float,Int
--  ,_eqDouble,_eqInteger,_eqFloat   -- Should not be visible (case stmts)
    ,_leInteger,_subInteger          -- Also should not be visible (for n+k)
    ,_hPutChar,_hGetChar
    ,_readCon0, _readConArg, _readCon, _readConInfix -- Don't know why I must be explicit
--  ,unsafePerformIO		-- needed for primitive FFI
--  ,module _Id

    ,module PreludeList
    ,module PreludeText
    ,module PreludeIO

    ,module _EnumFromThen
    ,module _EnumFromThenTo
    ,module _EnumFromTo
    ,module _EnumFromToDec
    ,module _EnumFromToInc
    ,module _EnumInRange
    ,module _EnumIndex
    ,module _EnumRange
--  ,module _EqInteger
    ,module _Filter
    ,module _Foldr
    ,module _FromEnum
    ,module _ToEnum
--  ,module _TupleIndex
--  ,module _TupleRange
--  ,module _Apply1
--  ,module _Apply2
--  ,module _Apply3
--  ,module _Apply4

    ,module AndAnd
    ,module ApplyM
    ,module AsTypeOf
    ,Bounded(..)
    ,Enum(..)
    ,Eq(..)
    ,Floating(..)
    ,Fractional(..)
    ,Functor(..)
    ,Integral(..)
--  ,Ix(..)
    ,Monad(..)
    ,Num(..)
    ,Ord(..)
    ,Real(..)
    ,RealFloat(..)
    ,RealFrac(..)
    ,Read(..)
    ,Show(..)

    --,Ratio
    ,Rational
    ,(%)

    ,module Compose
    ,module Const
    ,module Curry
    ,module D2
    ,module D3
    ,module D4
    ,module D5
    ,module D6
    ,module D7
    ,module D8
    ,module D9
    ,module D10
    ,module D11
    ,module D12
    ,module D13
    ,module D14
    ,module D15
    ,module DBool
    ,module DEither
    ,module DList
    ,module DMaybe
    ,module DOrdering
    ,module DUnit
    ,module Dollar
    ,module DollarBang
    ,module Either
    ,module Error
    ,module Even
    ,module Flip
    ,module FractionalRaise
    ,module RealToFrac
    ,module FromIntegral
    ,module Fst
    ,module Gcd
    ,module Id
    ,module Lcm
    ,module MapM
    ,module MapM_
    ,module Maybefun
    ,module Not
    ,module NumRaise
    ,module NumericEnumFrom
    ,module NumericEnumFromThen
    ,module Odd
    ,module OrOr
    ,module Otherwise
    ,module Seq
    ,module Sequence
    ,module Sequence_
    ,module Snd
    ,module Subtract
    ,module TString
    ,module Uncurry
    ,module Undefined
    ,module Until

    ) where

import qualified PreludeBuiltin
import PreludeBuiltin

   -- Trick to prevent reading them from the Prelude
import qualified TString
import TString
import qualified D2	
import D2
import qualified DBool	
import DBool
import qualified DList	
import DList
import qualified Error
import Error
import qualified Id
import Id


import PreludeList
import PreludeText
import PreludeIO

import Ratio(Rational,(%))		-- needed for literal Rationals
--import IOExtras (unsafePerformIO)	-- needed for primitive FFI

--import Ix  -- to get all Ix instances

-- Shouldn't be visible, but they are:-(
--import _Id
import _EnumFromThen
import _EnumFromThenTo
import _EnumFromTo
import _EnumFromToDec
import _EnumFromToInc
import _EnumInRange
import _EnumIndex
import _EnumRange
--import _EqInteger
import _Filter
import _Foldr
import _FromEnum
import _NplusK
import _ToEnum
--import _TupleIndex
--import _TupleRange
--import _Apply1
--import _Apply2
--import _Apply3
--import _Apply4

import AndAnd
import ApplyM
import AsTypeOf
import Bounded_2
import Bounded_3
import Bounded_Bool
import Bounded_Char
import Bounded_Int
import Bounded_Ordering
import Bounded_Unit
import CBounded
import CEnum
import CEq
import CFloating
import CFractional
import CFunctor
import CIntegral
--import CIx
import CMonad
import CNum
import COrd
import CReal
import CRealFloat
import CRealFrac
import Compose
import Const
import Curry
import D3
import D4
import D5
import D6
import D7
import D8
import D9
import D10
import D11
import D12
import D13
import D14
import D15
import DEither
import DMaybe
import DOrdering
import DUnit
import Dollar
import DollarBang
import Either
import Enum_Bool
import Enum_Char
import Enum_Double
import Enum_Float
import Enum_Int
import Enum_Integer
import Enum_Ordering
import Enum_Unit
import Eq_2
import Eq_3
import Eq_Bool
import Eq_Char
import Eq_Double
import Eq_Either
import Eq_Float
import Eq_Int
import Eq_Integer
import Eq_List
import Eq_Maybe
import Eq_Ordering
import Eq_Unit
import Even
import Flip
import Floating_Double
import Floating_Float
import FractionalRaise
import Fractional_Double
import Fractional_Float
import RealToFrac
import FromIntegral
import Fst
import Functor_List
import Functor_Maybe
import Gcd
import Integral_Int
import Integral_Integer
import Lcm
import MapM
import MapM_
import Maybefun
import Monad_List
import Monad_Maybe
import Not
import NumRaise
import Num_Double
import Num_Float
import Num_Int
import Num_Integer
import NumericEnumFrom
import NumericEnumFromThen
import Odd
import OrOr
import Ord_2
import Ord_3
import Ord_Bool
import Ord_Char
import Ord_Either
import Ord_Double
import Ord_Float
import Ord_Int
import Ord_Integer
import Ord_List
import Ord_Maybe
import Ord_Ordering
import Ord_Unit
import Otherwise
import RealFloat_Double
import RealFloat_Float
import RealFrac_Double
import RealFrac_Float
import Real_Double
import Real_Float
import Real_Int
import Real_Integer
import Seq
import Sequence
import Sequence_
import Snd
import Subtract
import Uncurry
import Undefined
import Until

