-----------------------------------------------------------------------------
-- |
-- Module      :  Main
-- Copyright   :  Thomas Hallgren
--
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
--
-- Main program for 'Older', a helper utility to calculate the dynamic
-- part of the dependencies when rebuilding a project.  (If module A has
-- a static dependency on module B, and module B is re-built, then module
-- A should only be rebuilt if B's interface has changed.)
-----------------------------------------------------------------------------
module Main(main) where

import System
import Time
#ifdef __HBC__
import FileStat
#endif
#if defined(__NHC__) || defined(__GLASGOW_HASKELL__)
import Directory (getModificationTime, doesFileExist)
#endif

data When = Never | At ClockTime

main = getArgs >>= \ args ->
       case args of
             [] -> error "Usage: older file.o file1.t ... filen.t"
             fs -> filemodtime [] fs >>= \ (tobj : ts) ->
                   putStr (if or (map (isOlder tobj) ts) then "1\n" else "0\n")


filemodtime acc []     = return (reverse acc)
filemodtime acc (f:fs) =
   readTime f >>= (\t-> filemodtime (t:acc) fs)


--mtime = itos 0 . head . drop (10::Int) . words
-- where
--   itos a (x:xs) | isDigit x = itos (a*10+ord x - ord '0') xs
--   itos a _ = a

#ifdef __HBC__
readTime f = catch (getFileStat f >>= \sf -> return (At (st_mtime sf)))
                   (\_ -> return Never)
#endif
#if defined(__NHC__) || defined(__GLASGOW_HASKELL__)
readTime f =
    doesFileExist f >>= \so->
    if so then
        getModificationTime f >>= \mt -> return (At mt)
    else return Never
#endif


-- mtime (dev,inode,mode,uid,size,atime,time) = time
-- readTime f ok = statFile f (\_ -> ok Never) (\sf -> ok (At (mtime sf)))

isOlder Never _ = True
isOlder _ Never = False
isOlder (At t1) (At t2) = t1 < t2
