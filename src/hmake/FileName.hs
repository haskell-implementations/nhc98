-----------------------------------------------------------------------------
-- |
-- Module      :  FileName
-- Copyright   :  Niklas Röjemo
-- 
-- Maintainer  :  Malcolm Wallace <Malcolm.Wallace@cs.york.ac.uk>
-- Stability   :  Stable
-- Portability :  All
-- 
-- Fix up filenames for Unix/RiscOS differences.
-----------------------------------------------------------------------------

module FileName (fixFileName, fixFile) where

import Argv

fixFileName = id

-- | The command-line option -nounix is used to determine whether to
--   format a file pathname for RiscOS or unix.
fixFile :: DecodedArgs
        -> String -- ^ directory path
        -> String -- ^ filename
        -> String -- ^ extension (suffix)
        -> String
fixFile opts p file suf =
  if isUnix opts
  then (case (p,last p) of
          ("",_)  -> ""
          (_,'/') -> p
          (_,_)   -> p++"/") ++ toPath file ++ '.':suf
  else p ++ suf ++ '.':file

toPath = map (\c-> if (c=='.') then '/' else c)
