module Depend(depend) where

import qualified Data.Map as Map
import Flags (FileFlags, Flags,sDepend,sPrelude,sSourceFile,sUnix)
import Id
import IntState
import Util.Extra
import Util.OsOnly
import TokenId

-- Only the beginning, can probably do mych better

depend :: Flags -> FileFlags -> IntState -> Map.Map a (Either b [Id]) -> IO ()
depend flags fileflags state rt =
  if sDepend flags then
    let
      isUnix = sUnix flags
      sourcefile = sSourceFile fileflags
      (rootdir,filename) = fixRootDir isUnix sourcefile
    in writeFile (fixDependFile isUnix rootdir filename)
                 ((unlines
                  . filter (not . null)
                  . map (strTId (sPrelude flags) state . head . dropRight . snd)
                  . Map.toList) rt)
  else
    return ()


strTId prelude state i =
  case lookupIS state i of
    Nothing -> ""
    Just info ->
      let tid = tidI info
      in
        if (prelude || notPrelude tid) then
          case tidI info of
            TupleId 0 -> "()"
            TupleId n -> '(':take (n-1) (repeat ',') ++ ")"
            tid -> show tid
        else
          ""

