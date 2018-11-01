-- Known Haskell compilers and their locations are all stored in an
-- hmakerc file which is maintained with the hmake-config utility.
-- This module no longer deals with that side of things.

-- Here, we just need to read read a single environment variable,
-- and determine some properties of the different compilers that relate
-- specifically to the interpreter.

module HiConfig where

import Compiler
import Config
import Platform (getProcessID,unsafePerformIO,withDefault,windows,escape)
import System

-- Generate a temporary filename unique to this process.
tmpfile :: String
tmpfile =
    let tmp = "TEMP" `withDefault` "/tmp" in
    if windows
      then (escape tmp++"/Main")
      else unsafePerformIO $ do
             p <- getProcessID
             return (tmp++"/Main"++show p)


-- Ensure that a string has a fixed length by truncating or padding with space
fixlength n s | len > n   = take n s
              | otherwise = s ++ replicate (n-len) ' '
  where len = length s


-- Definitions imported from the environment
hmakeVersion = fixlength 18 ("INSTALLVER" `withDefault` "1.8 or better")
hmake = unsafePerformIO $ do script <- getEnv "SCRIPTDIR"
                             return (script++"/hmake")


-- What are the differences between compilers?
nonstdCoerceImport c  = case c of
    Nhc98 -> "import NonStdUnsafeCoerce"
    Hbc   -> ""
    Ghc   -> "#if __GLASGOW_HASKELL__ <= 502\n\
             \import PrelGHC (unsafeCoerce#)\n#else\n\
             \import GHC.Base(unsafeCoerce#)\n#endif"
    _     -> ""
nonstdCoerce c  = case c of
    Nhc98 -> "\ncoerce=unsafeCoerce\n"
    Hbc   -> "\ncoerce = id\t-- wrong\n"
    Ghc   -> "\ncoerce :: a -> b\ncoerce = unsafeCoerce#\n"
    _     -> ""
nonstdShow c  = case c of
    Nhc98 -> ""
    Hbc   -> "instance Show (IO a) where\n\ 
             \  showsPrec p x = showString \"<<IO action>>\""
    Ghc   -> "instance Show (IO a) where\n\ 
             \  showsPrec p x = showString \"<<IO action>>\""
    _     -> ""
nonstdShowsType c  = case c of
    Nhc98 -> "showsType"
    Hbc   -> "Operation'showsType'Unknown"
    Ghc   -> "Operation'showsType'Unknown"
    _     -> ""
extraHiOptions c = case compilerStyle c of
    Nhc98 -> extraCompilerFlags c
    Hbc   -> extraCompilerFlags c
    Ghc   -> "-fglasgow-exts": "-package lang": extraCompilerFlags c
    _     -> []

