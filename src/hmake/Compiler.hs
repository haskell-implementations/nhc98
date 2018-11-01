-----------------------------------------------------------------------------
-- |
-- Module      :  Compiler
-- Copyright   :  Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- This module describes features of the various Haskell compilers.
-- Abstracts a handful of similar compiler flags.  If you write a new
-- Haskell compiler, please add details here!
-----------------------------------------------------------------------------

module Compiler where

import Char (toUpper)

data HC = Nhc98 | Ghc | Hbc | Unknown String
	deriving Eq

instance Show HC where
    showsPrec p Nhc98        = showString "nhc98"
    showsPrec p Ghc          = showString "ghc"
    showsPrec p Hbc          = showString "hbc"
    showsPrec p (Unknown hc) = showString "unknown" . showChar ' '
                               . showString hc

instance Read HC where
    readsPrec p = readParen False
                    (\r-> [(Nhc98, s)      | ("nhc98",s) <- lex r] ++
                          [(Ghc, s)        | ("ghc",s) <- lex r] ++
                          [(Hbc, s)        | ("hbc",s) <- lex r] ++
                          [(Unknown x, s)  | ("unknown",s') <- lex r
                                           , (x,s) <- lex s'])


-- | all-compiler Haskell'98 cpp symbols
haskell98SymsForCpp = ["__HASKELL98__","__HASKELL__=98"]

hasCoolOptions :: HC -> Bool
dirOption, hiSuffixOption, oSuffixOption :: HC -> String

-- | can we use nice compiler options for redirecting outputs?
hasCoolOptions Nhc98 = True
hasCoolOptions Ghc   = True
hasCoolOptions _     = False

-- | what is the compiler's option to place object file in a separate directory?
dirOption Nhc98 = "-d "
dirOption Ghc   = "-odir "

-- | what is the compiler's option for changing the .hi suffix?
hiSuffixOption Nhc98 = "-hi-suffix="
hiSuffixOption Ghc   = "-hisuf "

-- | what is the compiler's option for changing the .o suffix?
oSuffixOption Nhc98 = "-o-suffix="
oSuffixOption Ghc   = "-osuf "
