-----------------------------------------------------------------------------
-- |
-- Module      :  GetDep
-- Copyright   :  Thomas Hallgren and Malcolm Wallace
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Get the module dependencies, including the ability to output to a
-- Makefile.
-----------------------------------------------------------------------------

module GetDep(showdep,showdebug,showmake,dependency,When,FileInfo) where

import Getmodtime(When(..))
import Imports(getImports)
import FileName
import Unlit(unlit)
import Argv
import PreProcessor
import Config

#if defined(__HBC__)
import FileStat
#endif
#if defined(__HASKELL98__)
import Directory
#endif
import IO
import Time
import List (intersperse)

#if !defined(__HASKELL98__)
#define ioError fail
#endif

showdebug (f,(((tpp,ths,thi,tobj),p,s,cpp,pp),i)) =
    show f ++ "\n  cpp= "    ++ show cpp
           ++ "\n  ppTime= " ++ show tpp
           ++ "\n  hsTime= " ++ show ths
           ++ "\n  hiTime= " ++ show thi
           ++ "\n  oTime=  " ++ show tobj
           ++ "\n  p= " ++ show p
           ++ "\n  srcfile= " ++ show s
           ++ "\n  imports= " ++ show i
           ++ "\n  preproc= " ++ show (ppExecutableName pp) ++ "\n"

showdep (f,(((tpp,ths,thi,tobj),p,s,cpp,pp),i)) =
  f ++ ": " ++ mix i ++ "\n"
  where mix = foldr (\a b-> a++' ':b) ""

-- showmake opts goaldir (f,(((ths,thi,tobj),p,s,cpp),i)) =
--   dotO f ++ ": " ++ s ++ " " ++ mix i
--   where mix = foldr (\a b-> dotO a ++ ' ':b) "\n"
--         dotO f = fixFile opts goaldir f (oSuffix opts)

showmake opts goaldir ((f,p,s,cpp),i) =
  dotO p f ++ ": " ++ s ++ " " ++ mix i
  where mix = foldr (\(a,p) b-> dotO p a ++ ' ':b)
                    (if cpp then "# -cpp\n" else "\n")
        tmod = if hat opts then ("Hat/"++) else id
        dotO p f = fixFile opts (if null goaldir then p else goaldir)
                                (tmod f) (oSuffix opts)

-- | Information about a single file, including its location, whether
--   it needs a preprocessor, etc.
--
-- * file timestamps
--
-- * directory path to file
--
-- * source file name, inc path
--
-- * cpp required?
--
-- * applicable preprocessor
type FileInfo = ( (When,When,When,When)	-- ^ file timestamps
                , FilePath		-- ^ directory path to file
                , FilePath		-- ^ source file name, inc path
                , Bool			-- ^ cpp required?
                , PreProcessor)		-- ^ applicable preprocessor

-- | Given a list of targets, determine all import dependencies by reading
--   the source modules, and checking timestamps etc.
dependency :: DecodedArgs
              -> [( String		-- module name
                  , ( FileInfo		-- timestamps, filepaths, cpp, etc
                    , [String]		-- imports
                    )
                  )]	-- ^ accumulator: (module name, FileInfo, imports)
              -> [(String,FilePath)]	-- ^(module, imported by which file?)
              -> IO [( String		-- module name
                     , ( FileInfo	-- timestamps, filepaths, cpp, etc
                       , [String]	-- imports
                       )
                     )] -- ^ (module name, FileInfo, imports)
dependency opts done [] = return done
dependency opts done ((f,demand):fs) =
  if f `elem` (ignoreHi opts) || f `elem` (map fst done)
   then dependency opts done fs
   else readFirst opts f demand >>= \res ->
         case res of 
           Nothing -> dependency opts done fs	-- a Prelude/StdLib file
           Just (times,path,source,preproc,plainfile,unlitfile) ->
               let
                   cpp = hash ('\n':plainfile)
                   hash ('\n':'#':_) = True
                   hash (_:xs)       = hash xs
                   hash  []          = False
                   i = filter (`notElem` (ignoreHi opts))
                              (getImports source (zdefs opts ++ defs opts)
                                          (pathSrc opts) unlitfile)
                   moredone = (f,((times,path,source,cpp,preproc),i)):done
                   needed = map (\x->(x,source)) i
               in
{- Originally, the next line was #ifdef sun, but apparently FreeBSD doesn't
   like too many open files either. -}
                  cpp `seq`	-- force read and discard of plainfile
                  dependency opts moredone (needed ++ fs)


-- | Attempt to read the given file from some location within the search path.
--   Determine if it needs any preprocessing, read the timestamps, etc.
--   Basically populates a FileInfo type.
readFirst :: DecodedArgs -> String -> String
             -> IO (Maybe ( (When,When,When,When)	-- file timestamps
                          , FilePath		-- directory path to file
                          , FilePath		-- source file name, inc path
                          , PreProcessor	-- applicable pre-processor
                          , String		-- plain file contents
                          , String		-- unliterated file contents
                          ))
-- ^ (timestamps, path to file, source file name, pp, plain file
--    contents, unliterated file contents)

readFirst opts name demand =
  watch ("readFirst " ++ show (pathSrc opts) ++
              "\n   " ++ show (pathPrel opts)) >>
  rN ("":pathSrc opts)
 where
  ff = fixFileName name
  watch = debug opts

#if defined(__HBC__) && !defined(__HASKELL98__)
  -- this code is obsolete
  -- various changes to hmake have not been tracked here
  rN [] = rP (pathPrel opts) 
  rN (p:ps) =
    let source = fixFile opts p ff "gc"
    in watch ("Trying (N)" ++ source) >>
       catch
         (readFile source >>= \file-> readData p source file ppNone)
         (\_-> let source = fixFile opts p ff "hs"
               in watch ("Trying (N)" ++ source) >>
                  catch
                    (readFile source >>= \file -> readData p source file ppNone)
                    (\_ -> let source = fixFile opts p ff "lhs"
	                   in watch ("Trying (N)" ++ source) >>
                              catch (readFile source >>= \file ->
                                     readData p source (unlit name file) ppNone)
                                    (\_ -> rN ps)))

  rP [] = error ("Can't find module "++name++" in user directories\n\t"++
                 concat (intersperse "\n\t" (".":pathSrc opts))++
                 "\n  Or in installed libraries/packages at\n\t"++
                 concat (intersperse "\n\t" (pathPrel opts))++
                 "\n  Asked for by: "++demand++
                 "\n  Fix using the -I, -P, or -package flags.\n")
  rP (p:ps) =
     let source = fixFile opts p ff (hiSuffix opts)
     in watch ("Trying (P)" ++ source) >>
        catch (readFile source >>= \file -> return Nothing)
              (\_ -> rP ps)
#else
  rN [] = rP (pathPrel opts) 
  rN (p:ps) = try PreProcessor.knownSuffixes
    where try  []  = rN ps
          try ((suf,lit,pp):xs) = do
            let src = fixFile opts p ff suf
            watch ("Trying (N)" ++ src)
            if ppSuitable pp (compilerStyle (compiler opts))
              then do
                ok <- doesFileExist src
                if ok
                  then do
                    watch ("Got (N)" ++ src)
                    readData p src pp (lit name)
                  else try xs
              else try xs

  rP [] = error ("Can't find module "++name++" in user directories\n\t"++
                 concat (intersperse "\n\t" (".":pathSrc opts))++
                 "\n  Or in installed libraries/packages at\n\t"++
                 concat (intersperse "\n\t" (pathPrel opts))++
                 "\n  Asked for by: "++demand++
                 "\n  Fix using the -I, -P, or -package flags.\n")
  rP (p:ps) = do
     let hinterface = fixFile opts p ff (hiSuffix opts)
     watch ("Trying (P)" ++ hinterface)
     ok <- doesFileExist hinterface
     if ok then do
         watch ("Got (P)" ++ hinterface)
         return Nothing
       else rP ps

#endif

  readData :: FilePath -> FilePath -> PreProcessor -> (String->String)
              -> IO (Maybe ( (When,When,When,When)	-- file timestamps
                           , FilePath		-- directory path to file
                           , FilePath		-- source file name, inc path
                           , PreProcessor	-- applicable pre-processor
                           , String		-- plain file contents
                           , String		-- unliterated file contents
                           ))
  readData path source pp lit = do
     tpp  <- readTime source	-- in many cases, identical to `ths' below
     ths  <- readTime (fixFile opts path  (tmod ff) "hs")
     thi  <- readTime (fixFile opts ipath (tmod ff) (hiSuffix opts))
     tobj <- readTime (fixFile opts opath (tmod ff) (oSuffix  opts))
     file <- readFile source
     return (Just ((tpp,ths,thi,tobj),path,source,pp,file,lit file))
   where opath = maybe path id (goalDir opts)
         ipath = maybe path id (hiDir opts)
         tmod = if hat opts then ("Hat/"++) else id


-- | Get the modification time of this file
readTime :: FilePath -> IO When
#ifdef __HBC__
readTime f = catch (getFileStat f >>= \sf->
                    return (At ((st_mtime sf)::ClockTime)))
                   (\_ -> return Never)
#endif
#if defined(__NHC__) || defined (__GLASGOW_HASKELL__)
readTime f = --hPutStr stderr ("readTime "++f++"\n") >>
             doesFileExist f >>= \so->
             if so then getModificationTime f >>= \mt -> return (At mt)
             else return Never
#endif

