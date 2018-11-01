module Paths_Cabal (
    version,
    getBinDir, getLibDir, getDataDir, getLibexecDir,
    getDataFileName
  ) where

import Data.Version (Version(..))
import System.Environment (getEnv)

version :: Version
version = Version {versionBranch = [1,7,4], versionTags = []}

bindir, libdir, datadir, libexecdir :: FilePath

bindir     = "/Users/malcolm/.cabal/bin"
libdir     = "/Users/malcolm/.cabal/lib/Cabal-1.7.4/ghc-6.8.3"
datadir    = "/Users/malcolm/.cabal/share/Cabal-1.7.4"
libexecdir = "/Users/malcolm/.cabal/libexec"

getBinDir, getLibDir, getDataDir, getLibexecDir :: IO FilePath
getBinDir = catch (getEnv "Cabal_bindir") (\_ -> return bindir)
getLibDir = catch (getEnv "Cabal_libdir") (\_ -> return libdir)
getDataDir = catch (getEnv "Cabal_datadir") (\_ -> return datadir)
getLibexecDir = catch (getEnv "Cabal_libexecdir") (\_ -> return libexecdir)

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = do
  dir <- getDataDir
  return (dir ++ "/" ++ name)
