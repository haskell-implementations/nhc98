{- Program:   runhs [-e] script [args...]
-- Author:    Malcolm Wallace
-- Copyright: 2005
-- Licence:   GPL
-- Description:
     A simple utility to run a Haskell program from source.
     The given script can be either a .hs, .lhs, or with no extension.
     Just put #!/path/to/runhs on the first line.
     This implementation
       * copies the script to /tmp, adding a .hs extension if required, and
         stripping the #! line if required;
       * uses hmake (with your default haskell compiler) to build the program;
       * then runs it with the given arguments.
     If you don't change the script between uses, the executable cached
     in /tmp is not rebuilt.
-}
#if defined(__HBC__) || defined (__NHC__)
import Time (ClockTime)
import Monad (when)
import System (system,getArgs,exitWith,ExitCode(..))
import Directory (doesFileExist,getModificationTime)
#else
import Control.Monad      (when)
import System.Cmd         (system)
import System.Directory   (doesFileExist, getModificationTime)
import System.Environment (getArgs)
import System.Exit        (exitWith, ExitCode(..))
#if __GLASGOW_HASKELL__ >= 604
#define HASCOPYFILE
#endif
#endif
#ifdef HASCOPYFILE
import System.Directory   (copyFile)
#else
copyFile src dst = do shell (unwords ["cp",src,dst]); return ()
#endif

{- original shell script:  (Haskell now departs from this slightly)
  #!/bin/sh	runhs [-e] script [args...]
case $1 in
  -?) shift ;;
  *)  ;;
esac
src=$1
shift
case $src in
  *.hs)  prog=`basename $src .hs`;  tmpsrc=/tmp/`basename $src`    ;;
  *.lhs) prog=`basename $src .lhs`; tmpsrc=/tmp/`basename $src`    ;;
  *)     prog=`basename $src`;      tmpsrc=/tmp/`basename $src`.hs ;;
esac
tmpexe=/tmp/$prog
if [ ! -f $tmpsrc -o $src -nt $tmpsrc ]
then if head -n 1 $src | grep '^#!' >/dev/null
     then tail +2 $src >$tmpsrc
     else cp $src $tmpsrc
     fi
fi
{ hmake $tmpexe >/dev/null 2>&1 ||\
  { echo "$prog: compilation error" && exit 1; } \
} && $tmpexe "$@"
-}

main = do argv <- getArgs
          (src:args) <- case argv of
                          [] -> exitWith ExitSuccess
                          (('-':_):as) -> return as
                          _ -> return argv
          let prog = basename (case reverse src of
                                ('s':'h':'.':f) ->     reverse f
                                ('s':'h':'l':'.':f) -> reverse f
                                _ ->                   src)
              tmpsrc = "/tmp/"++(case reverse src of
                                   ('s':'h':'.':f) ->     basename src
                                   ('s':'h':'l':'.':f) -> basename src
                                   _ ->                   basename src++".hs")
              tmpexe = "/tmp/"++prog
          exists <- doesFileExist tmpsrc
          copy <- if exists then do t0 <- getModificationTime src
                                    t1 <- getModificationTime tmpsrc
                                    return (t0>t1)
                            else return True
          when copy
               (do txt <- readFile src
                   case txt of
                     ('#':'!':_) ->
                          do shell ("{ echo; tail +2 "++src++"; } >"++tmpsrc)
                             return ()
                     _ -> copyFile src tmpsrc)
          -- now compile and run it
          e <- shell ("hmake "++tmpexe++">/dev/null")
          ifErr e (\c-> do putStrLn ("runhs: error in "++prog);
                           exitWith c)
          err <- shell (tmpexe++" "++unwords args)
          exitWith err


-- | Strip directory and suffix from filenames (analogous to the shell
--   command of the same name).
basename :: String -> String
basename = reverse .            takeWhile (not.(`elem`"\\/")) . reverse

-- | Strip non-directory suffix from file name (analogous to the shell
--   command of the same name).
dirname :: String -> String
dirname  = reverse . safetail . dropWhile (not.(`elem`"\\/")) . reverse
  where safetail [] = []
        safetail (_:x) = x

shell :: String -> IO ExitCode
shell = system	-- only on Unix

ifErr :: ExitCode -> (ExitCode->IO ()) -> IO ()
ifErr code@(ExitFailure _) err = err code
ifErr _ _ = return ()

