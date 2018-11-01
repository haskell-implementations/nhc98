-----------------------------------------------------------------------------
-- |
-- Module      :  PreProcessor
-- Copyright   :  Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- This module describes various preprocessors for the Haskell language.
-- If you write a new preprocessor, please add details here.
-----------------------------------------------------------------------------

module PreProcessor where

import Argv
import Compiler
import Config
import Unlit (unlit,plain)

data PreProcessor = PreProcessor
	{ ppExecutableName   :: String
        , ppDefaultOptions   :: DecodedArgs -> [String]
	, ppOutputFileOption :: String -> String
	, ppSuitable         :: HC -> Bool
	}

-- | * input file suffix 
--
-- * unliterate the file?
--
-- * PP info

type PPSuffixHandler
    =  (String
       , (String->String->String)
       ,  PreProcessor)

knownSuffixes :: [ PPSuffixHandler ]
knownSuffixes =
  [ ("gc",     plain, ppGreenCard)
  , ("chs",    plain, ppC2hs)
  , ("hsc",    plain, ppHsc2hs)
  , ("y",      plain, ppHappy)
  , ("ly",     unlit, ppHappy)
  , ("x",      plain, ppAlex)
  , ("lx",     unlit, ppAlex)
  , ("hs.cpp", plain, ppCpp)
  , ("ghs",    plain, ppGH)
  , ("gc",     plain, ppNone)	-- note, for nhc98 only
  , ("hsc",    plain, ppNone)	-- note, for nhc98 only
  , ("hs",     plain, ppNone)
  , ("lhs",    unlit, ppNone)
  ] 

ppCpp, ppGreenCard, ppHsc2hs, ppC2hs, ppHappy, ppNone :: PreProcessor
ppCpp = PreProcessor
	{ ppExecutableName = "gcc -E -traditional"
	, ppDefaultOptions = \d-> "-x c" : map ("-D"++) (defs d++zdefs d)
	                                ++ map ("-I"++) (pathSrc d)
	, ppOutputFileOption = \f-> "> "++f
	, ppSuitable = \hc-> True
	}
ppGreenCard = PreProcessor
	{ ppExecutableName = "green-card"
	, ppDefaultOptions = \d-> ["-tffi"]	-- + includePath of compiler?
	, ppOutputFileOption = \f-> "-o "++f
	, ppSuitable = \hc-> hc == Ghc
	}
ppHsc2hs = PreProcessor
	{ ppExecutableName = "hsc2hs"
	, ppDefaultOptions = \d-> map ("-I"++) (pathSrc d)
	, ppOutputFileOption = \_-> ""
	, ppSuitable = \hc-> hc == Ghc
	}
ppC2hs = PreProcessor
	{ ppExecutableName = "c2hs"
	, ppDefaultOptions = \_-> []
	, ppOutputFileOption = \_-> ""
	, ppSuitable = \hc-> hc `elem` [Ghc,Nhc98]
	}
ppHappy = PreProcessor
	{ ppExecutableName = "happy"
	, ppDefaultOptions = \_-> []
	, ppOutputFileOption = \_-> ""
	, ppSuitable = \hc-> True
	}
ppAlex = PreProcessor
	{ ppExecutableName = "alex"
	, ppDefaultOptions = \_-> []
	, ppOutputFileOption = \f-> "-o "++f
	, ppSuitable = \hc-> True
	}
ppGH = PreProcessor	-- see www.Generic-Haskell.org
	{ ppExecutableName = "gh"
	, ppDefaultOptions = \_-> []
	, ppOutputFileOption = \_-> ""
	, ppSuitable = \hc-> hc == Ghc
	}
ppNone = PreProcessor
	{ ppExecutableName = ""
	, ppDefaultOptions = \_-> []
	, ppOutputFileOption = \_-> ""
	, ppSuitable = \hc-> True
	}

