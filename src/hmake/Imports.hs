-----------------------------------------------------------------------------
-- |
-- Module      :  Imports
-- Copyright   :  Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Get the imports for a single Haskell module after performing a cpp.
-----------------------------------------------------------------------------

module Imports
  ( getImports
  ) where

import Char
import ListUtil (takeUntil)
import System.IO.Unsafe                     (unsafePerformIO)
import Language.Preprocessor.Cpphs.CppIfdef (cppIfdef)
import Language.Preprocessor.Cpphs.Options  (BoolOptions(..)
                                            ,defaultBoolOptions)

#if !defined(__HASKELL98__)
#define isAlphaNum isAlphanum
#endif

-- | Get the imports for this Haskell module.
getImports :: FilePath -- ^ The path to the module
           -> [String] -- ^ Definitions to build a symbol table (for cpp)
           -> [String] -- ^ Search-path for #include'd files
           -> String   -- ^ The input file to be parsed for imports
           -> [String] -- ^ A list of imported modules
getImports fp defines includes = leximports fp
                                 . unlines . map snd
                                 . unsafePerformIO
                                 . cppIfdef fp defs includes
                                            defaultBoolOptions { macros=False
                                                            , locations=False
                                                             , warnings=False }
  where
    defs = map (\defn-> let (s,d) = break (=='=') defn in
                        (s, if null d then "1" else tail d)) defines


-- | /leximports/ takes a cpp-ed input and returns the list of imports
leximports :: FilePath -> String -> [String]
leximports fp =
  let
    nestcomment n ('{':'-':cs) | n>=0 = nestcomment (n+1) cs
    nestcomment n ('-':'}':cs) | n>0  = nestcomment (n-1) cs
    nestcomment n (c:cs)       | n>0  = nestcomment n cs
    
    nestcomment 0 ('-':'}':cs)        =
        error ("In file "++fp++"\n"
               ++"    found close comment -} but no matching open {-")
    nestcomment 0 ('-':'-':cs)        =
        if null munch
          || isSpace nextchr
          || nextchr `elem` ",()[]{};\"'`"
          || isAlphaNum nextchr
        then nestcomment 0 (dropWhile (/='\n') munch)
        else '-':'-': nestcomment 0 cs
      where munch = dropWhile (=='-') cs
            nextchr = head munch
    nestcomment 0 ('\'':'"':'\'':cs)  = '\'':'"':'\'': nestcomment 0 cs
    nestcomment 0 ('\\':'"':cs)       = '\\':'"': nestcomment 0 cs
    nestcomment 0 ('"':cs)            = '"': endstring cs
    nestcomment 0 ('{':cs)            = '{':'\n': nestcomment 0 cs	-- HACK
    nestcomment 0 (';':cs)            = '\n': nestcomment 0 cs	-- HACK
    nestcomment 0 (c:cs)              = c: nestcomment 0 cs
    nestcomment 0 []                  = []
    nestcomment n []                  =
        error ("In file "++fp++"\n    found "++show n
               ++" open comments {- but no matching close -}")

    endstring ('\\':'\\':cs) = '\\':'\\': endstring cs
    endstring ('\\':'"':cs)  = '\\':'"': endstring cs
    endstring ('\\':w:cs)    | isSpace w = stringgap cs
    endstring ('"':cs) = '"': nestcomment 0 cs
    endstring (c:cs)   = c  : endstring cs
    endstring []       = []
    stringgap ('\\':cs) = endstring cs
    stringgap (c:cs)    = stringgap cs
    stringgap []        = []	-- source file is corrupt

    getmodnames (x:xs)
      | null x || all isSpace x  = getmodnames xs
      | otherwise =
        case concatMap words (x:xs) of
          ("import":ws)  -> modname ws: getmodnames xs
				-- allow for import spanning several lines.
          ("data":ws)    -> []	-- truncate search at first non-import keyword
          ("type":ws)    -> []
          ("class":ws)   -> []
          ("infix":ws)   -> []
          ("infixl":ws)  -> []
          ("infixr":ws)  -> []
          ("newtype":ws) -> []
          ("default":ws) -> []
          ("instance":ws)-> []
          _              -> getmodnames xs	-- non-keyword: continue search
    getmodnames [] = []

    modname ws =
      let one = head ws
          two = head (tail ws)
      in
      if one == "qualified" then 
           takeUntil "(-{;" two
      else takeUntil "(-{;" one

  in (getmodnames . lines . nestcomment 0)

----
