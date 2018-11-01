{-# OPTIONS -fglasgow-exts #-}
-----------------------------------------------------------------------------
-- |
-- Module      :  Platform
-- Copyright   :  Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Platform specific definitions, utilizing cpp pragmas, etc.
-----------------------------------------------------------------------------

module Platform
  ( withDefault
  , builtby
  , machine
  , windows
  , exe
  , escape
  , unsafePerformIO
  , getProcessID
  , shell
  ) where

import System (getEnv,system)
import List (isPrefixOf)

#ifdef __HBC__
import UnsafePerformIO
#ifdef __HASKELL98__
import GetPid
getProcessID = getPid
#else
getProcessID = return 3154      -- arbitrary number
#endif
#endif
#ifdef __NHC__
import NHC.Internal (unsafePerformIO)
foreign import ccall "getpid" getProcessID :: IO Int
#endif
#ifdef __GLASGOW_HASKELL__
import System.IO.Unsafe (unsafePerformIO)
foreign import ccall "getpid" getProcessID :: IO Int
#endif


-- Get an environment variable if it exists, or default to given string
withDefault name def = unsafePerformIO $
   catch (do val <- getEnv name
             if null val then return def else return val)
         (\e-> return def)

-- Some variables imported from the shell environment
builtby = "BUILTBY" `withDefault` "unknown"
machine = "MACHINE" `withDefault` "unknown"
cygshel = "CYGSHELL" `withDefault` "/cygwin/bin/bash"
windows = "ix86-CYGWIN" `isPrefixOf` machine
exe prg = if windows then prg++".exe" else prg
escape  = if windows then map (\c-> if c=='\\' then '/' else c) else id

shell cmd = if windows then system (cygshel++" -cl \""++cmd++"\"")
                       else system cmd
