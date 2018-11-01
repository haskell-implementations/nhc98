module Paths_polyparse (
    version,
    getBinDir, getLibDir, getDataDir, getLibexecDir,
    getDataFileName
  ) where

import Data.Version (Version(..))
import System.Environment (getEnv)

version :: Version
version = Version {versionBranch = [1,4], versionTags = []}

bindir, libdir, datadir, libexecdir :: FilePath

bindir     = "/Users/malcolm/.cabal/bin"
libdir     = "/Users/malcolm/.cabal/lib/polyparse-1.4/ghc-6.10.4"
datadir    = "/Users/malcolm/.cabal/share/polyparse-1.4"
libexecdir = "/Users/malcolm/.cabal/libexec"

getBinDir, getLibDir, getDataDir, getLibexecDir :: IO FilePath
getBinDir = catch (getEnv "polyparse_bindir") (\_ -> return bindir)
getLibDir = catch (getEnv "polyparse_libdir") (\_ -> return libdir)
getDataDir = catch (getEnv "polyparse_datadir") (\_ -> return datadir)
getLibexecDir = catch (getEnv "polyparse_libexecdir") (\_ -> return libexecdir)

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = do
  dir <- getDataDir
  return (dir ++ "/" ++ name)
