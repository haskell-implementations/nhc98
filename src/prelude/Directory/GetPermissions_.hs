module Directory (getPermissions) where

import NHC.GreenCard
import PatchIOError
import DPermissions



foreign import ccall hs_getperms :: PackedString -> IO (Int,(Bool,Bool,Bool,Bool))

getperms :: FilePath -> IO (Int,Permissions)
getperms tmp1 =
  do let fp = toCString tmp1
     (err,(r,w,x,s)) <- hs_getperms fp
     return (err,(toPerm (r,w,x,s)))



getPermissions :: FilePath -> IO Permissions
getPermissions fp = patchIOErrorFVal "getPermissions" fp getperms
