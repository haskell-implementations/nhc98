module Main where

import Char (isSpace)
import List
import Monad
import System
import Directory
import Text.ParserCombinators.Poly
import CabalParse2

-- A simple way of reading information from a .cabal file
-- for use by other external programs, e.g. in a shell script or Makefile.
-- The cmdline arg "-slash" just replaces dots by slashes (e.g. to translate
-- module names from Haskell notation to filepaths).
main = do
    args <- getArgs
    (dir,pkgs,action) <-
        case args of
          (dir:"depends":pkgs) -> return (dir, pkgs, recursiveDeps)
          (dir:"list":_) -> return (dir, [], listAll)
          _ -> stop "Usage: nhc98-pkg <dir> depends <pkg> ..."
    depList <- action dir pkgs
    putStrLn (unwords depList)

-- Given a directory in which to look for cabal files, and a list of starting
-- packages, return a list of all package dependencies in dep order, i.e.
-- top-most in the lattice first.
recursiveDeps :: FilePath -> [String] -> IO [String]
recursiveDeps dir [] = return []
recursiveDeps dir (pkg:pkgs) = do
    deps <- depends dir pkg
    newdeps <- recursiveDeps dir deps
    rest    <- recursiveDeps dir pkgs
    return . minimise . (pkg:) $ newdeps++rest

-- Given a directory in which to look for cabal files, and a package name,
-- return the single-level (direct) dependencies noted in the .cabal file.
depends :: FilePath -> String -> IO [String]
depends dir pkg = do
    content <- readFile (dir++"/"++pkg++".cabal")
    cabal <- case runParser cabalFile (lexToken content) of
               (Left e, _)      -> stop e
               (Right cabal, _) -> return cabal
    let results = map (\field-> cabalLookup cabal field id)
                      ["depends","build-depends"]
    return . nub . words . unwords $ [ r | Right r <- results ]

-- Given a list of values in dependency order, remove duplicates from
-- the list, keeping the more basic items towards the end, i.e. those
-- with greater inward deps, and lesser outward deps.
minimise :: Eq a => [a] -> [a]
minimise = reverse . nub . reverse

-- List all known packages
listAll :: FilePath -> a -> IO [String]
listAll dir _ = do
    files <- getDirectoryContents dir
    let cabals = filter (".cabal"`isSuffixOf`) files
    mapM (\file -> do
             content <- readFile (dir++"/"++file)
             case runParser cabalFile (lexToken content) of
               (Left e, _)      -> return ("BAD-"++file)
               (Right cabal, _) -> return (check "name" cabal++"-"
                                          ++check "version" cabal ) )
         cabals
  where
    check s cabal = case cabalLookup cabal s id of
                      (Right x) -> dropWhile isSpace x
                      (Left e)  -> "BAD-"++e
