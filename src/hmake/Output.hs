-----------------------------------------------------------------------------
-- |
-- Module      :  Output
-- Copyright   :  Thomas Hallgren and Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Constructs the commands for each steps in building (compile, link,
-- & clean).  Each are parameterized by echo :: Bool which indicates
-- whether or not to echo the command to the terminal.
-----------------------------------------------------------------------------

module Output(qCompile,qLink,qCleano,qCleanhi) where

import ListUtil -- (lconcatMap)
import FileName
import List (intersperse)
import Argv
import PreProcessor
import Config
import RunAndReadStdout (basename)

type Graph t t1 t2 t3 = [(String, ((t, String, t1, t2, t3), [String]))]

-- | Given a boolean to indicate whether or not to echo this command to
--   the terminal, construct the command.
doEcho :: Bool -- ^ echo the command before executing it?
       -> String -> String
doEcho True cmd = "echo \"" ++ cmd ++ "\"\n" ++ cmd ++ "\n"
doEcho False cmd = cmd ++ "\n"

oFile,hiFile,hatFile :: DecodedArgs -> String -> String -> String
oFile opts path fmodule =
    let tmod = if hat opts then ("Hat/"++) else id
    in fixFile opts (maybe path id (goalDir opts)) (tmod fmodule) (oSuffix opts)
hiFile opts path fmodule =
       fixFile opts (maybe path id (hiDir opts)) fmodule (hiSuffix opts)
--iFile opts path fmodule =
--       fixFile opts path fmodule ("pp.hs")
hatFile opts path fmodule  =
       fixFile opts path ("Hat/"++fmodule) ("hs")
hatHiFile opts path fmodule  =
       fixFile opts path ("Hat/"++fmodule) (hiSuffix opts)
hxFile opts path fmodule  =
       fixFile opts path fmodule ("hx")

cleanModuleName (Program file)    = file
cleanModuleName (Object file suf) = file

-- | Construct a command for the /clean/ step (rm -f .o files)
qCleano :: DecodedArgs
        -> Bool
        -> Graph a b c d
        -> Goal
        -> String
qCleano  opts echo graph mod =
  let allfiles = close graph [] [cleanModuleName mod]
  in doEcho echo ("rm -f" ++
         concatMap (\(d,f)-> ' ': oFile opts d f) allfiles)

-- | Construct a command for the /realclean/ step (rm -f hi, hat, and hx files)
qCleanhi :: DecodedArgs -- ^ /opts/
         -> Bool        -- ^ Should we echo this command as we run it?
         -> Graph a b c d
         -> Goal        -- ^ /mod/
         -> String
qCleanhi opts echo graph mod =
  let allfiles = close graph [] [cleanModuleName mod]
  in if hat opts then
         doEcho echo ("rm -f" ++
             concatMap (\(d,f)-> ' ': hatHiFile opts d f) allfiles) ++
         doEcho echo ("rm -f" ++
             concatMap (\(d,f)-> ' ': hatFile opts d f) allfiles) ++
         doEcho echo ("rm -f" ++
             concatMap (\(d,f)-> ' ': hxFile opts d f) allfiles)
     else
         doEcho echo ("rm -f" ++
             concatMap (\(d,f)-> ' ': hiFile opts d f) allfiles)

-- | Construct the command for the /compile/ commands, depends upon
--   which compiler we're using, whether we're using hat, etc.
qCompile :: DecodedArgs
         -> Bool
         -> ([(String, String)],
             (String, String, String, Bool, PreProcessor))
         -> String
qCompile opts echo (dep,(p,m,srcfile,cpp,pp)) =
  test dep (preprocess++hattrans++compilecmd)
 where
  -- srcfile -(preprocess)-> pfile -(hattrans)-> hfile -(compile)-> ofile
  ofile = oFile opts p m
  pfile
    | null (ppExecutableName pp) = srcfile
    | otherwise = fixFile opts p m "hs"
  hfile
    | hat opts  = hatFile opts p m
    | otherwise = pfile
  preprocess
    | null (ppExecutableName pp) = ""
    | otherwise = doEcho echo $
                  ppExecutableName pp++" "
                    ++concat (intersperse " " (ppDefaultOptions pp opts
                                               ++[ppOutputFileOption pp pfile]
                                               ++[srcfile]))
  hattrans
    | hat opts && cpp =
            doEcho echo ("gcc -E -traditional -x c "++pfile
                        ++concatMap doD (defs opts ++ zdefs opts)
                        ++" -o /tmp/"++basename pfile)
            ++ doEcho echo ("hat-trans $HATFLAGS -P. /tmp/"++basename pfile
				++" "++pfile)
            ++ doEcho echo ("rm /tmp/"++basename pfile)
         -- ++ doEcho echo ("mv "++hatFile opts "/tmp" m++" "++hfile)
         -- ++ doEcho echo ("mv "++hxFile opts "/tmp" m++" "++hxFile opts p m)
    | hat opts && not cpp = doEcho echo $
                            "hat-trans $HATFLAGS "++pfile
    | otherwise = ""
  compilecmd = doEcho echo $
    hc ++ "-c " ++ cppcmd
    ++ (if hat opts then "-package hat " else " ")
    ++ (if (dflag opts) then "-d "++maybe "." id (goalDir opts)++" "
                        else "-o "++ofile++" ")
    ++ hfile

  hc | isUnix opts = compilerPath (compiler opts)
                     ++" "++unwords (extraCompilerFlags (compiler opts))
                     ++" ${HFLAGS} "
     | otherwise   = compilerPath (compiler opts)
                     ++" "++unwords (extraCompilerFlags (compiler opts))
  cppcmd = if cpp then "-cpp"++concatMap doD (defs opts)++" " else ""
  doD s = " -D"++s

  test []  comp = comp
  test dep comp
    | isUnix opts = "if [ `$OLDER " ++ ofile
                    ++ lconcatMap (\(d,p) -> ' ':hiFile opts p d) dep
                    ++"` = 1 ]\nthen\n"
                    ++ comp
                    ++ "\nfi\n"
    | otherwise = "older " ++ ofile
                           ++ lconcatMap (\(d,p) -> ' ':hiFile opts p d) dep
                   ++ "\nset Nhc$ReturnCode <Sys$ReturnCode>\n"
                   ++ "IF <Nhc$ReturnCode> THEN " ++ comp


-- | Construct the command for the /link/ step in building.
qLink :: DecodedArgs
      -> Bool
      -> Graph a b c d
      -> Goal
      -> String
qLink opts echo graph (Object  file suf) = ""
qLink opts echo graph (Program file)     =
  cmd
 where
  goal = maybe "" id (goalDir opts)
  tmod = if hat opts then ("Hat/"++) else id
  mkOfile path f = if (dflag opts) then
                        fixFile opts ""   (tmod f) (oSuffix opts)
                   else fixFile opts path (tmod f) (oSuffix opts)
  objfiles = close graph [] [file]
  hatflag = if hat opts then "-package hat " else ""
  hc | isUnix opts = compilerPath (compiler opts)++" ${HFLAGS} "
     | otherwise   = compilerPath (compiler opts)
  cmd | isUnix opts =
	  let objs =  lconcatMap (\(d,f) -> ' ':mkOfile d f) objfiles in
          if null goal then
	    let objs =  lconcatMap (\(d,f) -> ' ':mkOfile d f) objfiles in
	    "if [ `$OLDER "++file++" "++objs++"` = 1 ]\nthen\n"
	     ++ doEcho echo (hc++hatflag++" -o "++file++objs++" ${LDFLAGS}")
	     ++ "fi\n"
          else
	    let objs = lconcatMap (\(d,f) -> ' ':
                                      fixFile opts "" (tmod f) (oSuffix opts))
                                  objfiles in
	    "if ( cd "++goal++" && [ `$OLDER "
             ++     file ++ " "++objs++"` = 1 ] )\nthen\n"
	     ++ doEcho echo ("cd "++goal++" && "++hc++hatflag++" -o "
                             ++file++objs++" ${LDFLAGS}")
	     ++ "fi\n"
      | otherwise =
          if length objfiles > 3 then
             "exfile <Wimp$ScrapDir>.nhcmk_via STOP\n"
              ++ lconcatMap (\(d,f) ->
                             ' ': fixFile opts (if null d then goal else d)
                                          f (oSuffix opts)
                                ++ "\n")
                             objfiles
              ++ "STOP\n"
              ++ "nhc98 " ++ " -o " ++ file
              ++ " -via <Wimp$ScrapDir>.nhcmk_via\n"
          else
             "nhc98 " ++ " -o " ++ file
              ++ lconcatMap (\(d,f) ->
                             ' ': fixFile opts (if null d then goal else d)
                                          f (oSuffix opts))
                            objfiles
              ++ "\n"



-- Could be more polymorphic
-- close :: forall b a t3 t2 t1 t.
--          (Eq b) =>
--          [(b, ((t, a, t1, t2, t3), [b]))] -> [(a, b)] -> [b] -> [(a, b)]
close :: Graph a b c d
      -> [(String, String)]
      -> [String]
      -> [(String, String)]
close graph acc []      = acc
close graph acc (f:fs)  =
    if any ((f==).snd) acc then
      close graph acc fs
    else
      case assocDef graph (error "Use?") f of
        ((tps,d,s,_,_),new) -> 
          close graph ((d,f):acc) (fs ++ new)


