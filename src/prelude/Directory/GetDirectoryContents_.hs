module Directory (getDirectoryContents) where

import NHC.GreenCard
import PatchIOError


newtype Dir = Dir ForeignObj

foreign import ccall hs_closedir :: ForeignObj -> IO Int

closedir :: Dir -> IO Int
closedir (Dir d) =
  do hs_closedir d



foreign import ccall hs_opendir :: PackedString -> IO (Int,ForeignObj)

opendir :: FilePath -> IO (Int,Dir)
opendir tmp1 =
  do let fp = toCString tmp1
     (err,d) <- hs_opendir fp
     return (err,(Dir d))



foreign import ccall hs_readdir :: ForeignObj -> IO (Int,PackedString)

readdir :: Dir -> IO (Int,FilePath)
readdir (Dir d) =
  do (err,fp) <- hs_readdir d
     return (err,(fromCString fp))



getDirectoryContents :: FilePath -> IO [FilePath]
getDirectoryContents fp = do
  d <- patchIOErrorFVal "getDirectoryContents" fp opendir
  lazyDirContents d

-- Despite the name, I'm not entirely sure that this really is lazy.
lazyDirContents :: Dir -> IO [FilePath]
lazyDirContents d =
  catch (do f  <- patchIOErrorVal "readDir" (readdir d)
            fs <- lazyDirContents d
            return (f:fs))
        (\e-> do -- patchIOError "closeDir" (closedir d)
                 return [])
  

{-------
newtype DirEntry = DirEntry ()
foreign import opendir  :: CString -> IO Addr
foreign import closedir :: Addr -> IO Int
foreign import readdir  :: Dir -> IO Ptr
-}