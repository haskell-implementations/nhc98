-----------------------------------------------------------------------------
-- |
-- Module      :  MkConfig
-- Copyright   :  Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Main program for utility hmake-config
-----------------------------------------------------------------------------

module Main where

import Config
import RunAndReadStdout (dirname)
import Directory (createDirectory)
import System (exitWith,ExitCode(..),getArgs)
import List (nub,sort)
import Maybe (fromJust)
import IO (stderr,isDoesNotExistError)
#ifdef __HBC__
import IOMisc (hPutStrLn)
#else
import IO (hPutStrLn)
#endif


main = do
  args <- getArgs
  (gfile,lfile,args) <- findConfigFile args
  case args of
    ["new"]  -> do newConfigFile (gfile,lfile)
                   exitWith ExitSuccess
    _ -> return ()
  config <- readPersonalConfig (gfile,lfile)
  case args of
    ["list"] -> do putStrLn ("Global config file is:\n    "++gfile)
                   (case lfile of
                      Just f -> putStrLn ("Personal config file is:\n    "++f)
                      Nothing -> return ())
                   known <- mapM unDyn $ knownComps config
                   putStrLn "Known compilers:"
                   mapM_ putStrLn
                         ((reverse . sort
                           . map (\c-> "    "++compilerPath c
                                       ++"\t("++compilerVersion c++")"))
                          known)
                   putStrLn "Default compiler:"
                   putStrLn ("    "++defaultComp config)
    [hc] -> do -- no command, assume 'add'
               cc <- configure hc
               config' <- add cc config
               writeBack gfile lfile config'
    ["add",hc]     -> do cc <- configure hc
                         config' <- add cc config
                         writeBack gfile lfile config'
    ["add-dyn",hc] -> do config' <- add (DynCompiler hc) config
                         writeBack gfile lfile config'
    ["delete",hc]  -> do config' <- delete config gfile hc
                         writeBack gfile lfile config'
    ["default",hc] -> do config' <- mkDefault config hc
                         writeBack gfile lfile config'
    ["list",hc]    -> do let cc = matchCompiler hc config
                         putStrLn (show cc)
    _ -> do hPutStrLn stderr usage
            exitWith (ExitFailure 1)
  ----
  exitWith ExitSuccess

 where
    findConfigFile :: [String] -> IO (FilePath, Maybe FilePath, [String])
    findConfigFile args =
      case args of
        [] -> do let (g,_) = defaultConfigLocation False
                 hPutStrLn stderr (usage++"\ndefault configfile is:\n    "++g)
                 exitWith (ExitFailure 1)
        (file:"new":_)  -> return (file, Nothing, tail args)
        (file:"list":_) -> return (file, Nothing, tail args)
        [file,_,_]      -> return (file, Nothing, tail args)
        ("list":_) ->
             let (g,l) = defaultConfigLocation False in return (g, l, args)
        _ -> let (g,l) = defaultConfigLocation True in return (g, l, args)
    usage = "Usage: hmake-config [configfile] list\n"
         ++ "       hmake-config [configfile] [add|add-dyn|delete|default] hc\n"
         ++ "              -- hc is name/path of a Haskell compiler"

{-
    parseConfigFile :: String -> FilePath -> IO HmakeConfig
    parseConfigFile machine path =
      catch (safeReadConfig path)
            (\e-> if isDoesNotExistError e
                  then do
                    hPutStrLn stderr ("hmake-config: Warning: "
                                      ++"Config file not found:\n  '"
                                      ++path++"'")
                    globalDir <- getEnv "HMAKECONFDIR"
                    let global = globalDir++"/"++machine++"/hmakerc"
                    if path == global
                      then newConfigFile path
                      else do
                        hPutStrLn stderr ("hmake-config: Copying from\n  '"
                                          ++global++"'.")
                        catch (do config <- safeReadConfig global
                                  catch (writeFile path (show config))
                                        (\e-> hPutStrLn stderr
                                                ("hmake-config: Cannot create "
                                                ++"file "++path))
                                  return config)
                              (\e-> if isDoesNotExistError e
                                    then do
                                      hPutStrLn stderr
                                        ("hmake-config: Warning: "
                                         ++"System config file not found:\n  '"
                                         ++global++"'")
                                      newConfigFile path
                                    else ioError e)
                  else ioError e)
-}

newConfigFile (gpath,lpath) = do
  (path,config) <-
      case lpath of
        Just lo -> do hPutStrLn stderr
                        ("hmake-config: Starting new personal config file in"
                         ++"\n  "++lo)
                      gconf <- safeReadConfig gpath
                      return (lo, HmakeConfig {defaultCompiler=
                                                     defaultCompiler gconf
                                              ,knownCompilers=[]})
        Nothing -> do hPutStrLn stderr
                        ("hmake-config: Starting new config file in\n  "++gpath)
                      return (gpath, HmakeConfig {defaultCompiler="unknown"
                                                 ,knownCompilers=[]})
  catch (writeFile path (show config))
        (\e -> if isDoesNotExistError e	-- fails because no directory
               then do createDirectory (dirname path)
                       writeFile path (show config)
               else ioError e)		-- fails for other reason


writeBack :: FilePath -> Maybe FilePath -> PersonalConfig -> IO ()
writeBack gfile lfile config =
  case lfile of
    Just f  -> writeFile f (show (fromJust (localConfig config)))
    Nothing -> writeFile gfile (show (globalConfig config))

delete :: PersonalConfig -> FilePath -> String -> IO PersonalConfig
delete config gfile hc
  | hc == defaultComp config = do
        hPutStrLn stderr ("hmake-config: cannot delete\n  '"++hc
                          ++"'\n  because it is the default compiler.")
        exitWith (ExitFailure 3)
        return undefined -- never reached
  | otherwise =
        case localConfig config of
          Just lo -> if hc `elem` map compilerPath (knownCompilers lo) then
                       return config {localConfig=
                                       Just (lo {knownCompilers=
                                          filter (\cc-> compilerPath cc /= hc)
                                                 (knownCompilers lo) })}
                     else do
                       hPutStrLn stderr
                                ("hmake-config: Cannot delete compiler\n  "++hc
                                ++"\nIt is configured globally.  Use\n  "
                                ++"hmake-config "++gfile++" delete "++hc)
                       exitWith (ExitFailure 3)
                       return undefined
          Nothing -> let gl = globalConfig config in
                     if hc `elem` map compilerPath (knownCompilers gl) then
                       return config {globalConfig =
                                       gl {knownCompilers=
                                         filter (\cc-> compilerPath cc /= hc)
                                                (knownCompilers gl)}}
                     else do
                       hPutStrLn stderr
                                 ("hmake-config: compiler not known:\n  "++hc)
                       exitWith (ExitFailure 3)
                       return undefined

mkDefault :: PersonalConfig -> String -> IO PersonalConfig
mkDefault config hc
  | hc `elem` map compilerPath (knownComps config)
              = case localConfig config of
                  Just lo -> return config {localConfig=
                                              Just (lo {defaultCompiler = hc})}
                  Nothing -> let gl = globalConfig config in
                             return config {globalConfig=
                                              gl {defaultCompiler = hc}}
  | otherwise = do hPutStrLn stderr ("hmake-config: compiler not known:\n  '"
                                     ++hc++"'")
                   exitWith (ExitFailure 2)
                   return undefined -- never reached

add :: CompilerConfig -> PersonalConfig -> IO PersonalConfig
add hc config = return $
  case localConfig config of
    Just local -> config { localConfig =
                             Just (local { knownCompilers =
                                             nub (hc: knownCompilers local)})}
    Nothing -> let global = globalConfig config in
               config { globalConfig =
                          global { knownCompilers =
                                             nub (hc: knownCompilers global)}}

{-
-- | configure for each style of compiler
configure :: HC -> String -> IO CompilerConfig
configure Ghc ghcpath = do
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
      dir <- runAndReadStdout ("grep '^\\$libdir=' "++fullpath++" | head -n 1 | "
                               ++ "sed 's/^\\$libdir=[^/]*\\(.*\\).;/\\1/'")
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
          incdir1 = libdir++"/imports"
      ok <- doesDirectoryExist incdir1
      if ok
        then do
          fullpath <- fmap escape (which exe ghcpath)
          let ghcpkg0 = dirname fullpath++"/ghc-pkg-"++ghcversion
          ok <- doesFileExist ghcpkg0
          let ghcpkg = if ok then ghcpkg0 else dirname fullpath++"/ghc-pkg"
       -- pkgs <- runAndReadStdout (ghcpkg++" --list-packages")
          pkgs <- runAndReadStdout (ghcpkg++" list")
          let pkgsOK = filter (\p-> any (`isPrefixOf` p)
                                        ["std","base","haskell98"])
                              (deComma pkgs)
          idirs <- mapM (\p-> runAndReadStdout
                                  (ghcpkg++" field "
                                   ++deVersion (ghcsym>=604) p
                                   ++" import_dirs"))
                        pkgsOK
          return config{ includePaths = pkgDirs libdir (nub idirs) }
        else do ioError (userError ("Can't find ghc includes at "++incdir1))
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

configure Nhc98 nhcpath = do
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
configure Hbc hbcpath = do
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
configure (Unknown hc) hcpath = do
    hPutStrLn stderr ("hmake-config: the compiler\n  '"++hcpath
                      ++"'\n  does not look like a Haskell compiler.")
    exitWith (ExitFailure 4)
    return undefined  -- never reached

-- | Work out which basic compiler.
hcStyle :: String -> HC
hcStyle path = toCompiler (basename path)
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
-}
