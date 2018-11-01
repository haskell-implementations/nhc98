module Directory (setPermissions) where

import NHC.GreenCard
import PatchIOError
import DPermissions


foreign import ccall hs_setperms :: Bool -> Bool -> Bool -> Bool -> PackedString -> IO Int

setperms :: Permissions -> FilePath -> IO Int
setperms tmp1 tmp2 =
  do let (r,w,x,s) = fromPerm tmp1
     let fp = toCString tmp2
     hs_setperms r w x s fp



setPermissions :: FilePath -> Permissions -> IO ()
setPermissions fp ps = patchIOErrorF "setPermissions" fp (setperms ps)
