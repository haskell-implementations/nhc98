-----------------------------------------------------------------------------
-- |
-- Module      :  Config
-- Copyright   :  Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Handles compiler configuration information, both globally and
-- locally.  Does reading & writing of configuration files, etc.
-----------------------------------------------------------------------------

module Config where

import Compiler
import System (ExitCode(..),exitWith,getEnv)
import Directory (doesFileExist,doesDirectoryExist,createDirectory
                 ,getPermissions,Permissions(..))
import Monad (when)
import List (nub,isPrefixOf)
import Platform (unsafePerformIO,exe,escape,windows)
import RunAndReadStdout (runAndReadStdout, basename, dirname)
import Char (isDigit)
import Monad (foldM)
import IO (stderr)
#ifdef __HBC__
import IOMisc (hPutStrLn)
#else
import IO (hPutStrLn)
#endif


----
data PersonalConfig = PersonalConfig
  { globalConfig :: HmakeConfig
  , localConfig  :: Maybe HmakeConfig
  }

defaultComp :: PersonalConfig -> FilePath
defaultComp conf =
  case localConfig conf of
    Just local -> defaultCompiler local
    Nothing    -> defaultCompiler (globalConfig conf)

knownComps  :: PersonalConfig -> [CompilerConfig]
knownComps conf =
  case localConfig conf of
    Just local -> nub (knownCompilers local ++ globals)
    Nothing    -> globals
  where
    globals = knownCompilers (globalConfig conf)

----
data HmakeConfig = HmakeConfig
  { defaultCompiler :: FilePath
  , knownCompilers  :: [CompilerConfig]
  }
  deriving (Eq,Read)

data CompilerConfig = CompilerConfig
  { compilerStyle      :: HC
  , compilerPath       :: FilePath
  , compilerVersion    :: String
  , includePaths       :: [FilePath]
  , cppSymbols         :: [String]
  , extraCompilerFlags :: [String]
  , isHaskell98        :: Bool
  }
  | DynCompiler { compilerPath :: FilePath }
  deriving (Read)

-- Expand a dynamically-specified compiler by doing the configure step.
unDyn :: CompilerConfig -> IO CompilerConfig
unDyn (DynCompiler path) = configure path
unDyn cc = return cc

instance Eq CompilerConfig where	-- equality on filename only
  cc1 == cc2   =   compilerPath cc1 == compilerPath cc2

instance Show CompilerConfig where
  showsPrec p (DynCompiler hc) =
      showString "DynCompiler { compilerPath = " . shows hc .showString " }\n"
  showsPrec p cc =
      showString "CompilerConfig"
      . showString "\n      { compilerStyle = " . shows (compilerStyle cc)
      . showString "\n      , compilerPath = " . shows (compilerPath cc)
      . showString "\n      , compilerVersion = " . shows (compilerVersion cc)
      . showString "\n      , includePaths = " . showPaths (includePaths cc)
      . showString "\n      , cppSymbols = " . shows (cppSymbols cc)
      . showString "\n      , extraCompilerFlags = "
                                               . shows (extraCompilerFlags cc)
      . showString "\n      , isHaskell98 = " . shows (isHaskell98 cc)
      . showString "\n      }\n"
      where
        showPaths [] = showString "[]"
        showPaths [x] = showChar '[' . shows x . showChar ']'
        showPaths (x:xs) = showString "[" . shows x . showl xs
          where
            showl []     = showChar '\n'
                           . showString (take 23 (repeat ' '))
                           . showChar ']'
            showl (x:xs) = showChar '\n'
                           . showString (take 23 (repeat ' '))
                           . showChar ',' . shows x . showl xs
  showList [] = showString " []"
  showList (x:xs) = showString "\n    [ " . showsPrec 0 x . showl xs
      where showl []     = showString "    ]"
            showl (x:xs) = showString "    , " . showsPrec 0 x . showl xs


instance Show HmakeConfig where
  showsPrec p hmc = showString "HmakeConfig\n  { defaultCompiler = "
                    . shows (defaultCompiler hmc)
                    . showString "\n  , knownCompilers ="
                    . showList (knownCompilers hmc)
                    . showString "\n  }\n"

----
-- | Suck in a single configuration file.  (Uses unsafePerformIO.)
readConfig :: FilePath -> HmakeConfig
readConfig file = unsafePerformIO (safeReadConfig file)

-- | A safe version of "readConfig".  Sucks in a single configuration file,
--   ensuring it parses correctly.
safeReadConfig :: FilePath -> IO HmakeConfig
safeReadConfig file = do
    f <- catch (readFile file)
               (\e-> error ("Config file "++file++" does not exist.\n"
                            ++"  Try running 'hmake-config new' first."))
    config <- saferead file f
    return config
  where
    -- ensure the value read from the file is fully evaluated
    saferead :: FilePath -> String -> IO HmakeConfig
    saferead path s =
        let val = case [x | (x,t) <- reads s, ("","") <- lex t] of
                       [x] -> x
                       []  -> error ("hmake-config: can't parse config file '"
                                     ++ path++"'")
                       _   -> error ("hmake-config: ambiguous parse of config '"
                                     ++ path++"'")
        in (return $! val)

-- | Read the user's complete configuration.
readPersonalConfig :: (FilePath,Maybe FilePath) -- ^ (global, local)
                   -> IO PersonalConfig
readPersonalConfig (global,local) = do
    g <- safeReadConfig global
    l <- case local of
           Just lo -> do l <- safeReadConfig lo
                         return (Just l)
           Nothing -> return Nothing
    return PersonalConfig { globalConfig = g , localConfig  = l }

-- | Use getEnv to find the configuration location.  (Uses unsafePerformIO)
defaultConfigLocation :: Bool -- ^ Create the directory if it doesn't exist.
                      -> (FilePath, Maybe FilePath)
defaultConfigLocation create = unsafePerformIO $ do
    machine <- getEnv "MACHINE"
    global <- getEnv "HMAKECONFDIR"
    let g = global++"/"++machine++"/hmakerc"
    catch (do home <- getEnv "HOME"
              let dir = home ++ "/.hmakerc"
                  loc = dir ++"/"++ machine
              exists <- doesFileExist loc
              if exists
                then return (g, Just loc)
                else if create then
                   do ok <- doesDirectoryExist dir
                      when (not ok) (createDirectory dir)
                      return (g, Just loc)
                else return (g, Nothing))
          (\e-> return (g, Nothing))


matchCompiler :: String -> PersonalConfig -> CompilerConfig
matchCompiler hc conf =
  case localConfig conf of
      Just local -> foldr search global (knownCompilers local)
      Nothing    -> global
  where
      search comp other = if compilerPath comp == hc then comp else other
      global = foldr search
                     (error ("hmake: the compiler '"++hc++"' is not known.\n"))
                     (knownCompilers (globalConfig conf))

compilerKnown :: String -> PersonalConfig -> Bool
compilerKnown hc config =
    any (\comp -> compilerPath comp == hc) known
  where
    known = knownCompilers (globalConfig config) ++
            case localConfig config of
              Just l  -> knownCompilers l
              Nothing -> []

usualCompiler :: PersonalConfig -> CompilerConfig
usualCompiler config = matchCompiler def config
  where def = case localConfig config of
                Just l  -> defaultCompiler l
                Nothing -> defaultCompiler (globalConfig config)


{-
matchCompiler :: String -> HmakeConfig -> CompilerConfig
matchCompiler hc config =
    foldr (\comp other-> if compilerPath comp == hc then comp else other)
          (error ("hmake: the compiler '"++hc++"' is not known.\n"))
          (knownCompilers config)

compilerKnown :: String -> HmakeConfig -> Bool
compilerKnown hc config =
    any (\comp -> compilerPath comp == hc) (knownCompilers config)

usualCompiler :: HmakeConfig -> CompilerConfig
usualCompiler config = matchCompiler (defaultCompiler config) config
-}


-- | configure for each style of compiler
configure :: String -> IO CompilerConfig
configure path = do kind <- hcStyle path
                    configure' kind path


configure' :: HC -> String -> IO CompilerConfig
configure' Ghc ghcpath = do
  ghcversion <- runAndReadStdout (escape ghcpath ++ " --version 2>&1 | "
                                  ++"sed 's/^.*version[ ]*\\([0-9.]*\\).*/\\1/'"
                                 )
  let ghcsym = let v = (read (take 3 (filter isDigit ghcversion ++ "0"))) :: Int
               in if v <= 600 then v
                  else let hundreds = (v`div`100)*100 in
                       hundreds + ((v-hundreds)`div`10)
      config  = CompilerConfig
			{ compilerStyle = Ghc
			, compilerPath  = ghcpath
			, compilerVersion = ghcversion
			, includePaths  = undefined
			, cppSymbols    = ["__GLASGOW_HASKELL__="++show ghcsym]
			, extraCompilerFlags = []
			, isHaskell98   = ghcsym>=400 }
  if windows && ghcsym<500
    then do
      fullpath <- which exe ghcpath
      let incdir1 = dirname (dirname fullpath)++"/imports"
      ok <- doesDirectoryExist incdir1
      if ok
        then return config{ includePaths = ghcDirs ghcsym incdir1 }
        else do ioError (userError ("Can't find ghc includes at\n  "++incdir1))
    else if ghcsym<500
    then do
      fullpath <- which exe ghcpath
      dir <- runAndReadStdout ("grep '^\\$libdir=' "++fullpath++" | head -n 1 "
                               ++ "| sed 's/^\\$libdir=[^/]*\\(.*\\).;/\\1/'")
      let incdir1 = dir++"/imports"
      ok <- doesDirectoryExist incdir1
      if ok
        then return config{ includePaths = ghcDirs ghcsym incdir1 }
        else do
          let incdir2 = dir++"/lib/imports"
          ok <- doesDirectoryExist incdir2
          if ok
            then return config{ includePaths = ghcDirs ghcsym incdir2 }
            else do ioError (userError ("Can't find ghc includes at\n  "
                                        ++incdir1++"\n  "++incdir2))
    else do -- 5.00 and above
      pkgcfg <- runAndReadStdout (escape ghcpath++" --print-libdir")
      let libdir  = escape pkgcfg
      fullpath <- fmap escape (which exe ghcpath)
      let ghcpkg0 = dirname fullpath++"/ghc-pkg-"++ghcversion
      ok <- doesFileExist ghcpkg0
      let ghcpkg = if ok then ghcpkg0 else dirname fullpath++"/ghc-pkg"
      pkgs <- runAndReadStdout (ghcpkg++" list")
      --pkgs <- runAndReadStdout (ghcpkg++" -l")
      let pkgsOK = filter (\p-> any (`isPrefixOf` p)
                                    ["std","base","haskell98"])
                          (deComma pkgs)
      idirs <- mapM (\p-> runAndReadStdout
                              (ghcpkg++" field "
                               ++deVersion (ghcsym>=604) p
                               ++" import_dirs"))
                    pkgsOK
      return config{ includePaths = pkgDirs libdir (nub idirs) }
 where
    -- ghcDirs only static for ghc < 500; for later versions found dynamically
    ghcDirs n root | n < 400   = [root]
                   | n < 406   = map ((root++"/")++) ["std","exts","misc"
                                                     ,"posix"]
                   | otherwise = map ((root++"/")++) ["std","lang","data","net"
                                                     ,"posix","num","text"
                                                     ,"util","hssource"
                                                     ,"win32","concurrent"]
    pkgDirs libdir dirs =
        map (\dir-> if "$libdir" `isPrefixOf` dir
                    then libdir++drop 7 dir
                    else if "[\"" `isPrefixOf` dir
                    then drop 2 (init (init dir))
                    else dir)
            (concatMap words dirs)
    deComma pkgs = map (\p-> if last p==',' then init p else p) (words pkgs)
    deVersion False pkg = pkg
    deVersion True  pkg = let (suf,pref) = span (/='-') (reverse pkg)
                          in case pref of "" -> pkg; _ -> reverse (tail pref)

configure' Nhc98 nhcpath = do
  fullpath <- which id nhcpath
  nhcversion <- runAndReadStdout (escape nhcpath
                                ++" --version 2>&1 | cut -d' ' -f2 | head -n 1")
  dir <- runAndReadStdout ("grep '^NHC98INCDIR' "++escape fullpath
                           ++ "| cut -c27- | cut -d'}' -f1 | head -n 1")
  return CompilerConfig { compilerStyle = Nhc98
			, compilerPath  = nhcpath
			, compilerVersion = nhcversion
			, includePaths = [dir]
			, cppSymbols    = ["__NHC__="++
                                           take 3 (filter isDigit nhcversion)]
			, extraCompilerFlags = []
			, isHaskell98   = True
			}
configure' Hbc hbcpath = do
  let field n = "| cut -d' ' -f"++show n++" | head -n 1"
  wibble <- runAndReadStdout (hbcpath ++ " -v 2>&1 " ++ field 2)
  hbcversion <-
      case wibble of
        "version" -> runAndReadStdout (hbcpath ++ " -v 2>&1 " ++ field 3)
        _         -> runAndReadStdout (hbcpath ++ " -v 2>&1 " ++ field 4)
  dir <- catch (getEnv "HBCDIR")
               (\e-> catch (getEnv "LMLDIR")
                           (\e-> return "/usr/local/lib/lmlc"))
  return CompilerConfig { compilerStyle = Hbc
			, compilerPath  = hbcpath
			, compilerVersion = hbcversion
			, includePaths = map ((dir++"/")++)
                                              ["hlib1.3","hbc_library1.3"]
			, cppSymbols    = ["__HBC__"]
			, extraCompilerFlags = []
			, isHaskell98   = ((hbcversion!!7) >= '5')
			}
configure' (Unknown hc) hcpath = do
    hPutStrLn stderr ("hmake-config: the compiler\n  '"++hcpath
                      ++"'\n  does not look like a Haskell compiler.")
    exitWith (ExitFailure 4)
    return undefined  -- never reached

-- | Work out which basic compiler.
hcStyle :: String -> IO HC
hcStyle path =
  case toCompiler (basename path) of
    Unknown hc -> do x <- runAndReadStdout 
                            (path++" 2>&1 | head -n 1 | cut -c1-3")
                     return (case toCompiler x of
                               Unknown _ -> Unknown hc
                               y         -> y)
    s -> return s
  where
    toCompiler :: String -> HC
    toCompiler hc | "gcc" `isPrefixOf` hc = Nhc98
                  | "nhc" `isPrefixOf` hc = Nhc98
                  | "ghc" `isPrefixOf` hc = Ghc
                  | "hbc" `isPrefixOf` hc = Hbc
                  | otherwise             = Unknown hc

-- | Emulate the shell `which` command.
which :: (String->String) -> String -> IO String
which exe cmd =
  let dir = dirname cmd
  in case dir of
    "" -> do -- search the shell environment PATH variable for candidates
             val <- getEnv "PATH"
             let psep = pathSep val
                 dirs = splitPath psep "" val
             search <- foldM (\a dir-> testFile a (dir++'/': exe cmd))
                             Nothing dirs
             case search of
               Just x  -> return x
               Nothing -> ioError (userError (cmd++" not found"))
    _  -> do f <- testFile Nothing (exe cmd)
             case f of
               Just x  -> return x
               Nothing -> ioError (userError (cmd++" is not executable"))
  where
    splitPath :: Char -> String -> String -> [String]
    splitPath sep acc []                 = [reverse acc]
    splitPath sep acc (c:path) | c==sep  = reverse acc : splitPath sep "" path
    splitPath sep acc (c:path)           = splitPath sep (c:acc) path

    pathSep s = if length (filter (==';') s) >0 then ';' else ':'

    testFile :: Maybe String -> String -> IO (Maybe String)
    testFile gotit@(Just _) path = return gotit
    testFile Nothing path = do
        ok <- doesFileExist path
        if ok then perms path else return Nothing

    perms file = do
        p <- getPermissions file
        return (if executable p then Just file else Nothing)

