module Prelude (
    (->),Double,Char,Integer,Float,Int
    ,_eqDouble,_eqInteger,_eqFloat   -- Should not be visible
    ,_hPutChar,_hGetChar
    ,_readCon0, _readConArg, _readCon, _readConInfix -- Don't know why I must be explicit

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
    ,module _EqInteger
    ,module _Filter
    ,module _Foldr
    ,module _FromEnum
    ,module _ToEnum
    ,module _TupleIndex
    ,module _TupleRange
    ,module _Apply1
    ,module _Apply2
    ,module _Apply3
    ,module _Apply4

    ,module Accumulate
    ,module AndAnd
    ,module ApplyM
    ,module AsTypeOf
    ,module Atan2
    ,Bounded(..)
    ,Enum(..)
    ,Eq(..)
    ,Eval(..)
    ,Floating(..)
    ,Fractional(..)
    ,Functor(..)
    ,Integral(..)
    ,Ix(..)
    ,Monad(..)
    ,MonadPlus(..)
    ,MonadZero(..)
    ,Num(..)
    ,Ord(..)
    ,Real(..)
    ,RealFloat(..)
    ,RealFrac(..)
    ,Read(..)
    ,Show(..)
    ,module Compose
    ,module Concat
    ,module Const
    ,module Curry
    ,module D10
    ,module D11
    ,module D12
    ,module D2
    ,module D3
    ,module D4
    ,module D5
    ,module D6
    ,module D7
    ,module D8
    ,module D9
    ,module DBool
    ,module DEither
    ,module DList
    ,module DMaybe
    ,module DOrdering
    ,Ratio				-- module DRatio
    ,module DUnit
    ,module DVoid
    ,module Dollar
    ,module Done
    ,module Either
    ,module Error
    ,module Even
    ,module Filter
    ,module Flip
    ,module FractionalRaise
    ,module FromIntegral
    ,module FromRealFrac
    ,module Fst
    ,module Gcd
    ,module Guard
    ,module Id
    ,module Lcm
    ,module MapM
    ,module MapM_
    ,module Maybe
    ,module Not
    ,module NumRaise
    ,module NumericEnumFrom
    ,module NumericEnumFromThen
    ,module Odd
    ,module OrOr
    ,module Otherwise
    ,module Pred
    ,module Sequence
    ,module Snd
    ,module Subtract
    ,module Succ
    ,module TRational
    ,module TString
    ,module Uncurry
    ,module Undefined
    ,module Unless
    ,module Until
    ,module When

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

import Ix  -- to get all Ix instances

-- Shouldn't be visible, but they are:-(
import _EnumFromThen
import _EnumFromThenTo
import _EnumFromTo
import _EnumFromToDec
import _EnumFromToInc
import _EnumInRange
import _EnumIndex
import _EnumRange
import _EqInteger
import _Filter
import _Foldr
import _FromEnum
import _ToEnum
import _TupleIndex
import _TupleRange
import _Apply1
import _Apply2
import _Apply3
import _Apply4

import Accumulate
import AndAnd
import ApplyM
import AsTypeOf
import Atan2
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
import CEval
import CFloating
import CFractional
import CFunctor
import CIntegral
import CIx
import CMonad
import CMonadPlus
import CMonadZero
import CNum
import COrd
import CReal
import CRealFloat
import CRealFrac
import Compose
import Concat
import Const
import Curry
import D10
import D11
import D12
import D3
import D4
import D5
import D6
import D7
import D8
import D9
import DEither
import DMaybe
import DOrdering
import DRatio
import DUnit
import DVoid
import Dollar
import Done
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
import Eq_4
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
import Eval_Fun
import Eval_Char
import Eval_Double
import Eval_Float
import Eval_Int
import Eval_Integer
import Even
import Filter
import Flip
import Floating_Double
import Floating_Float
import FractionalRaise
import Fractional_Double
import Fractional_Float
import FromIntegral
import FromRealFrac
import Fst
import Functor_List
import Functor_Maybe
import Gcd
import Guard
import Integral_Int
import Integral_Integer
import Lcm
import MapM
import MapM_
import Maybe
import MonadPlus_List
import MonadPlus_Maybe
import MonadZero_List
import MonadZero_Maybe
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
import Ord_4
import Ord_Bool
import Ord_Char
import Ord_Double
import Ord_Either
import Ord_Float
import Ord_Int
import Ord_Integer
import Ord_List
import Ord_Maybe
import Ord_Ordering
import Ord_Unit
import Otherwise
import Pred
import RealFloat_Double
import RealFloat_Float
import RealFrac_Double
import RealFrac_Float
import Real_Double
import Real_Float
import Real_Int
import Real_Integer
import Sequence
import Snd
import Subtract
import Succ
import TRational
import Uncurry
import Undefined
import Unless
import Until
import When


