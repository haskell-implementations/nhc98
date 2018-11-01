module Main(main) where

import System.Directory
import System.Environment
import IO

import Util.Extra
import Flags
import Core.View
import System.FilePath
import Make
import Error
import Package


-- read the base path from the environment variable
-- the include files will be search for from that location
-- otherwise use the base file path
getBasePath :: IO String
getBasePath = catch (getEnv "YHC_BASE_PATH") errHandle
    where
    errHandle e = do
        res <- findExecutable "yhc"
        case res of
            Nothing -> do
                putStrLn $ "Warning: the environment variable YHC_BASE_PATH is not set\n" ++
                           "         and yhc cannot be found on the path"
                return ""
            Just x -> return $ takeDirectory $ takeDirectory x


-- program start point 
main :: IO ()
main = 
    do basePath <- getBasePath
       args <- getArgs
       let flags = fixFlags basePath (processArgs args)
       let yhcVERSION = "(unversioned)"
       if sVersion flags then putStrLn $ "yhc: The York Haskell Compiler version " ++ yhcVERSION
          else if sHelp flags then putStr $ printUsage True
          else if not $ null $ sViewCore flags then mapM_ (\x -> getFile ["ycr"] x >>= viewCore) (sViewCore flags)
          else if null (sRootFile flags) then putStr $ printUsage False
          else do realFile <- getHaskellFile (sRootFile flags)
                  make flags realFile

  where
  fixFlags base flags = flags { sPreludes = (base ++ "/include") : sPreludes flags, 
                                sBasePath = base }


-- | From the file path the user gave, figure out the file path they meant
--   in particular add .hs or .lhs if they missed it
getHaskellFile :: FilePath -> IO FilePath
getHaskellFile = getFile ["hs","lhs"]

getFile :: [String] -> FilePath -> IO FilePath
getFile exts orig =
    do
        full <- canonicalizePath orig
        b <- doesFileExist full
        if b then
            return full
         else
            do res <- mapM (f full) exts
               case concat res of
                   [] -> getOneModule orig
                   [x] -> return x
                   xs -> raiseError $ ErrorFileMany noErrPos "Typed at the console" full xs
    where
        f full ext = do let s2 = full <.> ext
                        b <- doesFileExist s2
                        return [s2 | b]
