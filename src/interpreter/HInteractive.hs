module Main where

import IO
import System
import Char
import Directory
import List
import Maybe

import Config		-- from src/hmake
import Compiler		-- from src/hmake
import HiConfig
import SimpleLineEditor (delChars, getLineEdited, initialise, restore)
import LexModule
import Unlit
import Platform (shell)

--debug x = putStrLn ("DEBUG: "++x)
debug x = return ()
done = return ()

data State = S { options  :: [String]
               , config   :: PersonalConfig
               , compiler :: CompilerConfig
               , cfgfile  :: Maybe FilePath	-- the hmake configfile
               , modules  :: [String]
               , scope    :: Maybe String	-- could be `elem` modules
               , scopeText  :: Maybe String	-- modified text of module
               }

main = do
  options <- getArgs
  (cfg,file,options) <-
      case options of
        ("-f":file:opts) -> do cfg <- readPersonalConfig (file,Nothing)
                               return (cfg, Just file, opts)
        _ -> do cfg <- readPersonalConfig (defaultConfigLocation False)
                return (cfg,Nothing,options)
  defaultComp <- unDyn (usualCompiler cfg)
  let opts = options ++ extraHiOptions defaultComp
  putStrLn banner
  putStrLn (replicate 43 ' '++
            "... Using compiler "++compilerPath defaultComp++" ...\n")
  putStrLn ("Type :? for help")
  SimpleLineEditor.initialise
  let state = S { options=opts, config=cfg, compiler=defaultComp, cfgfile=file
                , modules=["Prelude"], scope=Nothing, scopeText=Nothing }
  load state "Prelude" (toplevel state)
  putStrLn "[Cannot continue without Prelude...]"
  SimpleLineEditor.restore
  exitWith (ExitFailure 1)

quit = do
   putStrLn "[Leaving hmake interactive...]"
   mapM_ (\f-> catch (removeFile f) (\e->done))
         [tmpfile, tmpfile++".hs", tmpfile++".hi", tmpfile++".o"]
   SimpleLineEditor.restore
   exitWith ExitSuccess

toplevel :: State -> IO ()
toplevel state = do
  let prompt = case scope state of
  		    Nothing  -> head (modules state)++ "> "
    		    Just mod -> "["++mod++"]> "
  s <- getLineEdited prompt
  case s of
    Nothing -> quit
    Just s  -> do
     if (null s || all isSpace s) then done else
    	case head s of
          ':' -> let ws = words (tail s) in
                 if (null ws) then done else
                 case head (head ws) of
                   '!' -> shell (unwords ((tail (head ws)):tail ws)) >> done
                   _   -> commands ws state
          _   -> evaluate s (words s) state
     toplevel state

evaluate :: String -> [String] -> State -> IO ()
evaluate expr ("main":args) state =
  case scope state of
    Nothing ->
        let mod = head (modules state) in
        compile True mod state (run ("./"++mod) args)
    Just _  -> do
        f <- openFile (tmpfile++".hs") WriteMode
        hPutStr f (fromJust (scopeText state) ++ "\nmain = _ain\n")
        hClose f
        compile True tmpfile state (run tmpfile args)
evaluate expr _ state = do
  let modtext = fromMaybe "" (scopeText state)
  let scopem  = maybeToList (scope state)
  f <- openFile (tmpfile++".hs") WriteMode
  hPutStr f (
    "module Main where\n\n" ++
    concatMap (\m-> "import "++m++"\n") (modules state \\ scopem) ++
    "\n" ++ nonstdCoerceImport (compilerStyle (compiler state)) ++
    modtext ++
    "\n" ++ nonstdCoerce (compilerStyle (compiler state)) ++
    "\n" ++ nonstdShow (compilerStyle (compiler state)) ++
    "\nmain = let expr  = (" ++ expr ++ ")" ++
    "\n           shown = show expr" ++
    "\n       in case shown of" ++
    "\n           ('<':'<':'I':'O':_) -> coerce expr" ++
    "\n           _                   -> putStrLn shown" ++
    "\n")
  hClose f
  compile True tmpfile state (run tmpfile [])

showtype expr ("main":args) state =
  case scope state of
    Nothing ->
        let mod = head (modules state) in
        compile False mod (state{options=(options state)++["-showtype"]}) done
    Just _  -> do
        f <- openFile (tmpfile++".hs") WriteMode
        hPutStr f (fromJust (scopeText state) ++ "\nmain = _ain\n")
        hClose f
        compile False tmpfile
                (state{options=(options state)++["-showtype"]}) done
showtype expr _ state = do
  let modtext = fromMaybe "" (scopeText state)
  let scopem  = maybeToList (scope state)
  f <- openFile (tmpfile++".hs") WriteMode
  hPutStr f (
    "module Main where\n\n" ++
    concatMap (\m-> "import "++m++"\n") (modules state \\ scopem) ++
    modtext ++ "\nmain = "++ expr ++ "\n")
  hClose f
  compile False tmpfile
          (state{options=(options state)++["-showtype"]}) done


compile flag file state continue = do
  if flag then putStr "[Compiling..." else done
  ok <- shell (hmake ++" -hc="++compilerPath (compiler state)++" -I. "
                ++(case cfgfile state of {Just f-> ("-f "++f++" "); _->"";})
                ++unwords (options state)++" "++file++" >/dev/null")
  case ok of
    ExitSuccess -> do if flag then delChars "[Compiling..." else done
                      continue
    _           -> if flag then putStrLn "...failed]" else done

run file args = do
  ok <- shell (file++" "++unwords args)
  case ok of
    ExitFailure e -> putStrLn ("Expression failed with exit code "++show e)
    _ -> return ()
  done

commands :: [String] -> State -> IO ()
commands ws state = let target = tail ws in do
  command "quit" quit
  command "Quit" quit
  command "load"
      (let mods = if null target then ["Prelude"]
                  else nub (reverse ("Prelude":target))
           newstate = state {modules=mods, scope=Nothing, scopeText=Nothing}
       in loadAll newstate (toplevel newstate)	-- explicitly return new modules
      )
  command "also"
      (let mods = if null target then ["Prelude"]
                  else nub (reverse target ++ modules state)
           newstate = state {modules=mods}	-- retain scope if applicable
       in loadAll newstate (toplevel newstate)	-- explicitly return new modules
       )
  command "reload" (loadAll state done)
  command "freshen"
       (do makeclean ".o" (modules state)
           loadAll state done)
  command "module"
       (if null target || length target > 1 then do
           putStrLn "You must give a single module name, in whose scope to evaluate."
        else let mod = head target in do
           loadScope state mod (\text-> toplevel (state { scope=(Just mod)
                                                    , scopeText=(Just text)}))
       )
--command "observe"
--     (if null target || length target > 1 then do
--         putStrLn "You must give a single function name (from this module) to observe."
--      else let fn = head target in do
--         makeObserve state fn (\text-> toplevel (state { scope=(Just mod)
--                                                  , scopeText=(Just text)}))
--     )
  command "edit"
      (if null target then
         case scope state of
             Nothing  -> let mod = head (modules state) in
                         edit state mod (load state mod done)
             Just mod -> edit state mod (loadScope state mod (\_->done))
       else do e <- shell ("${EDITOR-vi} " ++ unwords target)
               loadAll state done
      )
  command "type"
      (if compilerStyle (compiler state) == Nhc98
       then showtype (unwords target) target state
       else putStrLn ":type command only supported for nhc98 compiler")
{-
      (do f <- openFile (tmpfile++".hs") WriteMode
          hPutStr f (
            "module Main where\n\n" ++
            concatMap (\m-> "import "++m++"\n") (modules state) ++
            "\nmain = let expr  = (" ++ unwords target ++ ")" ++
            "\n       in putStrLn ("++ nonstdShowsType (compiler state)++" expr \"\")"++
            "\n")
          hClose f
          compile True tmpfile state (run tmpfile [])
      )
-}
  command "cd"
      (if null target then do
            dir <- getCurrentDirectory
            putStrLn ("Current directory: "++dir)
       else catch (setCurrentDirectory (head target)) print
      )
  command "dir" (getDirectoryContents "." >>= indent)
  command "ls" (getDirectoryContents "." >>= indent)
  command "pwd" (getCurrentDirectory >>= putStrLn)
  command "set"
      (do let newopts = (options state) ++ target
          putStrLn ("Current settings:\n  "++unwords newopts)
          toplevel (state {options=newopts}) )
  command "unset"
      (do let newopts = (options state) \\ target
          putStrLn ("Current settings:\n  "++unwords newopts)
          toplevel (state {options=newopts}) )
  command "hc"
      (if null target then do
          putStrLn ("Current compiler: "++compilerPath (compiler state)
                    ++" ("++compilerVersion (compiler state)++")")
          putStr   "Compilers available:\n     "
          kcs <- (mapM unDyn . knownComps . config) state
          putStrLn ((concat . intersperse ("\n     ")
                    . reverse . sort
                    . map (\cc->compilerPath cc++"\t("++compilerVersion cc++")")
                    ) kcs)
       else if compilerKnown (head target) (config state) then do
               newcomp <- unDyn (matchCompiler (head target) (config state))
               let newopts = ((options state)
                                       \\ extraHiOptions (compiler state))
                                       ++ extraHiOptions newcomp
               makeclean ".o" (modules state)
               makeclean ".hi" (modules state)
               let newstate = state {options=newopts, compiler=newcomp}
               loadAll newstate (toplevel newstate)	-- explicit return
            else do
               putStrLn ("Compiler "++head target++" not known/configured")
               putStrLn ("Current compiler: "++compilerPath (compiler state))
      )
--command "trace"
--    (if null target || head target `notElem` ["on","off"] then do
--         putStr ("Tracing currently: ")
--         putStrLn (if "-T" `elem` options state then "on" else "off")
--     else
--     let newopts =
--           case head target of
--             "on" -> ((options state) \\ extraCompilerFlags (compiler state))
--                                      ++ extraCompilerFlags "nhc98" ++ ["-T"]
--             "off" -> (options state) \\ ["-T"]
--     in do
--          makeclean ".o" (modules state)
--          makeclean ".hi" (modules state)
--          let newstate = state {options=newopts, compiler=Nhc98}
--          loadAll newstate (toplevel newstate))	-- explicit return
  command "version"
      (putStrLn ("hmake version: "++hmakeVersion++"\t("++hmake++")"))
  command "?" (putStrLn help)
  putStrLn ("[Unknown command :"++head ws++"]")
 where
  command :: String -> IO () -> IO ()
  command name action =
    if head ws `isPrefixOf` name then action >> toplevel state else done
  indent = mapM_ (\x-> putStrLn ("  "++x))

-- find file (a generalisation of earlier implementation of 'load')
findF :: (Bool->String -> (a->IO ()) -> IO ())	-- action when file is found
         -> (String -> (a->IO ()) -> IO ())	-- action when .hi is found
         -> State
         -> String				-- module name
         -> (a -> IO ())			-- success continuation
         -> IO ()
findF action hiaction state mod success = do
  normal True ".lhs" (
    normal False ".hs" (
      normal False ".gc" (
        foldr  prelude
              (putStrLn ("[Module "++mod++" not found...]"))
              (includePaths (compiler state)))))
 where
--normal :: Bool -> String -> IO b -> IO b
  normal lit ext continue = let file = mod++ext in do
    exist <- doesFileExist file
    if exist then action lit file success else continue
--prelude :: String -> IO b -> IO b
  prelude pp continue = let hifile = pp++"/"++mod++".hi" in do
    hi <- doesFileExist hifile
    if hi then hiaction hifile success else continue

loadAll :: State -> IO () -> IO ()
loadAll state success = foldr (load state) success (reverse (modules state))

load :: State -> String -> IO () -> IO ()
load state mod success =
  findF (\lit file success->
         do putStr ("[Found module... "++file++"] ")
            compile True file state (putChar '\n')
            success ())
        (\hifile success->
         do putStrLn ("[Std   module... "++hifile++"]")
            success ())
        state mod (\()->success)
loadScope :: State -> String -> (String->IO ()) -> IO ()
loadScope state =
  findF (\lit file success-> let litf = if lit then (unlit file) else id in
         do putStrLn ("[Entering scope of module... "++file++"]")
            compile True file state (do content <- readFile file
                                        success (lexmodule (litf content))))
        (\hifile success->
           putStrLn ("[Cannot enter std module... "++hifile++"]"))
        state

edit :: State -> String -> IO () -> IO ()
edit state mod success =
  findF (\lit file success-> shell ("${EDITOR-vi} " ++ file) >> success ())
        (\hifile success->
           putStrLn ("[Cannot edit system file... "++hifile++"]"))
        state mod (\()->success)


--makeclean ".o"  modules = shell ("hmake -clean -nhc98 "++unwords modules)
--makeclean ".hi" modules = shell ("hmake -realclean -nhc98 "++unwords modules)

makeclean ext modules = mapM_ (clean ext) modules
  where
  clean ext mod = let file = mod++ext in do
    exist <- doesFileExist file
    if exist then do
        putStrLn ("[Removing    ... "++file++"]")
        catch (removeFile file) print
      else done

--fromOpt prefix opt =
--  if prefix `isPrefixOf` opt then Just (drop (length prefix) opt) else Nothing


banner = "\ 
\__   __                 __             _____________________________________\n\ 
\||   ||  ______    ___  || _  ____     hmake interactive (hi):\n\ 
\||___|| || || ||  ___|| ||/  ||__||      Copyright (c) May 2000\n\ 
\||---|| || || || ||__|| ||\\_ ||__        http://www.cs.york.ac.uk/fp/hmake/\n\ 
\||   ||                                Report bugs to: malcolm@cs.york.ac.uk\n\ 
\||   || Version: "++hmakeVersion++"    -------------------------------------"


help = "\ 
\Commands (can be abbreviated to first letter):\n\ 
\  <expr>               evaluate expression\n\ 
\  :type <expr>         show type of expression [nhc98 only]\n\ 
\  :quit                quit\n\ 
\  :Quit                quit\n\ 
\  :load mod [mod...]   load modules (note, not filenames)\n\ 
\  :load                clear all modules\n\ 
\  :also mod [mod...]   load additional modules (note, not filenames)\n\ 
\  :reload              repeat last load command\n\ 
\  :freshen             remove, recompile, and reload all current modules\n\ 
\  :module mod          set module scope for evaluating expressions\n\ 
\  :edit file           edit filename\n\ 
\  :edit                edit current module\n\ 
\  :cd dir              change directory\n\ 
\  :cd                  show current directory\n\ 
\  :dir                 list current directory\n\ 
\  :hc compiler         set Haskell compiler to use\n\ 
\  :hc                  show current compiler and other available compilers\n\ 
\  :set options         set hmake/compiler options\n\ 
\  :unset options       remove hmake/compiler options\n\ 
\  :observe name        debug function 'name' with 'Hood' [coming soon]\n\ 
\  :trace [on|off]      switch on/off debugging with 'Hat' [nhc98 only]\n\ 
\  :!command            shell escape\n\ 
\  :version             show hmake version\n\ 
\  :?                   display this list of commands"
