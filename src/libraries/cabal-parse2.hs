module Main where

import Char
import Monad
import System
import Text.ParserCombinators.Poly
import CabalParse2

-- A simple way of reading information from a .cabal file
-- for use by other external programs, e.g. in a shell script or Makefile.
-- The cmdline arg "-slash" just replaces dots by slashes (e.g. to translate
-- module names from Haskell notation to filepaths).
main = do
    args <- getArgs
    (fields,file,munge,halt) <-
        case args of
          (file:"-slash":fields)
                        -> return (map (map toLower) fields, file, slash, stop)
          (file:"-quiet":"-slash":fields)
                        -> return (map (map toLower) fields, file, slash, quiet)
          (file:"-quiet":fields)
                        -> return (map (map toLower) fields, file, id, quiet)
          (file:fields) -> return (map (map toLower) fields, file, id, stop)
          _ -> stop "Usage: cabal-parse file [-quiet] [-slash] field ..."
    content <- readFile file
    cabal <- case runParser cabalFile (lexToken content) of
               (Left e, _)      -> stop e
               (Right cabal, _) -> return cabal
    let results = flip map fields (\field-> cabalLookup cabal field munge)
    let errs = [ e | Left e <- results ]
    when (not (null errs)) (halt (unlines errs))
    mapM_ putStrLn [ r | Right r <- results ]

