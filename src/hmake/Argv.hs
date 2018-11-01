-----------------------------------------------------------------------------
-- |
-- Module      :  Argv
-- Copyright   :  Thomas Hallgren and Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Command-line parsing for hmake.
-----------------------------------------------------------------------------

module Argv(Goal(..),DecodedArgs(..),decode,stripGoal) where

import ListUtil (lconcatMap)
import Compiler
import Config
import PackageConfig (packageDirs)
import Platform (unsafePerformIO)

import List (isPrefixOf)
import IO (hPutStrLn,stderr)

-- | Target modules.  Either a program or an "Object", which is the
--   filename and its extension (suffix).
data Goal = Object  String String
          | Program String

instance Show Goal where
   showsPrec n (Object  name suf) = showString (name++'.':suf)
   showsPrec n (Program name)     = showString name

-- | Get the filename out of this Goal.  In the case of an "Object",
--   this does not include the extension.
stripGoal :: Goal -> String
stripGoal (Object name suf) = name
stripGoal (Program name)    = name

-- /decode/ originally returned a 12-tuple of arguments.  The structure
-- /DecodedArgs/ is hopefully rather more meaningful.  (Apart from
-- anything else, nhc98 didn't do 13-tuples at the time, so this was
-- needed in order to make extensions to the return value!)

-- | The decoded command-line arguments.
data DecodedArgs =
     Decoded 
	{ modules  :: [Goal]		-- ^ specified target modules
	, pathSrc  :: [String]		-- ^ paths to compilable sources
	, pathPrel :: [String]		-- ^ paths to prelude .hi files
	, zdefs    :: [String]		-- ^ cpp options beginning -Z
	, defs     :: [String]		-- ^ cpp options beginning -D
	, ignoreHi :: [String]		-- ^ .hi files to ignore
	, dflag    :: Bool		-- ^ does compiler have a -d option?
	, quiet    :: Bool		-- ^ option -q for quiet
	, keepPrel :: Bool		-- ^ option -keepPrelude
	, isUnix   :: Bool		-- ^ Unix or RiscOS (!)
	, hat      :: Bool		-- ^ do we perform hat transformation?
	, debug    :: (String->IO ())	-- ^ debugging printf function
	, ifnotopt :: ([String]->String->String)  -- ^ is option unset?
	, ifopt    :: ([String]->String->String)  -- ^ is option set?
	, goalDir  :: Maybe String	-- ^ goal Directory for .o files
	, hiDir    :: Maybe String	-- ^ separate directory for .hi files
	, hiSuffix :: String		-- ^ .hi / .T.hi
	, oSuffix  :: String		-- ^ .o  / .T.o / .p.o / .z.o
        , config   :: PersonalConfig	-- ^ from file (via optional -ffile)
        , compiler :: CompilerConfig	-- ^ chosen compiler
	}

-- | Given the list of program arguments, decode them.
decode :: [String] -> IO DecodedArgs
decode progArgs =
  let d = Decoded {
      modules  = (map wrapGoal . filter (not . isflag)) progArgs
    , pathSrc  = error "pathSrc not known yet"
    , pathPrel = error "pathPrel not known yet"
    , zdefs    = error "zdefs not known yet"
 -- , pathSrc  = (map tail . filter (\v -> head v == 'I')) flags ++
 --              (map tail . filter (\v -> head v == 'i')) flags ++
 --              if isopt "keepPrelude" then pathPrel d else []
 -- , pathPrel = (map tail . filter (\v -> head v == 'P')) flags ++
 --              includePaths (compiler d) ++
 --              packageDirs (compiler d)
 --                          (map (drop 8) $
 --                           filter ("package="`isPrefixOf`) flags)
 -- , zdefs    = (map tail . filter (\v -> head v == 'Z')) flags ++
 --              cppSymbols (compiler d) ++
                 (if isHaskell98 (compiler d) then haskell98SymsForCpp else [])
    , defs     = (map tail . filter (\v -> head v == 'D')) flags
    , ignoreHi = (map tail . filter (\v -> head v == 'N')) flags
    , dflag    = False	-- isopt "od"
    , quiet    = isopt "q"
    , keepPrel = isopt "keepPrelude"
    , isUnix   = True			-- not (isopt "RiscOS")
    , hat      = isopt "hat"
    , debug    = if isopt "watch" then (\s->hPutStrLn stderr s)
                 else (\s->return ())
    , ifnotopt = \opts s -> if not (or (map isopt opts)) then s else ""
    , ifopt    = \opts s -> if any isopt opts then s else ""
    , goalDir  = case filter (\v-> head v == 'd') flags of
                   []  -> Nothing
                   [x] -> Just (tail x)
                   _   -> error "hmake: only one -dobjdir option allowed\n" 
    , hiDir    = (withDefault Nothing (Just . drop 6 . last)
                     . filter ("hidir=" `isPrefixOf`)) flags
    , hiSuffix = (withDefault "hi" (drop 10 . last)
                     . filter ("hi-suffix=" `isPrefixOf`)) flags
    , oSuffix  = (withDefault "o"  (drop  9 . last)
                     . filter ("o-suffix="  `isPrefixOf`)) flags
    , config   = case filter (\v-> head v == 'f') flags of
                   []  -> unsafePerformIO
                            (readPersonalConfig (defaultConfigLocation False))
                   [x] -> PersonalConfig
                            { globalConfig = readConfig (tail x)
                            , localConfig = Nothing }
                   _   -> error "hmake: only one -fconfigfile option allowed\n" 
    , compiler = error "compiler not known yet"
 -- , compiler = case filter (\v-> "hc=" `isPrefixOf` v) flags of
 --                []  -> usualCompiler (config d)
 --                [x] -> matchCompiler (drop 3 x) (config d)
 --                _   -> error "hmake: only one -hc=compiler option allowed\n" 
    }
  in do
  cc <- unDyn $ case filter (\v-> "hc=" `isPrefixOf` v) flags of
                   []  -> usualCompiler (config d)
                   [x] -> matchCompiler (drop 3 x) (config d)
                   _   -> error "hmake: only one -hc=compiler option allowed\n" 
  let d' = d {
         pathSrc  = (map tail . filter (\v -> head v == 'I')) flags ++
                    (map tail . filter (\v -> head v == 'i')) flags ++
                    if isopt "keepPrelude" then pathPrel d' else []
       , pathPrel = (map tail . filter (\v -> head v == 'P')) flags ++
                    includePaths (compiler d') ++
                    packageDirs (compiler d')
                                (map (drop 8) $
                                 filter ("package="`isPrefixOf`) flags)
       , zdefs    = (map tail . filter (\v -> head v == 'Z')) flags ++
                    cppSymbols (compiler d') ++
                    (if isHaskell98 (compiler d') then haskell98SymsForCpp
                                                  else [])
       , compiler = cc
       }
  return d'

 where
  flags = (map tail . filter isflag) progArgs

  isflag [] = False
  isflag (c : _) = c == '+' || c == '-'

  isopt opt = opt `elem` flags

  -- Look at the file argument, including the suffix, and decide
  -- whether it's a 'Program' or an 'Object'.
  wrapGoal :: String -> Goal
  wrapGoal file =
      let (s,n) = break (=='.') (reverse file)
      in findFirst (\suf -> if s == reverse suf then
                                 Just (Object (reverse (tail n)) suf)
                            else Nothing)
                   (Program file)
                   suffixes
                   
  findFirst :: (a->Maybe b) -> b -> [a] -> b
  findFirst f z []     = z
  findFirst f z (x:xs) = case f x of
                            Just y  -> y
                            Nothing -> findFirst f z xs

  withDefault :: a -> ([b]->a) -> ([b]->a)
  withDefault s f [] = s
  withDefault s f xs = f xs

  suffixes = [ "lhs"	-- literate Haskell
             , "gc"	-- GreenCard
             , "hsc"	-- hsc2hs
             , "hs"	-- Haskell
             , "o"	-- object file
             , "hi"	-- interface file
             , "T.o"	-- tracing object file
             , "p.o"	-- heap-profiling object file
             , "z.o"	-- time-profiling object file
             , "T.hi"	-- tracing interface file
             ]
